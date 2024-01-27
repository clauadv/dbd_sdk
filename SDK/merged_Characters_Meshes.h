
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: AnimationBudgetAllocator
/// dependency: AnimationUtilities
/// dependency: AnimGraphRuntime
/// dependency: Archives
/// dependency: Audio
/// dependency: Blueprints
/// dependency: CoreUObject
/// dependency: Customization
/// dependency: DBDAnalytics
/// dependency: DBDAnimation
/// dependency: DBDAnimationBudgetAllocator
/// dependency: DBDAttack
/// dependency: DBDGameplay
/// dependency: DBDInteraction
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Effects
/// dependency: Engine
/// dependency: GFXUtilities
/// dependency: Niagara
/// dependency: SignificanceUtilities
/// dependency: TheK26
/// dependency: TheK28
/// dependency: TheK31
/// dependency: TheOni
/// dependency: TheOnryo
/// dependency: TheSpirit

/// Enum /Game/Characters/Campers/Common/Enum_CamperMenuAnimationState.Enum_CamperMenuAnimationState
/// Size: 0x06
enum class Enum_CamperMenuAnimationState : uint8_t
{
	Enum_CamperMenuAnimationState__NewEnumerator5                                    = 0,
	Enum_CamperMenuAnimationState__NewEnumerator0                                    = 1,
	Enum_CamperMenuAnimationState__NewEnumerator2                                    = 2,
	Enum_CamperMenuAnimationState__NewEnumerator3                                    = 3,
	Enum_CamperMenuAnimationState__NewEnumerator4                                    = 4,
	Enum_CamperMenuAnimationState__Enum_MAX                                          = 5
};

/// Enum /Game/Characters/Slashers/Animations/MenuAnimationSync/Enum_MenuAnimationState.Enum_MenuAnimationState
/// Size: 0x08
enum class Enum_MenuAnimationState : uint8_t
{
	Enum_MenuAnimationState__NewEnumerator6                                          = 0,
	Enum_MenuAnimationState__NewEnumerator1                                          = 1,
	Enum_MenuAnimationState__NewEnumerator5                                          = 2,
	Enum_MenuAnimationState__NewEnumerator0                                          = 3,
	Enum_MenuAnimationState__NewEnumerator2                                          = 4,
	Enum_MenuAnimationState__NewEnumerator3                                          = 5,
	Enum_MenuAnimationState__NewEnumerator4                                          = 6,
	Enum_MenuAnimationState__Enum_MAX                                                = 7
};

/// Enum /Game/Meshes/Charms/Blueprints/Survivor_Chains/enum_charmsJointChains.Enum_CharmsJointChains
/// Size: 0x04
enum class Enum_CharmsJointChains : uint8_t
{
	Enum_CharmsJointChains__NewEnumerator0                                           = 0,
	Enum_CharmsJointChains__NewEnumerator1                                           = 1,
	Enum_CharmsJointChains__NewEnumerator2                                           = 2,
	Enum_CharmsJointChains__Enum_MAX                                                 = 3
};

/// Enum /Game/Meshes/Charms/Blueprints/Survivor_Chains/enum_charmsJointAttachment.Enum_CharmsJointAttachment
/// Size: 0x04
enum class Enum_CharmsJointAttachment : uint8_t
{
	Enum_CharmsJointAttachment__NewEnumerator0                                       = 0,
	Enum_CharmsJointAttachment__NewEnumerator1                                       = 1,
	Enum_CharmsJointAttachment__NewEnumerator2                                       = 2,
	Enum_CharmsJointAttachment__Enum_MAX                                             = 3
};

/// Struct /Game/Characters/Campers/Common/Aset_Camper_Menu.Aset_Camper_Menu
/// Size: 0x0058 (0x000000 - 0x000058)
struct FAset_Camper_Menu
{ 
	int32_t                                            IdleInterruptQuantity_35_3BE7C7644CFA1ADF9841D5BE4D3A7FED;  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UAnimSequence*                               StartIdle_38_63B094F54B84DD4138ED97B63A87B394;              // 0x0008   (0x0008)  
	class UAnimSequence*                               MenuIdle_18_FFD6BA49453CFEA6D8A893B6109C431F;               // 0x0010   (0x0008)  
	class UAnimSequence*                               MenuIdleWithItem_48_C5D4193A40F4174BB499D9AA87161F98;       // 0x0018   (0x0008)  
	class UAnimSequence*                               MenuIdleInterrupt01_19_31F0358C4D2070DFC9142F820362D54F;    // 0x0020   (0x0008)  
	class UAnimSequence*                               MenuIdleInterrupt02_22_0519AE00431F80436F2653995DB3AF63;    // 0x0028   (0x0008)  
	class UAnimSequence*                               MenuIdleInterrupt03_31_C1F95CFA4C45F6264D96208B339E40A2;    // 0x0030   (0x0008)  
	class UAnimSequence*                               ItemFullRightArmLayer_40_C8A98D004AFAB046DEA1529B43BB53F8;  // 0x0038   (0x0008)  
	class UAnimSequence*                               ItemHandAimLayer_41_5BC791FF46DC296AA28C3CAE26F2591B;       // 0x0040   (0x0008)  
	class UAnimSequence*                               ItemHandFirecrackerLayer_43_67B3794F40861E74DF343AAA0E9023B2; // 0x0048   (0x0008)  
	class UAnimSequence*                               ItemHandSmallLayer_45_E57895C84C653CEB90EEE99CA4AA95CD;     // 0x0050   (0x0008)  
};

/// Class /Game/Characters/Campers/Dwight/Blueprint/AB_Menu_Dwight.AB_Menu_Dwight_C
/// Size: 0x0140 (0x0002C0 - 0x000400)
class UAB_Menu_Dwight_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0300   (0x00A8)  
	FAset_Camper_Menu                                  MenuAnimSet;                                                // 0x03A8   (0x0058)  


	/// Functions
	// Function /Game/Characters/Campers/Dwight/Blueprint/AB_Menu_Dwight.AB_Menu_Dwight_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Dwight/Blueprint/AB_Menu_Dwight.AB_Menu_Dwight_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Dwight/Blueprint/AB_Menu_Dwight.AB_Menu_Dwight_C.ExecuteUbergraph_AB_Menu_Dwight
	// void ExecuteUbergraph_AB_Menu_Dwight(int32_t EntryPoint);                                                             // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Interfaces/BPI_AB_Camper_SubGraph_Menu.BPI_AB_Camper_SubGraph_Menu_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_AB_Camper_SubGraph_Menu_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Interfaces/BPI_AB_Camper_SubGraph_Menu.BPI_AB_Camper_SubGraph_Menu_C.NoInterruptsIfSameCharacter
	// void NoInterruptsIfSameCharacter(bool NoInterrupts);                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Interfaces/BPI_AB_Camper_SubGraph_Menu.BPI_AB_Camper_SubGraph_Menu_C.SetMenuAnimationFromMainAB
	// void SetMenuAnimationFromMainAB(FAset_Camper_Menu MenuAnimSet);                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C
/// Size: 0x1231 (0x0002C0 - 0x0014F1)
class UAB_Survivor_Subgraph_Menu_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0300   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0328   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0350   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x0378   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x03A0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult4;                            // 0x03C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult5;                            // 0x03F0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult6;                            // 0x0418   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult7;                            // 0x0440   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult8;                            // 0x0468   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult9;                            // 0x0490   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult10;                           // 0x04B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult11;                           // 0x04E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult12;                           // 0x0508   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult13;                           // 0x0530   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0558   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x05D8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer14;                             // 0x0610   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult15;                                // 0x0690   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer16;                             // 0x06C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult17;                                // 0x0748   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult18;                           // 0x0780   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult19;                           // 0x07A8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult20;                           // 0x07D0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x07F8   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult21;                                // 0x0828   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose22;                              // 0x0860   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult23;                                // 0x0890   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer24;                             // 0x08C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult25;                                // 0x0948   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0980   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult26;                                // 0x0A30   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer27;                             // 0x0A68   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult28;                                // 0x0AE8   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine29;                               // 0x0B20   (0x00B0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer30;                             // 0x0BD0   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x0C50   (0x00C0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0D10   (0x0158)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer31;                             // 0x0E68   (0x0080)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose32;                             // 0x0EE8   (0x0158)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend33;                           // 0x1040   (0x00C0)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult34;                           // 0x1100   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult35;                           // 0x1128   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult36;                           // 0x1150   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer37;                             // 0x1178   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult38;                                // 0x11F8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer39;                             // 0x1230   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult40;                                // 0x12B0   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer41;                             // 0x12E8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult42;                                // 0x1368   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine43;                               // 0x13A0   (0x00B0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose44;                              // 0x1450   (0x0030)  
	EItemHandPosition                                  HandPosition;                                               // 0x1480   (0x0001)  
	bool                                               RoleSelected;                                               // 0x1481   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x1482   (0x0006)  MISSED
	class UAnimSequence*                               ItemHandSmallLayer;                                         // 0x1488   (0x0008)  
	class UAnimSequence*                               ItemHandFirecrackerLayer;                                   // 0x1490   (0x0008)  
	class UAnimSequence*                               ItemHandAimLayer;                                           // 0x1498   (0x0008)  
	class UAnimSequence*                               ItemFullRightArmLayer;                                      // 0x14A0   (0x0008)  
	class UAnimSequence*                               MenuInterrupt_03;                                           // 0x14A8   (0x0008)  
	class UAnimSequence*                               MenuInterrupt_02;                                           // 0x14B0   (0x0008)  
	class UAnimSequence*                               MenuInterrupt_01;                                           // 0x14B8   (0x0008)  
	class UAnimSequence*                               MenuIdle;                                                   // 0x14C0   (0x0008)  
	class UAnimSequence*                               StartIdle;                                                  // 0x14C8   (0x0008)  
	bool                                               DebugPassToNextAnimation;                                   // 0x14D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x14D1   (0x0003)  MISSED
	int32_t                                            RandomInterrupt;                                            // 0x14D4   (0x0004)  
	class ABP_Menu_Base_Camper_C*                      BP_Menu_Base_Camper;                                        // 0x14D8   (0x0008)  
	int32_t                                            MaxIdleInterrupt;                                           // 0x14E0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x14E4   (0x0004)  MISSED
	class UAnimSequence*                               MenuIdleWithItem;                                           // 0x14E8   (0x0008)  
	bool                                               DontInterruptsIfSameCharacterInLobby;                       // 0x14F0   (0x0001)  


	/// Functions
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.ValidationForInterrupts
	// void ValidationForInterrupts(bool& CanPlayInterrupt);                                                                 // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_9970088E4C3C16B3EF740BBB5E47984C
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_9970088E4C3C16B3EF740BBB5E47984C(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_F122598A4F9D1B011D1292A21F7B2570
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_F122598A4F9D1B011D1292A21F7B2570(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_D631873242E9BA4894F42D8A6DE57856
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_D631873242E9BA4894F42D8A6DE57856(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_929FD4D64CE4C1FB23C95EAC2CE28466
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_929FD4D64CE4C1FB23C95EAC2CE28466(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_D0809FA24DDDBCE57480B48E02687B56
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_D0809FA24DDDBCE57480B48E02687B56(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_62FBA6FA40D956801D6086B3678EB300
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_62FBA6FA40D956801D6086B3678EB300(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_8365519248439F8DE8823E912B9141F3
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_8365519248439F8DE8823E912B9141F3(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_9959C8A14951F994497B23952F91A698
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_9959C8A14951F994497B23952F91A698(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_B2F4E5834CB5C1FE277202B944B08500
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_B2F4E5834CB5C1FE277202B944B08500(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_3AF2AA01450E0841069B67BB41D7E3E2
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_3AF2AA01450E0841069B67BB41D7E3E2(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_C2986FD641D24D0FA3FBBF836793044E
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_C2986FD641D24D0FA3FBBF836793044E(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_7F5CEE0941539403E81BDAB7B1729FEE
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_7F5CEE0941539403E81BDAB7B1729FEE(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_7556CA2A4F3EE0B0BA6BE9859FA3B1E7
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_7556CA2A4F3EE0B0BA6BE9859FA3B1E7(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_B03BDF754723D25A84B2D58617EBD460
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_B03BDF754723D25A84B2D58617EBD460(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_CA04D8104F686BF3EC329499FF32CC69
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Survivor_Subgraph_Menu_AnimGraphNode_TransitionResult_CA04D8104F686BF3EC329499FF32CC69(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.OnDataDrivenCVarDelegate_Event
	// void OnDataDrivenCVarDelegate_Event(FString CVarName);                                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.OnMenuAnimationStateChange
	// void OnMenuAnimationStateChange(TEnumAsByte<Enum_CamperMenuAnimationState> State);                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.SetMenuAnimationFromMainAB
	// void SetMenuAnimationFromMainAB(FAset_Camper_Menu MenuAnimSet);                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.NoInterruptsIfSameCharacter
	// void NoInterruptsIfSameCharacter(bool NoInterrupts);                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AnimBP/AnimSubGraph/AB_Survivor_Subgraph_Menu.AB_Survivor_Subgraph_Menu_C.ExecuteUbergraph_AB_Survivor_Subgraph_Menu
	// void ExecuteUbergraph_AB_Survivor_Subgraph_Menu(int32_t EntryPoint);                                                  // [0x61c32d0] Final|HasDefaults    
};

/// Class /Game/Characters/Campers/Common/AnimNotify_CamperMenuState.AnimNotify_CamperMenuState_C
/// Size: 0x0001 (0x000038 - 0x000039)
class UAnimNotify_CamperMenuState_C : public UAnimNotifyState
{ 
public:
	SDK_UNDEFINED(1,4158) /* TEnumAsByte<Enum_CamperMenuAnimationState> */ __um(AnimationState);                   // 0x0038   (0x0001)  


	/// Functions
	// Function /Game/Characters/Campers/Common/AnimNotify_CamperMenuState.AnimNotify_CamperMenuState_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration); // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Characters/Campers/Blueprints/Animation/BP_SurvivorLeftFootGroundDetector.BP_SurvivorLeftFootGroundDetector_C
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UBP_SurvivorLeftFootGroundDetector_C : public UFromBoneGroundDetectorComponent
{ 
public:
};

/// Class /Game/Characters/Campers/Blueprints/Animation/BP_SurvivorRightFootGroundDetector.BP_SurvivorRightFootGroundDetector_C
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UBP_SurvivorRightFootGroundDetector_C : public UFromBoneGroundDetectorComponent
{ 
public:
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C
/// Size: 0x0098 (0x0006C0 - 0x000758)
class ABP_Menu_Base_Camper_C : public ADBDMenuPlayer
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06C0   (0x0008)  
	class ULobbyDialogueComponent_C*                   LobbyDialogueComponent;                                     // 0x06C8   (0x0008)  
	class UBP_SurvivorRightFootGroundDetector_C*       RightFootGroundDetector;                                    // 0x06D0   (0x0008)  
	class UBP_SurvivorLeftFootGroundDetector_C*        LeftFootGroundDetector;                                     // 0x06D8   (0x0008)  
	class UCharmSpawnerComponent*                      CharmSpawner;                                               // 0x06E0   (0x0008)  
	class UCustomizedAudioComponent*                   CustomizedAudio;                                            // 0x06E8   (0x0008)  
	class UAkComponent*                                Ak_Audio_Menu_Base_Camper;                                  // 0x06F0   (0x0008)  
	float                                              Timeline_0_Dissolve_C225B0A046EE8204E18233BA497D6AC1;       // 0x06F8   (0x0004)  
	float                                              Timeline_0_Radius_C225B0A046EE8204E18233BA497D6AC1;         // 0x06FC   (0x0004)  
	SDK_UNDEFINED(1,4159) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_0__Direction_C225B0A046EE8204E18233BA497D6AC1); // 0x0700   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0701   (0x0007)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x0708   (0x0008)  
	float                                              Dissolve_Dissolve_596272B14FBF23BFE861F687F86F9EB1;         // 0x0710   (0x0004)  
	SDK_UNDEFINED(1,4160) /* TEnumAsByte<ETimelineDirection> */ __um(Dissolve__Direction_596272B14FBF23BFE861F687F86F9EB1); // 0x0714   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0715   (0x0003)  MISSED
	class UTimelineComponent*                          Dissolve;                                                   // 0x0718   (0x0008)  
	bool                                               Destroying;                                                 // 0x0720   (0x0001)  
	bool                                               PlayLocalDialogueOnly;                                      // 0x0721   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0722   (0x0006)  MISSED
	class UMaterialInstanceDynamic*                    Decal_MI;                                                   // 0x0728   (0x0008)  
	class UDecalComponent*                             Decal;                                                      // 0x0730   (0x0008)  
	SDK_UNDEFINED(16,4161) /* FMulticastInlineDelegate */ __um(OnCamperMenuInterruptChange);                       // 0x0738   (0x0010)  
	SDK_UNDEFINED(16,4162) /* FMulticastInlineDelegate */ __um(OnCamperMenuAnimationStateChange);                  // 0x0748   (0x0010)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Get_BP_MenuBaseCamper
	// void Get_BP_MenuBaseCamper(class ABP_Menu_Base_Camper_C*& BP_MenuBaseCamper);                                         // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.IsPlayingMenuInterrupt
	// void IsPlayingMenuInterrupt(bool IsPlayingAnimation);                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Set Height
	// void Set Height();                                                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.GetCharmSpawnerComponent
	// class UCharmSpawnerComponent* GetCharmSpawnerComponent();                                                             // [0x61c32d0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Dissolve__FinishedFunc
	// void Dissolve__FinishedFunc();                                                                                        // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Dissolve__UpdateFunc
	// void Dissolve__UpdateFunc();                                                                                          // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                      // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                        // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.Timeline_0__Blood Effect__EventFunc
	// void Timeline_0__Blood Effect__EventFunc();                                                                           // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BndEvt__BP_Menu_Base_Camper_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature
	// void BndEvt__BP_Menu_Base_Camper_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature(FName& outfitAudioStateCollection); // [0x61c32d0] HasOutParms|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BeginDestroySequence_Internal
	// void BeginDestroySequence_Internal();                                                                                 // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BeginSmokeIn
	// void BeginSmokeIn();                                                                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.RestartInSequence_Internal
	// void RestartInSequence_Internal();                                                                                    // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
	// void BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory category, FString switchState); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnLocalPlayerSpawned
	// void OnLocalPlayerSpawned();                                                                                          // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnGuestPlayerSpawned
	// void OnGuestPlayerSpawned(class ADBDMenuPlayer* Player);                                                              // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnLocalPlayerReadyChanged
	// void OnLocalPlayerReadyChanged(bool IsReady);                                                                         // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnGuestPlayerReadyChanged
	// void OnGuestPlayerReadyChanged(class ADBDMenuPlayer* Player, bool IsReady);                                           // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnAllPlayersReadyInOnlineLobby
	// void OnAllPlayersReadyInOnlineLobby();                                                                                // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnSkeletalMeshReady
	// void OnSkeletalMeshReady();                                                                                           // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnGuestPlayerDespawned
	// void OnGuestPlayerDespawned(class ADBDMenuPlayer* Player);                                                            // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.PlayCharacterLevelUpVFX
	// void PlayCharacterLevelUpVFX();                                                                                       // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.SetCamperMenuAnimationState
	// void SetCamperMenuAnimationState(TEnumAsByte<Enum_CamperMenuAnimationState> State);                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnPlayerMaxPrestige
	// void OnPlayerMaxPrestige();                                                                                           // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.ExecuteUbergraph_BP_Menu_Base_Camper
	// void ExecuteUbergraph_BP_Menu_Base_Camper(int32_t EntryPoint);                                                        // [0x61c32d0] Final|HasDefaults    
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnCamperMenuAnimationStateChange__DelegateSignature
	// void OnCamperMenuAnimationStateChange__DelegateSignature(TEnumAsByte<Enum_CamperMenuAnimationState> State);           // [0x61c32d0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_Base_Camper.BP_Menu_Base_Camper_C.OnCamperMenuInterruptChange__DelegateSignature
	// void OnCamperMenuInterruptChange__DelegateSignature(int32_t MenuInterrupt, bool DebugPassCurrentAnimation);           // [0x61c32d0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Characters/Campers/Dwight/Blueprint/Charms/AB_DF_ForwardCharms2_SurvivorCharmsChains.AB_DF_ForwardCharms2_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_DF_ForwardCharms2_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4163) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_1856A5C44048A03FFB1DF89ADF4CA5EA); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_1856A5C44048A03FFB1DF89ADF4CA5EA; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_1856A5C44048A03FFB1DF89ADF4CA5EA; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4164) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_1856A5C44048A03FFB1DF89ADF4CA5EA); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4165) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_5DF30D2E4BE44DD4557888B3E40B39A3); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_5DF30D2E4BE44DD4557888B3E40B39A3; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_5DF30D2E4BE44DD4557888B3E40B39A3; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4166) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_5DF30D2E4BE44DD4557888B3E40B39A3); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4167) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_AFF90BFF4C684E0E97F860BBE15A6E8B); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_AFF90BFF4C684E0E97F860BBE15A6E8B; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_AFF90BFF4C684E0E97F860BBE15A6E8B; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4168) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_AFF90BFF4C684E0E97F860BBE15A6E8B); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Dwight/Blueprint/Charms/AB_DF_ForwardCharms2_SurvivorCharmsChains.AB_DF_ForwardCharms2_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Dwight/Blueprint/Charms/AB_DF_ForwardCharms2_SurvivorCharmsChains.AB_DF_ForwardCharms2_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Dwight/Blueprint/Charms/AB_DF_ForwardCharms2_SurvivorCharmsChains.AB_DF_ForwardCharms2_SurvivorCharmsChains_C.ExecuteUbergraph_AB_DF_ForwardCharms2_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_DF_ForwardCharms2_SurvivorCharmsChains(int32_t EntryPoint);                                  // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Dwight/Blueprint/Charms/AB_DF_ForwardCharms1_SurvivorCharmsChains.AB_DF_ForwardCharms1_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_DF_ForwardCharms1_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4169) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_AEC3AAAE43C45E79CBA5F5A8C624BC1F); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_AEC3AAAE43C45E79CBA5F5A8C624BC1F; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_AEC3AAAE43C45E79CBA5F5A8C624BC1F; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4170) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_AEC3AAAE43C45E79CBA5F5A8C624BC1F); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4171) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_1AE978D84C88B2E14C9F87986CCDB12E); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_1AE978D84C88B2E14C9F87986CCDB12E; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_1AE978D84C88B2E14C9F87986CCDB12E; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4172) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_1AE978D84C88B2E14C9F87986CCDB12E); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4173) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_951338BB44F92B111D7217BC8256D115); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_951338BB44F92B111D7217BC8256D115; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_951338BB44F92B111D7217BC8256D115; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4174) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_951338BB44F92B111D7217BC8256D115); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Dwight/Blueprint/Charms/AB_DF_ForwardCharms1_SurvivorCharmsChains.AB_DF_ForwardCharms1_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Dwight/Blueprint/Charms/AB_DF_ForwardCharms1_SurvivorCharmsChains.AB_DF_ForwardCharms1_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Dwight/Blueprint/Charms/AB_DF_ForwardCharms1_SurvivorCharmsChains.AB_DF_ForwardCharms1_SurvivorCharmsChains_C.ExecuteUbergraph_AB_DF_ForwardCharms1_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_DF_ForwardCharms1_SurvivorCharmsChains(int32_t EntryPoint);                                  // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Dwight/Blueprint/Charms/AB_DF_Default_SurvivorCharmsChains.AB_DF_Default_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_DF_Default_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4175) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_82679245447718234B56BC80E31B651A); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_82679245447718234B56BC80E31B651A; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_82679245447718234B56BC80E31B651A; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4176) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_82679245447718234B56BC80E31B651A); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4177) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_08AE9DBF4CB3A1D6E90F4DADEA14A699); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_08AE9DBF4CB3A1D6E90F4DADEA14A699; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_08AE9DBF4CB3A1D6E90F4DADEA14A699; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4178) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_08AE9DBF4CB3A1D6E90F4DADEA14A699); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4179) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_860B63B14EB48ED7673A07BF4E0D9F77); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_860B63B14EB48ED7673A07BF4E0D9F77; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_860B63B14EB48ED7673A07BF4E0D9F77; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4180) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_860B63B14EB48ED7673A07BF4E0D9F77); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Dwight/Blueprint/Charms/AB_DF_Default_SurvivorCharmsChains.AB_DF_Default_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Dwight/Blueprint/Charms/AB_DF_Default_SurvivorCharmsChains.AB_DF_Default_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Dwight/Blueprint/Charms/AB_DF_Default_SurvivorCharmsChains.AB_DF_Default_SurvivorCharmsChains_C.ExecuteUbergraph_AB_DF_Default_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_DF_Default_SurvivorCharmsChains(int32_t EntryPoint);                                         // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale01.BP_Menu_CamperMale01_C
/// Size: 0x0000 (0x000758 - 0x000758)
class ABP_Menu_CamperMale01_C : public ABP_Menu_Base_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Meg/Blueprint/Charms/AB_MT_Shortcoat_SurvivorCharmsChains.AB_MT_Shortcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_MT_Shortcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4181) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_B77E50DB4FE5F5DA498C568F54D17F1D); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_B77E50DB4FE5F5DA498C568F54D17F1D; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_B77E50DB4FE5F5DA498C568F54D17F1D; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4182) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_B77E50DB4FE5F5DA498C568F54D17F1D); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4183) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_F184BB5042C09AE7CAEDC28C7C82749F); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_F184BB5042C09AE7CAEDC28C7C82749F; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_F184BB5042C09AE7CAEDC28C7C82749F; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4184) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_F184BB5042C09AE7CAEDC28C7C82749F); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4185) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_0E9A9BAB436AF9A2F03A89982642797D); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_0E9A9BAB436AF9A2F03A89982642797D; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_0E9A9BAB436AF9A2F03A89982642797D; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4186) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_0E9A9BAB436AF9A2F03A89982642797D); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Meg/Blueprint/Charms/AB_MT_Shortcoat_SurvivorCharmsChains.AB_MT_Shortcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Meg/Blueprint/Charms/AB_MT_Shortcoat_SurvivorCharmsChains.AB_MT_Shortcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Meg/Blueprint/Charms/AB_MT_Shortcoat_SurvivorCharmsChains.AB_MT_Shortcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_MT_Shortcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_MT_Shortcoat_SurvivorCharmsChains(int32_t EntryPoint);                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Meg/Blueprint/Charms/AB_MT_Longcoat_SurvivorCharmsChains.AB_MT_Longcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_MT_Longcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4187) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_E98E53014C900C0E2D4EED8D8A087E40); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_E98E53014C900C0E2D4EED8D8A087E40; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_E98E53014C900C0E2D4EED8D8A087E40; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4188) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_E98E53014C900C0E2D4EED8D8A087E40); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4189) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_1F7C1C9545B3CBFD54FF5A93DCA60219); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_1F7C1C9545B3CBFD54FF5A93DCA60219; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_1F7C1C9545B3CBFD54FF5A93DCA60219; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4190) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_1F7C1C9545B3CBFD54FF5A93DCA60219); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4191) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_7CFB7B874784EFCC1F6542A41222AEFD); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_7CFB7B874784EFCC1F6542A41222AEFD; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_7CFB7B874784EFCC1F6542A41222AEFD; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4192) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_7CFB7B874784EFCC1F6542A41222AEFD); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Meg/Blueprint/Charms/AB_MT_Longcoat_SurvivorCharmsChains.AB_MT_Longcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Meg/Blueprint/Charms/AB_MT_Longcoat_SurvivorCharmsChains.AB_MT_Longcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Meg/Blueprint/Charms/AB_MT_Longcoat_SurvivorCharmsChains.AB_MT_Longcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_MT_Longcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_MT_Longcoat_SurvivorCharmsChains(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Meg/Blueprint/Charms/AB_MT_Default_SurvivorCharmsChains.AB_MT_Default_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_MT_Default_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4193) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_CEF6E87D44588967024F1F870F3CB294); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_CEF6E87D44588967024F1F870F3CB294; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_CEF6E87D44588967024F1F870F3CB294; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4194) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_CEF6E87D44588967024F1F870F3CB294); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4195) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_A0E3CD0F453B30E7DD8CA49BC705F14D); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_A0E3CD0F453B30E7DD8CA49BC705F14D; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_A0E3CD0F453B30E7DD8CA49BC705F14D; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4196) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_A0E3CD0F453B30E7DD8CA49BC705F14D); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4197) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_D6ED30EC4CD3386EE32F179D248869EB); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_D6ED30EC4CD3386EE32F179D248869EB; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_D6ED30EC4CD3386EE32F179D248869EB; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4198) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_D6ED30EC4CD3386EE32F179D248869EB); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Meg/Blueprint/Charms/AB_MT_Default_SurvivorCharmsChains.AB_MT_Default_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Meg/Blueprint/Charms/AB_MT_Default_SurvivorCharmsChains.AB_MT_Default_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Meg/Blueprint/Charms/AB_MT_Default_SurvivorCharmsChains.AB_MT_Default_SurvivorCharmsChains_C.ExecuteUbergraph_AB_MT_Default_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_MT_Default_SurvivorCharmsChains(int32_t EntryPoint);                                         // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale01.BP_Menu_CamperFemale01_C
/// Size: 0x0000 (0x000758 - 0x000758)
class ABP_Menu_CamperFemale01_C : public ABP_Menu_Base_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C
/// Size: 0x1858 (0x0002C0 - 0x001B18)
class UAB_Menu_Camper_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0300   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0328   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0350   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0378   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x03A8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x03E0   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0460   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer2;                              // 0x0500   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult3;                                 // 0x0580   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer4;                              // 0x05B8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult5;                                 // 0x0638   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0670   (0x00B0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer6;                              // 0x0720   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult7;                                 // 0x07A0   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine8;                                // 0x07D8   (0x00B0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool9;                             // 0x0888   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer10;                             // 0x0928   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer11;                             // 0x09A8   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer12;                             // 0x0A28   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer13;                             // 0x0AA8   (0x0080)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0B28   (0x0158)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult14;                           // 0x0C80   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult15;                           // 0x0CA8   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose16;                              // 0x0CD0   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult17;                                // 0x0D00   (0x0038)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0D38   (0x0020)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose18;                              // 0x0D58   (0x0030)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0D88   (0x0020)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0DA8   (0x0008)  MISSED
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics;                                 // 0x0DB0   (0x0460)  
	FAnimNode_SpringBone                               AnimGraphNode_SpringBone;                                   // 0x1210   (0x0138)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult19;                                // 0x1348   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose20;                              // 0x1380   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult21;                                // 0x13B0   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine22;                               // 0x13E8   (0x00B0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool23;                            // 0x1498   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose24;                              // 0x1538   (0x0030)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose25;                             // 0x1568   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose26;                              // 0x16C0   (0x0030)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x16F0   (0x0110)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace27;                      // 0x1800   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace28;                      // 0x1820   (0x0020)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x1840   (0x00C0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend29;                           // 0x1900   (0x00C0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool30;                            // 0x19C0   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool31;                            // 0x1A60   (0x00A0)  
	EItemHandPosition                                  Hand_Position;                                              // 0x1B00   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x1B01   (0x0003)  MISSED
	int32_t                                            SelectedIdleIndex;                                          // 0x1B04   (0x0004)  
	bool                                               Role_Selected;                                              // 0x1B08   (0x0001)  
	bool                                               Dynamic_Override;                                           // 0x1B09   (0x0001)  
	bool                                               Override_nea;                                               // 0x1B0A   (0x0001)  
	bool                                               Override_Jane;                                              // 0x1B0B   (0x0001)  
	bool                                               _weaponRT_adjustment;                                       // 0x1B0C   (0x0001)  
	bool                                               MenuInterrupt;                                              // 0x1B0D   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x1B0E   (0x0002)  MISSED
	class ADBDMenuPlayer*                              DBDMenuPlayer;                                              // 0x1B10   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.Get_BP_MenuBaseCamper
	// void Get_BP_MenuBaseCamper(class ABP_Menu_Base_Camper_C*& BP_MenuBaseCamper);                                         // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_144CBC12420AC4B1AEB6C483367DB5D1
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_144CBC12420AC4B1AEB6C483367DB5D1(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_D31FAC3144F53773EC44BF83B1E4C609
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_D31FAC3144F53773EC44BF83B1E4C609(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_942BFBC04EC5441670A131B2CBD7B90D
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_942BFBC04EC5441670A131B2CBD7B90D(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_31D12DEB4EEE47CA5AFD35BA4FF29D01
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_31D12DEB4EEE47CA5AFD35BA4FF29D01(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_ModifyBone_F80FCF524110A51D7C4B38A1720994C7
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_ModifyBone_F80FCF524110A51D7C4B38A1720994C7(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_TransitionResult_87CDC7454897F2F416A5B78669C05DF6
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_TransitionResult_87CDC7454897F2F416A5B78669C05DF6(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_747405E04A935FAD9C72CBB1F0F32382
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_747405E04A935FAD9C72CBB1F0F32382(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_TransitionResult_BA6696174B4541A7601209A8053A34AA
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_TransitionResult_BA6696174B4541A7601209A8053A34AA(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.SetCamperMenuAnimationState
	// void SetCamperMenuAnimationState(TEnumAsByte<Enum_CamperMenuAnimationState> State);                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.AnimNotify_IsPlayingMenuInterruptFromTransition
	// void AnimNotify_IsPlayingMenuInterruptFromTransition();                                                               // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.AnimNotify_IsLeavingMenuInterruptFromTransition
	// void AnimNotify_IsLeavingMenuInterruptFromTransition();                                                               // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.RandomTimer
	// void RandomTimer();                                                                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.IsPlayingMenuInterrupt
	// void IsPlayingMenuInterrupt(bool IsPlayingAnimation);                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Common/AB_Menu_Camper.AB_Menu_Camper_C.ExecuteUbergraph_AB_Menu_Camper
	// void ExecuteUbergraph_AB_Menu_Camper(int32_t EntryPoint);                                                             // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Meg/Blueprint/AB_Menu_Meg.AB_Menu_Meg_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_Meg_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Claudette/Blueprints/Charms/AB_CM_Verylongcoat_SurvivorCharmsChains.AB_CM_Verylongcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_CM_Verylongcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4199) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_D240A99A499DAF8054BD4AAAF3B0A104); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_D240A99A499DAF8054BD4AAAF3B0A104; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_D240A99A499DAF8054BD4AAAF3B0A104; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4200) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_D240A99A499DAF8054BD4AAAF3B0A104); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4201) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_54CD276D445B34F6170153B8BE096F38); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_54CD276D445B34F6170153B8BE096F38; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_54CD276D445B34F6170153B8BE096F38; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4202) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_54CD276D445B34F6170153B8BE096F38); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4203) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_8AEDD79145647DA0DEC7DC91A1875A6A); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_8AEDD79145647DA0DEC7DC91A1875A6A; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_8AEDD79145647DA0DEC7DC91A1875A6A; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4204) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_8AEDD79145647DA0DEC7DC91A1875A6A); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Claudette/Blueprints/Charms/AB_CM_Verylongcoat_SurvivorCharmsChains.AB_CM_Verylongcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Claudette/Blueprints/Charms/AB_CM_Verylongcoat_SurvivorCharmsChains.AB_CM_Verylongcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Claudette/Blueprints/Charms/AB_CM_Verylongcoat_SurvivorCharmsChains.AB_CM_Verylongcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_CM_Verylongcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_CM_Verylongcoat_SurvivorCharmsChains(int32_t EntryPoint);                                    // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Claudette/Blueprints/Charms/AB_CM_Shortcoat_SurvivorCharmsChains.AB_CM_Shortcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_CM_Shortcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4205) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_1F82EF1D4FF1BD484A7669BCA0CD29A6); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_1F82EF1D4FF1BD484A7669BCA0CD29A6; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_1F82EF1D4FF1BD484A7669BCA0CD29A6; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4206) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_1F82EF1D4FF1BD484A7669BCA0CD29A6); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4207) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_B01E76F94F51AA012069E7A5D2C540A9); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_B01E76F94F51AA012069E7A5D2C540A9; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_B01E76F94F51AA012069E7A5D2C540A9; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4208) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_B01E76F94F51AA012069E7A5D2C540A9); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4209) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_AF098D604C62E21E7CE00DB0C24692F3); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_AF098D604C62E21E7CE00DB0C24692F3; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_AF098D604C62E21E7CE00DB0C24692F3; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4210) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_AF098D604C62E21E7CE00DB0C24692F3); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Claudette/Blueprints/Charms/AB_CM_Shortcoat_SurvivorCharmsChains.AB_CM_Shortcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Claudette/Blueprints/Charms/AB_CM_Shortcoat_SurvivorCharmsChains.AB_CM_Shortcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Claudette/Blueprints/Charms/AB_CM_Shortcoat_SurvivorCharmsChains.AB_CM_Shortcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_CM_Shortcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_CM_Shortcoat_SurvivorCharmsChains(int32_t EntryPoint);                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Claudette/Blueprints/Charms/AB_CM_Longcoat_SurvivorCharmsChains.AB_CM_Longcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_CM_Longcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4211) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_F9828C0541DB37970FBE08AF786D0D8E); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_F9828C0541DB37970FBE08AF786D0D8E; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_F9828C0541DB37970FBE08AF786D0D8E; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4212) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_F9828C0541DB37970FBE08AF786D0D8E); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4213) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_014373944ECE899F139ED2BEAB8BE8D0); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_014373944ECE899F139ED2BEAB8BE8D0; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_014373944ECE899F139ED2BEAB8BE8D0; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4214) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_014373944ECE899F139ED2BEAB8BE8D0); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4215) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_1D2E06664FEED68ABD9185A98680B181); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_1D2E06664FEED68ABD9185A98680B181; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_1D2E06664FEED68ABD9185A98680B181; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4216) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_1D2E06664FEED68ABD9185A98680B181); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Claudette/Blueprints/Charms/AB_CM_Longcoat_SurvivorCharmsChains.AB_CM_Longcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Claudette/Blueprints/Charms/AB_CM_Longcoat_SurvivorCharmsChains.AB_CM_Longcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Claudette/Blueprints/Charms/AB_CM_Longcoat_SurvivorCharmsChains.AB_CM_Longcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_CM_Longcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_CM_Longcoat_SurvivorCharmsChains(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Claudette/Blueprints/Charms/AB_CM_Default_SurvivorCharmsChains.AB_CM_Default_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_CM_Default_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4217) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_3A681B43460165F35E06DD9A2EE45E26); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_3A681B43460165F35E06DD9A2EE45E26; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_3A681B43460165F35E06DD9A2EE45E26; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4218) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_3A681B43460165F35E06DD9A2EE45E26); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4219) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_4599BD314B9F1767274CDB9D73BA61ED); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_4599BD314B9F1767274CDB9D73BA61ED; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_4599BD314B9F1767274CDB9D73BA61ED; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4220) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_4599BD314B9F1767274CDB9D73BA61ED); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4221) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_0804E5934FEE13438C7915A82D09080E); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_0804E5934FEE13438C7915A82D09080E; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_0804E5934FEE13438C7915A82D09080E; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4222) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_0804E5934FEE13438C7915A82D09080E); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Claudette/Blueprints/Charms/AB_CM_Default_SurvivorCharmsChains.AB_CM_Default_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Claudette/Blueprints/Charms/AB_CM_Default_SurvivorCharmsChains.AB_CM_Default_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Claudette/Blueprints/Charms/AB_CM_Default_SurvivorCharmsChains.AB_CM_Default_SurvivorCharmsChains_C.ExecuteUbergraph_AB_CM_Default_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_CM_Default_SurvivorCharmsChains(int32_t EntryPoint);                                         // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale02.BP_Menu_CamperFemale02_C
/// Size: 0x0000 (0x000758 - 0x000758)
class ABP_Menu_CamperFemale02_C : public ABP_Menu_Base_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Claudette/Blueprints/AB_Menu_Claudette.AB_Menu_Claudette_C
/// Size: 0x0140 (0x0002C0 - 0x000400)
class UAB_Menu_Claudette_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0300   (0x00A8)  
	FAset_Camper_Menu                                  MenuAnimSet;                                                // 0x03A8   (0x0058)  


	/// Functions
	// Function /Game/Characters/Campers/Claudette/Blueprints/AB_Menu_Claudette.AB_Menu_Claudette_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Claudette/Blueprints/AB_Menu_Claudette.AB_Menu_Claudette_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Claudette/Blueprints/AB_Menu_Claudette.AB_Menu_Claudette_C.ExecuteUbergraph_AB_Menu_Claudette
	// void ExecuteUbergraph_AB_Menu_Claudette(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale02.BP_Menu_CamperMale02_C
/// Size: 0x0000 (0x000758 - 0x000758)
class ABP_Menu_CamperMale02_C : public ABP_Menu_Base_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Jake/Blueprint/AB_Menu_Jake.AB_Menu_Jake_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_Jake_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_SuperLongcoat_SurvivorCharmsChains.AB_NK_SuperLongcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_NK_SuperLongcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4223) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_719BF4244A61A3E2B66CE78F7F4D969F); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_719BF4244A61A3E2B66CE78F7F4D969F; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_719BF4244A61A3E2B66CE78F7F4D969F; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4224) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_719BF4244A61A3E2B66CE78F7F4D969F); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4225) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_BF26D86549B59ADB2EABDEB926A72252); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_BF26D86549B59ADB2EABDEB926A72252; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_BF26D86549B59ADB2EABDEB926A72252; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4226) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_BF26D86549B59ADB2EABDEB926A72252); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4227) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_23B8D95E42A8C107114AE18305F9ADC8); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_23B8D95E42A8C107114AE18305F9ADC8; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_23B8D95E42A8C107114AE18305F9ADC8; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4228) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_23B8D95E42A8C107114AE18305F9ADC8); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_SuperLongcoat_SurvivorCharmsChains.AB_NK_SuperLongcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_SuperLongcoat_SurvivorCharmsChains.AB_NK_SuperLongcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_SuperLongcoat_SurvivorCharmsChains.AB_NK_SuperLongcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_NK_SuperLongcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_NK_SuperLongcoat_SurvivorCharmsChains(int32_t EntryPoint);                                   // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_Midcoat_SurvivorCharmsChains.AB_NK_Midcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_NK_Midcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4229) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_2B71CD104F6B375108E94BAED85AB9DC); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_2B71CD104F6B375108E94BAED85AB9DC; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_2B71CD104F6B375108E94BAED85AB9DC; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4230) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_2B71CD104F6B375108E94BAED85AB9DC); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4231) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_FC84659044DDE745683014A853C53820); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_FC84659044DDE745683014A853C53820; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_FC84659044DDE745683014A853C53820; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4232) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_FC84659044DDE745683014A853C53820); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4233) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_F994B64540C25289275A73B17207D536); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_F994B64540C25289275A73B17207D536; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_F994B64540C25289275A73B17207D536; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4234) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_F994B64540C25289275A73B17207D536); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_Midcoat_SurvivorCharmsChains.AB_NK_Midcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_Midcoat_SurvivorCharmsChains.AB_NK_Midcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_Midcoat_SurvivorCharmsChains.AB_NK_Midcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_NK_Midcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_NK_Midcoat_SurvivorCharmsChains(int32_t EntryPoint);                                         // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_Longcoat_SurvivorCharmsChains.AB_NK_Longcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_NK_Longcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4235) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_2BF764AC430A7AB741CBDFAA0C7BA741); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_2BF764AC430A7AB741CBDFAA0C7BA741; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_2BF764AC430A7AB741CBDFAA0C7BA741; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4236) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_2BF764AC430A7AB741CBDFAA0C7BA741); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4237) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_7C2DB4ED476F7D0C1368D9980811D406); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_7C2DB4ED476F7D0C1368D9980811D406; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_7C2DB4ED476F7D0C1368D9980811D406; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4238) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_7C2DB4ED476F7D0C1368D9980811D406); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4239) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_D7ABDF914222D6C28665E0BA87E25014); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_D7ABDF914222D6C28665E0BA87E25014; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_D7ABDF914222D6C28665E0BA87E25014; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4240) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_D7ABDF914222D6C28665E0BA87E25014); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_Longcoat_SurvivorCharmsChains.AB_NK_Longcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_Longcoat_SurvivorCharmsChains.AB_NK_Longcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_Longcoat_SurvivorCharmsChains.AB_NK_Longcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_NK_Longcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_NK_Longcoat_SurvivorCharmsChains(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_Default_SurvivorCharmsChains.AB_NK_Default_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_NK_Default_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4241) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_9BF63DCB4B62CB40F48A6BAD319A872A); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_9BF63DCB4B62CB40F48A6BAD319A872A; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_9BF63DCB4B62CB40F48A6BAD319A872A; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4242) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_9BF63DCB4B62CB40F48A6BAD319A872A); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4243) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_993F174440FC94C7BC57C9A87FB8AA83); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_993F174440FC94C7BC57C9A87FB8AA83; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_993F174440FC94C7BC57C9A87FB8AA83; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4244) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_993F174440FC94C7BC57C9A87FB8AA83); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4245) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_C81461DF49DCB6F22BBF339D9116080A); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_C81461DF49DCB6F22BBF339D9116080A; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_C81461DF49DCB6F22BBF339D9116080A; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4246) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_C81461DF49DCB6F22BBF339D9116080A); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_Default_SurvivorCharmsChains.AB_NK_Default_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_Default_SurvivorCharmsChains.AB_NK_Default_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_Default_SurvivorCharmsChains.AB_NK_Default_SurvivorCharmsChains_C.ExecuteUbergraph_AB_NK_Default_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_NK_Default_SurvivorCharmsChains(int32_t EntryPoint);                                         // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_Buffpants1_SurvivorCharmsChains.AB_NK_Buffpants1_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_NK_Buffpants1_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4247) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_03C6B55142C69C083969F08EE19E31E9); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_03C6B55142C69C083969F08EE19E31E9; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_03C6B55142C69C083969F08EE19E31E9; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4248) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_03C6B55142C69C083969F08EE19E31E9); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4249) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_BD9766E643123AD4C4358F92EAFF429E); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_BD9766E643123AD4C4358F92EAFF429E; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_BD9766E643123AD4C4358F92EAFF429E; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4250) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_BD9766E643123AD4C4358F92EAFF429E); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4251) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_FB325E4F4ECEA30A67245D9A48A47045); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_FB325E4F4ECEA30A67245D9A48A47045; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_FB325E4F4ECEA30A67245D9A48A47045; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4252) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_FB325E4F4ECEA30A67245D9A48A47045); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_Buffpants1_SurvivorCharmsChains.AB_NK_Buffpants1_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_Buffpants1_SurvivorCharmsChains.AB_NK_Buffpants1_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Nea/Blueprint/Charms/AB_NK_Buffpants1_SurvivorCharmsChains.AB_NK_Buffpants1_SurvivorCharmsChains_C.ExecuteUbergraph_AB_NK_Buffpants1_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_NK_Buffpants1_SurvivorCharmsChains(int32_t EntryPoint);                                      // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale03.BP_Menu_CamperFemale03_C
/// Size: 0x0008 (0x000758 - 0x000760)
class ABP_Menu_CamperFemale03_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale03.BP_Menu_CamperFemale03_C.ExecuteUbergraph_BP_Menu_CamperFemale03
	// void ExecuteUbergraph_BP_Menu_CamperFemale03(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Nea/Blueprint/AB_Menu_Nea.AB_Menu_Nea_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_Nea_C : public UAB_Menu_Camper_C
{ 
public:


	/// Functions
	// Function /Game/Characters/Campers/Nea/Blueprint/AB_Menu_Nea.AB_Menu_Nea_C.Override_nea
	// void Override_nea(bool& Return);                                                                                      // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Characters/Campers/Nea/Blueprint/AB_Menu_Nea.AB_Menu_Nea_C.Override_Dynamic
	// void Override_Dynamic(bool& Return);                                                                                  // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale03.BP_Menu_CamperMale03_C
/// Size: 0x0000 (0x000758 - 0x000758)
class ABP_Menu_CamperMale03_C : public ABP_Menu_Base_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Ace/Blueprint/AB_Menu_Ace.AB_Menu_Ace_C
/// Size: 0x0140 (0x0002C0 - 0x000400)
class UAB_Menu_Ace_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0300   (0x00A8)  
	FAset_Camper_Menu                                  MenuAnimSet;                                                // 0x03A8   (0x0058)  


	/// Functions
	// Function /Game/Characters/Campers/Ace/Blueprint/AB_Menu_Ace.AB_Menu_Ace_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Ace/Blueprint/AB_Menu_Ace.AB_Menu_Ace_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Ace/Blueprint/AB_Menu_Ace.AB_Menu_Ace_C.ExecuteUbergraph_AB_Menu_Ace
	// void ExecuteUbergraph_AB_Menu_Ace(int32_t EntryPoint);                                                                // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Animation/BP_KillerRightFootGroundDetector.BP_KillerRightFootGroundDetector_C
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UBP_KillerRightFootGroundDetector_C : public UFromBoneGroundDetectorComponent
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Animation/BP_KillerLeftFootGroundDetector.BP_KillerLeftFootGroundDetector_C
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UBP_KillerLeftFootGroundDetector_C : public UFromBoneGroundDetectorComponent
{ 
public:
};

/// Class /Game/Characters/Slashers/Animations/MenuAnimationSync/AnimNotify_SlasherMenuState.AnimNotify_SlasherMenuState_C
/// Size: 0x0001 (0x000038 - 0x000039)
class UAnimNotify_SlasherMenuState_C : public UAnimNotifyState
{ 
public:
	SDK_UNDEFINED(1,4253) /* TEnumAsByte<Enum_MenuAnimationState> */ __um(AnimationState);                         // 0x0038   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/Animations/MenuAnimationSync/AnimNotify_SlasherMenuState.AnimNotify_SlasherMenuState_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration); // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Characters/Slashers/Blueprints/Anim_SubGraph/BPI_AB_Slasher_SubGraph_Menu.BPI_AB_Slasher_SubGraph_Menu_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_AB_Slasher_SubGraph_Menu_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/BPI_AB_Slasher_SubGraph_Menu.BPI_AB_Slasher_SubGraph_Menu_C.SetMenuAnimationFromMainAB
	// void SetMenuAnimationFromMainAB(FAset_Slasher_Menu& MenuAnimSet);                                                     // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C
/// Size: 0x09BC (0x000300 - 0x000CBC)
class UAB_Slasher_SubGraph_Menu_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0340   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool0;                             // 0x03E0   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0480   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer1;                              // 0x0500   (0x0080)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0580   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x05A8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x05D0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult4;                            // 0x05F8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult5;                            // 0x0620   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult6;                            // 0x0648   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult7;                            // 0x0670   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult8;                            // 0x0698   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult9;                            // 0x06C0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult10;                           // 0x06E8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult11;                           // 0x0710   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult12;                           // 0x0738   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult13;                           // 0x0760   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer14;                             // 0x0788   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0808   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer15;                             // 0x0840   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult16;                                // 0x08C0   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer17;                             // 0x08F8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult18;                                // 0x0978   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer19;                             // 0x09B0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult20;                                // 0x0A30   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0A68   (0x00B0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x0B18   (0x0110)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0C28   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0C48   (0x0020)  
	bool                                               Role_Selected;                                              // 0x0C68   (0x0001)  
	bool                                               Is_Online;                                                  // 0x0C69   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0C6A   (0x0002)  MISSED
	int32_t                                            RandomInterrupt;                                            // 0x0C6C   (0x0004)  
	class ABP_Menu_BaseSlasher_C*                      BP_Menu_Base_Slasher;                                       // 0x0C70   (0x0008)  
	class UAnimSequenceBase*                           MenuLobby;                                                  // 0x0C78   (0x0008)  
	class UAnimSequenceBase*                           MenuIdle;                                                   // 0x0C80   (0x0008)  
	class UAnimSequenceBase*                           MenuIdleInterrupt01;                                        // 0x0C88   (0x0008)  
	class UAnimSequenceBase*                           MenuIdleInterrupt02;                                        // 0x0C90   (0x0008)  
	class UAnimSequenceBase*                           MenuIdleBack;                                               // 0x0C98   (0x0008)  
	class UAnimSequenceBase*                           MenuIdleInterrupt03;                                        // 0x0CA0   (0x0008)  
	bool                                               DebugPassToNextAnimation;                                   // 0x0CA8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0CA9   (0x0003)  MISSED
	FVector                                            ScaleInLobby;                                               // 0x0CAC   (0x000C)  
	int32_t                                            MaxIdleInterrupt;                                           // 0x0CB8   (0x0004)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_5E15DFE240AEAD5F916B15B2D5014F50
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_5E15DFE240AEAD5F916B15B2D5014F50(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_42AEC6A94D9FEBC8B69A338767976D8B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_42AEC6A94D9FEBC8B69A338767976D8B(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_3E3ABF8E4F276B5FBBFA5697451292CF
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_3E3ABF8E4F276B5FBBFA5697451292CF(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_13069AA346A598DDCD65FEB86788577B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_13069AA346A598DDCD65FEB86788577B(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_EE90647340D120A12EF9CD9BF02FCFA5
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_EE90647340D120A12EF9CD9BF02FCFA5(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_6D2F7FB540BF4660E4584AB0B255221D
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_6D2F7FB540BF4660E4584AB0B255221D(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_342F73ED4DFC794BEF5B00B8DC5E510A
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_342F73ED4DFC794BEF5B00B8DC5E510A(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_315C8E6444B60C3D4699AC863DECF763
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_315C8E6444B60C3D4699AC863DECF763(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_04C4447E4876DF7C16F670AC9A94544D
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_04C4447E4876DF7C16F670AC9A94544D(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.SetMenuAnimationFromMainAB
	// void SetMenuAnimationFromMainAB(FAset_Slasher_Menu& MenuAnimSet);                                                     // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.OnDataDrivenCVarDelegate_Event
	// void OnDataDrivenCVarDelegate_Event(FString CVarName);                                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.OnMenuAnimationStateChange
	// void OnMenuAnimationStateChange(TEnumAsByte<Enum_MenuAnimationState> State);                                          // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C.ExecuteUbergraph_AB_Slasher_SubGraph_Menu
	// void ExecuteUbergraph_AB_Slasher_SubGraph_Menu(int32_t EntryPoint);                                                   // [0x61c32d0] Final|HasDefaults    
};

/// Class /Game/Characters/Slashers/Blueprints/Interfaces/BPI_MenuSlasher.BPI_MenuSlasher_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_MenuSlasher_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Interfaces/BPI_MenuSlasher.BPI_MenuSlasher_C.GetMenuBaseSlasher
	// void GetMenuBaseSlasher(class ABP_Menu_BaseSlasher_C*& Bp_MenuBaseSlasher);                                           // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Interfaces/BPI_MenuSlasher.BPI_MenuSlasher_C.SetMenuAnimationState
	// void SetMenuAnimationState(TEnumAsByte<Enum_MenuAnimationState> State);                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
};

/// Struct /Game/Characters/Slashers/Animations/AnimSets/Aset_Slasher_Menu.Aset_Slasher_Menu
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAset_Slasher_Menu
{ 
	int32_t                                            IdleInterruptQuantity_35_3BE7C7644CFA1ADF9841D5BE4D3A7FED;  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UAnimSequence*                               MenuIdle_18_FFD6BA49453CFEA6D8A893B6109C431F;               // 0x0008   (0x0008)  
	class UAnimSequence*                               MenuIdleInterrupt01_19_31F0358C4D2070DFC9142F820362D54F;    // 0x0010   (0x0008)  
	class UAnimSequence*                               MenuIdleInterrupt02_22_0519AE00431F80436F2653995DB3AF63;    // 0x0018   (0x0008)  
	class UAnimSequence*                               MenuIdleInterrupt03_31_C1F95CFA4C45F6264D96208B339E40A2;    // 0x0020   (0x0008)  
	class UAnimSequence*                               MenuLobby_24_C8A98D004AFAB046DEA1529B43BB53F8;              // 0x0028   (0x0008)  
	class UAnimSequence*                               MenuBack_26_5BC791FF46DC296AA28C3CAE26F2591B;               // 0x0030   (0x0008)  
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher01.AB_Menu_Slasher01_C
/// Size: 0x0128 (0x000300 - 0x000428)
class UAB_Menu_Slasher01_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	EGameFlowStep                                      CurrentMenu;                                                // 0x03E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x03E9   (0x0007)  MISSED
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03F0   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher01.AB_Menu_Slasher01_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher01.AB_Menu_Slasher01_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher01.AB_Menu_Slasher01_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher01.AB_Menu_Slasher01_C.ExecuteUbergraph_AB_Menu_Slasher01
	// void ExecuteUbergraph_AB_Menu_Slasher01(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C
/// Size: 0x00B9 (0x0006C0 - 0x000779)
class ABP_Menu_BaseSlasher_C : public ADBDMenuPlayer
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06C0   (0x0008)  
	class ULobbyDialogueComponent_C*                   LobbyDialogueComponent;                                     // 0x06C8   (0x0008)  
	class UBP_KillerRightFootGroundDetector_C*         RightFootGroundDetector;                                    // 0x06D0   (0x0008)  
	class UBP_KillerLeftFootGroundDetector_C*          LeftFootGroundDetector;                                     // 0x06D8   (0x0008)  
	class UCustomizedAudioComponent*                   CustomizedAudio;                                            // 0x06E0   (0x0008)  
	class UAkComponent*                                Ak_Audio_Menu_Base_Slasher;                                 // 0x06E8   (0x0008)  
	float                                              Timeline_0_Dissolve_8C0E9079408DDB2CEF13CDAD072137A5;       // 0x06F0   (0x0004)  
	float                                              Timeline_0_Radius_8C0E9079408DDB2CEF13CDAD072137A5;         // 0x06F4   (0x0004)  
	SDK_UNDEFINED(1,4254) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_0__Direction_8C0E9079408DDB2CEF13CDAD072137A5); // 0x06F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x06F9   (0x0007)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x0700   (0x0008)  
	float                                              TML_DissolveSlasher_Dissolve_6A8353EF46DC9749463CE0935534B1A4; // 0x0708   (0x0004)  
	SDK_UNDEFINED(1,4255) /* TEnumAsByte<ETimelineDirection> */ __um(TML_DissolveSlasher__Direction_6A8353EF46DC9749463CE0935534B1A4); // 0x070C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x070D   (0x0003)  MISSED
	class UTimelineComponent*                          TML_DissolveSlasher;                                        // 0x0710   (0x0008)  
	bool                                               IsInMenu;                                                   // 0x0718   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0719   (0x0007)  MISSED
	SDK_UNDEFINED(16,4256) /* TArray<TWeakObjectPtr<UAkAudioBank*>> */ __um(RequiredSoundBanks);                   // 0x0720   (0x0010)  
	TArray<class UObject*>                             AssignedSoundBanks;                                         // 0x0730   (0x0010)  
	float                                              SlasherHeight;                                              // 0x0740   (0x0004)  
	float                                              SlasherHeightBase;                                          // 0x0744   (0x0004)  
	SDK_UNDEFINED(16,4257) /* FMulticastInlineDelegate */ __um(OnMenuAnimationStateChange);                        // 0x0748   (0x0010)  
	SDK_UNDEFINED(16,4258) /* FMulticastInlineDelegate */ __um(OnMenuInterruptChange);                             // 0x0758   (0x0010)  
	class UDecalComponent*                             Decal;                                                      // 0x0768   (0x0008)  
	class UMaterialInstanceDynamic*                    Decal_MI;                                                   // 0x0770   (0x0008)  
	bool                                               PlayLocalDialogueOnly;                                      // 0x0778   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.GetMenuBaseSlasher
	// void GetMenuBaseSlasher(class ABP_Menu_BaseSlasher_C*& Bp_MenuBaseSlasher);                                           // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.IsInMenuPlayer
	// bool IsInMenuPlayer();                                                                                                // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.UpdateHeight
	// void UpdateHeight();                                                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.TML_DissolveSlasher__FinishedFunc
	// void TML_DissolveSlasher__FinishedFunc();                                                                             // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.TML_DissolveSlasher__UpdateFunc
	// void TML_DissolveSlasher__UpdateFunc();                                                                               // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                      // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                        // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.Timeline_0__Blood Effect__EventFunc
	// void Timeline_0__Blood Effect__EventFunc();                                                                           // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BndEvt__BP_Menu_BaseSlasher_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature
	// void BndEvt__BP_Menu_BaseSlasher_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature(FName& outfitAudioStateCollection); // [0x61c32d0] HasOutParms|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BeginDestroySequence_Internal
	// void BeginDestroySequence_Internal();                                                                                 // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BeginSmokeIn
	// void BeginSmokeIn();                                                                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.RestartInSequence_Internal
	// void RestartInSequence_Internal();                                                                                    // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
	// void BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory category, FString switchState); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.RemoveAssetsBeforeDestroy
	// void RemoveAssetsBeforeDestroy();                                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.SkeletalMeshReady
	// void SkeletalMeshReady();                                                                                             // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.SetMenuAnimationState
	// void SetMenuAnimationState(TEnumAsByte<Enum_MenuAnimationState> State);                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.PlayCharacterLevelUpVFX
	// void PlayCharacterLevelUpVFX();                                                                                       // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.OnLocalPlayerSpawned
	// void OnLocalPlayerSpawned();                                                                                          // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.OnGuestPlayerSpawned
	// void OnGuestPlayerSpawned(class ADBDMenuPlayer* Player);                                                              // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.OnLocalPlayerReadyChanged
	// void OnLocalPlayerReadyChanged(bool IsReady);                                                                         // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.OnAllPlayersReadyInOnlineLobby
	// void OnAllPlayersReadyInOnlineLobby();                                                                                // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.OnGuestPlayerDespawned
	// void OnGuestPlayerDespawned(class ADBDMenuPlayer* Player);                                                            // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.OnPlayerMaxPrestige
	// void OnPlayerMaxPrestige();                                                                                           // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.ExecuteUbergraph_BP_Menu_BaseSlasher
	// void ExecuteUbergraph_BP_Menu_BaseSlasher(int32_t EntryPoint);                                                        // [0x61c32d0] Final|HasDefaults    
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.OnMenuInterruptChange__DelegateSignature
	// void OnMenuInterruptChange__DelegateSignature(int32_t MenuInterrupt, bool DebugPassCurrentAnimation);                 // [0x61c32d0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C.OnMenuAnimationStateChange__DelegateSignature
	// void OnMenuAnimationStateChange__DelegateSignature(TEnumAsByte<Enum_MenuAnimationState> State);                       // [0x61c32d0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher01.BP_Menu_Slasher01_C
/// Size: 0x000F (0x000779 - 0x000788)
class ABP_Menu_Slasher01_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	class UBP_Audio_KLR_01_C*                          BP_Audio_KLR_01;                                            // 0x0780   (0x0008)  
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher02.BP_Menu_Slasher02_C
/// Size: 0x000F (0x000779 - 0x000788)
class ABP_Menu_Slasher02_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	class UBP_Audio_KLR_02_C*                          BP_Audio_KLR_02;                                            // 0x0780   (0x0008)  
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher02.AB_Menu_Slasher02_C
/// Size: 0x0121 (0x000300 - 0x000421)
class UAB_Menu_Slasher02_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03E8   (0x0038)  
	EGameFlowStep                                      CurrentMenu;                                                // 0x0420   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher02.AB_Menu_Slasher02_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher02.AB_Menu_Slasher02_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher02.AB_Menu_Slasher02_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher02.AB_Menu_Slasher02_C.ExecuteUbergraph_AB_Menu_Slasher02
	// void ExecuteUbergraph_AB_Menu_Slasher02(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher03.AB_Menu_Slasher03_C
/// Size: 0x0120 (0x000300 - 0x000420)
class UAB_Menu_Slasher03_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03E8   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher03.AB_Menu_Slasher03_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher03.AB_Menu_Slasher03_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher03.AB_Menu_Slasher03_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher03.AB_Menu_Slasher03_C.ExecuteUbergraph_AB_Menu_Slasher03
	// void ExecuteUbergraph_AB_Menu_Slasher03(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher03.BP_Menu_Slasher03_C
/// Size: 0x001F (0x000779 - 0x000798)
class ABP_Menu_Slasher03_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UBP_Audio_KLR_03_C*                          BP_Audio_KLR_03;                                            // 0x0788   (0x0008)  
	class USkeletalMeshComponent*                      ChainSaw01_REF;                                             // 0x0790   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher03.BP_Menu_Slasher03_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher03.BP_Menu_Slasher03_C.K03_FX_ShowChainsaw
	// void K03_FX_ShowChainsaw();                                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher03.BP_Menu_Slasher03_C.ExecuteUbergraph_BP_Menu_Slasher03
	// void ExecuteUbergraph_BP_Menu_Slasher03(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher05.BP_Menu_Slasher05_C
/// Size: 0x000F (0x000779 - 0x000788)
class ABP_Menu_Slasher05_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	class UBP_Audio_KLR_05_C*                          BP_Audio_KLR_05;                                            // 0x0780   (0x0008)  
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher05.AB_Menu_Slasher05_C
/// Size: 0x0120 (0x000300 - 0x000420)
class UAB_Menu_Slasher05_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03E8   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher05.AB_Menu_Slasher05_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher05.AB_Menu_Slasher05_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher05.AB_Menu_Slasher05_C.ExecuteUbergraph_AB_Menu_Slasher05
	// void ExecuteUbergraph_AB_Menu_Slasher05(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale10.BP_Menu_CamperMale10_C
/// Size: 0x0009 (0x000758 - 0x000761)
class ABP_Menu_CamperMale10_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  
	bool                                               ShouldPlaySecondVoiceline;                                  // 0x0760   (0x0001)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale10.BP_Menu_CamperMale10_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale10.BP_Menu_CamperMale10_C.OnIsReadyChanged
	// void OnIsReadyChanged(bool IsReady);                                                                                  // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale10.BP_Menu_CamperMale10_C.ExecuteUbergraph_BP_Menu_CamperMale10
	// void ExecuteUbergraph_BP_Menu_CamperMale10(int32_t EntryPoint);                                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Mali_Licensed/Blueprint/AB_Menu_Ash.AB_Menu_Ash_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_Ash_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C
/// Size: 0x03C1 (0x000300 - 0x0006C1)
class UAB_Menu_Slasher22_Twin_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0340   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0368   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0390   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x03B8   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x03E0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0460   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer3;                              // 0x0498   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult4;                                 // 0x0518   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer5;                              // 0x0550   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult6;                                 // 0x05D0   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0608   (0x00B0)  
	class ABP_Menu_BaseSlasher_C*                      BP_Menu_Base_Slasher;                                       // 0x06B8   (0x0008)  
	SDK_UNDEFINED(1,4259) /* TEnumAsByte<Enum_MenuAnimationState> */ __um(State);                                  // 0x06C0   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher22_Twin_AnimGraphNode_TransitionResult_11F46D534066813FD5D81A84D3491809
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher22_Twin_AnimGraphNode_TransitionResult_11F46D534066813FD5D81A84D3491809(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher22_Twin_AnimGraphNode_TransitionResult_7247E5FF42E792A9B8DA3193C6D55153
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher22_Twin_AnimGraphNode_TransitionResult_7247E5FF42E792A9B8DA3193C6D55153(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher22_Twin_AnimGraphNode_TransitionResult_2D146FA847AF3496C17155A7ECBB7A40
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher22_Twin_AnimGraphNode_TransitionResult_2D146FA847AF3496C17155A7ECBB7A40(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher22_Twin_AnimGraphNode_TransitionResult_BB5A64DA40992460A6DBC0B3596CF67E
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher22_Twin_AnimGraphNode_TransitionResult_BB5A64DA40992460A6DBC0B3596CF67E(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C.OnMenuAnimationStateChange_Event
	// void OnMenuAnimationStateChange_Event(TEnumAsByte<Enum_MenuAnimationState> State);                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher22_Twin.AB_Menu_Slasher22_Twin_C.ExecuteUbergraph_AB_Menu_Slasher22_Twin
	// void ExecuteUbergraph_AB_Menu_Slasher22_Twin(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher22.AB_Menu_Slasher22_C
/// Size: 0x0120 (0x000300 - 0x000420)
class UAB_Menu_Slasher22_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03E8   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher22.AB_Menu_Slasher22_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher22.AB_Menu_Slasher22_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher22.AB_Menu_Slasher22_C.ExecuteUbergraph_AB_Menu_Slasher22
	// void ExecuteUbergraph_AB_Menu_Slasher22(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher22.BP_Menu_Slasher22_C
/// Size: 0x001F (0x000779 - 0x000798)
class ABP_Menu_Slasher22_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class USkeletalMeshComponent*                      _littlebrother;                                             // 0x0788   (0x0008)  
	class UBP_Audio_KLR_22_C*                          BP_Audio_KLR;                                               // 0x0790   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher22.BP_Menu_Slasher22_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher22.BP_Menu_Slasher22_C.ExecuteUbergraph_BP_Menu_Slasher22
	// void ExecuteUbergraph_BP_Menu_Slasher22(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S24/Blueprint/Charms/AB_S24_Shortcoat_SurvivorCharmsChains.AB_S24_Shortcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_S24_Shortcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4260) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_5DDECDF843AF2545832ECBB9F33AD72B); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_5DDECDF843AF2545832ECBB9F33AD72B; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_5DDECDF843AF2545832ECBB9F33AD72B; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4261) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_5DDECDF843AF2545832ECBB9F33AD72B); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4262) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_7973EC85405B9195B9673FB1A1242D54); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_7973EC85405B9195B9673FB1A1242D54; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_7973EC85405B9195B9673FB1A1242D54; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4263) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_7973EC85405B9195B9673FB1A1242D54); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4264) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_7B8B3AE64A66B3E4FDAC58B1F55C209E); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_7B8B3AE64A66B3E4FDAC58B1F55C209E; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_7B8B3AE64A66B3E4FDAC58B1F55C209E; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4265) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_7B8B3AE64A66B3E4FDAC58B1F55C209E); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S24/Blueprint/Charms/AB_S24_Shortcoat_SurvivorCharmsChains.AB_S24_Shortcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S24/Blueprint/Charms/AB_S24_Shortcoat_SurvivorCharmsChains.AB_S24_Shortcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S24/Blueprint/Charms/AB_S24_Shortcoat_SurvivorCharmsChains.AB_S24_Shortcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_S24_Shortcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_S24_Shortcoat_SurvivorCharmsChains(int32_t EntryPoint);                                      // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S24/Blueprint/Charms/AB_S24_Highpants_SurvivorCharmsChains.AB_S24_Highpants_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_S24_Highpants_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4266) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_4F47CF384D836058B431458E6690642E); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_4F47CF384D836058B431458E6690642E; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_4F47CF384D836058B431458E6690642E; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4267) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_4F47CF384D836058B431458E6690642E); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4268) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_7DEF062F446BE1DBA7C9AE901E1DCE1E); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_7DEF062F446BE1DBA7C9AE901E1DCE1E; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_7DEF062F446BE1DBA7C9AE901E1DCE1E; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4269) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_7DEF062F446BE1DBA7C9AE901E1DCE1E); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4270) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_1388219A4C9A2FECA3E2DB8E2048D4B7); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_1388219A4C9A2FECA3E2DB8E2048D4B7; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_1388219A4C9A2FECA3E2DB8E2048D4B7; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4271) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_1388219A4C9A2FECA3E2DB8E2048D4B7); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S24/Blueprint/Charms/AB_S24_Highpants_SurvivorCharmsChains.AB_S24_Highpants_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S24/Blueprint/Charms/AB_S24_Highpants_SurvivorCharmsChains.AB_S24_Highpants_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S24/Blueprint/Charms/AB_S24_Highpants_SurvivorCharmsChains.AB_S24_Highpants_SurvivorCharmsChains_C.ExecuteUbergraph_AB_S24_Highpants_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_S24_Highpants_SurvivorCharmsChains(int32_t EntryPoint);                                      // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S24/Blueprint/Charms/AB_S24_Default_SurvivorCharmsChains.AB_S24_Default_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_S24_Default_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4272) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_B1F062D940F700818F5F22880B59B7C4); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_B1F062D940F700818F5F22880B59B7C4; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_B1F062D940F700818F5F22880B59B7C4; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4273) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_B1F062D940F700818F5F22880B59B7C4); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4274) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_3BF3E6DD45CAC31715D95AB372D26D9D); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_3BF3E6DD45CAC31715D95AB372D26D9D; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_3BF3E6DD45CAC31715D95AB372D26D9D; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4275) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_3BF3E6DD45CAC31715D95AB372D26D9D); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4276) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_4EDF46CB4A27B992647A659C6E978A16); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_4EDF46CB4A27B992647A659C6E978A16; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_4EDF46CB4A27B992647A659C6E978A16; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4277) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_4EDF46CB4A27B992647A659C6E978A16); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S24/Blueprint/Charms/AB_S24_Default_SurvivorCharmsChains.AB_S24_Default_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S24/Blueprint/Charms/AB_S24_Default_SurvivorCharmsChains.AB_S24_Default_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S24/Blueprint/Charms/AB_S24_Default_SurvivorCharmsChains.AB_S24_Default_SurvivorCharmsChains_C.ExecuteUbergraph_AB_S24_Default_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_S24_Default_SurvivorCharmsChains(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S24/Blueprint/Charms/AB_S24_Blouse_SurvivorCharmsChains.AB_S24_Blouse_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_S24_Blouse_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4278) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_4ACACEBC46CB93DE9BAC35A070AB7017); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_4ACACEBC46CB93DE9BAC35A070AB7017; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_4ACACEBC46CB93DE9BAC35A070AB7017; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4279) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_4ACACEBC46CB93DE9BAC35A070AB7017); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4280) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_C1E911434F276244A5C4DB8A8E0F6BB6); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_C1E911434F276244A5C4DB8A8E0F6BB6; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_C1E911434F276244A5C4DB8A8E0F6BB6; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4281) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_C1E911434F276244A5C4DB8A8E0F6BB6); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4282) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_40B2BB8544A2795A908790AE7C6B08C2); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_40B2BB8544A2795A908790AE7C6B08C2; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_40B2BB8544A2795A908790AE7C6B08C2; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4283) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_40B2BB8544A2795A908790AE7C6B08C2); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S24/Blueprint/Charms/AB_S24_Blouse_SurvivorCharmsChains.AB_S24_Blouse_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S24/Blueprint/Charms/AB_S24_Blouse_SurvivorCharmsChains.AB_S24_Blouse_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S24/Blueprint/Charms/AB_S24_Blouse_SurvivorCharmsChains.AB_S24_Blouse_SurvivorCharmsChains_C.ExecuteUbergraph_AB_S24_Blouse_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_S24_Blouse_SurvivorCharmsChains(int32_t EntryPoint);                                         // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale12.BP_Menu_CamperFemale12_C
/// Size: 0x0008 (0x000758 - 0x000760)
class ABP_Menu_CamperFemale12_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale12.BP_Menu_CamperFemale12_C.ExecuteUbergraph_BP_Menu_CamperFemale12
	// void ExecuteUbergraph_BP_Menu_CamperFemale12(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S24/Blueprint/AB_Menu_S24.AB_Menu_S24_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_S24_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher09.BP_Menu_Slasher09_C
/// Size: 0x001F (0x000779 - 0x000798)
class ABP_Menu_Slasher09_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UBP_Audio_KLR_09_C*                          BP_Audio_KLR_09;                                            // 0x0788   (0x0008)  
	class USkeletalMeshComponent*                      CA_WS01_REF;                                                // 0x0790   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher09.BP_Menu_Slasher09_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher09.BP_Menu_Slasher09_C.ExecuteUbergraph_BP_Menu_Slasher09
	// void ExecuteUbergraph_BP_Menu_Slasher09(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher09.AB_Menu_Slasher09_C
/// Size: 0x0120 (0x000300 - 0x000420)
class UAB_Menu_Slasher09_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03E8   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher09.AB_Menu_Slasher09_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher09.AB_Menu_Slasher09_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher09.AB_Menu_Slasher09_C.ExecuteUbergraph_AB_Menu_Slasher09
	// void ExecuteUbergraph_AB_Menu_Slasher09(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher23.AB_Menu_Slasher23_C
/// Size: 0x0120 (0x000300 - 0x000420)
class UAB_Menu_Slasher23_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03E8   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher23.AB_Menu_Slasher23_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher23.AB_Menu_Slasher23_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher23.AB_Menu_Slasher23_C.ExecuteUbergraph_AB_Menu_Slasher23
	// void ExecuteUbergraph_AB_Menu_Slasher23(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher23.BP_Menu_Slasher23_C
/// Size: 0x000F (0x000779 - 0x000788)
class ABP_Menu_Slasher23_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	class UBP_Audio_KLR_23_C*                          BP_Audio_KLR;                                               // 0x0780   (0x0008)  
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale13.BP_Menu_CamperFemale13_C
/// Size: 0x0008 (0x000758 - 0x000760)
class ABP_Menu_CamperFemale13_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale13.BP_Menu_CamperFemale13_C.ExecuteUbergraph_BP_Menu_CamperFemale13
	// void ExecuteUbergraph_BP_Menu_CamperFemale13(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S25/Blueprints/AB_Menu_S25.AB_Menu_S25_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_S25_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Laurie/Blueprint/Charms/AB_LS_Longcoat_SurvivorCharmsChains.AB_LS_Longcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_LS_Longcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4284) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_36F2973D4535703A742BBEA44F1A6E04); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_36F2973D4535703A742BBEA44F1A6E04; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_36F2973D4535703A742BBEA44F1A6E04; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4285) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_36F2973D4535703A742BBEA44F1A6E04); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4286) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_46B29DCF4623E6B97EA76594355C02F6); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_46B29DCF4623E6B97EA76594355C02F6; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_46B29DCF4623E6B97EA76594355C02F6; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4287) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_46B29DCF4623E6B97EA76594355C02F6); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4288) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_20525E704052F3F0608073859FEB14B6); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_20525E704052F3F0608073859FEB14B6; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_20525E704052F3F0608073859FEB14B6; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4289) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_20525E704052F3F0608073859FEB14B6); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Laurie/Blueprint/Charms/AB_LS_Longcoat_SurvivorCharmsChains.AB_LS_Longcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Laurie/Blueprint/Charms/AB_LS_Longcoat_SurvivorCharmsChains.AB_LS_Longcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Laurie/Blueprint/Charms/AB_LS_Longcoat_SurvivorCharmsChains.AB_LS_Longcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_LS_Longcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_LS_Longcoat_SurvivorCharmsChains(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Laurie/Blueprint/Charms/AB_LS_Default_SurvivorCharmsChains.AB_LS_Default_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_LS_Default_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4290) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_BF6FC2324420E6EB46C93E9A8429DA33); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_BF6FC2324420E6EB46C93E9A8429DA33; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_BF6FC2324420E6EB46C93E9A8429DA33; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4291) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_BF6FC2324420E6EB46C93E9A8429DA33); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4292) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_555D0E044F3E65C177D3C9A5F1B1EDB7); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_555D0E044F3E65C177D3C9A5F1B1EDB7; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_555D0E044F3E65C177D3C9A5F1B1EDB7; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4293) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_555D0E044F3E65C177D3C9A5F1B1EDB7); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4294) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_25C950FC4233A5CF0C9E618987076312); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_25C950FC4233A5CF0C9E618987076312; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_25C950FC4233A5CF0C9E618987076312; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4295) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_25C950FC4233A5CF0C9E618987076312); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Laurie/Blueprint/Charms/AB_LS_Default_SurvivorCharmsChains.AB_LS_Default_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Laurie/Blueprint/Charms/AB_LS_Default_SurvivorCharmsChains.AB_LS_Default_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Laurie/Blueprint/Charms/AB_LS_Default_SurvivorCharmsChains.AB_LS_Default_SurvivorCharmsChains_C.ExecuteUbergraph_AB_LS_Default_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_LS_Default_SurvivorCharmsChains(int32_t EntryPoint);                                         // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale04.BP_Menu_CamperFemale04_C
/// Size: 0x0000 (0x000758 - 0x000758)
class ABP_Menu_CamperFemale04_C : public ABP_Menu_Base_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Laurie/Blueprint/AB_Menu_LS.AB_Menu_LS_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_LS_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher06.BP_Menu_Slasher06_C
/// Size: 0x0017 (0x000779 - 0x000790)
class ABP_Menu_Slasher06_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	class UBP_Audio_KLR_06_C*                          BP_Audio_KLR_06;                                            // 0x0780   (0x0008)  
	class UDBDPlayerPositionOffsetComponent*           DBDPlayerPositionOffset;                                    // 0x0788   (0x0008)  
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher06.AB_Menu_Slasher06_C
/// Size: 0x0120 (0x000300 - 0x000420)
class UAB_Menu_Slasher06_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03E8   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher06.AB_Menu_Slasher06_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher06.AB_Menu_Slasher06_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher06.AB_Menu_Slasher06_C.ExecuteUbergraph_AB_Menu_Slasher06
	// void ExecuteUbergraph_AB_Menu_Slasher06(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale05.BP_Menu_CamperFemale05_C
/// Size: 0x0008 (0x000758 - 0x000760)
class ABP_Menu_CamperFemale05_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale05.BP_Menu_CamperFemale05_C.ExecuteUbergraph_BP_Menu_CamperFemale05
	// void ExecuteUbergraph_BP_Menu_CamperFemale05(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Feng/Blueprint/AB_Menu_FM.AB_Menu_FM_C
/// Size: 0x0140 (0x0002C0 - 0x000400)
class UAB_Menu_FM_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0300   (0x00A8)  
	FAset_Camper_Menu                                  MenuAnimSet;                                                // 0x03A8   (0x0058)  


	/// Functions
	// Function /Game/Characters/Campers/Feng/Blueprint/AB_Menu_FM.AB_Menu_FM_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Feng/Blueprint/AB_Menu_FM.AB_Menu_FM_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Feng/Blueprint/AB_Menu_FM.AB_Menu_FM_C.ExecuteUbergraph_AB_Menu_FM
	// void ExecuteUbergraph_AB_Menu_FM(int32_t EntryPoint);                                                                 // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher07.BP_Menu_Slasher07_C
/// Size: 0x0017 (0x000779 - 0x000790)
class ABP_Menu_Slasher07_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	class UBP_Audio_KLR_07_C*                          BP_Audio_KLR_07;                                            // 0x0780   (0x0008)  
	class UDBDPlayerPositionOffsetComponent*           DBDPlayerPositionOffset;                                    // 0x0788   (0x0008)  
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher07.AB_Menu_Slasher07_C
/// Size: 0x0120 (0x000300 - 0x000420)
class UAB_Menu_Slasher07_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03E8   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher07.AB_Menu_Slasher07_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher07.AB_Menu_Slasher07_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher07.AB_Menu_Slasher07_C.ExecuteUbergraph_AB_Menu_Slasher07
	// void ExecuteUbergraph_AB_Menu_Slasher07(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher08.BP_Menu_Slasher08_C
/// Size: 0x0030 (0x000779 - 0x0007A9)
class ABP_Menu_Slasher08_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UBP_Audio_KLR_08_C*                          BP_Audio_KLR_08;                                            // 0x0788   (0x0008)  
	class USkeletalMeshComponent*                      ItemMesh_Axe;                                               // 0x0790   (0x0008)  
	float                                              Timeline_1_Dissolve_01C466A74EFEFADB8976FC84BC95D44F;       // 0x0798   (0x0004)  
	SDK_UNDEFINED(1,4296) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_1__Direction_01C466A74EFEFADB8976FC84BC95D44F); // 0x079C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x079D   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x07A0   (0x0008)  
	bool                                               IsHatchetVisible;                                           // 0x07A8   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher08.BP_Menu_Slasher08_C.Timeline_1__FinishedFunc
	// void Timeline_1__FinishedFunc();                                                                                      // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher08.BP_Menu_Slasher08_C.Timeline_1__UpdateFunc
	// void Timeline_1__UpdateFunc();                                                                                        // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher08.BP_Menu_Slasher08_C.FX_MakeHatchetAppear
	// void FX_MakeHatchetAppear();                                                                                          // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher08.BP_Menu_Slasher08_C.FX_MakeHatchetDisappear
	// void FX_MakeHatchetDisappear();                                                                                       // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher08.BP_Menu_Slasher08_C.OnCustomizationUpdated
	// void OnCustomizationUpdated();                                                                                        // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher08.BP_Menu_Slasher08_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher08.BP_Menu_Slasher08_C.K08_FX_MakeHatchetAppear
	// void K08_FX_MakeHatchetAppear();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher08.BP_Menu_Slasher08_C.K08_FX_MakeHatchetDisappear
	// void K08_FX_MakeHatchetDisappear();                                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher08.BP_Menu_Slasher08_C.ExecuteUbergraph_BP_Menu_Slasher08
	// void ExecuteUbergraph_BP_Menu_Slasher08(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher08.AB_Menu_Slasher08_C
/// Size: 0x0120 (0x000300 - 0x000420)
class UAB_Menu_Slasher08_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03E8   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher08.AB_Menu_Slasher08_C.GetKiller
	// void GetKiller(TScriptInterface<BlueprintGeneratedClass>& Menu Slasher 08);                                           // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetAppear
	// void AnimNotify_FX_MakeHatchetAppear();                                                                               // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetDisappear
	// void AnimNotify_FX_MakeHatchetDisappear();                                                                            // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher08.AB_Menu_Slasher08_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher08.AB_Menu_Slasher08_C.ExecuteUbergraph_AB_Menu_Slasher08
	// void ExecuteUbergraph_AB_Menu_Slasher08(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale05.BP_Menu_CamperMale05_C
/// Size: 0x0000 (0x000758 - 0x000758)
class ABP_Menu_CamperMale05_C : public ABP_Menu_Base_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/David/Blueprint/AB_Menu_David.AB_Menu_David_C
/// Size: 0x0140 (0x0002C0 - 0x000400)
class UAB_Menu_David_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0300   (0x00A8)  
	FAset_Camper_Menu                                  MenuAnimSet;                                                // 0x03A8   (0x0058)  


	/// Functions
	// Function /Game/Characters/Campers/David/Blueprint/AB_Menu_David.AB_Menu_David_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/David/Blueprint/AB_Menu_David.AB_Menu_David_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/David/Blueprint/AB_Menu_David.AB_Menu_David_C.ExecuteUbergraph_AB_Menu_David
	// void ExecuteUbergraph_AB_Menu_David(int32_t EntryPoint);                                                              // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/K24/Weapons/Blueprints/AB_K24_SW00_Menu.AB_K24_SW00_Menu_C
/// Size: 0x00A8 (0x0002C0 - 0x000368)
class UAB_K24_SW00_Menu_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose;                                 // 0x0300   (0x0018)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0318   (0x0050)  


	/// Functions
	// Function /Game/Characters/Slashers/K24/Weapons/Blueprints/AB_K24_SW00_Menu.AB_K24_SW00_Menu_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K24/Weapons/Blueprints/AB_K24_SW00_Menu.AB_K24_SW00_Menu_C.ExecuteUbergraph_AB_K24_SW00_Menu
	// void ExecuteUbergraph_AB_K24_SW00_Menu(int32_t EntryPoint);                                                           // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher24.AB_Menu_Slasher24_C
/// Size: 0x0130 (0x000300 - 0x000430)
class UAB_Menu_Slasher24_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FVector                                            __CustomProperty_ScaleInLobby_45F7183343C3638857E8E19E90ABFF6E; // 0x03E8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03F4   (0x0004)  MISSED
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03F8   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher24.AB_Menu_Slasher24_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher24.AB_Menu_Slasher24_C.ExecuteUbergraph_AB_Menu_Slasher24
	// void ExecuteUbergraph_AB_Menu_Slasher24(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher24.BP_Menu_Slasher24_C
/// Size: 0x0027 (0x000779 - 0x0007A0)
class ABP_Menu_Slasher24_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UK24_KillerAudioMenuReaction_C*              K24_KillerAudioMenuReaction;                                // 0x0788   (0x0008)  
	class USkeletalMeshComponent*                      _tentacle;                                                  // 0x0790   (0x0008)  
	class UBP_Audio_KLR_24_C*                          BP_Audio_KLR;                                               // 0x0798   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher24.BP_Menu_Slasher24_C.OnNotifyEnd_699133144A8A4CBB65233EA538E5F3E6
	// void OnNotifyEnd_699133144A8A4CBB65233EA538E5F3E6(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher24.BP_Menu_Slasher24_C.OnNotifyBegin_699133144A8A4CBB65233EA538E5F3E6
	// void OnNotifyBegin_699133144A8A4CBB65233EA538E5F3E6(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher24.BP_Menu_Slasher24_C.OnInterrupted_699133144A8A4CBB65233EA538E5F3E6
	// void OnInterrupted_699133144A8A4CBB65233EA538E5F3E6(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher24.BP_Menu_Slasher24_C.OnBlendOut_699133144A8A4CBB65233EA538E5F3E6
	// void OnBlendOut_699133144A8A4CBB65233EA538E5F3E6(FName NotifyName);                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher24.BP_Menu_Slasher24_C.OnCompleted_699133144A8A4CBB65233EA538E5F3E6
	// void OnCompleted_699133144A8A4CBB65233EA538E5F3E6(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher24.BP_Menu_Slasher24_C.K24_FX_ShowTentacle
	// void K24_FX_ShowTentacle();                                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher24.BP_Menu_Slasher24_C.K24_FX_HideTentacle
	// void K24_FX_HideTentacle();                                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher24.BP_Menu_Slasher24_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher24.BP_Menu_Slasher24_C.SetMenuAnimationState
	// void SetMenuAnimationState(TEnumAsByte<Enum_MenuAnimationState> State);                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher24.BP_Menu_Slasher24_C.ExecuteUbergraph_BP_Menu_Slasher24
	// void ExecuteUbergraph_BP_Menu_Slasher24(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S26/Blueprints/AB_Menu_S26.AB_Menu_S26_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_S26_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale14.BP_Menu_CamperFemale14_C
/// Size: 0x0008 (0x000758 - 0x000760)
class ABP_Menu_CamperFemale14_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale14.BP_Menu_CamperFemale14_C.ExecuteUbergraph_BP_Menu_CamperFemale14
	// void ExecuteUbergraph_BP_Menu_CamperFemale14(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale13.BP_Menu_CamperMale13_C
/// Size: 0x0008 (0x000758 - 0x000760)
class ABP_Menu_CamperMale13_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale13.BP_Menu_CamperMale13_C.ExecuteUbergraph_BP_Menu_CamperMale13
	// void ExecuteUbergraph_BP_Menu_CamperMale13(int32_t EntryPoint);                                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S27/Blueprints/AB_Menu_S27.AB_Menu_S27_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_S27_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher10.AB_Menu_Slasher10_C
/// Size: 0x0120 (0x000300 - 0x000420)
class UAB_Menu_Slasher10_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03E8   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher10.AB_Menu_Slasher10_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher10.AB_Menu_Slasher10_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher10.AB_Menu_Slasher10_C.ExecuteUbergraph_AB_Menu_Slasher10
	// void ExecuteUbergraph_AB_Menu_Slasher10(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher10.BP_Menu_Slasher10_C
/// Size: 0x0017 (0x000779 - 0x000790)
class ABP_Menu_Slasher10_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UBP_Audio_KLR_10_C*                          BP_Audio_KLR;                                               // 0x0788   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher10.BP_Menu_Slasher10_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher10.BP_Menu_Slasher10_C.ExecuteUbergraph_BP_Menu_Slasher10
	// void ExecuteUbergraph_BP_Menu_Slasher10(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale06.BP_Menu_CamperMale06_C
/// Size: 0x0000 (0x000758 - 0x000758)
class ABP_Menu_CamperMale06_C : public ABP_Menu_Base_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Quentin/Blueprint/AB_Menu_Quentin.AB_Menu_Quentin_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_Quentin_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher11.AB_Menu_Slasher11_C
/// Size: 0x0120 (0x000300 - 0x000420)
class UAB_Menu_Slasher11_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03E8   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher11.AB_Menu_Slasher11_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher11.AB_Menu_Slasher11_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher11.AB_Menu_Slasher11_C.ExecuteUbergraph_AB_Menu_Slasher11
	// void ExecuteUbergraph_AB_Menu_Slasher11(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher11.BP_Menu_Slasher11_C
/// Size: 0x001F (0x000779 - 0x000798)
class ABP_Menu_Slasher11_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UBP_Audio_KLR_11_C*                          BP_Audio_KLR;                                               // 0x0788   (0x0008)  
	class USkeletalMeshComponent*                      RBT_Mesh;                                                   // 0x0790   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher11.BP_Menu_Slasher11_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher11.BP_Menu_Slasher11_C.ExecuteUbergraph_BP_Menu_Slasher11
	// void ExecuteUbergraph_BP_Menu_Slasher11(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Finland/Blueprint/Charms/AB_FS_Longcoat_SurvivorCharmChain.AB_FS_Longcoat_SurvivorCharmChain_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_FS_Longcoat_SurvivorCharmChain_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4297) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_CE190CD74689A1589AC307A4E06BEC76); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_CE190CD74689A1589AC307A4E06BEC76; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_CE190CD74689A1589AC307A4E06BEC76; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4298) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_CE190CD74689A1589AC307A4E06BEC76); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4299) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_0BA1344D4323847BA9433A9DA771E27B); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_0BA1344D4323847BA9433A9DA771E27B; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_0BA1344D4323847BA9433A9DA771E27B; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4300) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_0BA1344D4323847BA9433A9DA771E27B); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4301) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_179FF0D540A8637E265D36BBBB36E10B); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_179FF0D540A8637E265D36BBBB36E10B; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_179FF0D540A8637E265D36BBBB36E10B; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4302) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_179FF0D540A8637E265D36BBBB36E10B); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Finland/Blueprint/Charms/AB_FS_Longcoat_SurvivorCharmChain.AB_FS_Longcoat_SurvivorCharmChain_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Finland/Blueprint/Charms/AB_FS_Longcoat_SurvivorCharmChain.AB_FS_Longcoat_SurvivorCharmChain_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Finland/Blueprint/Charms/AB_FS_Longcoat_SurvivorCharmChain.AB_FS_Longcoat_SurvivorCharmChain_C.ExecuteUbergraph_AB_FS_Longcoat_SurvivorCharmChain
	// void ExecuteUbergraph_AB_FS_Longcoat_SurvivorCharmChain(int32_t EntryPoint);                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Finland/Blueprint/Charms/AB_FS_Default_SurvivorCharmsChains.AB_FS_Default_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_FS_Default_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4303) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_C1DC51DF4AC1703C65954CA263C4EE16); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_C1DC51DF4AC1703C65954CA263C4EE16; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_C1DC51DF4AC1703C65954CA263C4EE16; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4304) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_C1DC51DF4AC1703C65954CA263C4EE16); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4305) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_088924E94E443CAE14895CA344EA0141); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_088924E94E443CAE14895CA344EA0141; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_088924E94E443CAE14895CA344EA0141; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4306) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_088924E94E443CAE14895CA344EA0141); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4307) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_D84FAFC14BC6ED673107918EDBBFCD1D); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_D84FAFC14BC6ED673107918EDBBFCD1D; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_D84FAFC14BC6ED673107918EDBBFCD1D; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4308) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_D84FAFC14BC6ED673107918EDBBFCD1D); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Finland/Blueprint/Charms/AB_FS_Default_SurvivorCharmsChains.AB_FS_Default_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Finland/Blueprint/Charms/AB_FS_Default_SurvivorCharmsChains.AB_FS_Default_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Finland/Blueprint/Charms/AB_FS_Default_SurvivorCharmsChains.AB_FS_Default_SurvivorCharmsChains_C.ExecuteUbergraph_AB_FS_Default_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_FS_Default_SurvivorCharmsChains(int32_t EntryPoint);                                         // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale07.BP_Menu_CamperMale07_C
/// Size: 0x0000 (0x000758 - 0x000758)
class ABP_Menu_CamperMale07_C : public ABP_Menu_Base_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Finland/Blueprint/AB_Menu_Tap.AB_Menu_Tap_C
/// Size: 0x0140 (0x0002C0 - 0x000400)
class UAB_Menu_Tap_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0300   (0x00A8)  
	FAset_Camper_Menu                                  MenuAnimSet;                                                // 0x03A8   (0x0058)  


	/// Functions
	// Function /Game/Characters/Campers/Finland/Blueprint/AB_Menu_Tap.AB_Menu_Tap_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Finland/Blueprint/AB_Menu_Tap.AB_Menu_Tap_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Finland/Blueprint/AB_Menu_Tap.AB_Menu_Tap_C.ExecuteUbergraph_AB_Menu_Tap
	// void ExecuteUbergraph_AB_Menu_Tap(int32_t EntryPoint);                                                                // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher25.BP_Menu_Slasher25_C
/// Size: 0x0037 (0x000779 - 0x0007B0)
class ABP_Menu_Slasher25_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class USkeletalMeshComponent*                      LamentConfMesh;                                             // 0x0788   (0x0008)  
	class USkeletalMeshComponent*                      ChainsMesh;                                                 // 0x0790   (0x0008)  
	class UBP_Audio_KLR_25_C*                          BP_Audio_KLR;                                               // 0x0798   (0x0008)  
	float                                              TM_LamentBoxVisibility_Dissolve_A56755B4431C0BE684B0688D2A09C847; // 0x07A0   (0x0004)  
	SDK_UNDEFINED(1,4309) /* TEnumAsByte<ETimelineDirection> */ __um(TM_LamentBoxVisibility__Direction_A56755B4431C0BE684B0688D2A09C847); // 0x07A4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x07A5   (0x0003)  MISSED
	class UTimelineComponent*                          TM_LamentBoxVisibility;                                     // 0x07A8   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher25.BP_Menu_Slasher25_C.TM_LamentBoxVisibility__FinishedFunc
	// void TM_LamentBoxVisibility__FinishedFunc();                                                                          // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher25.BP_Menu_Slasher25_C.TM_LamentBoxVisibility__UpdateFunc
	// void TM_LamentBoxVisibility__UpdateFunc();                                                                            // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher25.BP_Menu_Slasher25_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher25.BP_Menu_Slasher25_C.MakeLamentBoxAppear
	// void MakeLamentBoxAppear();                                                                                           // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher25.BP_Menu_Slasher25_C.MakeLamentBoxDisappear
	// void MakeLamentBoxDisappear();                                                                                        // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher25.BP_Menu_Slasher25_C.ExecuteUbergraph_BP_Menu_Slasher25
	// void ExecuteUbergraph_BP_Menu_Slasher25(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/K25/Weapons/Blueprints/AB_K25_SW00_REF.AB_K25_SW00_REF_C
/// Size: 0x00A9 (0x0002C0 - 0x000369)
class UAB_K25_SW00_REF_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0300   (0x0050)  
	FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose;                                 // 0x0350   (0x0018)  
	bool                                               _interupt;                                                  // 0x0368   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/K25/Weapons/Blueprints/AB_K25_SW00_REF.AB_K25_SW00_REF_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K25/Weapons/Blueprints/AB_K25_SW00_REF.AB_K25_SW00_REF_C.ExecuteUbergraph_AB_K25_SW00_REF
	// void ExecuteUbergraph_AB_K25_SW00_REF(int32_t EntryPoint);                                                            // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C
/// Size: 0x0128 (0x000300 - 0x000428)
class UAB_Menu_Slasher25_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	class ABP_Menu_Slasher25_C*                        KillerBP;                                                   // 0x03E8   (0x0008)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03F0   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnNotifyEnd_510336D14A5EC834C02539AA7C83A35B
	// void OnNotifyEnd_510336D14A5EC834C02539AA7C83A35B(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnNotifyBegin_510336D14A5EC834C02539AA7C83A35B
	// void OnNotifyBegin_510336D14A5EC834C02539AA7C83A35B(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnInterrupted_510336D14A5EC834C02539AA7C83A35B
	// void OnInterrupted_510336D14A5EC834C02539AA7C83A35B(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnBlendOut_510336D14A5EC834C02539AA7C83A35B
	// void OnBlendOut_510336D14A5EC834C02539AA7C83A35B(FName NotifyName);                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnCompleted_510336D14A5EC834C02539AA7C83A35B
	// void OnCompleted_510336D14A5EC834C02539AA7C83A35B(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnNotifyEnd_7A83B53B4483DAD7327526A33721EE7A
	// void OnNotifyEnd_7A83B53B4483DAD7327526A33721EE7A(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnNotifyBegin_7A83B53B4483DAD7327526A33721EE7A
	// void OnNotifyBegin_7A83B53B4483DAD7327526A33721EE7A(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnInterrupted_7A83B53B4483DAD7327526A33721EE7A
	// void OnInterrupted_7A83B53B4483DAD7327526A33721EE7A(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnBlendOut_7A83B53B4483DAD7327526A33721EE7A
	// void OnBlendOut_7A83B53B4483DAD7327526A33721EE7A(FName NotifyName);                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnCompleted_7A83B53B4483DAD7327526A33721EE7A
	// void OnCompleted_7A83B53B4483DAD7327526A33721EE7A(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C.AnimNotify_FX_K25_Menu_DisappearBox
	// void AnimNotify_FX_K25_Menu_DisappearBox();                                                                           // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C.OnMenuAnimationStateChange_Event
	// void OnMenuAnimationStateChange_Event(TEnumAsByte<Enum_MenuAnimationState> State);                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C.AnimNotify_FX_K25_Menu_AppearBox
	// void AnimNotify_FX_K25_Menu_AppearBox();                                                                              // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher25.AB_Menu_Slasher25_C.ExecuteUbergraph_AB_Menu_Slasher25
	// void ExecuteUbergraph_AB_Menu_Slasher25(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher12.AB_Menu_Slasher12_C
/// Size: 0x0298 (0x000300 - 0x000598)
class UAB_Menu_Slasher12_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x03E8   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0408   (0x0020)  
	FAnimNode_SpringBone                               AnimGraphNode_SpringBone;                                   // 0x0428   (0x0138)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x0560   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher12.AB_Menu_Slasher12_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher12.AB_Menu_Slasher12_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher12.AB_Menu_Slasher12_C.ExecuteUbergraph_AB_Menu_Slasher12
	// void ExecuteUbergraph_AB_Menu_Slasher12(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher12.BP_Menu_Slasher12_C
/// Size: 0x0017 (0x000779 - 0x000790)
class ABP_Menu_Slasher12_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	class UBP_Audio_KLR_12_C*                          BP_Audio_KLR;                                               // 0x0780   (0x0008)  
	class UArrowComponent*                             Arrow1;                                                     // 0x0788   (0x0008)  
};

/// Class /Game/Characters/Campers/Guam/Blueprint/Charms/AB_GS_LongCoat_SurvivorCharmsChains.AB_GS_LongCoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_GS_LongCoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4310) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_1593CC7E42A76942293EE4AB725A0D2E); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_1593CC7E42A76942293EE4AB725A0D2E; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_1593CC7E42A76942293EE4AB725A0D2E; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4311) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_1593CC7E42A76942293EE4AB725A0D2E); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4312) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_EC0938544EB9191FF23E9B81697A1518); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_EC0938544EB9191FF23E9B81697A1518; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_EC0938544EB9191FF23E9B81697A1518; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4313) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_EC0938544EB9191FF23E9B81697A1518); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4314) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_48E666A444774048903151A4A88D7386); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_48E666A444774048903151A4A88D7386; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_48E666A444774048903151A4A88D7386; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4315) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_48E666A444774048903151A4A88D7386); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Guam/Blueprint/Charms/AB_GS_LongCoat_SurvivorCharmsChains.AB_GS_LongCoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Guam/Blueprint/Charms/AB_GS_LongCoat_SurvivorCharmsChains.AB_GS_LongCoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Guam/Blueprint/Charms/AB_GS_LongCoat_SurvivorCharmsChains.AB_GS_LongCoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_GS_LongCoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_GS_LongCoat_SurvivorCharmsChains(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Guam/Blueprint/Charms/AB_GS_Historia_SurvivorCharmsChains.AB_GS_Historia_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_GS_Historia_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4316) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_E0AEF4944D4BA49CF5C4F08B764FFE63); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_E0AEF4944D4BA49CF5C4F08B764FFE63; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_E0AEF4944D4BA49CF5C4F08B764FFE63; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4317) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_E0AEF4944D4BA49CF5C4F08B764FFE63); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4318) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_4DB9EB2F4B196CD45BD209AED35D9B1B); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_4DB9EB2F4B196CD45BD209AED35D9B1B; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_4DB9EB2F4B196CD45BD209AED35D9B1B; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4319) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_4DB9EB2F4B196CD45BD209AED35D9B1B); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4320) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_30E9DC9644CCF6B8E6F6BF93717576DB); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_30E9DC9644CCF6B8E6F6BF93717576DB; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_30E9DC9644CCF6B8E6F6BF93717576DB; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4321) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_30E9DC9644CCF6B8E6F6BF93717576DB); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Guam/Blueprint/Charms/AB_GS_Historia_SurvivorCharmsChains.AB_GS_Historia_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Guam/Blueprint/Charms/AB_GS_Historia_SurvivorCharmsChains.AB_GS_Historia_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Guam/Blueprint/Charms/AB_GS_Historia_SurvivorCharmsChains.AB_GS_Historia_SurvivorCharmsChains_C.ExecuteUbergraph_AB_GS_Historia_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_GS_Historia_SurvivorCharmsChains(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Guam/Blueprint/Charms/AB_GS_Default_SurvivorCharmsChains.AB_GS_Default_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_GS_Default_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4322) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_67A110EF4A9EAA1AB1643584E398E0AA); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_67A110EF4A9EAA1AB1643584E398E0AA; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_67A110EF4A9EAA1AB1643584E398E0AA; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4323) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_67A110EF4A9EAA1AB1643584E398E0AA); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4324) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_B9617A3B42D99541DFABF2901217577B); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_B9617A3B42D99541DFABF2901217577B; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_B9617A3B42D99541DFABF2901217577B; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4325) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_B9617A3B42D99541DFABF2901217577B); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4326) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_E0E374164E7C01098E98938C4AC753A7); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_E0E374164E7C01098E98938C4AC753A7; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_E0E374164E7C01098E98938C4AC753A7; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4327) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_E0E374164E7C01098E98938C4AC753A7); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Guam/Blueprint/Charms/AB_GS_Default_SurvivorCharmsChains.AB_GS_Default_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Guam/Blueprint/Charms/AB_GS_Default_SurvivorCharmsChains.AB_GS_Default_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Guam/Blueprint/Charms/AB_GS_Default_SurvivorCharmsChains.AB_GS_Default_SurvivorCharmsChains_C.ExecuteUbergraph_AB_GS_Default_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_GS_Default_SurvivorCharmsChains(int32_t EntryPoint);                                         // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale06.BP_Menu_CamperFemale06_C
/// Size: 0x0008 (0x000758 - 0x000760)
class ABP_Menu_CamperFemale06_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale06.BP_Menu_CamperFemale06_C.ExecuteUbergraph_BP_Menu_CamperFemale06
	// void ExecuteUbergraph_BP_Menu_CamperFemale06(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Guam/Blueprint/AB_Menu_Kate.AB_Menu_Kate_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_Kate_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/BP_RedStainComponent.BP_RedStainComponent_C
/// Size: 0x0000 (0x000440 - 0x000440)
class UBP_RedStainComponent_C : public URedStainComponent
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher13.AB_Menu_Slasher13_C
/// Size: 0x3858 (0x000300 - 0x003B58)
class UAB_Menu_Slasher13_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x03E8   (0x0008)  MISSED
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics;                                 // 0x03F0   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics0;                                // 0x0850   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics1;                                // 0x0CB0   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics2;                                // 0x1110   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics3;                                // 0x1570   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics4;                                // 0x19D0   (0x0460)  
	FAnimNode_SpringBone                               AnimGraphNode_SpringBone;                                   // 0x1E30   (0x0138)  
	FAnimNode_SpringBone                               AnimGraphNode_SpringBone5;                                  // 0x1F68   (0x0138)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics6;                                // 0x20A0   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics7;                                // 0x2500   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics8;                                // 0x2960   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics9;                                // 0x2DC0   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics10;                               // 0x3220   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics11;                               // 0x3680   (0x0460)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x3AE0   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x3B00   (0x0020)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x3B20   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher13.AB_Menu_Slasher13_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuInt_MakeWeaponAppear
	// void AnimNotify_FX_HK_MenuInt_MakeWeaponAppear();                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear
	// void AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear();                                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuBack_MakeSwordVisible
	// void AnimNotify_FX_HK_MenuBack_MakeSwordVisible();                                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_Menu_MakeSwordInvisible
	// void AnimNotify_FX_HK_Menu_MakeSwordInvisible();                                                                      // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher13.AB_Menu_Slasher13_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher13.AB_Menu_Slasher13_C.ExecuteUbergraph_AB_Menu_Slasher13
	// void ExecuteUbergraph_AB_Menu_Slasher13(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C
/// Size: 0x0090 (0x000779 - 0x000809)
class ABP_Menu_Slasher13_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UBP_Audio_KLR_13_C*                          BP_Audio_KLR;                                               // 0x0788   (0x0008)  
	class UBP_RedStainComponent_C*                     RedStainComponent;                                          // 0x0790   (0x0008)  
	float                                              Show_Sword_WPO_964716F24F8255A0C9F98FA0967E8ECF;            // 0x0798   (0x0004)  
	float                                              Show_Sword_Shard_Disappear_964716F24F8255A0C9F98FA0967E8ECF; // 0x079C   (0x0004)  
	float                                              Show_Sword_Sword_Appear_964716F24F8255A0C9F98FA0967E8ECF;   // 0x07A0   (0x0004)  
	SDK_UNDEFINED(1,4328) /* TEnumAsByte<ETimelineDirection> */ __um(Show_Sword__Direction_964716F24F8255A0C9F98FA0967E8ECF); // 0x07A4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x07A5   (0x0003)  MISSED
	class UTimelineComponent*                          Show_Sword;                                                 // 0x07A8   (0x0008)  
	FVector                                            Timeline_2_Size_548F5340441650D05914669F2F45DC7E;           // 0x07B0   (0x000C)  
	FVector                                            Timeline_2_Particle_Location_548F5340441650D05914669F2F45DC7E; // 0x07BC   (0x000C)  
	SDK_UNDEFINED(1,4329) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_2__Direction_548F5340441650D05914669F2F45DC7E); // 0x07C8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x07C9   (0x0007)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x07D0   (0x0008)  
	FVector                                            Make_Sword_Disappear_Shard_Size_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x07D8   (0x000C)  
	FVector                                            Make_Sword_Disappear_Particle_Position_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x07E4   (0x000C)  
	float                                              Make_Sword_Disappear_WPO_E08D4B9E409A9213BEBDBD84EE0E3709;  // 0x07F0   (0x0004)  
	float                                              Make_Sword_Disappear_Shard_Appear_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x07F4   (0x0004)  
	float                                              Make_Sword_Disappear_Weapon_Disappear_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x07F8   (0x0004)  
	SDK_UNDEFINED(1,4330) /* TEnumAsByte<ETimelineDirection> */ __um(Make_Sword_Disappear__Direction_E08D4B9E409A9213BEBDBD84EE0E3709); // 0x07FC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x07FD   (0x0003)  MISSED
	class UTimelineComponent*                          Make_Sword_Disappear;                                       // 0x0800   (0x0008)  
	bool                                               SwordShouldBeVisible;                                       // 0x0808   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C.GetShard
	// void GetShard(class USkeletalMeshComponent*& Shard);                                                                  // [0x61c32d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C.GetSword
	// void GetSword(class USkeletalMeshComponent*& Sword);                                                                  // [0x61c32d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C.Make Sword Disappear__FinishedFunc
	// void Make Sword Disappear__FinishedFunc();                                                                            // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C.Make Sword Disappear__UpdateFunc
	// void Make Sword Disappear__UpdateFunc();                                                                              // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C.Show Sword__FinishedFunc
	// void Show Sword__FinishedFunc();                                                                                      // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C.Show Sword__UpdateFunc
	// void Show Sword__UpdateFunc();                                                                                        // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C.Timeline_2__FinishedFunc
	// void Timeline_2__FinishedFunc();                                                                                      // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C.Timeline_2__UpdateFunc
	// void Timeline_2__UpdateFunc();                                                                                        // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C.OnCustomizationUpdated
	// void OnCustomizationUpdated();                                                                                        // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C.OnAttack_StopTimeline
	// void OnAttack_StopTimeline();                                                                                         // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_MakeSwordInvisible
	// void K13_FX_MakeSwordInvisible();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_MakeSwordVisible
	// void K13_FX_MakeSwordVisible();                                                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_MakeSwordDisappear
	// void K13_FX_MakeSwordDisappear();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_MakeSwordAppear
	// void K13_FX_MakeSwordAppear();                                                                                        // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C.K13_FX_ModifyFace
	// void K13_FX_ModifyFace(float SadFaceCurveValue, float MadFaceCurveValue);                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher13.BP_Menu_Slasher13_C.ExecuteUbergraph_BP_Menu_Slasher13
	// void ExecuteUbergraph_BP_Menu_Slasher13(int32_t EntryPoint);                                                          // [0x61c32d0] Final|HasDefaults    
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale08.BP_Menu_CamperMale08_C
/// Size: 0x0008 (0x000758 - 0x000760)
class ABP_Menu_CamperMale08_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale08.BP_Menu_CamperMale08_C.ExecuteUbergraph_BP_Menu_CamperMale08
	// void ExecuteUbergraph_BP_Menu_CamperMale08(int32_t EntryPoint);                                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Haiti/Blueprint/AB_Menu_Haiti.AB_Menu_Haiti_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_Haiti_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale15.BP_Menu_CamperFemale15_C
/// Size: 0x0020 (0x000758 - 0x000778)
class ABP_Menu_CamperFemale15_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  
	class USkeletalMeshComponent*                      S28Book;                                                    // 0x0760   (0x0008)  
	class UAB_S28_Book_C*                              AB_S28_Book;                                                // 0x0768   (0x0008)  
	class UAB_Menu_S28_C*                              AB_Menu_S28;                                                // 0x0770   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale15.BP_Menu_CamperFemale15_C.GoToAddMoriVomitStain
	// void GoToAddMoriVomitStain();                                                                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale15.BP_Menu_CamperFemale15_C.GoToAddVomitDecal
	// void GoToAddVomitDecal();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale15.BP_Menu_CamperFemale15_C.StartEndGameDissolve
	// void StartEndGameDissolve();                                                                                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale15.BP_Menu_CamperFemale15_C.CK_StartSacrificeDissolve
	// void CK_StartSacrificeDissolve();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale15.BP_Menu_CamperFemale15_C.AddBloodOnCamper
	// void AddBloodOnCamper();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale15.BP_Menu_CamperFemale15_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale15.BP_Menu_CamperFemale15_C.ShowProps
	// void ShowProps();                                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale15.BP_Menu_CamperFemale15_C.HideProps
	// void HideProps();                                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale15.BP_Menu_CamperFemale15_C.IsPlayingMenuInterrupt
	// void IsPlayingMenuInterrupt(bool IsPlayingAnimation);                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale15.BP_Menu_CamperFemale15_C.ExecuteUbergraph_BP_Menu_CamperFemale15
	// void ExecuteUbergraph_BP_Menu_CamperFemale15(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S28/Blueprints/AB_Menu_S28.AB_Menu_S28_C
/// Size: 0x0008 (0x001B18 - 0x001B20)
class UAB_Menu_S28_C : public UAB_Menu_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1B18   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S28/Blueprints/AB_Menu_S28.AB_Menu_S28_C.AnimNotify_FX_ShowProps
	// void AnimNotify_FX_ShowProps();                                                                                       // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S28/Blueprints/AB_Menu_S28.AB_Menu_S28_C.AnimNotify_FX_HideProps
	// void AnimNotify_FX_HideProps();                                                                                       // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S28/Blueprints/AB_Menu_S28.AB_Menu_S28_C.AnimNotify_IsPlayingMenuInterruptFromTransition
	// void AnimNotify_IsPlayingMenuInterruptFromTransition();                                                               // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S28/Blueprints/AB_Menu_S28.AB_Menu_S28_C.ExecuteUbergraph_AB_Menu_S28
	// void ExecuteUbergraph_AB_Menu_S28(int32_t EntryPoint);                                                                // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher26.AB_Menu_Slasher26_C
/// Size: 0x0140 (0x000300 - 0x000440)
class UAB_Menu_Slasher26_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FVector                                            __CustomProperty_ScaleInLobby_C2D427024F419E7522491584FE4AC69B; // 0x03E8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03F4   (0x0004)  MISSED
	class ABP_Menu_Slasher26_C*                        KillerBP;                                                   // 0x03F8   (0x0008)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x0400   (0x0038)  
	class ABP_Menu_Slasher26_C*                        BP_Menu_Base_Slasher;                                       // 0x0438   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher26.AB_Menu_Slasher26_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher26.AB_Menu_Slasher26_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher26.AB_Menu_Slasher26_C.ExecuteUbergraph_AB_Menu_Slasher26
	// void ExecuteUbergraph_AB_Menu_Slasher26(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher26.BP_Menu_Slasher26_C
/// Size: 0x0023 (0x000779 - 0x00079C)
class ABP_Menu_Slasher26_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UBP_Audio_KLR_26_C*                          BP_Audio_KLR;                                               // 0x0788   (0x0008)  
	class USkeletalMeshComponent*                      CrowHead_Mesh;                                              // 0x0790   (0x0008)  
	int32_t                                            RandomInterupt;                                             // 0x0798   (0x0004)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher26.BP_Menu_Slasher26_C.GetIn
	// void GetIn();                                                                                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher26.BP_Menu_Slasher26_C.OnNotifyEnd_64980147466C70D6568DB5B98DD4A55E
	// void OnNotifyEnd_64980147466C70D6568DB5B98DD4A55E(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher26.BP_Menu_Slasher26_C.OnNotifyBegin_64980147466C70D6568DB5B98DD4A55E
	// void OnNotifyBegin_64980147466C70D6568DB5B98DD4A55E(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher26.BP_Menu_Slasher26_C.OnInterrupted_64980147466C70D6568DB5B98DD4A55E
	// void OnInterrupted_64980147466C70D6568DB5B98DD4A55E(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher26.BP_Menu_Slasher26_C.OnBlendOut_64980147466C70D6568DB5B98DD4A55E
	// void OnBlendOut_64980147466C70D6568DB5B98DD4A55E(FName NotifyName);                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher26.BP_Menu_Slasher26_C.OnCompleted_64980147466C70D6568DB5B98DD4A55E
	// void OnCompleted_64980147466C70D6568DB5B98DD4A55E(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher26.BP_Menu_Slasher26_C.BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
	// void BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory category, FString switchState); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher26.BP_Menu_Slasher26_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher26.BP_Menu_Slasher26_C.OnMenuAnimationStateChange_Event
	// void OnMenuAnimationStateChange_Event(TEnumAsByte<Enum_MenuAnimationState> State);                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher26.BP_Menu_Slasher26_C.ExecuteUbergraph_BP_Menu_Slasher26
	// void ExecuteUbergraph_BP_Menu_Slasher26(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/K26/Weapons/Models/Blueprints/AB_K26_SW00.AB_K26_SW00_C
/// Size: 0x0749 (0x000300 - 0x000A49)
class UAB_K26_SW00_C : public UK26CrowProjectileAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0340   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0368   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0390   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x03B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x03E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult4;                            // 0x0408   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult5;                            // 0x0430   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult6;                            // 0x0458   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult7;                            // 0x0480   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult8;                            // 0x04A8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult9;                            // 0x04D0   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x04F8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0578   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer10;                             // 0x05B0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult11;                                // 0x0630   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer12;                             // 0x0668   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult13;                                // 0x06E8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer14;                             // 0x0720   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult15;                                // 0x07A0   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer16;                             // 0x07D8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult17;                                // 0x0858   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer18;                             // 0x0890   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult19;                                // 0x0910   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0948   (0x00B0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x09F8   (0x0050)  
	bool                                               NewVar;                                                     // 0x0A48   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/K26/Weapons/Models/Blueprints/AB_K26_SW00.AB_K26_SW00_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K26/Weapons/Models/Blueprints/AB_K26_SW00.AB_K26_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K26_SW00_AnimGraphNode_TransitionResult_41D79DBF4A12D24C4C01BA9BF508754F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K26_SW00_AnimGraphNode_TransitionResult_41D79DBF4A12D24C4C01BA9BF508754F(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K26/Weapons/Models/Blueprints/AB_K26_SW00.AB_K26_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K26_SW00_AnimGraphNode_TransitionResult_03F75F724242E7E4CD3D01B5FE41FDC7
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K26_SW00_AnimGraphNode_TransitionResult_03F75F724242E7E4CD3D01B5FE41FDC7(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K26/Weapons/Models/Blueprints/AB_K26_SW00.AB_K26_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K26_SW00_AnimGraphNode_TransitionResult_3C31BC1A49FE35C59787F1B21F8A48BC
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K26_SW00_AnimGraphNode_TransitionResult_3C31BC1A49FE35C59787F1B21F8A48BC(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K26/Weapons/Models/Blueprints/AB_K26_SW00.AB_K26_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K26_SW00_AnimGraphNode_TransitionResult_152D3DD248E381360CB442A2993CD1C5
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K26_SW00_AnimGraphNode_TransitionResult_152D3DD248E381360CB442A2993CD1C5(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K26/Weapons/Models/Blueprints/AB_K26_SW00.AB_K26_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K26_SW00_AnimGraphNode_TransitionResult_323A1E894655514AE74AB8B93F660B5E
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K26_SW00_AnimGraphNode_TransitionResult_323A1E894655514AE74AB8B93F660B5E(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K26/Weapons/Models/Blueprints/AB_K26_SW00.AB_K26_SW00_C.ExecuteUbergraph_AB_K26_SW00
	// void ExecuteUbergraph_AB_K26_SW00(int32_t EntryPoint);                                                                // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale14.BP_Menu_CamperMale14_C
/// Size: 0x0019 (0x000758 - 0x000771)
class ABP_Menu_CamperMale14_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  
	class USkeletalMeshComponent*                      SM_ION_Tablet_01_REF;                                       // 0x0760   (0x0008)  
	class ADBDMenuPlayer*                              DBDMenuPlayer;                                              // 0x0768   (0x0008)  
	bool                                               Is_site_on_log;                                             // 0x0770   (0x0001)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale14.BP_Menu_CamperMale14_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale14.BP_Menu_CamperMale14_C.ExecuteUbergraph_BP_Menu_CamperMale14
	// void ExecuteUbergraph_BP_Menu_CamperMale14(int32_t EntryPoint);                                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S29/Blueprints/AB_Menu_S29.AB_Menu_S29_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_S29_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher14.AB_Menu_Slasher14_C
/// Size: 0x0120 (0x000300 - 0x000420)
class UAB_Menu_Slasher14_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03E8   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher14.AB_Menu_Slasher14_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher14.AB_Menu_Slasher14_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher14.AB_Menu_Slasher14_C.ExecuteUbergraph_AB_Menu_Slasher14
	// void ExecuteUbergraph_AB_Menu_Slasher14(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher14.BP_Menu_Slasher14_C
/// Size: 0x0017 (0x000779 - 0x000790)
class ABP_Menu_Slasher14_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UBP_Audio_KLR_14_C*                          BP_Audio_KLR;                                               // 0x0788   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher14.BP_Menu_Slasher14_C.BndEvt__BP_Menu_Slasher14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
	// void BndEvt__BP_Menu_Slasher14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory category, FString switchState); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher14.BP_Menu_Slasher14_C.ExecuteUbergraph_BP_Menu_Slasher14
	// void ExecuteUbergraph_BP_Menu_Slasher14(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale09.BP_Menu_CamperMale09_C
/// Size: 0x0000 (0x000758 - 0x000758)
class ABP_Menu_CamperMale09_C : public ABP_Menu_Base_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Kenya/Blueprint/AB_Menu_Jeff01.AB_Menu_Jeff01_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_Jeff01_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Slashers/K27/Weapons/Models/AB_K27_Menu_W01.AB_K27_Menu_W01_C
/// Size: 0x0251 (0x000300 - 0x000551)
class UAB_K27_Menu_W01_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0340   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0368   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0390   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0410   (0x0038)  
	FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose;                                 // 0x0448   (0x0018)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult1;                                 // 0x0460   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0498   (0x00B0)  
	bool                                               PlayInterrupt;                                              // 0x0548   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0549   (0x0003)  MISSED
	int32_t                                            WeaponID;                                                   // 0x054C   (0x0004)  
	SDK_UNDEFINED(1,4331) /* TEnumAsByte<Enum_MenuAnimationState> */ __um(State);                                  // 0x0550   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/K27/Weapons/Models/AB_K27_Menu_W01.AB_K27_Menu_W01_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Weapons/Models/AB_K27_Menu_W01.AB_K27_Menu_W01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K27_Menu_W01_AnimGraphNode_TransitionResult_663CD35948B63FAF87A9038B8CE24672
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K27_Menu_W01_AnimGraphNode_TransitionResult_663CD35948B63FAF87A9038B8CE24672(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K27/Weapons/Models/AB_K27_Menu_W01.AB_K27_Menu_W01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K27_Menu_W01_AnimGraphNode_TransitionResult_AB67D42047BB78116FB48887FE06EBFC
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K27_Menu_W01_AnimGraphNode_TransitionResult_AB67D42047BB78116FB48887FE06EBFC(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K27/Weapons/Models/AB_K27_Menu_W01.AB_K27_Menu_W01_C.AnimNotify_ResetPlayInterrupt
	// void AnimNotify_ResetPlayInterrupt();                                                                                 // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Weapons/Models/AB_K27_Menu_W01.AB_K27_Menu_W01_C.PlayWeaponInterrupt
	// void PlayWeaponInterrupt(int32_t WeaponID);                                                                           // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Weapons/Models/AB_K27_Menu_W01.AB_K27_Menu_W01_C.AnimNotify_Test_prestige
	// void AnimNotify_Test_prestige();                                                                                      // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Weapons/Models/AB_K27_Menu_W01.AB_K27_Menu_W01_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Weapons/Models/AB_K27_Menu_W01.AB_K27_Menu_W01_C.OnMenuAnimationStateChange_Event
	// void OnMenuAnimationStateChange_Event(TEnumAsByte<Enum_MenuAnimationState> State);                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Weapons/Models/AB_K27_Menu_W01.AB_K27_Menu_W01_C.ExecuteUbergraph_AB_K27_Menu_W01
	// void ExecuteUbergraph_AB_K27_Menu_W01(int32_t EntryPoint);                                                            // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C
/// Size: 0x0037 (0x000779 - 0x0007B0)
class ABP_Menu_Slasher27_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UBP_Audio_KLR_27_C*                          BP_Audio_KLR;                                               // 0x0788   (0x0008)  
	class ABP_k27_IdleInterrupt_01_C*                  Actor_PostProcessInterupt_01;                               // 0x0790   (0x0008)  
	class ABP_k27_MenuIdleInterrupt_02_C*              Actor_PostProcessInterupt_02;                               // 0x0798   (0x0008)  
	bool                                               IdleInterrupt_01_IsPlaying;                                 // 0x07A0   (0x0001)  
	bool                                               IdleInterrupt_02_IsPlaying;                                 // 0x07A1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x07A2   (0x0006)  MISSED
	class ABP_Well_C*                                  WellActor;                                                  // 0x07A8   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C.OnNotifyEnd_2D489A3641E154EF5C2CBFA84C773EFE
	// void OnNotifyEnd_2D489A3641E154EF5C2CBFA84C773EFE(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C.OnNotifyBegin_2D489A3641E154EF5C2CBFA84C773EFE
	// void OnNotifyBegin_2D489A3641E154EF5C2CBFA84C773EFE(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C.OnInterrupted_2D489A3641E154EF5C2CBFA84C773EFE
	// void OnInterrupted_2D489A3641E154EF5C2CBFA84C773EFE(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C.OnBlendOut_2D489A3641E154EF5C2CBFA84C773EFE
	// void OnBlendOut_2D489A3641E154EF5C2CBFA84C773EFE(FName NotifyName);                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C.OnCompleted_2D489A3641E154EF5C2CBFA84C773EFE
	// void OnCompleted_2D489A3641E154EF5C2CBFA84C773EFE(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C.PlayWeaponInterupt
	// void PlayWeaponInterupt();                                                                                            // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C.Play_K27_PostProcess_Interupt_02
	// void Play_K27_PostProcess_Interupt_02();                                                                              // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C.Play_K27_PostProcess_Interrupt_01
	// void Play_K27_PostProcess_Interrupt_01();                                                                             // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C.Destroy_K27_PostProcess_IdleInterrupt_02
	// void Destroy_K27_PostProcess_IdleInterrupt_02();                                                                      // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C.Destroy_K27_PostProcess_IdleInterrupt_01
	// void Destroy_K27_PostProcess_IdleInterrupt_01();                                                                      // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C.RemoveAssetsBeforeDestroy
	// void RemoveAssetsBeforeDestroy();                                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C.DisableCloth
	// void DisableCloth();                                                                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C.EnableCloth
	// void EnableCloth();                                                                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C.BeginSmokeIn
	// void BeginSmokeIn();                                                                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher27.BP_Menu_Slasher27_C.ExecuteUbergraph_BP_Menu_Slasher27
	// void ExecuteUbergraph_BP_Menu_Slasher27(int32_t EntryPoint);                                                          // [0x61c32d0] Final|HasDefaults    
};

/// Class /Game/Characters/Slashers/Haiti/Blueprints/AB_SpiritHuskPassivePhaseWalk.AB_SpiritHuskPassivePhaseWalk_C
/// Size: 0x0218 (0x0002D0 - 0x0004E8)
class UAB_SpiritHuskPassivePhaseWalk_C : public USpiritHuskAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02D8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0310   (0x01D8)  


	/// Functions
	// Function /Game/Characters/Slashers/Haiti/Blueprints/AB_SpiritHuskPassivePhaseWalk.AB_SpiritHuskPassivePhaseWalk_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Haiti/Blueprints/AB_SpiritHuskPassivePhaseWalk.AB_SpiritHuskPassivePhaseWalk_C.ExecuteUbergraph_AB_SpiritHuskPassivePhaseWalk
	// void ExecuteUbergraph_AB_SpiritHuskPassivePhaseWalk(int32_t EntryPoint);                                              // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Attacks/PounceAttack/PounceAttackOpenSubstateCosmetic_BP.PounceAttackOpenSubstateCosmetic_BP_C
/// Size: 0x0008 (0x000030 - 0x000038)
class UPounceAttackOpenSubstateCosmetic_BP_C : public UPounceAttackOpenSubstateCosmetic
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Attacks/PounceAttack/PounceAttackOpenSubstateCosmetic_BP.PounceAttackOpenSubstateCosmetic_BP_C.OnLungeAttackEndCosmetic
	// void OnLungeAttackEndCosmetic(class ADBDPlayer* SlasherPlayer);                                                       // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Attacks/PounceAttack/PounceAttackOpenSubstateCosmetic_BP.PounceAttackOpenSubstateCosmetic_BP_C.OnLocallyObservedChangedCosmetic
	// void OnLocallyObservedChangedCosmetic(class ADBDPlayer* SlasherPlayer);                                               // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Attacks/PounceAttack/PounceAttackOpenSubstateCosmetic_BP.PounceAttackOpenSubstateCosmetic_BP_C.OnLungeAttackStartCosmetic
	// void OnLungeAttackStartCosmetic(class ADBDPlayer* SlasherPlayer);                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Attacks/PounceAttack/PounceAttackOpenSubstateCosmetic_BP.PounceAttackOpenSubstateCosmetic_BP_C.ExecuteUbergraph_PounceAttackOpenSubstateCosmetic_BP
	// void ExecuteUbergraph_PounceAttackOpenSubstateCosmetic_BP(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Attacks/SlashAttack/SlashAttackSuccessSubstate_BP.SlashAttackSuccessSubstate_BP_C
/// Size: 0x0000 (0x000118 - 0x000118)
class USlashAttackSuccessSubstate_BP_C : public UPounceAttackSuccessSubstate
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Attacks/SlashAttack/SlashAttackObstructSubstate_BP.SlashAttackObstructSubstate_BP_C
/// Size: 0x0000 (0x000128 - 0x000128)
class USlashAttackObstructSubstate_BP_C : public UPounceAttackObstructSubstate
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Attacks/SlashAttack/SlashAttackMissSubstate_BP.SlashAttackMissSubstate_BP_C
/// Size: 0x0000 (0x000120 - 0x000120)
class USlashAttackMissSubstate_BP_C : public UPounceAttackMissSubstate
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Attacks/SlashAttack/SlashAttackHittingSubstate_BP.SlashAttackHittingSubstate_BP_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class USlashAttackHittingSubstate_BP_C : public UPounceAttackHittingSubstate
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Attacks/SlashAttack/SlashAttack_BP.SlashAttack_BP_C
/// Size: 0x0000 (0x000390 - 0x000390)
class USlashAttack_BP_C : public USlashAttack
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Attacks/PounceAttack/PounceAttack_BP.PounceAttack_BP_C
/// Size: 0x0000 (0x000390 - 0x000390)
class UPounceAttack_BP_C : public UPounceAttack
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Anim_SubGraph/BPI_AB_Slasher_SubGraph_LookAt.BPI_AB_Slasher_SubGraph_LookAt_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_AB_Slasher_SubGraph_LookAt_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/BPI_AB_Slasher_SubGraph_LookAt.BPI_AB_Slasher_SubGraph_LookAt_C.SetLookAtAnimationFromMainAB
	// void SetLookAtAnimationFromMainAB(FAset_Slasher_LookAT& LookAtAnimSet);                                               // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C
/// Size: 0x2140 (0x000320 - 0x002460)
class UAB_Slasher_SubGraph_LookAtTurn_00_C : public ULookAtKillerSubAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0320   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0328   (0x0038)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_SubInput;                                     // 0x0360   (0x0120)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0480   (0x0158)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x05D8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0600   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0628   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x0650   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x0678   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult4;                            // 0x06A0   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x06C8   (0x0030)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x06F8   (0x0198)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0890   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x08B0   (0x0020)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics;                                 // 0x08D0   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics5;                                // 0x0D30   (0x0460)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1190   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x11C8   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1248   (0x00A0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x12E8   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose6;                               // 0x13A8   (0x0030)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace7;                    // 0x13D8   (0x0198)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace8;                    // 0x1570   (0x0198)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose9;                               // 0x1708   (0x0030)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend10;                           // 0x1738   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer11;                             // 0x17F8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult12;                                // 0x1878   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer13;                             // 0x18B0   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool14;                            // 0x1930   (0x00A0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend15;                           // 0x19D0   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose16;                              // 0x1A90   (0x0030)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace17;                   // 0x1AC0   (0x0198)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace18;                   // 0x1C58   (0x0198)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose19;                              // 0x1DF0   (0x0030)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend20;                           // 0x1E20   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer21;                             // 0x1EE0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult22;                                // 0x1F60   (0x0038)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace23;                   // 0x1F98   (0x0198)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose24;                              // 0x2130   (0x0030)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace25;                   // 0x2160   (0x0198)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult26;                                // 0x22F8   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x2330   (0x00B0)  
	class UBlendSpaceBase*                             AimOffset_FPV;                                              // 0x23E0   (0x0008)  
	class UBlendSpaceBase*                             AimOffset;                                                  // 0x23E8   (0x0008)  
	float                                              _animPitch;                                                 // 0x23F0   (0x0004)  
	bool                                               _firstPersonView;                                           // 0x23F4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x23F5   (0x0003)  MISSED
	class UBlendSpaceBase*                             CarryAimOffset;                                             // 0x23F8   (0x0008)  
	class UAnimSequence*                               TurnLeftSequence;                                           // 0x2400   (0x0008)  
	class UAnimSequence*                               TurnRightSequence;                                          // 0x2408   (0x0008)  
	float                                              LeftHandDynamicAlpha;                                       // 0x2410   (0x0004)  
	float                                              RightHandDynamicAlpha;                                      // 0x2414   (0x0004)  
	class UAnimSequence*                               CarryTurnLeftSequence;                                      // 0x2418   (0x0008)  
	class UAnimSequence*                               CarryTurnRightSequence;                                     // 0x2420   (0x0008)  
	class UAnimSequence*                               CurrentTurnRightSequence;                                   // 0x2428   (0x0008)  
	float                                              _allowLookAt;                                               // 0x2430   (0x0004)  
	bool                                               IsCarrying;                                                 // 0x2434   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x2435   (0x0003)  MISSED
	class UBlendSpaceBase*                             CurrentAimOffset;                                           // 0x2438   (0x0008)  
	class UAnimSequence*                               CurrentTurnLeftSequence;                                    // 0x2440   (0x0008)  
	bool                                               IsAttacking;                                                // 0x2448   (0x0001)  
	bool                                               lowerBodyTurnOnly;                                          // 0x2449   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x244A   (0x0002)  MISSED
	float                                              isCarryingAsFloat;                                          // 0x244C   (0x0004)  
	bool                                               _ignoreAimOffsetBSRelevancy;                                // 0x2450   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x2451   (0x0007)  MISSED
	class USkeletalMeshComponent*                      CharacterMesh;                                              // 0x2458   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                               // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.IsLookAtAllowed
	// bool IsLookAtAllowed();                                                                                               // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.GetBlendDuration
	// float GetBlendDuration();                                                                                             // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.IsValidCarry
	// void IsValidCarry(class UObject* animObject, bool& IsValid);                                                          // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_1E0AB618474B57CB4F4B139CD2FF153F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_1E0AB618474B57CB4F4B139CD2FF153F(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_D8D9B40B45225383413A8EBDDD151010
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_D8D9B40B45225383413A8EBDDD151010(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_3FE40A804DF9318CF70B05BA1D9A9CEB
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_3FE40A804DF9318CF70B05BA1D9A9CEB(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_08B24A344AB2AFE94EF76DA71BA99240
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_08B24A344AB2AFE94EF76DA71BA99240(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.SetLookAtAnimationFromMainAB
	// void SetLookAtAnimationFromMainAB(FAset_Slasher_LookAT& LookAtAnimSet);                                               // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.BlueprintBeginPlay
	// void BlueprintBeginPlay();                                                                                            // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C.ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00
	// void ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00(int32_t EntryPoint);                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Interfaces/ITrapPlacer.ITrapPlacer_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UITrapPlacer_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Interfaces/ITrapPlacer.ITrapPlacer_C.IsTrapPlacementValid
	// void IsTrapPlacementValid(bool& Result);                                                                              // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Characters/Slashers/Blueprints/Interfaces/ISlasherEffectInterface.ISlasherEffectInterface_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UISlasherEffectInterface_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Interfaces/ISlasherEffectInterface.ISlasherEffectInterface_C.GetTrapPlacementLocation_World
	// void GetTrapPlacementLocation_World(FVector& World Location);                                                         // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Characters/Slashers/Blueprints/Interfaces/ISlasherEffectInterface.ISlasherEffectInterface_C.GetSlasherAudioComponent
	// void GetSlasherAudioComponent(class UAkComponent*& Audio Component);                                                  // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Characters/Slashers/Blueprints/Interactions/SlasherInteractable.SlasherInteractable_C
/// Size: 0x0050 (0x000378 - 0x0003C8)
class ASlasherInteractable_C : public ASlasherInteractable
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0378   (0x0008)  
	class UGeneratorTrapStun_C*                        GeneratorTrapStun;                                          // 0x0380   (0x0008)  
	class UPalletStun_C*                               PalletStun;                                                 // 0x0388   (0x0008)  
	class UClosetStun_C*                               ClosetStun;                                                 // 0x0390   (0x0008)  
	class UStunBySkillCheck_C*                         StunBySkillCheck;                                           // 0x0398   (0x0008)  
	class UGenericStun_C*                              GenericStun;                                                // 0x03A0   (0x0008)  
	class UGenericStun_C*                              KickStun;                                                   // 0x03A8   (0x0008)  
	class UGenericStun_C*                              EvilWithinStun;                                             // 0x03B0   (0x0008)  
	class UInteractor*                                 GenericStunInteractor;                                      // 0x03B8   (0x0008)  
	class USceneComponent*                             Root;                                                       // 0x03C0   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Interactions/SlasherInteractable.SlasherInteractable_C.GetSlasher
	// void GetSlasher(class ASlasherPlayer*& Slasher);                                                                      // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Interactions/SlasherInteractable.SlasherInteractable_C.IsInteractionPossibleInternal
	// bool IsInteractionPossibleInternal(class ADBDPlayer* Player, class UInteractor* Interactor, class UInteractionDefinition* definition, EInputInteractionType interactionType); // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Characters/Slashers/Blueprints/Interactions/SlasherInteractable.SlasherInteractable_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Interactions/SlasherInteractable.SlasherInteractable_C.InitInteractable
	// void InitInteractable(class ADBDPlayer* Player);                                                                      // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Interactions/SlasherInteractable.SlasherInteractable_C.ExecuteUbergraph_SlasherInteractable
	// void ExecuteUbergraph_SlasherInteractable(int32_t EntryPoint);                                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Interactions/GenericStun.GenericStun_C
/// Size: 0x0010 (0x000650 - 0x000660)
class UGenericStun_C : public UGenericStunInteractionDefinition
{ 
public:
	SDK_UNDEFINED(16,4332) /* TArray<FString> */       __um(ForceOverrideableInteractions);                        // 0x0650   (0x0010)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Interactions/GenericStun.GenericStun_C.CanOverrideInteraction
	// bool CanOverrideInteraction(class UInteractionDefinition* Interaction);                                               // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Characters/Slashers/Blueprints/Interactions/GenericStun.GenericStun_C.IsInteractionPossibleBP
	// bool IsInteractionPossibleBP(class ADBDPlayer* Player, EInputInteractionType interactionType);                        // [0x61c32d0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Characters/Slashers/Blueprints/Interactions/PalletStun.PalletStun_C
/// Size: 0x0008 (0x000660 - 0x000668)
class UPalletStun_C : public UGenericStun_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0660   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Interactions/PalletStun.PalletStun_C.DispatchStunEvent
	// void DispatchStunEvent(class ADBDPlayer* Player);                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Interactions/PalletStun.PalletStun_C.ExecuteUbergraph_PalletStun
	// void ExecuteUbergraph_PalletStun(int32_t EntryPoint);                                                                 // [0x61c32d0] Final|HasDefaults    
};

/// Class /Game/Characters/Slashers/Blueprints/Interactions/GeneratorTrapStun.GeneratorTrapStun_C
/// Size: 0x0008 (0x000660 - 0x000668)
class UGeneratorTrapStun_C : public UGenericStun_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0660   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Interactions/GeneratorTrapStun.GeneratorTrapStun_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Interactions/GeneratorTrapStun.GeneratorTrapStun_C.ExecuteUbergraph_GeneratorTrapStun
	// void ExecuteUbergraph_GeneratorTrapStun(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Interactions/ClosetStun.ClosetStun_C
/// Size: 0x0008 (0x000660 - 0x000668)
class UClosetStun_C : public UGenericStun_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0660   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Interactions/ClosetStun.ClosetStun_C.GetCamper
	// void GetCamper(bool& NewParam);                                                                                       // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Interactions/ClosetStun.ClosetStun_C.OnInteractionEnterStart
	// void OnInteractionEnterStart(class ADBDPlayer* Player, float actualSnapTime);                                         // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Interactions/ClosetStun.ClosetStun_C.ExecuteUbergraph_ClosetStun
	// void ExecuteUbergraph_ClosetStun(int32_t EntryPoint);                                                                 // [0x61c32d0] Final|HasDefaults    
};

/// Class /Game/Characters/Campers/Blueprints/Interactions/StunBySkillCheck.StunBySkillCheck_C
/// Size: 0x0008 (0x000650 - 0x000658)
class UStunBySkillCheck_C : public UInteractionDefinition
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0650   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Interactions/StunBySkillCheck.StunBySkillCheck_C.CanOverrideInteraction
	// bool CanOverrideInteraction(class UInteractionDefinition* Interaction);                                               // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Characters/Campers/Blueprints/Interactions/StunBySkillCheck.StunBySkillCheck_C.GetCarriedCamper
	// void GetCarriedCamper(class ACamperPlayer*& camper);                                                                  // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Characters/Campers/Blueprints/Interactions/StunBySkillCheck.StunBySkillCheck_C.GetSlasher
	// void GetSlasher(class ASlasherPlayer*& Slasher);                                                                      // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Characters/Campers/Blueprints/Interactions/StunBySkillCheck.StunBySkillCheck_C.IsInteractionPossibleBP
	// bool IsInteractionPossibleBP(class ADBDPlayer* Player, EInputInteractionType interactionType);                        // [0x61c32d0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Characters/Campers/Blueprints/Interactions/StunBySkillCheck.StunBySkillCheck_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Interactions/StunBySkillCheck.StunBySkillCheck_C.OnInteractionEnterStart
	// void OnInteractionEnterStart(class ADBDPlayer* Player, float actualSnapTime);                                         // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Interactions/StunBySkillCheck.StunBySkillCheck_C.ExecuteUbergraph_StunBySkillCheck
	// void ExecuteUbergraph_StunBySkillCheck(int32_t EntryPoint);                                                           // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Interactions/Kill.Kill_C
/// Size: 0x0009 (0x000820 - 0x000829)
class UKill_C : public UKillInteractionDefinition
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0820   (0x0008)  
	bool                                               Activate_Crazy_State_Audio_Switch_During_Kill;              // 0x0828   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Interactions/Kill.Kill_C.DeactivateKillAudio
	// void DeactivateKillAudio(class ADBDPlayer* interactingPlayer);                                                        // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Interactions/Kill.Kill_C.ActivateKillAudio
	// void ActivateKillAudio(class ADBDPlayer* interactingPlayer);                                                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Interactions/Kill.Kill_C.OnKillAudioActivation
	// void OnKillAudioActivation(bool Active, class ADBDPlayer* interactingPlayer);                                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Interactions/Kill.Kill_C.ExecuteUbergraph_Kill
	// void ExecuteUbergraph_Kill(int32_t EntryPoint);                                                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Interactions/TheOnryo/OnryoKill.OnryoKill_C
/// Size: 0x0000 (0x000829 - 0x000829)
class UOnryoKill_C : public UKill_C
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Interactions/TheOnryo/BP_TheOnryoCondemnMoriInteraction.BP_TheOnryoCondemnMoriInteraction_C
/// Size: 0x000C (0x000820 - 0x00082C)
class UBP_TheOnryoCondemnMoriInteraction_C : public UCondemnMoriInteraction
{ 
public:
	FName                                              CondemnMoriMontageID;                                       // 0x0820   (0x000C)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Interactions/TheOnryo/BP_TheOnryoCondemnMoriInteraction.BP_TheOnryoCondemnMoriInteraction_C.GetExitMontage
	// FAnimationMontageDescriptor GetExitMontage(class ADBDPlayer* Player);                                                 // [0x61c32d0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Characters/Slashers/Blueprints/Attacks/PounceAttack/PounceAttackSuccessSubstate_BP.PounceAttackSuccessSubstate_BP_C
/// Size: 0x0000 (0x000118 - 0x000118)
class UPounceAttackSuccessSubstate_BP_C : public UPounceAttackSuccessSubstate
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Attacks/PounceAttack/PounceAttackOpenSubstate_BP.PounceAttackOpenSubstate_BP_C
/// Size: 0x0000 (0x000130 - 0x000130)
class UPounceAttackOpenSubstate_BP_C : public UPounceAttackOpenSubstate
{ 
public:


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Attacks/PounceAttack/PounceAttackOpenSubstate_BP.PounceAttackOpenSubstate_BP_C.IsLungeAttackAugmented
	// void IsLungeAttackAugmented(class ADBDPlayer* Slasher Player, bool& IsLungeAttackAugmented);                          // [0x61c32d0] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Characters/Slashers/Blueprints/Attacks/PounceAttack/PounceAttackObstructSubstate_BP.PounceAttackObstructSubstate_BP_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UPounceAttackObstructSubstate_BP_C : public UPounceAttackObstructSubstate
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Attacks/PounceAttack/PounceAttackMissSubstate_BP.PounceAttackMissSubstate_BP_C
/// Size: 0x0000 (0x000120 - 0x000120)
class UPounceAttackMissSubstate_BP_C : public UPounceAttackMissSubstate
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Attacks/PounceAttack/PounceAttackHittingSubstate_BP.PounceAttackHittingSubstate_BP_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UPounceAttackHittingSubstate_BP_C : public UPounceAttackHittingSubstate
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C
/// Size: 0x14E9 (0x000300 - 0x0017E9)
class UAB_Menu_Slasher27_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0340   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0368   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x03E8   (0x0038)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0420   (0x0020)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0440   (0x00A8)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x04E8   (0x0008)  MISSED
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics;                                 // 0x04F0   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics0;                                // 0x0950   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics1;                                // 0x0DB0   (0x0460)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x1210   (0x0020)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics2;                                // 0x1230   (0x0460)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult3;                                 // 0x1690   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x16C8   (0x00B0)  
	class ABP_Menu_Slasher27_C*                        KillerBP;                                                   // 0x1778   (0x0008)  
	bool                                               IsLegendary;                                                // 0x1780   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x1781   (0x0003)  MISSED
	FRotator                                           StartRot;                                                   // 0x1784   (0x000C)  
	SDK_UNDEFINED(16,4333) /* FString */               __um(CurrentMenuString);                                    // 0x1790   (0x0010)  
	FRotator                                           CharacterRotationBeforeJumpScare;                           // 0x17A0   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x17AC   (0x0004)  MISSED
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x17B0   (0x0038)  
	EGameFlowStep                                      CurrentMenu;                                                // 0x17E8   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_TransitionResult_F521E66243F7D658ECD60EABD1FD6098
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_TransitionResult_F521E66243F7D658ECD60EABD1FD6098(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_3A26F1734FC9DE8BBD6B39895C1BA90F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_3A26F1734FC9DE8BBD6B39895C1BA90F(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_388D65DB4FF539B276F58B9B40396116
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_388D65DB4FF539B276F58B9B40396116(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_AFBF06C142D14A80305DC69BD20DAE36
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_AFBF06C142D14A80305DC69BD20DAE36(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_6EF9BF254B3C640B6710C0BB5707683E
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_6EF9BF254B3C640B6710C0BB5707683E(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.LockRotation
	// void LockRotation(bool lock);                                                                                         // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimNotify_FX_K27_PostprocessInterrupt_02
	// void AnimNotify_FX_K27_PostprocessInterrupt_02();                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimNotify_FX_K27_IdleInterrupt_01
	// void AnimNotify_FX_K27_IdleInterrupt_01();                                                                            // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimNotify_FX_K27_IdleInterrupt_01_Destroy
	// void AnimNotify_FX_K27_IdleInterrupt_01_Destroy();                                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimNotify_FX_K27_IdleInterrupt_02_Destroy
	// void AnimNotify_FX_K27_IdleInterrupt_02_Destroy();                                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimNotify_OnJumpScareAnimStarted
	// void AnimNotify_OnJumpScareAnimStarted();                                                                             // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimNotify_OnJumpScareAnimEnded
	// void AnimNotify_OnJumpScareAnimEnded();                                                                               // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimNotify_IntroStart
	// void AnimNotify_IntroStart();                                                                                         // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.AnimNotify_IntroEnd
	// void AnimNotify_IntroEnd();                                                                                           // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher27.AB_Menu_Slasher27_C.ExecuteUbergraph_AB_Menu_Slasher27
	// void ExecuteUbergraph_AB_Menu_Slasher27(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/K27/Blueprints/AB_Slasher_SubGraph_Locomotion_Override.AB_Slasher_SubGraph_Locomotion_Override_27_C
/// Size: 0x1771 (0x000610 - 0x001D81)
class UAB_Slasher_SubGraph_Locomotion_Override_27_C : public UKillerLocomotionSubAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0610   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0618   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0650   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0678   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x06A0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x06C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x06F0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult4;                            // 0x0718   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult5;                            // 0x0740   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult6;                            // 0x0768   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult7;                            // 0x0790   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult8;                            // 0x07B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult9;                            // 0x07E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult10;                           // 0x0808   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0830   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x08B0   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer11;                             // 0x08E8   (0x0080)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0968   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0A50   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer12;                           // 0x0AF0   (0x00E8)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer13;                             // 0x0BD8   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool14;                            // 0x0C58   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool15;                            // 0x0CF8   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult16;                                // 0x0D98   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer17;                             // 0x0DD0   (0x0080)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x0E50   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer18;                             // 0x0F10   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult19;                                // 0x0F90   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer20;                             // 0x0FC8   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool21;                            // 0x1048   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer22;                             // 0x10E8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult23;                                // 0x1168   (0x0038)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend24;                           // 0x11A0   (0x00C0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer25;                             // 0x1260   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer26;                             // 0x12E0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult27;                                // 0x1360   (0x0038)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer28;                           // 0x1398   (0x00E8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult29;                                // 0x1480   (0x0038)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer30;                           // 0x14B8   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool31;                            // 0x15A0   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer32;                             // 0x1640   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool33;                            // 0x16C0   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer34;                             // 0x1760   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool35;                            // 0x17E0   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool36;                            // 0x1880   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer37;                           // 0x1920   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool38;                            // 0x1A08   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer39;                             // 0x1AA8   (0x0080)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer40;                           // 0x1B28   (0x00E8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult41;                                // 0x1C10   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x1C48   (0x00B0)  
	bool                                               _isCarrying;                                                // 0x1CF8   (0x0001)  
	EInteractionAnimation                              _interactionType;                                           // 0x1CF9   (0x0001)  
	bool                                               _isInAir;                                                   // 0x1CFA   (0x0001)  
	bool                                               _isIdle;                                                    // 0x1CFB   (0x0001)  
	bool                                               _isAttacking;                                               // 0x1CFC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x1CFD   (0x0003)  MISSED
	float                                              _animSpeed;                                                 // 0x1D00   (0x0004)  
	float                                              _animDirection;                                             // 0x1D04   (0x0004)  
	class UAnimSequence*                               Stand;                                                      // 0x1D08   (0x0008)  
	class UAnimSequence*                               Idle;                                                       // 0x1D10   (0x0008)  
	class UBlendSpace*                                 BS_Locomotion;                                              // 0x1D18   (0x0008)  
	class UBlendSpace*                                 BS_Locomotion_FPV;                                          // 0x1D20   (0x0008)  
	class UAnimSequence*                               Idle_FPV;                                                   // 0x1D28   (0x0008)  
	class UBlendSpace*                                 BS_Carry_Locomotion;                                        // 0x1D30   (0x0008)  
	class UAnimSequence*                               EndGameWalk;                                                // 0x1D38   (0x0008)  
	class UAnimSequence*                               Search_Locker;                                              // 0x1D40   (0x0008)  
	class ASlasherPlayer*                              _mySlasher;                                                 // 0x1D48   (0x0008)  
	bool                                               _carryFPVRightArm;                                          // 0x1D50   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x1D51   (0x0007)  MISSED
	class UBlendSpace*                                 BS_Carry_locomotion_FPV;                                    // 0x1D58   (0x0008)  
	class UAnimSequence*                               Search_Locker_FPV;                                          // 0x1D60   (0x0008)  
	bool                                               _fPV;                                                       // 0x1D68   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x1D69   (0x0003)  MISSED
	float                                              _lateralVelocity;                                           // 0x1D6C   (0x0004)  
	float                                              _forwardVelocity;                                           // 0x1D70   (0x0004)  
	bool                                               _newLocomotion;                                             // 0x1D74   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x1D75   (0x0003)  MISSED
	float                                              Lateral_Direction;                                          // 0x1D78   (0x0004)  
	float                                              Forward_Speed;                                              // 0x1D7C   (0x0004)  
	bool                                               _AltFPV;                                                    // 0x1D80   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher_SubGraph_Locomotion_Override.AB_Slasher_SubGraph_Locomotion_Override_27_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher_SubGraph_Locomotion_Override.AB_Slasher_SubGraph_Locomotion_Override_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Locomotion_Override_27_AnimGraphNode_LayeredBoneBlend_2CAC3EE242984002EAA626A2755F3DFD
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Locomotion_Override_27_AnimGraphNode_LayeredBoneBlend_2CAC3EE242984002EAA626A2755F3DFD(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher_SubGraph_Locomotion_Override.AB_Slasher_SubGraph_Locomotion_Override_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Locomotion_Override_27_AnimGraphNode_LayeredBoneBlend_84430B914EB49412F35DEE9834C2D039
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Locomotion_Override_27_AnimGraphNode_LayeredBoneBlend_84430B914EB49412F35DEE9834C2D039(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher_SubGraph_Locomotion_Override.AB_Slasher_SubGraph_Locomotion_Override_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Locomotion_Override_27_AnimGraphNode_TransitionResult_7A683278435BE62D2A76EFA6C071ABE9
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Locomotion_Override_27_AnimGraphNode_TransitionResult_7A683278435BE62D2A76EFA6C071ABE9(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher_SubGraph_Locomotion_Override.AB_Slasher_SubGraph_Locomotion_Override_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Locomotion_Override_27_AnimGraphNode_TransitionResult_855C7BAF4385F29BAC08FFA447FD62FC
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Locomotion_Override_27_AnimGraphNode_TransitionResult_855C7BAF4385F29BAC08FFA447FD62FC(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher_SubGraph_Locomotion_Override.AB_Slasher_SubGraph_Locomotion_Override_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Locomotion_Override_27_AnimGraphNode_TransitionResult_094EF4A640160539B492EEA7609993E5
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Locomotion_Override_27_AnimGraphNode_TransitionResult_094EF4A640160539B492EEA7609993E5(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher_SubGraph_Locomotion_Override.AB_Slasher_SubGraph_Locomotion_Override_27_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher_SubGraph_Locomotion_Override.AB_Slasher_SubGraph_Locomotion_Override_27_C.ExecuteUbergraph_AB_Slasher_SubGraph_Locomotion_Override
	// void ExecuteUbergraph_AB_Slasher_SubGraph_Locomotion_Override(int32_t EntryPoint);                                    // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C
/// Size: 0x038D (0x001680 - 0x001A0D)
class ABP_Slasher_Character_C : public ASlasherPlayer
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1680   (0x0008)  
	class UBP_KillerScoringComponent_C*                KillerScoringComponent;                                     // 0x1688   (0x0008)  
	class USlasherFootstepPerceptionComponent_C*       SlasherFootstepPerceptionComponent;                         // 0x1690   (0x0008)  
	class USignificanceManagerComponent*               SignificanceManager;                                        // 0x1698   (0x0008)  
	class USlasherTerrorRadiusEmitterComponent*        SlasherTerrorRadiusEmitter;                                 // 0x16A0   (0x0008)  
	class UBPNearestOutsideMapBoundsLocator_C*         BPNearestOutsideMapBoundsLocator;                           // 0x16A8   (0x0008)  
	class UPositionLagCompensationComponent*           PositionLagCompensation;                                    // 0x16B0   (0x0008)  
	class UCharacterOptimizer*                         CharacterOptimizer;                                         // 0x16B8   (0x0008)  
	class UWiggleMotionComponent*                      WiggleMotion;                                               // 0x16C0   (0x0008)  
	class UEtherealComponent*                          Ethereal;                                                   // 0x16C8   (0x0008)  
	class UKillerFlashlightSFXComponent*               KillerFlashlightSFX;                                        // 0x16D0   (0x0008)  
	class UInteractionAnalyticsComponent*              InteractionAnalytics;                                       // 0x16D8   (0x0008)  
	class UBlindFlashlightTargetFXComponent*           BlindFlashlightTargetFX;                                    // 0x16E0   (0x0008)  
	class UFlashlightableComponent*                    BodyFlashlightable;                                         // 0x16E8   (0x0008)  
	class UFlashlightableComponent*                    EyesFlashlightable;                                         // 0x16F0   (0x0008)  
	class UBP_KillerLeftFootGroundDetector_C*          LeftFootGroundDetector;                                     // 0x16F8   (0x0008)  
	class UBP_KillerRightFootGroundDetector_C*         RightFootGroundDetector;                                    // 0x1700   (0x0008)  
	class UQuestEventsHandler*                         QuestEventsHandler;                                         // 0x1708   (0x0008)  
	class UBP_RedStainComponent_C*                     RedStainComponent;                                          // 0x1710   (0x0008)  
	class UGameEventListenerCollectionComponent*       GameEventListenerCollection;                                // 0x1718   (0x0008)  
	class UCapsulePlayerOverlapComponent*              pawnDetector;                                               // 0x1720   (0x0008)  
	class UScreenSpaceLocationComponent*               ScreenSpaceLocation_MiddleT;                                // 0x1728   (0x0008)  
	class UParticleSystemComponent*                    P_Vignette_EndGame_Top;                                     // 0x1730   (0x0008)  
	class UEndGameEffectsComponent_C*                  EndGameEffectsComponent;                                    // 0x1738   (0x0008)  
	class UCameraComponent*                            Camera1;                                                    // 0x1740   (0x0008)  
	class USlasherOutlineUpdateStrategy*               SlasherOutlineUpdateStrategy;                               // 0x1748   (0x0008)  
	class UCustomizedAudioComponent*                   CustomizedAudio;                                            // 0x1750   (0x0008)  
	class UPostProcessComponent*                       BlindedPostProcess_new;                                     // 0x1758   (0x0008)  
	class UStaticMeshComponent*                        AttackZone_004;                                             // 0x1760   (0x0008)  
	class USphereComponent*                            audioAmbientDetector;                                       // 0x1768   (0x0008)  
	class UStaticMeshComponent*                        AttackZone_Wedge_Large;                                     // 0x1770   (0x0008)  
	class UStaticMeshComponent*                        AttackZone_Wedge_Standard;                                  // 0x1778   (0x0008)  
	class UPostProcessComponent*                       VignetteBloodlust;                                          // 0x1780   (0x0008)  
	class UFirecrackerEffectHandlerComponent*          FirecrackerEffectHandler;                                   // 0x1788   (0x0008)  
	class UStaticMeshComponent*                        AttackZoneHigh_003;                                         // 0x1790   (0x0008)  
	class UStaticMeshComponent*                        AttackZoneHigh_002;                                         // 0x1798   (0x0008)  
	class UStaticMeshComponent*                        AttackZoneHigh_001;                                         // 0x17A0   (0x0008)  
	class UBoxComponent*                               ObstructionShape;                                           // 0x17A8   (0x0008)  
	class UStaticMeshComponent*                        AttackZone_003;                                             // 0x17B0   (0x0008)  
	class UStaticMeshComponent*                        AttackZone_002;                                             // 0x17B8   (0x0008)  
	class UStaticMeshComponent*                        AttackZone_001;                                             // 0x17C0   (0x0008)  
	class USceneComponent*                             attackZonePivot;                                            // 0x17C8   (0x0008)  
	class UAkComponent*                                Ak_Audio_Killer;                                            // 0x17D0   (0x0008)  
	class UBoxComponent*                               ChainsawObstruction;                                        // 0x17D8   (0x0008)  
	class UCapsuleComponent*                           InteractionDetector;                                        // 0x17E0   (0x0008)  
	class USceneComponent*                             CamperDropOffPoint;                                         // 0x17E8   (0x0008)  
	class UDBDOutlineComponent*                        DBDOutline;                                                 // 0x17F0   (0x0008)  
	class UCustomizedSkeletalMesh*                     CustomizedSkeletalMesh;                                     // 0x17F8   (0x0008)  
	class UBP_Mesh2SoundPlayer_C*                      BP_Mesh2SoundPlayer;                                        // 0x1800   (0x0008)  
	class UBoxComponent*                               BlinkAttackLockZone;                                        // 0x1808   (0x0008)  
	class UScreenSpaceLocationComponent*               ScreenSpaceLocation_LeftT;                                  // 0x1810   (0x0008)  
	class UScreenSpaceLocationComponent*               ScreenSpaceLocation_RightT;                                 // 0x1818   (0x0008)  
	class UParticleSystemComponent*                    P_Vignette_LeftB;                                           // 0x1820   (0x0008)  
	class UScreenSpaceLocationComponent*               ScreenSpaceLocation_LeftB;                                  // 0x1828   (0x0008)  
	class UParticleSystemComponent*                    P_Vignette_RightB;                                          // 0x1830   (0x0008)  
	class UScreenSpaceLocationComponent*               ScreenSpaceLocation_RightB;                                 // 0x1838   (0x0008)  
	class ULoudNoiseHUDIndicator*                      LoudNoiseHUDIndicator;                                      // 0x1840   (0x0008)  
	class UParticleSystemComponent*                    Fx_FSbloodfx;                                               // 0x1848   (0x0008)  
	float                                              Timeline_0_Distortion_55E19FBE44A263E2F58D6CBD8B8F6FF5;     // 0x1850   (0x0004)  
	float                                              Timeline_0_Fade_55E19FBE44A263E2F58D6CBD8B8F6FF5;           // 0x1854   (0x0004)  
	SDK_UNDEFINED(1,4334) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_0__Direction_55E19FBE44A263E2F58D6CBD8B8F6FF5); // 0x1858   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x1859   (0x0007)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x1860   (0x0008)  
	float                                              TML_LungeAttack_Vignette_C6A1D26A45B8D21BE38076A15A900F67;  // 0x1868   (0x0004)  
	SDK_UNDEFINED(1,4335) /* TEnumAsByte<ETimelineDirection> */ __um(TML_LungeAttack__Direction_C6A1D26A45B8D21BE38076A15A900F67); // 0x186C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x186D   (0x0003)  MISSED
	class UTimelineComponent*                          TML_LungeAttack;                                            // 0x1870   (0x0008)  
	float                                              BloodSplatterOpacityAnim_NewTrack_0_C8565C8848DC851A61C85CA0D1C69D9F; // 0x1878   (0x0004)  
	SDK_UNDEFINED(1,4336) /* TEnumAsByte<ETimelineDirection> */ __um(BloodSplatterOpacityAnim__Direction_C8565C8848DC851A61C85CA0D1C69D9F); // 0x187C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x187D   (0x0003)  MISSED
	class UTimelineComponent*                          BloodSplatterOpacityAnim;                                   // 0x1880   (0x0008)  
	float                                              BloodSplatterFrameAnim_NewTrack_0_89AF70DC41EF75E7CD3BF6B72CCE267B; // 0x1888   (0x0004)  
	SDK_UNDEFINED(1,4337) /* TEnumAsByte<ETimelineDirection> */ __um(BloodSplatterFrameAnim__Direction_89AF70DC41EF75E7CD3BF6B72CCE267B); // 0x188C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x188D   (0x0003)  MISSED
	class UTimelineComponent*                          BloodSplatterFrameAnim;                                     // 0x1890   (0x0008)  
	float                                              Bloodlust_Timeline_Blend_7510578B48E7070D9984B9923F94253F;  // 0x1898   (0x0004)  
	SDK_UNDEFINED(1,4338) /* TEnumAsByte<ETimelineDirection> */ __um(Bloodlust_Timeline__Direction_7510578B48E7070D9984B9923F94253F); // 0x189C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x189D   (0x0003)  MISSED
	class UTimelineComponent*                          Bloodlust_Timeline;                                         // 0x18A0   (0x0008)  
	float                                              Timeline_1_Dissolve_99584B454ECDABDE86BE6E8CD0241B00;       // 0x18A8   (0x0004)  
	SDK_UNDEFINED(1,4339) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_1__Direction_99584B454ECDABDE86BE6E8CD0241B00); // 0x18AC   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x18AD   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline0;                                                  // 0x18B0   (0x0008)  
	float                                              BaseTurnRate;                                               // 0x18B8   (0x0004)  
	float                                              BaseLookUpRate;                                             // 0x18BC   (0x0004)  
	FTransform                                         CenterOfWorld;                                              // 0x18C0   (0x0030)  
	bool                                               Attack;                                                     // 0x18F0   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x18F1   (0x0003)  MISSED
	float                                              isTurning;                                                  // 0x18F4   (0x0004)  
	class UMaterialInstanceDynamic*                    CharacterHeadMesh;                                          // 0x18F8   (0x0008)  
	class USkinnedMeshComponent*                       MeshMachette;                                               // 0x1900   (0x0008)  
	class UMaterialInstanceDynamic*                    Trap_Material;                                              // 0x1908   (0x0008)  
	bool                                               TrapPlacementValid;                                         // 0x1910   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x1911   (0x0003)  MISSED
	float                                              Trap_Indicator_Offset;                                      // 0x1914   (0x0004)  
	float                                              BaseMaxWalkSpeed;                                           // 0x1918   (0x0004)  
	float                                              baseTerrorRadius;                                           // 0x191C   (0x0004)  
	class ACamperPlayer*                               SurvivorBeingKilled;                                        // 0x1920   (0x0008)  
	SDK_UNDEFINED(16,4340) /* FString */               __um(DissolveMaterialGroupName);                            // 0x1928   (0x0010)  
	SDK_UNDEFINED(16,4341) /* FString */               __um(FirstPersonMaterialGroupName);                         // 0x1938   (0x0010)  
	SDK_UNDEFINED(16,4342) /* FString */               __um(DissolveGroupName);                                    // 0x1948   (0x0010)  
	SDK_UNDEFINED(16,4343) /* FString */               __um(FirstPersonDissolve);                                  // 0x1958   (0x0010)  
	SDK_UNDEFINED(16,4344) /* FString */               __um(FirstPersonGroupName);                                 // 0x1968   (0x0010)  
	bool                                               IsDissolving;                                               // 0x1978   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x1979   (0x0003)  MISSED
	FName                                              Weapon;                                                     // 0x197C   (0x000C)  
	bool                                               RootMeshIsHeadOnly;                                         // 0x1988   (0x0001)  
	unsigned char                                      UnknownData09_5[0x3];                                       // 0x1989   (0x0003)  MISSED
	FVector                                            TrapPlacementRaycastStart;                                  // 0x198C   (0x000C)  
	FVector                                            TrapPlacementRaycastEnd;                                    // 0x1998   (0x000C)  
	unsigned char                                      UnknownData10_5[0x4];                                       // 0x19A4   (0x0004)  MISSED
	class UMaterialInstanceDynamic*                    MID_Damage;                                                 // 0x19A8   (0x0008)  
	class UMaterialInstanceDynamic*                    MID_LockOn;                                                 // 0x19B0   (0x0008)  
	class UCurveFloat*                                 BlindnessCurve;                                             // 0x19B8   (0x0008)  
	class UCurveFloat*                                 BlindnessMaterialCurve;                                     // 0x19C0   (0x0008)  
	class UMaterialInstanceDynamic*                    PP_Stun;                                                    // 0x19C8   (0x0008)  
	class UMaterialInstanceDynamic*                    PP_Smoke;                                                   // 0x19D0   (0x0008)  
	class UMaterialInstanceDynamic*                    PP_Chase;                                                   // 0x19D8   (0x0008)  
	class UMaterialInstanceDynamic*                    PP_Flashlight;                                              // 0x19E0   (0x0008)  
	class UMaterialInstanceDynamic*                    PP_SlasherBlood;                                            // 0x19E8   (0x0008)  
	float                                              DOF_Focus_Point;                                            // 0x19F0   (0x0004)  
	unsigned char                                      UnknownData11_5[0x4];                                       // 0x19F4   (0x0004)  MISSED
	class UMaterialInstanceDynamic*                    PP_LungeAttack;                                             // 0x19F8   (0x0008)  
	FName                                              CameraSocketName;                                           // 0x1A00   (0x000C)  
	bool                                               IsSnowmanActive_;                                           // 0x1A0C   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.GetTrapPlacementLocation_World
	// void GetTrapPlacementLocation_World(FVector& World Location);                                                         // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.GetSlasherAudioComponent
	// void GetSlasherAudioComponent(class UAkComponent*& Audio Component);                                                  // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.IsTrapPlacementValid
	// void IsTrapPlacementValid(bool& Result);                                                                              // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.SetAudioSwitchSubKillerState
	// void SetAudioSwitchSubKillerState(FString switchState);                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Initialize Blinding FX Component
	// void Initialize Blinding FX Component();                                                                              // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.PlayAudioKillerGameStart
	// void PlayAudioKillerGameStart();                                                                                      // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.CreateSlasherBloodPP
	// void CreateSlasherBloodPP();                                                                                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.IsActivePhaseWalking
	// void IsActivePhaseWalking(bool& Result);                                                                              // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ShouldShowBlackVignette
	// void ShouldShowBlackVignette(bool& Show);                                                                             // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.IsPassivePhaseWalking
	// void IsPassivePhaseWalking(bool& Result);                                                                             // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.LocallyObservedCharacterIsShowingFakeKillerStain
	// bool LocallyObservedCharacterIsShowingFakeKillerStain();                                                              // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.GetCustomizedSkeletalMesh
	// class UCustomizedSkeletalMesh* GetCustomizedSkeletalMesh();                                                           // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.GetPlayerDropOffPoint
	// FVector GetPlayerDropOffPoint();                                                                                      // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.IsCloaking
	// bool IsCloaking();                                                                                                    // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.GetCurrentStalkTier
	// void GetCurrentStalkTier(float& currentTier);                                                                         // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.UpdateStalkModeEffect
	// void UpdateStalkModeEffect(float StalkModePercent);                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.SetDetectionZones
	// void SetDetectionZones(EAttackZoneSet Attack Zones);                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.isFirstPerson
	// void isFirstPerson(bool& First Person);                                                                               // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.IsUncloaking
	// bool IsUncloaking();                                                                                                  // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.SetMacheteCustomDepth
	// void SetMacheteCustomDepth();                                                                                         // [0x61c32d0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ResetMaterials
	// void ResetMaterials();                                                                                                // [0x61c32d0] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ApplyFirstPersonShaders
	// void ApplyFirstPersonShaders();                                                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x61c32d0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Timeline_1__FinishedFunc
	// void Timeline_1__FinishedFunc();                                                                                      // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Timeline_1__UpdateFunc
	// void Timeline_1__UpdateFunc();                                                                                        // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Bloodlust Timeline__FinishedFunc
	// void Bloodlust Timeline__FinishedFunc();                                                                              // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Bloodlust Timeline__UpdateFunc
	// void Bloodlust Timeline__UpdateFunc();                                                                                // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.TML_LungeAttack__FinishedFunc
	// void TML_LungeAttack__FinishedFunc();                                                                                 // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.TML_LungeAttack__UpdateFunc
	// void TML_LungeAttack__UpdateFunc();                                                                                   // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                      // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                        // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterOpacityAnim__FinishedFunc
	// void BloodSplatterOpacityAnim__FinishedFunc();                                                                        // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterOpacityAnim__UpdateFunc
	// void BloodSplatterOpacityAnim__UpdateFunc();                                                                          // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterFrameAnim__FinishedFunc
	// void BloodSplatterFrameAnim__FinishedFunc();                                                                          // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterFrameAnim__UpdateFunc
	// void BloodSplatterFrameAnim__UpdateFunc();                                                                            // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ActivatePounceStateVFX
	// void ActivatePounceStateVFX();                                                                                        // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Switch Kanobo To Demon Mode
	// void Switch Kanobo To Demon Mode();                                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Switch Kanobo to Normal Mode
	// void Switch Kanobo to Normal Mode();                                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Hide Oni Katana
	// void Hide Oni Katana();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Show Oni Katana
	// void Show Oni Katana();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Destroy Blood Orb
	// void Destroy Blood Orb();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Switch Oni Weapons To Normal
	// void Switch Oni Weapons To Normal();                                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ShowDemonCosmetic
	// void ShowDemonCosmetic();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.HideDemonCosmetic
	// void HideDemonCosmetic();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.DisableDemonMode
	// void DisableDemonMode();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Hide Oni Katana_TPV
	// void Hide Oni Katana_TPV();                                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ShowGunBullet
	// void ShowGunBullet();                                                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.HideGunBullet
	// void HideGunBullet();                                                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.SpawnFakeBullet
	// void SpawnFakeBullet();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ActivateSacrificeCamBlood
	// void ActivateSacrificeCamBlood();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.StartDeathBedDissolve
	// void StartDeathBedDissolve();                                                                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.DeactivateKnockoutVFX
	// void DeactivateKnockoutVFX();                                                                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ActivateKnockoutVFX
	// void ActivateKnockoutVFX();                                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.SpawnFullScreenBlood
	// void SpawnFullScreenBlood();                                                                                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.StartDeathBedRelocateVignette
	// void StartDeathBedRelocateVignette();                                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ActivateAttemptEscapeVFX
	// void ActivateAttemptEscapeVFX();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ShowSyringe
	// void ShowSyringe();                                                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.HideSyringe
	// void HideSyringe();                                                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.AnimateLiquidSyringe
	// void AnimateLiquidSyringe();                                                                                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ActivateVignetteOnWallCollision
	// void ActivateVignetteOnWallCollision();                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.HideSyringeOnStun
	// void HideSyringeOnStun();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_SpawnWipeVFX
	// void K22_SpawnWipeVFX();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightDormantMain
	// void K22_HighlightDormantMain(bool IsDormantMain?);                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightDormant
	// void K22_HighlightDormant(bool IsDormant?);                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightMissJump
	// void K22_HighlightMissJump();                                                                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_DormantAttachedSlasher
	// void K22_DormantAttachedSlasher();                                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_JumpTrail_Activate
	// void K22_JumpTrail_Activate();                                                                                        // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_JumpTrail_Deactivate
	// void K22_JumpTrail_Deactivate();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_ReleaseBrother
	// void K22_ReleaseBrother();                                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_MembraneRecovery
	// void K22_MembraneRecovery();                                                                                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_MembraneDelete
	// void K22_MembraneDelete();                                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_BabyBloodDissolve
	// void K22_BabyBloodDissolve();                                                                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_BabyRespawn
	// void K22_BabyRespawn();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_Jump_Active
	// void K22_Jump_Active();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_Jump_Inactive
	// void K22_Jump_Inactive();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.On Execution
	// void On Execution();                                                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_WrongLanding
	// void K22_WrongLanding(bool Wrong Landing);                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_AttachedToSurvivor_VFX
	// void K22_AttachedToSurvivor_VFX();                                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_DetachedFromSurvivor_VFX
	// void K22_DetachedFromSurvivor_VFX();                                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_WrongLandingVignette
	// void K22_WrongLandingVignette(bool WrongLanding);                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K12_GetToxinVignette
	// void K12_GetToxinVignette(EBombType Bomb Type);                                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K12_GetAntidoteVignette
	// void K12_GetAntidoteVignette();                                                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_AntidoteEnd
	// void K12_Killer_AntidoteEnd();                                                                                        // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_AntidoteBegin
	// void K12_Killer_AntidoteBegin();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_BombSmokeColor
	// void K12_Killer_BombSmokeColor();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_RemoveVignette
	// void K12_Killer_RemoveVignette();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_PlaceVignette
	// void K12_Killer_PlaceVignette();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_QuickDissolveBrother
	// void K22_QuickDissolveBrother();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Camper_AntidoteBoostVignette_Start
	// void Camper_AntidoteBoostVignette_Start();                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Camper_AntidoteBoostVignette_End
	// void Camper_AntidoteBoostVignette_End();                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_BrotherDissolveLocker
	// void K22_BrotherDissolveLocker();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightMissJump_Stop
	// void K22_HighlightMissJump_Stop();                                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K22_IsAttachedLocker
	// void K22_IsAttachedLocker(bool IsAttachedLocker);                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.AddBloodDrippingGKMoriMale
	// void AddBloodDrippingGKMoriMale();                                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ReturnOniToNormal
	// void ReturnOniToNormal();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Survivor_BoonRadius_Enter
	// void Survivor_BoonRadius_Enter();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Survivor_BoonRadius_Exit
	// void Survivor_BoonRadius_Exit();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Boon_Unbound
	// void Boon_Unbound();                                                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_1_OnFlashlightAddedRemovedEvent__DelegateSignature
	// void BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_1_OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* Flashlight); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_0_OnFlashlightAddedRemovedEvent__DelegateSignature
	// void BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_0_OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* Flashlight); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Stop Travelling PP
	// void Stop Travelling PP();                                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Stop Saliva VFX
	// void Stop Saliva VFX();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__BodyFlashlightable_K2Node_ComponentBoundEvent_2_OnFlashlightLitChangedEvent__DelegateSignature
	// void BndEvt__BodyFlashlightable_K2Node_ComponentBoundEvent_2_OnFlashlightLitChangedEvent__DelegateSignature(bool IsLit); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
	// void BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory category, FString switchState); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Start Saliva VFX
	// void Start Saliva VFX();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Stop Pounce VFX
	// void Stop Pounce VFX();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Start Pounce VFX
	// void Start Pounce VFX();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Dissolve
	// void Dissolve(bool Dissolve);                                                                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Stop Travelling Dissolve
	// void Stop Travelling Dissolve();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Telekinesis On
	// void Telekinesis On();                                                                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Telekinesis Off
	// void Telekinesis Off();                                                                                               // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Start Travelling Dissolve
	// void Start Travelling Dissolve();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.NurseInvisible On
	// void NurseInvisible On();                                                                                             // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.NurseInvisible Off
	// void NurseInvisible Off();                                                                                            // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.FX_SetTrap
	// void FX_SetTrap();                                                                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.FX_TrapImpact
	// void FX_TrapImpact();                                                                                                 // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.FX_TrapImpact Off
	// void FX_TrapImpact Off();                                                                                             // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.FX_BloodDrops
	// void FX_BloodDrops();                                                                                                 // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Start Travelling PP
	// void Start Travelling PP();                                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.UpdateRageTierEffect
	// void UpdateRageTierEffect(int32_t previousTier, int32_t currentTier);                                                 // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.FX_BloodDropWipe
	// void FX_BloodDropWipe();                                                                                              // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.FX_WI_BloodDrops
	// void FX_WI_BloodDrops();                                                                                              // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ActivateEndGameVignette
	// void ActivateEndGameVignette(bool IsActive);                                                                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ActivatePlayerGlitchVFX
	// void ActivatePlayerGlitchVFX(class UMaterialInstanceDynamic*& GlitchFX, bool Face, bool Madness, bool killer);        // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.EvaluateBlackVignetteVisibility
	// void EvaluateBlackVignetteVisibility();                                                                               // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.OnStealthChanged
	// void OnStealthChanged(bool stealth);                                                                                  // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ActivatePlayerLightningVFX
	// void ActivatePlayerLightningVFX(class UMaterialInstanceDynamic*& LightningFX, bool intense);                          // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ReturnToDemonMode
	// void ReturnToDemonMode();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.PlayBloodHitsEffects
	// void PlayBloodHitsEffects();                                                                                          // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.PostProcessBloodFX
	// void PostProcessBloodFX();                                                                                            // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.SetHighlightedVFX
	// void SetHighlightedVFX();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.SetPlayerExposedVFX
	// void SetPlayerExposedVFX();                                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K05_BloodDrops
	// void K05_BloodDrops();                                                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K05_TrapImpactOff
	// void K05_TrapImpactOff();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K05_TrapImpact
	// void K05_TrapImpact();                                                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K05_SetTrap
	// void K05_SetTrap();                                                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K04_InvisibleOff
	// void K04_InvisibleOff();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K04_InvisibleOn
	// void K04_InvisibleOn();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K04_TelekinesisOff
	// void K04_TelekinesisOff();                                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.K04_TelekinesisOn
	// void K04_TelekinesisOn();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ActivateLocalPlayerExposedVFX
	// void ActivateLocalPlayerExposedVFX();                                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Killer_LungeAttack_Start
	// void Killer_LungeAttack_Start();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Killer_LungeAttack_End
	// void Killer_LungeAttack_End();                                                                                        // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ActivatePlayerExposedVFX
	// void ActivatePlayerExposedVFX();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.StopBloodSplatter
	// void StopBloodSplatter();                                                                                             // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.PlayBloodSplatter
	// void PlayBloodSplatter();                                                                                             // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.OnDestroyed_Event_Machete_Copy
	// void OnDestroyed_Event_Machete_Copy(class AActor* DestroyedActor);                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.OnClientRestart
	// void OnClientRestart();                                                                                               // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.OnEscapeDoorActivated
	// void OnEscapeDoorActivated();                                                                                         // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.OnFirecrackerInRangeBegin
	// void OnFirecrackerInRangeBegin(FFirecrackerEffectData& effectData);                                                   // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.OnLocallyObservedChanged
	// void OnLocallyObservedChanged();                                                                                      // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.SetAttackDetectionZoneSet
	// void SetAttackDetectionZoneSet(EAttackZoneSet attackZoneSet);                                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.SetAnimationCrouchState
	// void SetAnimationCrouchState(bool crouched);                                                                          // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.DisplayAttackZones
	// void DisplayAttackZones(bool Display);                                                                                // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.MergeLockOnDamageZones
	// void MergeLockOnDamageZones(bool enable);                                                                             // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Cosmetic_OnPickUpEnd
	// void Cosmetic_OnPickUpEnd();                                                                                          // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Cosmetic_OnDropCamperEnd
	// void Cosmetic_OnDropCamperEnd();                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_0_ActorComponentChaseStartSignature__DelegateSignature
	// void BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_0_ActorComponentChaseStartSignature__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_1_ActorComponentChaseEndSignature__DelegateSignature
	// void BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_1_ActorComponentChaseEndSignature__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.OnIntroCompleted
	// void OnIntroCompleted();                                                                                              // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.UpdateDOF
	// void UpdateDOF();                                                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.Cosmetic_OnCancelCarry
	// void Cosmetic_OnCancelCarry();                                                                                        // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.OnIsKillingSurvivorWithMoriUpdated
	// void OnIsKillingSurvivorWithMoriUpdated(bool isKillingSurvivorWithMori);                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_C.ExecuteUbergraph_BP_Slasher_Character
	// void ExecuteUbergraph_BP_Slasher_Character(int32_t EntryPoint);                                                       // [0x61c32d0] Final|HasDefaults    
};

/// Struct /Game/Characters/Slashers/Animations/AnimSets/Aset_Slasher_LookAT.Aset_Slasher_LookAT
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAset_Slasher_LookAT
{ 
	class UAimOffsetBlendSpace*                        Aim_Offset_FPV_2_0D30D7AF43A97DEF2CB33C825855C394;          // 0x0000   (0x0008)  
	class UAimOffsetBlendSpace*                        Aim_Offset_4_1C4638084F5FD3A1FEE14D988B989559;              // 0x0008   (0x0008)  
	class UAimOffsetBlendSpace*                        Aim_Offset_Carry_17_4BC537B540DC2FF18DB12B9DB37C42E9;       // 0x0010   (0x0008)  
	class UAnimSequence*                               TurnLeftSequence_7_FFD6BA49453CFEA6D8A893B6109C431F;        // 0x0018   (0x0008)  
	class UAnimSequence*                               TurnRightSequence_9_31F0358C4D2070DFC9142F820362D54F;       // 0x0020   (0x0008)  
	class UAnimSequence*                               CarryTurnLeftSequence_11_70DF6335436CE446A4DE3F8C8BB1C1F1;  // 0x0028   (0x0008)  
	class UAnimSequence*                               CarryTurnRightSequence_14_C3347F184D63EDAEB91FDDBF844D04AD; // 0x0030   (0x0008)  
};

/// Class /Game/Characters/Slashers/K27/Blueprints/AB_Slasher.AB_Slasher_27_C
/// Size: 0x1BF5 (0x000640 - 0x002235)
class UAB_Slasher_27_C : public UOnryoAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0640   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0648   (0x0038)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0680   (0x0050)  
	FAnimNode_Slot                                     AnimGraphNode_Slot0;                                        // 0x06D0   (0x0050)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0720   (0x00A8)  
	FAnimNode_Slot                                     AnimGraphNode_Slot1;                                        // 0x07C8   (0x0050)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph2;                             // 0x0818   (0x00A8)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x08C0   (0x0158)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0A18   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0A40   (0x0080)  
	FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose;                                 // 0x0AC0   (0x0018)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0AD8   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0B78   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0BB0   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult3;                                 // 0x0BE0   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0C18   (0x00B0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x0CC8   (0x00C0)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0D88   (0x0008)  MISSED
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics;                                 // 0x0D90   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics4;                                // 0x11F0   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics5;                                // 0x1650   (0x0460)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x1AB0   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x1AD0   (0x0020)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics6;                                // 0x1AF0   (0x0460)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose7;                               // 0x1F50   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult8;                                 // 0x1F80   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine9;                                // 0x1FB8   (0x00B0)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph10;                            // 0x2068   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph11;                            // 0x2110   (0x00A8)  
	bool                                               __CustomProperty__newLocomotion_FFEFA6284F8F2CC59493A397CAD13299; // 0x21B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x21B9   (0x0003)  MISSED
	float                                              __CustomProperty__forwardVelocity_FFEFA6284F8F2CC59493A397CAD13299; // 0x21BC   (0x0004)  
	float                                              __CustomProperty__lateralVelocity_FFEFA6284F8F2CC59493A397CAD13299; // 0x21C0   (0x0004)  
	bool                                               __CustomProperty__isAttacking_FFEFA6284F8F2CC59493A397CAD13299; // 0x21C4   (0x0001)  
	bool                                               __CustomProperty__isIdle_FFEFA6284F8F2CC59493A397CAD13299;  // 0x21C5   (0x0001)  
	bool                                               __CustomProperty__isInAir_FFEFA6284F8F2CC59493A397CAD13299; // 0x21C6   (0x0001)  
	EInteractionAnimation                              __CustomProperty__interactionType_FFEFA6284F8F2CC59493A397CAD13299; // 0x21C7   (0x0001)  
	bool                                               __CustomProperty__isCarrying_FFEFA6284F8F2CC59493A397CAD13299; // 0x21C8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x21C9   (0x0003)  MISSED
	float                                              __CustomProperty__turnInPlaceThresholdAngle_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21CC   (0x0004)  
	bool                                               __CustomProperty__enableTurnInPlace_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21D0   (0x0001)  
	bool                                               __CustomProperty_isAttacking_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21D1   (0x0001)  
	bool                                               __CustomProperty_IsCarrying_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21D2   (0x0001)  
	bool                                               __CustomProperty__FirstPersonView_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21D3   (0x0001)  
	float                                              __CustomProperty__animPitch_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21D4   (0x0004)  
	bool                                               __CustomProperty_isMoving_05C674654E31B1BDC4AD979988D88A45; // 0x21D8   (0x0001)  
	bool                                               __CustomProperty_IsInOtherWorld_05C674654E31B1BDC4AD979988D88A45; // 0x21D9   (0x0001)  
	bool                                               __CustomProperty_IsExitingManifest_05C674654E31B1BDC4AD979988D88A45; // 0x21DA   (0x0001)  
	bool                                               __CustomProperty_IsEnteringManifest_05C674654E31B1BDC4AD979988D88A45; // 0x21DB   (0x0001)  
	bool                                               __CustomProperty_IsTeleporting_05C674654E31B1BDC4AD979988D88A45; // 0x21DC   (0x0001)  
	bool                                               __CustomProperty_IsTeleportCancelled_05C674654E31B1BDC4AD979988D88A45; // 0x21DD   (0x0001)  
	bool                                               __CustomProperty_IsStartingUpTeleport_05C674654E31B1BDC4AD979988D88A45; // 0x21DE   (0x0001)  
	bool                                               __CustomProperty_IsCrawlingOutOfTV_05C674654E31B1BDC4AD979988D88A45; // 0x21DF   (0x0001)  
	bool                                               __CustomProperty__idle_05C674654E31B1BDC4AD979988D88A45;    // 0x21E0   (0x0001)  
	bool                                               __CustomProperty_isFPV_05C674654E31B1BDC4AD979988D88A45;    // 0x21E1   (0x0001)  
	bool                                               __CustomProperty__firstPersonView_C7B5989F49CD280AECC70E98AB545B32; // 0x21E2   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x21E3   (0x0001)  MISSED
	float                                              __CustomProperty__direction_C7B5989F49CD280AECC70E98AB545B32; // 0x21E4   (0x0004)  
	bool                                               __CustomProperty__isAttack_C7B5989F49CD280AECC70E98AB545B32; // 0x21E8   (0x0001)  
	bool                                               __CustomProperty__isIdle_C7B5989F49CD280AECC70E98AB545B32;  // 0x21E9   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x21EA   (0x0006)  MISSED
	class UAnimSequenceBase*                           _Intro;                                                     // 0x21F0   (0x0008)  
	FAset_Slasher_LookAT                               LookAtAnimSet;                                              // 0x21F8   (0x0038)  
	float                                              CameraFOV;                                                  // 0x2230   (0x0004)  
	bool                                               IsLegendary;                                                // 0x2234   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher.AB_Slasher_27_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher.AB_Slasher_27_C.FX_K27_InteractionStart_Vignette
	// void FX_K27_InteractionStart_Vignette();                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher.AB_Slasher_27_C.CosmeticOnUnmanifestChargeChanged
	// void CosmeticOnUnmanifestChargeChanged(float Charge Percent);                                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher.AB_Slasher_27_C.CosmeticOnManifestChargeChanged
	// void CosmeticOnManifestChargeChanged(float Charge Percent);                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher.AB_Slasher_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LayeredBoneBlend_F41A42584CB2FDCF950E51843DC55766
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LayeredBoneBlend_F41A42584CB2FDCF950E51843DC55766(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher.AB_Slasher_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LinkedAnimGraph_05C674654E31B1BDC4AD979988D88A45
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LinkedAnimGraph_05C674654E31B1BDC4AD979988D88A45(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher.AB_Slasher_27_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_TransitionResult_A9EBC3F241464D8B3B7F3990D8938E3D
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_TransitionResult_A9EBC3F241464D8B3B7F3990D8938E3D(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher.AB_Slasher_27_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher.AB_Slasher_27_C.AnimNotify_FX_K27_InteractionStart_Vignette
	// void AnimNotify_FX_K27_InteractionStart_Vignette();                                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher.AB_Slasher_27_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Blueprints/AB_Slasher.AB_Slasher_27_C.ExecuteUbergraph_AB_Slasher
	// void ExecuteUbergraph_AB_Slasher(int32_t EntryPoint);                                                                 // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C
/// Size: 0x01B5 (0x001A0D - 0x001BC2)
class ABP_Slasher_Character_27_C : public ABP_Slasher_Character_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x3];                                       // 0x1A0D   (0x0003)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1A10   (0x0008)  
	class UIgnorePlayersCollisionsComponent*           IgnorePlayersCollisions;                                    // 0x1A18   (0x0008)  
	class UAkComponent*                                Ak_Audio_Killer_NoOcclusion;                                // 0x1A20   (0x0008)  
	class UBP_AfterImageComponent_C*                   BP_AfterImageComponent;                                     // 0x1A28   (0x0008)  
	class UBP_Audio_KLR_27_C*                          BP_Audio_KLR;                                               // 0x1A30   (0x0008)  
	class USlashAttack_BP_C*                           SlashAttack_BP_C;                                           // 0x1A38   (0x0008)  
	class UPounceAttack_BP_C*                          PounceAttack_BP_C;                                          // 0x1A40   (0x0008)  
	float                                              Timeline_3_NewTrack_0_A31D4F954DE55985EECB98A5BC9D610F;     // 0x1A48   (0x0004)  
	SDK_UNDEFINED(1,4345) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_3__Direction_A31D4F954DE55985EECB98A5BC9D610F); // 0x1A4C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x1A4D   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x1A50   (0x0008)  
	float                                              Timeline_5_NewTrack_0_62BF59454B35A77CEB7FE4A17D4F1A2B;     // 0x1A58   (0x0004)  
	SDK_UNDEFINED(1,4346) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_5__Direction_62BF59454B35A77CEB7FE4A17D4F1A2B); // 0x1A5C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x1A5D   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline0;                                                  // 0x1A60   (0x0008)  
	float                                              Timeline_2_NewTrack_0_993E856244B7C39F69CF65A5F44BB8D8;     // 0x1A68   (0x0004)  
	SDK_UNDEFINED(1,4347) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_2__Direction_993E856244B7C39F69CF65A5F44BB8D8); // 0x1A6C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x1A6D   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline1;                                                  // 0x1A70   (0x0008)  
	float                                              PhaseDissolve_Dissolve_0C698AE64B1D03C9A4A45EA7E2986931;    // 0x1A78   (0x0004)  
	SDK_UNDEFINED(1,4348) /* TEnumAsByte<ETimelineDirection> */ __um(PhaseDissolve__Direction_0C698AE64B1D03C9A4A45EA7E2986931); // 0x1A7C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x1A7D   (0x0003)  MISSED
	class UTimelineComponent*                          PhaseDissolve;                                              // 0x1A80   (0x0008)  
	float                                              TML_VignetteIntensityOnInteraction_InteractionVignetteVanish_19417BB8491889DE9FDC42BE330FFFDD; // 0x1A88   (0x0004)  
	SDK_UNDEFINED(1,4349) /* TEnumAsByte<ETimelineDirection> */ __um(TML_VignetteIntensityOnInteraction__Direction_19417BB8491889DE9FDC42BE330FFFDD); // 0x1A8C   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x1A8D   (0x0003)  MISSED
	class UTimelineComponent*                          TML_VignetteIntensityOnInteraction;                         // 0x1A90   (0x0008)  
	float                                              TML_TeleportHideMesh_NewTrack_0_00E7BDF14A0844E3B8BCBDB228CC22D8; // 0x1A98   (0x0004)  
	SDK_UNDEFINED(1,4350) /* TEnumAsByte<ETimelineDirection> */ __um(TML_TeleportHideMesh__Direction_00E7BDF14A0844E3B8BCBDB228CC22D8); // 0x1A9C   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x1A9D   (0x0003)  MISSED
	class UTimelineComponent*                          TML_TeleportHideMesh;                                       // 0x1AA0   (0x0008)  
	float                                              TML_TeleportFeet_VaultOpacityDissolveLvl_2155BA49426F5ED7364FE88DDA5883B4; // 0x1AA8   (0x0004)  
	SDK_UNDEFINED(1,4351) /* TEnumAsByte<ETimelineDirection> */ __um(TML_TeleportFeet__Direction_2155BA49426F5ED7364FE88DDA5883B4); // 0x1AAC   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x1AAD   (0x0003)  MISSED
	class UTimelineComponent*                          TML_TeleportFeet;                                           // 0x1AB0   (0x0008)  
	float                                              TML_Unmanifest_PowerScaling_5390BF654162A90BA43CDCB423451EBF; // 0x1AB8   (0x0004)  
	float                                              TML_Unmanifest_Vignette_Intensity_5390BF654162A90BA43CDCB423451EBF; // 0x1ABC   (0x0004)  
	SDK_UNDEFINED(1,4352) /* TEnumAsByte<ETimelineDirection> */ __um(TML_Unmanifest__Direction_5390BF654162A90BA43CDCB423451EBF); // 0x1AC0   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x1AC1   (0x0007)  MISSED
	class UTimelineComponent*                          TML_Unmanifest;                                             // 0x1AC8   (0x0008)  
	float                                              TML_Manifest_PowerScaling_C8B2EF204D929F27887891B9BEA446ED; // 0x1AD0   (0x0004)  
	float                                              TML_Manifest_Vignette_Intensity_C8B2EF204D929F27887891B9BEA446ED; // 0x1AD4   (0x0004)  
	SDK_UNDEFINED(1,4353) /* TEnumAsByte<ETimelineDirection> */ __um(TML_Manifest__Direction_C8B2EF204D929F27887891B9BEA446ED); // 0x1AD8   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x1AD9   (0x0007)  MISSED
	class UTimelineComponent*                          TML_Manifest;                                               // 0x1AE0   (0x0008)  
	float                                              TML_Opacity_Opacity_Hair_98033A1B44F8FE679812E7804399EB22;  // 0x1AE8   (0x0004)  
	float                                              TML_Opacity_Opacity_Body_98033A1B44F8FE679812E7804399EB22;  // 0x1AEC   (0x0004)  
	SDK_UNDEFINED(1,4354) /* TEnumAsByte<ETimelineDirection> */ __um(TML_Opacity__Direction_98033A1B44F8FE679812E7804399EB22); // 0x1AF0   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x1AF1   (0x0007)  MISSED
	class UTimelineComponent*                          TML_Opacity;                                                // 0x1AF8   (0x0008)  
	float                                              FadeToBlackTimeline_FadeToBlack_Use_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1B00   (0x0004)  
	float                                              FadeToBlackTimeline_Vignette_Intensity_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1B04   (0x0004)  
	float                                              FadeToBlackTimeline_Outline_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1B08   (0x0004)  
	float                                              FadeToBlackTimeline_FadeIntensity_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1B0C   (0x0004)  
	SDK_UNDEFINED(1,4355) /* TEnumAsByte<ETimelineDirection> */ __um(FadeToBlackTimeline__Direction_5BE29A02433314C96C4BBFA8BFBA26EA); // 0x1B10   (0x0001)  
	unsigned char                                      UnknownData11_5[0x7];                                       // 0x1B11   (0x0007)  MISSED
	class UTimelineComponent*                          FadeToBlackTimeline;                                        // 0x1B18   (0x0008)  
	class UMaterialInstanceDynamic*                    PP_Vignette_Basic___FadeToBlack;                            // 0x1B20   (0x0008)  
	float                                              prevFadeToBlackBasicSize;                                   // 0x1B28   (0x0004)  
	bool                                               IsForwardFade;                                              // 0x1B2C   (0x0001)  
	unsigned char                                      UnknownData12_5[0x3];                                       // 0x1B2D   (0x0003)  MISSED
	class UMaterialInstanceDynamic*                    PP_Vignette_K27_Manifest;                                   // 0x1B30   (0x0008)  
	FWeightedBlendable                                 Manifest_WeightedBlendable;                                 // 0x1B38   (0x0010)  
	TArray<FWeightedBlendable>                         Manifest_WeightedBlendables;                                // 0x1B48   (0x0010)  
	TArray<class UNiagaraComponent*>                   NS_FX_Manifest_Charge;                                      // 0x1B58   (0x0010)  
	bool                                               IsTeleporting_;                                             // 0x1B68   (0x0001)  
	unsigned char                                      UnknownData13_5[0x7];                                       // 0x1B69   (0x0007)  MISSED
	class UNiagaraComponent*                           NS_FX_Manifest_Charge_02;                                   // 0x1B70   (0x0008)  
	FWeightedBlendable                                 FadeToBlack_WeightedBlendable;                              // 0x1B78   (0x0010)  
	TArray<FWeightedBlendable>                         FadeToBlack_WeightedBlendables;                             // 0x1B88   (0x0010)  
	class UAB_Slasher_27_C*                            AB_Slasher;                                                 // 0x1B98   (0x0008)  
	FVector                                            Teleport_VeinsColor;                                        // 0x1BA0   (0x000C)  
	bool                                               IsManifested_;                                              // 0x1BAC   (0x0001)  
	bool                                               WantsVisible;                                               // 0x1BAD   (0x0001)  
	bool                                               IsInTeleportInteraction;                                    // 0x1BAE   (0x0001)  
	bool                                               IsVisible;                                                  // 0x1BAF   (0x0001)  
	bool                                               IsFlickeringStopped;                                        // 0x1BB0   (0x0001)  
	unsigned char                                      UnknownData14_5[0x7];                                       // 0x1BB1   (0x0007)  MISSED
	class UNiagaraComponent*                           NS_PhaseStatic;                                             // 0x1BB8   (0x0008)  
	bool                                               IsPhasingThroughObject;                                     // 0x1BC0   (0x0001)  
	bool                                               isFlickeringPaused;                                         // 0x1BC1   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.OtherWorldVignetteIntensity
	// void OtherWorldVignetteIntensity();                                                                                   // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.TryRestartFlickerAfterTeleportation
	// void TryRestartFlickerAfterTeleportation();                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.SetCastShadow
	// void SetCastShadow(bool NewCastShadow);                                                                               // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.CanUpdateFlicker
	// bool CanUpdateFlicker();                                                                                              // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.FinishHideMesh
	// void FinishHideMesh();                                                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.StopFlicker
	// void StopFlicker();                                                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.RandomLocationAfterImage
	// void RandomLocationAfterImage(FTransform& NewParam);                                                                  // [0x61c32d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x61c32d0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.FadeToBlackTimeline__FinishedFunc
	// void FadeToBlackTimeline__FinishedFunc();                                                                             // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.FadeToBlackTimeline__UpdateFunc
	// void FadeToBlackTimeline__UpdateFunc();                                                                               // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.TML_Opacity__FinishedFunc
	// void TML_Opacity__FinishedFunc();                                                                                     // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.TML_Opacity__UpdateFunc
	// void TML_Opacity__UpdateFunc();                                                                                       // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.TML_Opacity__Event Hide VFX__EventFunc
	// void TML_Opacity__Event Hide VFX__EventFunc();                                                                        // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.TML_Opacity__Event Shadow__EventFunc
	// void TML_Opacity__Event Shadow__EventFunc();                                                                          // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.TML_Manifest__FinishedFunc
	// void TML_Manifest__FinishedFunc();                                                                                    // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.TML_Manifest__UpdateFunc
	// void TML_Manifest__UpdateFunc();                                                                                      // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.TML_Unmanifest__FinishedFunc
	// void TML_Unmanifest__FinishedFunc();                                                                                  // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.TML_Unmanifest__UpdateFunc
	// void TML_Unmanifest__UpdateFunc();                                                                                    // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.TML_TeleportHideMesh__FinishedFunc
	// void TML_TeleportHideMesh__FinishedFunc();                                                                            // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.TML_TeleportHideMesh__UpdateFunc
	// void TML_TeleportHideMesh__UpdateFunc();                                                                              // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.TML_TeleportFeet__FinishedFunc
	// void TML_TeleportFeet__FinishedFunc();                                                                                // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.TML_TeleportFeet__UpdateFunc
	// void TML_TeleportFeet__UpdateFunc();                                                                                  // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.TML_VignetteIntensityOnInteraction__FinishedFunc
	// void TML_VignetteIntensityOnInteraction__FinishedFunc();                                                              // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.TML_VignetteIntensityOnInteraction__UpdateFunc
	// void TML_VignetteIntensityOnInteraction__UpdateFunc();                                                                // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.PhaseDissolve__FinishedFunc
	// void PhaseDissolve__FinishedFunc();                                                                                   // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.PhaseDissolve__UpdateFunc
	// void PhaseDissolve__UpdateFunc();                                                                                     // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Timeline_2__FinishedFunc
	// void Timeline_2__FinishedFunc();                                                                                      // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Timeline_2__UpdateFunc
	// void Timeline_2__UpdateFunc();                                                                                        // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Timeline_5__FinishedFunc
	// void Timeline_5__FinishedFunc();                                                                                      // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Timeline_5__UpdateFunc
	// void Timeline_5__UpdateFunc();                                                                                        // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Timeline_3__FinishedFunc
	// void Timeline_3__FinishedFunc();                                                                                      // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Timeline_3__UpdateFunc
	// void Timeline_3__UpdateFunc();                                                                                        // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.FX_K27_SpawnMiniMoriVignette
	// void FX_K27_SpawnMiniMoriVignette();                                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.FX_FadeCondemnedStatus
	// void FX_FadeCondemnedStatus();                                                                                        // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.FX_K27_ShowTape
	// void FX_K27_ShowTape();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.FX_K27_HideTape
	// void FX_K27_HideTape();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Cosmetic_OnTeleportSuccess
	// void Cosmetic_OnTeleportSuccess();                                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Cosmetic_OnTeleportStart
	// void Cosmetic_OnTeleportStart();                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Cosmetic_OnTeleportFinished
	// void Cosmetic_OnTeleportFinished();                                                                                   // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Cosmetic_OnTeleportCancelled
	// void Cosmetic_OnTeleportCancelled();                                                                                  // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.SpawnAfterImage
	// void SpawnAfterImage();                                                                                               // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Cosmetic_OnChargeManifestSuccess
	// void Cosmetic_OnChargeManifestSuccess();                                                                              // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Cosmetic_OnChargeManifestStart
	// void Cosmetic_OnChargeManifestStart();                                                                                // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Cosmetic_OnManifestStateChanged
	// void Cosmetic_OnManifestStateChanged(bool isManifested, bool isImmediateManifest);                                    // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Cosmetic_OnKillerVisibilityChanged
	// void Cosmetic_OnKillerVisibilityChanged(bool IsVisible, bool isFlickering, bool isManifested, bool isInvisibleDueToOutOfVisibiltyRange, bool force); // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Cosmetic_OnChargeManifestCancelled
	// void Cosmetic_OnChargeManifestCancelled();                                                                            // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Cosmetic_OnChargeUnmanifestStart
	// void Cosmetic_OnChargeUnmanifestStart();                                                                              // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Cosmetic_OnChargeUnmanifestSuccess
	// void Cosmetic_OnChargeUnmanifestSuccess();                                                                            // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Cosmetic_OnChargeUnmanifestCancelled
	// void Cosmetic_OnChargeUnmanifestCancelled();                                                                          // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.CosmeticOnUnmanifestChargeChanged
	// void CosmeticOnUnmanifestChargeChanged(float Charge Percent);                                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.CosmeticOnManifestChargeChanged
	// void CosmeticOnManifestChargeChanged(float Charge Percent);                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.ManifestCancelCharge
	// void ManifestCancelCharge();                                                                                          // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.UnmanifestCancelCharge
	// void UnmanifestCancelCharge();                                                                                        // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.FX_K27_InteractionStart_Vignette
	// void FX_K27_InteractionStart_Vignette();                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Hide Mesh
	// void Hide Mesh();                                                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Update Visibility On Teleport success
	// void Update Visibility On Teleport success();                                                                         // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Event On Manifested Through Interaction
	// void Event On Manifested Through Interaction();                                                                       // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Unhide Mesh
	// void Unhide Mesh();                                                                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.CE_OnSoundbankLoaded
	// void CE_OnSoundbankLoaded();                                                                                          // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Cosmetic_OnKillerStartPhasingThroughObject
	// void Cosmetic_OnKillerStartPhasingThroughObject();                                                                    // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Cosmetic_OnKillerStopPhasingThroughObject
	// void Cosmetic_OnKillerStopPhasingThroughObject();                                                                     // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Reverse PhaseDissolve
	// void Reverse PhaseDissolve();                                                                                         // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Cosmetic_OnFailedAttemptPalletStun
	// void Cosmetic_OnFailedAttemptPalletStun();                                                                            // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.Pause And Reset Flicker
	// void Pause And Reset Flicker(bool isFlickerPaused);                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/BP_Slasher_Character.BP_Slasher_Character_27_C.ExecuteUbergraph_BP_Slasher_Character
	// void ExecuteUbergraph_BP_Slasher_Character(int32_t EntryPoint);                                                       // [0x61c32d0] Final|HasDefaults    
};

/// Class /Game/Characters/Slashers/K27/Blueprints/ABSub_Slasher_27_Power.ABSub_Slasher_27_Power_C
/// Size: 0x1612 (0x000560 - 0x001B72)
class UABSub_Slasher_27_Power_C : public UBaseKillerAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0560   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0568   (0x0038)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x05A0   (0x0120)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x06C0   (0x0158)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0818   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0840   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0868   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x0890   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x08B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult4;                            // 0x08E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult5;                            // 0x0908   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult6;                            // 0x0930   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult7;                            // 0x0958   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult8;                            // 0x0980   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult9;                            // 0x09A8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult10;                           // 0x09D0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult11;                           // 0x09F8   (0x0028)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0A20   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0AC0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer12;                             // 0x0B40   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0BC0   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer13;                             // 0x0BF8   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer14;                             // 0x0C78   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool15;                            // 0x0CF8   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult16;                                // 0x0D98   (0x0038)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool17;                            // 0x0DD0   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer18;                             // 0x0E70   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer19;                             // 0x0EF0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult20;                                // 0x0F70   (0x0038)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool21;                            // 0x0FA8   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer22;                             // 0x1048   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer23;                             // 0x10C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult24;                                // 0x1148   (0x0038)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool25;                            // 0x1180   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer26;                             // 0x1220   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer27;                             // 0x12A0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult28;                                // 0x1320   (0x0038)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool29;                            // 0x1358   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer30;                             // 0x13F8   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer31;                             // 0x1478   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult32;                                // 0x14F8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer33;                             // 0x1530   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer34;                             // 0x15B0   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool35;                            // 0x1630   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult36;                                // 0x16D0   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1708   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult37;                                // 0x1738   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x1770   (0x00B0)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x1820   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose38;                              // 0x18E0   (0x0030)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool39;                            // 0x1910   (0x00A0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose40;                             // 0x19B0   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose41;                              // 0x1B08   (0x0030)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose42;                              // 0x1B38   (0x0030)  
	bool                                               IsFPV;                                                      // 0x1B68   (0x0001)  
	bool                                               _idle;                                                      // 0x1B69   (0x0001)  
	bool                                               IsCrawlingOutOfTV;                                          // 0x1B6A   (0x0001)  
	bool                                               IsStartingUpTeleport;                                       // 0x1B6B   (0x0001)  
	bool                                               IsTeleportCancelled;                                        // 0x1B6C   (0x0001)  
	bool                                               IsTeleporting;                                              // 0x1B6D   (0x0001)  
	bool                                               IsEnteringManifest;                                         // 0x1B6E   (0x0001)  
	bool                                               IsExitingManifest;                                          // 0x1B6F   (0x0001)  
	bool                                               IsInOtherWorld;                                             // 0x1B70   (0x0001)  
	bool                                               IsMoving;                                                   // 0x1B71   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/K27/Blueprints/ABSub_Slasher_27_Power.ABSub_Slasher_27_Power_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                               // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Blueprints/ABSub_Slasher_27_Power.ABSub_Slasher_27_Power_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABSub_Slasher_27_Power_AnimGraphNode_TransitionResult_FB90A74543E627089C6043B171E3C6DF
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_ABSub_Slasher_27_Power_AnimGraphNode_TransitionResult_FB90A74543E627089C6043B171E3C6DF(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K27/Blueprints/ABSub_Slasher_27_Power.ABSub_Slasher_27_Power_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABSub_Slasher_27_Power_AnimGraphNode_TransitionResult_321032DE4367D12C6B694283A36FE65F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_ABSub_Slasher_27_Power_AnimGraphNode_TransitionResult_321032DE4367D12C6B694283A36FE65F(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K27/Blueprints/ABSub_Slasher_27_Power.ABSub_Slasher_27_Power_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABSub_Slasher_27_Power_AnimGraphNode_TransitionResult_A30517A14029B25B82F512A65B980E7D
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_ABSub_Slasher_27_Power_AnimGraphNode_TransitionResult_A30517A14029B25B82F512A65B980E7D(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K27/Blueprints/ABSub_Slasher_27_Power.ABSub_Slasher_27_Power_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABSub_Slasher_27_Power_AnimGraphNode_TransitionResult_0271303046ACB6B1B4EB5C877D8ABF4C
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_ABSub_Slasher_27_Power_AnimGraphNode_TransitionResult_0271303046ACB6B1B4EB5C877D8ABF4C(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K27/Blueprints/ABSub_Slasher_27_Power.ABSub_Slasher_27_Power_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABSub_Slasher_27_Power_AnimGraphNode_TransitionResult_D28F570645E11FE3F2612F806C90B681
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_ABSub_Slasher_27_Power_AnimGraphNode_TransitionResult_D28F570645E11FE3F2612F806C90B681(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K27/Blueprints/ABSub_Slasher_27_Power.ABSub_Slasher_27_Power_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABSub_Slasher_27_Power_AnimGraphNode_TransitionResult_229157104FD1BC5E6BD15780B2B345C4
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_ABSub_Slasher_27_Power_AnimGraphNode_TransitionResult_229157104FD1BC5E6BD15780B2B345C4(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K27/Blueprints/ABSub_Slasher_27_Power.ABSub_Slasher_27_Power_C.ExecuteUbergraph_ABSub_Slasher_27_Power
	// void ExecuteUbergraph_ABSub_Slasher_27_Power(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Struct /Game/Characters/Slashers/K27/AnimSets/ASet_Slasher_27_Locomotion.ASet_Slasher_27_Locomotion
/// Size: 0x0098 (0x000000 - 0x000098)
struct FASet_Slasher_27_Locomotion
{ 
	class UAnimSequence*                               Stand_2_3B2E928C4988C5A26B86BF8424E6BC41;                   // 0x0000   (0x0008)  
	class UAnimSequence*                               Idle_4_6328A2F8424FF53878DCA991D3524E5D;                    // 0x0008   (0x0008)  
	class UAnimSequence*                               Idle_FPV_12_0F2E8166496EE8EFEEB594A7A5F2DF2F;               // 0x0010   (0x0008)  
	class UBlendSpace*                                 BS_Locomotion_7_9C21B5A245AFB28C8D17E28F36D0D9B8;           // 0x0018   (0x0008)  
	class UBlendSpace*                                 BS_Locomotion_FPV_9_E9BF61EA4981B08D98C7388F62709196;       // 0x0020   (0x0008)  
	class UBlendSpace*                                 BS_Carry_Locomotion_15_E7DBF6714CE3714CA4466C9F0623BADA;    // 0x0028   (0x0008)  
	class UBlendSpace*                                 BS_Carry_Locomotion_FPV_46_0488917444E7A4D5A24E1FA0F1BE80A8; // 0x0030   (0x0008)  
	class UAnimSequence*                               End_Game_Walk_18_3B56BD9843A973929F9C3988155F9E33;          // 0x0038   (0x0008)  
	class UAnimSequence*                               Search_Locker_20_17C21A1D41ED7FD778EF8F80B13DDD22;          // 0x0040   (0x0008)  
	class UAnimSequence*                               Land_Light_22_AB1CEA0D44A24466524BD2AF64864915;             // 0x0048   (0x0008)  
	class UAnimSequence*                               Land_Light_FPV_24_E4110DFE41E5829161139CA4181FF0CE;         // 0x0050   (0x0008)  
	class UBlendSpace1D*                               BS_Land_28_6DF82D5440FE21353642E8AE2490A437;                // 0x0058   (0x0008)  
	class UBlendSpace1D*                               BS_Land_FPV_30_7C75AC0E450FA49FE64FCAAF3B5A7BD9;            // 0x0060   (0x0008)  
	class UAnimSequence*                               Walk_To_Fall_33_A5C5BCB143C80C885059568C4903F37C;           // 0x0068   (0x0008)  
	class UAnimSequence*                               Walk_To_Fall_FPV_39_41B9CFBD40D5BCA8F0086D92DBA1DE50;       // 0x0070   (0x0008)  
	class UAnimSequence*                               Carry_Idle_40_C930FC4A43802CA008EB9EA4D8CAE6D1;             // 0x0078   (0x0008)  
	class UAnimSequence*                               Carry_Idle_FPV_41_061F9E3F4617FE2356D0DDAEEF515C61;         // 0x0080   (0x0008)  
	class UAnimSequence*                               Falling_42_B6B41C744ECDDAD8730F2BB7C991C452;                // 0x0088   (0x0008)  
	class UAnimSequence*                               Falling_FPV_43_9ABB0E3C49DA478276C4AF94E24E2A23;            // 0x0090   (0x0008)  
};

/// Class /Game/Characters/Slashers/K27/Blueprints/ABSub_Slasher_27_Locomotion.ABSub_Slasher_27_Locomotion_C
/// Size: 0x00A7 (0x001D81 - 0x001E28)
class UABSub_Slasher_27_Locomotion_C : public UAB_Slasher_SubGraph_Locomotion_Override_27_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x1D81   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1D88   (0x0008)  
	FASet_Slasher_27_Locomotion                        AnimSet;                                                    // 0x1D90   (0x0098)  


	/// Functions
	// Function /Game/Characters/Slashers/K27/Blueprints/ABSub_Slasher_27_Locomotion.ABSub_Slasher_27_Locomotion_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Blueprints/ABSub_Slasher_27_Locomotion.ABSub_Slasher_27_Locomotion_C.ExecuteUbergraph_ABSub_Slasher_27_Locomotion
	// void ExecuteUbergraph_ABSub_Slasher_27_Locomotion(int32_t EntryPoint);                                                // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher01_018.AB_Menu_Slasher01_018_C
/// Size: 0x02F8 (0x000300 - 0x0005F8)
class UAB_Menu_Slasher01_018_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0340   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0368   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x03E8   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0420   (0x00A8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult0;                                 // 0x04C8   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0500   (0x00B0)  
	FVector                                            __CustomProperty_ScaleInLobby_7D5BDA304E39D4E2B3940F922EE6404E; // 0x05B0   (0x000C)  
	EGameFlowStep                                      CurrentMenu;                                                // 0x05BC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x05BD   (0x0003)  MISSED
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x05C0   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher01_018.AB_Menu_Slasher01_018_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher01_018.AB_Menu_Slasher01_018_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher01_018_AnimGraphNode_TransitionResult_861076744DA3B7E733CC97AB31064761
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher01_018_AnimGraphNode_TransitionResult_861076744DA3B7E733CC97AB31064761(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher01_018.AB_Menu_Slasher01_018_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher01_018.AB_Menu_Slasher01_018_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher01_018.AB_Menu_Slasher01_018_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher01_018.AB_Menu_Slasher01_018_C.ExecuteUbergraph_AB_Menu_Slasher01_018
	// void ExecuteUbergraph_AB_Menu_Slasher01_018(int32_t EntryPoint);                                                      // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Anim_SubGraph/BPI_AB_Slasher_SubGraph_Attack.BPI_AB_Slasher_SubGraph_Attack_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_AB_Slasher_SubGraph_Attack_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/BPI_AB_Slasher_SubGraph_Attack.BPI_AB_Slasher_SubGraph_Attack_C.SetAttackAnimationFromMainAB
	// void SetAttackAnimationFromMainAB(FAset_Slasher_BaseAttack& AttackAnimset);                                           // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C
/// Size: 0x136A (0x000620 - 0x00198A)
class UAB_Slasher_SubGraph_BaseAttack_00_C : public UKillerAttackSubAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0620   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0628   (0x0038)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_SubInput;                                     // 0x0660   (0x0120)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0780   (0x0158)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x08D8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0900   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0928   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x0950   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x0978   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult4;                            // 0x09A0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult5;                            // 0x09C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult6;                            // 0x09F0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult7;                            // 0x0A18   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult8;                            // 0x0A40   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult9;                            // 0x0A68   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0A90   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0B10   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer10;                             // 0x0B48   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult11;                                // 0x0BC8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer12;                             // 0x0C00   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult13;                                // 0x0C80   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer14;                             // 0x0CB8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult15;                                // 0x0D38   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer16;                             // 0x0D70   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult17;                                // 0x0DF0   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0E28   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult18;                                // 0x0E58   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0E90   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose19;                             // 0x0F40   (0x0158)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult20;                           // 0x1098   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult21;                           // 0x10C0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult22;                           // 0x10E8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult23;                           // 0x1110   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult24;                           // 0x1138   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult25;                           // 0x1160   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult26;                           // 0x1188   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult27;                           // 0x11B0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult28;                           // 0x11D8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult29;                           // 0x1200   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose30;                              // 0x1228   (0x0030)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x1258   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose31;                              // 0x1318   (0x0030)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend32;                           // 0x1348   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose33;                              // 0x1408   (0x0030)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend34;                           // 0x1438   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose35;                              // 0x14F8   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult36;                                // 0x1528   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose37;                              // 0x1560   (0x0030)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose38;                              // 0x1590   (0x0030)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend39;                           // 0x15C0   (0x00C0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult40;                                // 0x1680   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose41;                              // 0x16B8   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult42;                                // 0x16E8   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose43;                              // 0x1720   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult44;                                // 0x1750   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine45;                               // 0x1788   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult46;                                // 0x1838   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose47;                              // 0x1870   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult48;                                // 0x18A0   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine49;                               // 0x18D8   (0x00B0)  
	bool                                               _isIdle;                                                    // 0x1988   (0x0001)  
	bool                                               _isAttack;                                                  // 0x1989   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                               // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_64A870D94C5BBB4145B273A43D530989
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_64A870D94C5BBB4145B273A43D530989(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_B50A67404182E787316715BE18637400
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_B50A67404182E787316715BE18637400(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_0E0E289545D87547ADD7629603810F1A
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_0E0E289545D87547ADD7629603810F1A(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_45287DF740DD3332676783AC3B85138E
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_45287DF740DD3332676783AC3B85138E(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_342A66F848F32A23C26F1E905C58406D
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_342A66F848F32A23C26F1E905C58406D(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_7A7167C2435FA741869C96BE3B8AB485
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_7A7167C2435FA741869C96BE3B8AB485(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_E641D7DC48F31981B233F3AC03771762
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_E641D7DC48F31981B233F3AC03771762(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_EA11CD8745C33480B79FFF97AB1F33C4
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_EA11CD8745C33480B79FFF97AB1F33C4(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_EA7C5D464C165E9C940C15A81932636A
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_EA7C5D464C165E9C940C15A81932636A(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_0A357C3A41BE982F3FBF4298AABDDC8F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_0A357C3A41BE982F3FBF4298AABDDC8F(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_DF31B43E4347AF97EF880CB0C46FDDDB
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_DF31B43E4347AF97EF880CB0C46FDDDB(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_36E899A04054E48D0E447BAD9F85D6D8
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_36E899A04054E48D0E447BAD9F85D6D8(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_685EC00942748326C6A2F0B95223E4A2
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_685EC00942748326C6A2F0B95223E4A2(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_536BEE4049AB5907F033B3ABD67EEC4F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_536BEE4049AB5907F033B3ABD67EEC4F(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_D3A76D6047C3FF393368398A9E02B6F6
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_D3A76D6047C3FF393368398A9E02B6F6(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_6F6204FB454B3950C32C518A52645928
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_6F6204FB454B3950C32C518A52645928(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_71A6612B43EE8076A3E736847A5D18F0
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00_AnimGraphNode_TransitionResult_71A6612B43EE8076A3E736847A5D18F0(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.AnimNotify_FX_MakeTag_MaskFPV_Hidden
	// void AnimNotify_FX_MakeTag_MaskFPV_Hidden();                                                                          // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.AnimNotify_FX_MakeTag_MaskFPV_Visible
	// void AnimNotify_FX_MakeTag_MaskFPV_Visible();                                                                         // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.AnimNotify_FX_MakeSlasherInvisible
	// void AnimNotify_FX_MakeSlasherInvisible();                                                                            // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.AnimNotify_FX_MakeSlasherVisible
	// void AnimNotify_FX_MakeSlasherVisible();                                                                              // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.SetAttackAnimationFromMainAB
	// void SetAttackAnimationFromMainAB(FAset_Slasher_BaseAttack& AttackAnimset);                                           // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Anim_SubGraph/AB_Slasher_SubGraph_BaseAttack_00.AB_Slasher_SubGraph_BaseAttack_00_C.ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00
	// void ExecuteUbergraph_AB_Slasher_SubGraph_BaseAttack_00(int32_t EntryPoint);                                          // [0x61c32d0] Final|HasDefaults    
};

/// Struct /Game/Characters/Slashers/Trapper/Blueprint/ASet_Slasher_01_BaseAttack_00.ASet_Slasher_01_BaseAttack_00
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FASet_Slasher_01_BaseAttack_00
{ 
	class UAnimSequence*                               Attack_In_2_EFFD81524E6D489D83C701B1570545D7;               // 0x0000   (0x0008)  
	class UAnimSequence*                               Attack_In_FPV_53_1A95D22246B6351774BFB6A090DF530E;          // 0x0008   (0x0008)  
	class UAnimSequence*                               Attack_In_Carry_54_D1C7D07840D53D761D59DE9B4862DC72;        // 0x0010   (0x0008)  
	class UAnimSequence*                               Attack_In_Carry_FPV_55_FB52EE0F4A51D188974C1E8FA01AEFB2;    // 0x0018   (0x0008)  
	class UAnimSequence*                               Attack_Swing_10_17697BCF430A365E92517B9D8517BFF6;           // 0x0020   (0x0008)  
	class UAnimSequence*                               Attack_Swing_FPV_60_43BC6ABE418BFE02C993689068B449CB;       // 0x0028   (0x0008)  
	class UAnimSequence*                               Attack_Swing_Carry_61_5D12817240E475C2F3B0BAB0349AA65D;     // 0x0030   (0x0008)  
	class UAnimSequence*                               Attack_Swing_Carry_FPV_62_46A2151B45A4CE4C050A6E96098CF298; // 0x0038   (0x0008)  
	class UAnimSequence*                               Attack_Hit_18_0CC25E314503E95B9D205F87A63C455B;             // 0x0040   (0x0008)  
	class UAnimSequence*                               Attack_Hit_FPV_63_CF2974D74CC745E465881980FD9B6AEB;         // 0x0048   (0x0008)  
	class UAnimSequence*                               Attack_Hit_Carry_65_0438F6E04F347CE21F76F0A35F8C1FA1;       // 0x0050   (0x0008)  
	class UAnimSequence*                               Attack_Hit_Carry_FPV_67_FBFFBFD6496E8EFF244529B0AB881231;   // 0x0058   (0x0008)  
	class UAnimSequence*                               Attack_Miss_26_06667B6247E36E6DD76407B8D0D273EA;            // 0x0060   (0x0008)  
	class UAnimSequence*                               Attack_Miss_FPV_71_43D7163B483524E43EB63DAEA7A73347;        // 0x0068   (0x0008)  
	class UAnimSequence*                               Attack_Miss_Carry_72_FE3BE9E4454D91553E4B2FA8C7FBBF98;      // 0x0070   (0x0008)  
	class UAnimSequence*                               Attack_Miss_Carry_FPV_73_310BBDAF49C65CBE1DC9D1AD202EF943;  // 0x0078   (0x0008)  
	class UAnimSequence*                               Attack_Bow_34_713A54294DEFBC6D8B2E7BA060472B37;             // 0x0080   (0x0008)  
	class UAnimSequence*                               Attack_Bow_FPV_77_62B8B93E4E864F9CD0F91FA1CA90B9C9;         // 0x0088   (0x0008)  
	class UAnimSequence*                               Attack_Bow_Carry_78_0ABE353E4009FB30C94A158DE0BEC18B;       // 0x0090   (0x0008)  
	class UAnimSequence*                               Attack_Bow_Carry_FPV_79_3B66FD974D2F8978925023B8B2B81317;   // 0x0098   (0x0008)  
};

/// Class /Game/Characters/Slashers/Trapper/Blueprint/ABSub_Slasher_01_BaseAttack_00.ABSub_Slasher_01_BaseAttack_00_C
/// Size: 0x00AE (0x00198A - 0x001A38)
class UABSub_Slasher_01_BaseAttack_00_C : public UAB_Slasher_SubGraph_BaseAttack_00_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x6];                                       // 0x198A   (0x0006)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1990   (0x0008)  
	FASet_Slasher_01_BaseAttack_00                     AttackAnimset;                                              // 0x1998   (0x00A0)  


	/// Functions
	// Function /Game/Characters/Slashers/Trapper/Blueprint/ABSub_Slasher_01_BaseAttack_00.ABSub_Slasher_01_BaseAttack_00_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Trapper/Blueprint/ABSub_Slasher_01_BaseAttack_00.ABSub_Slasher_01_BaseAttack_00_C.ExecuteUbergraph_ABSub_Slasher_01_BaseAttack_00
	// void ExecuteUbergraph_ABSub_Slasher_01_BaseAttack_00(int32_t EntryPoint);                                             // [0x61c32d0] Final|HasDefaults    
};

/// Struct /Game/Characters/Slashers/K27/AnimSets/ASet_Slasher_27_BaseAttack.ASet_Slasher_27_BaseAttack
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FASet_Slasher_27_BaseAttack
{ 
	class UAnimSequence*                               Attack_In_2_EFFD81524E6D489D83C701B1570545D7;               // 0x0000   (0x0008)  
	class UAnimSequence*                               Attack_In_FPV_53_1A95D22246B6351774BFB6A090DF530E;          // 0x0008   (0x0008)  
	class UAnimSequence*                               Attack_In_Carry_54_D1C7D07840D53D761D59DE9B4862DC72;        // 0x0010   (0x0008)  
	class UAnimSequence*                               Attack_In_Carry_FPV_55_FB52EE0F4A51D188974C1E8FA01AEFB2;    // 0x0018   (0x0008)  
	class UAnimSequence*                               Attack_Swing_10_17697BCF430A365E92517B9D8517BFF6;           // 0x0020   (0x0008)  
	class UAnimSequence*                               Attack_Swing_FPV_60_43BC6ABE418BFE02C993689068B449CB;       // 0x0028   (0x0008)  
	class UAnimSequence*                               Attack_Swing_Carry_61_5D12817240E475C2F3B0BAB0349AA65D;     // 0x0030   (0x0008)  
	class UAnimSequence*                               Attack_Swing_Carry_FPV_62_46A2151B45A4CE4C050A6E96098CF298; // 0x0038   (0x0008)  
	class UAnimSequence*                               Attack_Hit_18_0CC25E314503E95B9D205F87A63C455B;             // 0x0040   (0x0008)  
	class UAnimSequence*                               Attack_Hit_FPV_63_CF2974D74CC745E465881980FD9B6AEB;         // 0x0048   (0x0008)  
	class UAnimSequence*                               Attack_Hit_Carry_65_0438F6E04F347CE21F76F0A35F8C1FA1;       // 0x0050   (0x0008)  
	class UAnimSequence*                               Attack_Hit_Carry_FPV_67_FBFFBFD6496E8EFF244529B0AB881231;   // 0x0058   (0x0008)  
	class UAnimSequence*                               Attack_Miss_26_06667B6247E36E6DD76407B8D0D273EA;            // 0x0060   (0x0008)  
	class UAnimSequence*                               Attack_Miss_FPV_71_43D7163B483524E43EB63DAEA7A73347;        // 0x0068   (0x0008)  
	class UAnimSequence*                               Attack_Miss_Carry_72_FE3BE9E4454D91553E4B2FA8C7FBBF98;      // 0x0070   (0x0008)  
	class UAnimSequence*                               Attack_Miss_Carry_FPV_73_310BBDAF49C65CBE1DC9D1AD202EF943;  // 0x0078   (0x0008)  
	class UAnimSequence*                               Attack_Bow_34_713A54294DEFBC6D8B2E7BA060472B37;             // 0x0080   (0x0008)  
	class UAnimSequence*                               Attack_Bow_FPV_77_62B8B93E4E864F9CD0F91FA1CA90B9C9;         // 0x0088   (0x0008)  
	class UAnimSequence*                               Attack_Bow_Carry_78_0ABE353E4009FB30C94A158DE0BEC18B;       // 0x0090   (0x0008)  
	class UAnimSequence*                               Attack_Bow_Carry_FPV_79_3B66FD974D2F8978925023B8B2B81317;   // 0x0098   (0x0008)  
};

/// Class /Game/Characters/Slashers/K27/Blueprints/ABSub_Slasher_27_BaseAttack.ABSub_Slasher_27_BaseAttack_C
/// Size: 0x00A8 (0x001A38 - 0x001AE0)
class UABSub_Slasher_27_BaseAttack_C : public UABSub_Slasher_01_BaseAttack_00_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1A38   (0x0008)  
	FASet_Slasher_27_BaseAttack                        AnimSet;                                                    // 0x1A40   (0x00A0)  


	/// Functions
	// Function /Game/Characters/Slashers/K27/Blueprints/ABSub_Slasher_27_BaseAttack.ABSub_Slasher_27_BaseAttack_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/K27/Blueprints/ABSub_Slasher_27_BaseAttack.ABSub_Slasher_27_BaseAttack_C.ExecuteUbergraph_ABSub_Slasher_27_BaseAttack
	// void ExecuteUbergraph_ABSub_Slasher_27_BaseAttack(int32_t EntryPoint);                                                // [0x61c32d0] Final|HasDefaults    
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale15.BP_Menu_CamperMale15_C
/// Size: 0x0010 (0x000758 - 0x000768)
class ABP_Menu_CamperMale15_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  
	class USkeletalMeshComponent*                      TapeMesh;                                                   // 0x0760   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale15.BP_Menu_CamperMale15_C.GoToAddVomitDecal
	// void GoToAddVomitDecal();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale15.BP_Menu_CamperMale15_C.StartEndGameDissolve
	// void StartEndGameDissolve();                                                                                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale15.BP_Menu_CamperMale15_C.CK_StartSacrificeDissolve
	// void CK_StartSacrificeDissolve();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale15.BP_Menu_CamperMale15_C.AddBloodOnCamper
	// void AddBloodOnCamper();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale15.BP_Menu_CamperMale15_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale15.BP_Menu_CamperMale15_C.GoToAddMoriVomitStain
	// void GoToAddMoriVomitStain();                                                                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale15.BP_Menu_CamperMale15_C.HideProps
	// void HideProps();                                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale15.BP_Menu_CamperMale15_C.ShowProps
	// void ShowProps();                                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale15.BP_Menu_CamperMale15_C.ExecuteUbergraph_BP_Menu_CamperMale15
	// void ExecuteUbergraph_BP_Menu_CamperMale15(int32_t EntryPoint);                                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S30/Blueprints/AB_Menu_S30.AB_Menu_S30_C
/// Size: 0x0008 (0x001B18 - 0x001B20)
class UAB_Menu_S30_C : public UAB_Menu_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1B18   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S30/Blueprints/AB_Menu_S30.AB_Menu_S30_C.AnimNotify_FX_ShowProps
	// void AnimNotify_FX_ShowProps();                                                                                       // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S30/Blueprints/AB_Menu_S30.AB_Menu_S30_C.AnimNotify_FX_HideProps
	// void AnimNotify_FX_HideProps();                                                                                       // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S30/Blueprints/AB_Menu_S30.AB_Menu_S30_C.ExecuteUbergraph_AB_Menu_S30
	// void ExecuteUbergraph_AB_Menu_S30(int32_t EntryPoint);                                                                // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale04.BP_Menu_CamperMale04_C
/// Size: 0x0018 (0x000758 - 0x000770)
class ABP_Menu_CamperMale04_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  
	float                                              Cigarette_NewTrack_0_97E71C104E36EF0B3195F484D090F427;      // 0x0760   (0x0004)  
	SDK_UNDEFINED(1,4356) /* TEnumAsByte<ETimelineDirection> */ __um(Cigarette__Direction_97E71C104E36EF0B3195F484D090F427); // 0x0764   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0765   (0x0003)  MISSED
	class UTimelineComponent*                          Cigarette;                                                  // 0x0768   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.Cigarette__FinishedFunc
	// void Cigarette__FinishedFunc();                                                                                       // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.Cigarette__UpdateFunc
	// void Cigarette__UpdateFunc();                                                                                         // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.BeginDestroySequence_Internal
	// void BeginDestroySequence_Internal();                                                                                 // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ExecuteUbergraph_BP_Menu_CamperMale04
	// void ExecuteUbergraph_BP_Menu_CamperMale04(int32_t EntryPoint);                                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Bill/Blueprint/AB_Menu_Bill.AB_Menu_Bill_C
/// Size: 0x0140 (0x0002C0 - 0x000400)
class UAB_Menu_Bill_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0300   (0x00A8)  
	FAset_Camper_Menu                                  MenuAnimSet;                                                // 0x03A8   (0x0058)  


	/// Functions
	// Function /Game/Characters/Campers/Bill/Blueprint/AB_Menu_Bill.AB_Menu_Bill_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Bill/Blueprint/AB_Menu_Bill.AB_Menu_Bill_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Bill/Blueprint/AB_Menu_Bill.AB_Menu_Bill_C.ExecuteUbergraph_AB_Menu_Bill
	// void ExecuteUbergraph_AB_Menu_Bill(int32_t EntryPoint);                                                               // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher15.BP_Menu_Slasher15_C
/// Size: 0x000F (0x000779 - 0x000788)
class ABP_Menu_Slasher15_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	class UBP_Audio_KLR_15_C*                          BP_Audio_KLR;                                               // 0x0780   (0x0008)  
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher15.AB_Menu_Slasher15_C
/// Size: 0x1840 (0x000300 - 0x001B40)
class UAB_Menu_Slasher15_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0340   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0360   (0x0020)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0380   (0x00A8)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0428   (0x0008)  MISSED
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics;                                 // 0x0430   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics0;                                // 0x0890   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics1;                                // 0x0CF0   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics2;                                // 0x1150   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics3;                                // 0x15B0   (0x0460)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x1A10   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x1A48   (0x00B0)  
	FVector                                            __CustomProperty_ScaleInLobby_8AA1A9974F07DE4E9101BDBFFF11173E; // 0x1AF8   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x1B04   (0x0004)  MISSED
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x1B08   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher15.AB_Menu_Slasher15_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher15.AB_Menu_Slasher15_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher15.AB_Menu_Slasher15_C.ExecuteUbergraph_AB_Menu_Slasher15
	// void ExecuteUbergraph_AB_Menu_Slasher15(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Mali/Blueprint/Charms/AB_MS_Skirt020_SurvivorCharmsChains.AB_MS_Skirt020_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_MS_Skirt020_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4357) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_5F6E33154B71D900CAD100B794D1D575); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_5F6E33154B71D900CAD100B794D1D575; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_5F6E33154B71D900CAD100B794D1D575; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4358) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_5F6E33154B71D900CAD100B794D1D575); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4359) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_A693275B43B938E4684E7F95864DC4BD); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_A693275B43B938E4684E7F95864DC4BD; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_A693275B43B938E4684E7F95864DC4BD; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4360) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_A693275B43B938E4684E7F95864DC4BD); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4361) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_0966E87641BEDCA48F8FECAD597E8BA1); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_0966E87641BEDCA48F8FECAD597E8BA1; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_0966E87641BEDCA48F8FECAD597E8BA1; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4362) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_0966E87641BEDCA48F8FECAD597E8BA1); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Mali/Blueprint/Charms/AB_MS_Skirt020_SurvivorCharmsChains.AB_MS_Skirt020_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Mali/Blueprint/Charms/AB_MS_Skirt020_SurvivorCharmsChains.AB_MS_Skirt020_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Mali/Blueprint/Charms/AB_MS_Skirt020_SurvivorCharmsChains.AB_MS_Skirt020_SurvivorCharmsChains_C.ExecuteUbergraph_AB_MS_Skirt020_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_MS_Skirt020_SurvivorCharmsChains(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Mali/Blueprint/Charms/AB_MS_Default_SurvivorCharmsChains.AB_MS_Default_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_MS_Default_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4363) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_3FD16C7940CF3666C06B17B94A12EC30); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_3FD16C7940CF3666C06B17B94A12EC30; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_3FD16C7940CF3666C06B17B94A12EC30; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4364) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_3FD16C7940CF3666C06B17B94A12EC30); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4365) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_8572277C4F268493E42E3DA859A02E19); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_8572277C4F268493E42E3DA859A02E19; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_8572277C4F268493E42E3DA859A02E19; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4366) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_8572277C4F268493E42E3DA859A02E19); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4367) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_3B8BDD9F412F242B934A6E9B11ED786B); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_3B8BDD9F412F242B934A6E9B11ED786B; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_3B8BDD9F412F242B934A6E9B11ED786B; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4368) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_3B8BDD9F412F242B934A6E9B11ED786B); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Mali/Blueprint/Charms/AB_MS_Default_SurvivorCharmsChains.AB_MS_Default_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Mali/Blueprint/Charms/AB_MS_Default_SurvivorCharmsChains.AB_MS_Default_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Mali/Blueprint/Charms/AB_MS_Default_SurvivorCharmsChains.AB_MS_Default_SurvivorCharmsChains_C.ExecuteUbergraph_AB_MS_Default_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_MS_Default_SurvivorCharmsChains(int32_t EntryPoint);                                         // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale07.BP_Menu_CamperFemale07_C
/// Size: 0x0000 (0x000758 - 0x000758)
class ABP_Menu_CamperFemale07_C : public ABP_Menu_Base_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Mali/Blueprint/AB_Menu_Jane.AB_Menu_Jane_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_Jane_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Struct /Game/Characters/Slashers/K28/AnimSets/ASet_Slasher_28_Menu.ASet_Slasher_28_Menu
/// Size: 0x0038 (0x000000 - 0x000038)
struct FASet_Slasher_28_Menu
{ 
	class UAnimSequence*                               IdleMenuSpawn_123_4D5243924018177CC29C54AC3D981E8E;         // 0x0000   (0x0008)  
	class UAnimSequence*                               IdleMenu_129_96306FF546B44FA2EB8D89A0A8AA4CE0;              // 0x0008   (0x0008)  
	class UAnimSequence*                               IdleMenuLobby_124_2B884AFC4FA984E1BF5577826945DF2D;         // 0x0010   (0x0008)  
	class UAnimSequence*                               IdleMenuBack_125_64F814E2466C3643A00575B4E7CD77CC;          // 0x0018   (0x0008)  
	class UAnimSequence*                               MenuInterrupt01_126_6F276602453E0DA38518098E022AEF89;       // 0x0020   (0x0008)  
	class UAnimSequence*                               MenuInterrupt02_127_2F8D955F4CA92BF28580CAA9DD1D08C8;       // 0x0028   (0x0008)  
	class UAnimSequence*                               MenuInterrupt03_128_A22D4D8F4458B8AB2FFE3CA00C80A4E0;       // 0x0030   (0x0008)  
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C
/// Size: 0x0A30 (0x000310 - 0x000D40)
class UAB_Menu_Slasher28_C : public UK28MenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0318   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0350   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0378   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x03F8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer0;                              // 0x0430   (0x0080)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x04B0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x04D8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x0500   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult4;                            // 0x0528   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult5;                            // 0x0550   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult6;                            // 0x0578   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer7;                              // 0x05A0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult8;                                 // 0x0620   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer9;                              // 0x0658   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult10;                                // 0x06D8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer11;                             // 0x0710   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult12;                                // 0x0790   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer13;                             // 0x07C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult14;                                // 0x0848   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0880   (0x00B0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer15;                             // 0x0930   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x09B0   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool16;                            // 0x0A50   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult17;                                // 0x0AF0   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine18;                               // 0x0B28   (0x00B0)  
	bool                                               Role_Selected;                                              // 0x0BD8   (0x0001)  
	bool                                               Is_Online;                                                  // 0x0BD9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0BDA   (0x0006)  MISSED
	class ABP_Menu_Slasher28_C*                        KillerBP;                                                   // 0x0BE0   (0x0008)  
	int32_t                                            RandomInterupt;                                             // 0x0BE8   (0x0004)  
	bool                                               IsLegendary;                                                // 0x0BEC   (0x0001)  
	EGameFlowStep                                      CurrentMenu;                                                // 0x0BED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0BEE   (0x0002)  MISSED
	SDK_UNDEFINED(16,4369) /* FString */               __um(CurrentMenuString);                                    // 0x0BF0   (0x0010)  
	class UAnimSequenceBase*                           Anim_IdleMenuSpawn;                                         // 0x0C00   (0x0008)  
	class UAnimSequenceBase*                           Anim_IdleMenuLobby;                                         // 0x0C08   (0x0008)  
	class UAnimSequenceBase*                           Anim_IdleMenuBack;                                          // 0x0C10   (0x0008)  
	class UAnimSequenceBase*                           Anim_MenuInterupt01;                                        // 0x0C18   (0x0008)  
	class UAnimSequenceBase*                           Anim_MenuInterupt02;                                        // 0x0C20   (0x0008)  
	class UAnimSequenceBase*                           Anim_MenuInterupt03;                                        // 0x0C28   (0x0008)  
	class UAnimSequenceBase*                           Anim_IdleMenu;                                              // 0x0C30   (0x0008)  
	int32_t                                            Animation_Mapping_Index;                                    // 0x0C38   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0C3C   (0x0004)  MISSED
	FASet_Slasher_28_Menu                              ASet_Menu_AA;                                               // 0x0C40   (0x0038)  
	FASet_Slasher_28_Menu                              ASet_Menu_AB;                                               // 0x0C78   (0x0038)  
	FASet_Slasher_28_Menu                              ASet_Menu_BA;                                               // 0x0CB0   (0x0038)  
	FASet_Slasher_28_Menu                              ASet_Menu_BB;                                               // 0x0CE8   (0x0038)  
	SDK_UNDEFINED(16,4370) /* FMulticastInlineDelegate */ __um(K28_IntroStart_Menu_EventDispatcher);               // 0x0D20   (0x0010)  
	SDK_UNDEFINED(16,4371) /* FMulticastInlineDelegate */ __um(K28_IntroEnd_Menu_EventDispatcher);                 // 0x0D30   (0x0010)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnInterrupted_FBF20A854C25DF62FA1C7FA581795689
	// void OnInterrupted_FBF20A854C25DF62FA1C7FA581795689(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnBlendOut_FBF20A854C25DF62FA1C7FA581795689
	// void OnBlendOut_FBF20A854C25DF62FA1C7FA581795689(FName NotifyName);                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnCompleted_FBF20A854C25DF62FA1C7FA581795689
	// void OnCompleted_FBF20A854C25DF62FA1C7FA581795689(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyEnd_67A4A0524204789067E9DB964585A407
	// void OnNotifyEnd_67A4A0524204789067E9DB964585A407(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyBegin_67A4A0524204789067E9DB964585A407
	// void OnNotifyBegin_67A4A0524204789067E9DB964585A407(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnInterrupted_67A4A0524204789067E9DB964585A407
	// void OnInterrupted_67A4A0524204789067E9DB964585A407(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnBlendOut_67A4A0524204789067E9DB964585A407
	// void OnBlendOut_67A4A0524204789067E9DB964585A407(FName NotifyName);                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnCompleted_67A4A0524204789067E9DB964585A407
	// void OnCompleted_67A4A0524204789067E9DB964585A407(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyEnd_4C173F2D43F0E1440D9CA18391F8991B
	// void OnNotifyEnd_4C173F2D43F0E1440D9CA18391F8991B(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyBegin_4C173F2D43F0E1440D9CA18391F8991B
	// void OnNotifyBegin_4C173F2D43F0E1440D9CA18391F8991B(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnInterrupted_4C173F2D43F0E1440D9CA18391F8991B
	// void OnInterrupted_4C173F2D43F0E1440D9CA18391F8991B(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnBlendOut_4C173F2D43F0E1440D9CA18391F8991B
	// void OnBlendOut_4C173F2D43F0E1440D9CA18391F8991B(FName NotifyName);                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnCompleted_4C173F2D43F0E1440D9CA18391F8991B
	// void OnCompleted_4C173F2D43F0E1440D9CA18391F8991B(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyEnd_99176BD143A279FCB5E9EB89DBE0DE89
	// void OnNotifyEnd_99176BD143A279FCB5E9EB89DBE0DE89(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyBegin_99176BD143A279FCB5E9EB89DBE0DE89
	// void OnNotifyBegin_99176BD143A279FCB5E9EB89DBE0DE89(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnInterrupted_99176BD143A279FCB5E9EB89DBE0DE89
	// void OnInterrupted_99176BD143A279FCB5E9EB89DBE0DE89(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnBlendOut_99176BD143A279FCB5E9EB89DBE0DE89
	// void OnBlendOut_99176BD143A279FCB5E9EB89DBE0DE89(FName NotifyName);                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnCompleted_99176BD143A279FCB5E9EB89DBE0DE89
	// void OnCompleted_99176BD143A279FCB5E9EB89DBE0DE89(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyBegin_FBF20A854C25DF62FA1C7FA581795689
	// void OnNotifyBegin_FBF20A854C25DF62FA1C7FA581795689(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyEnd_FBF20A854C25DF62FA1C7FA581795689
	// void OnNotifyEnd_FBF20A854C25DF62FA1C7FA581795689(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_D146C54949337FA1677E2380E865E8BE
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_D146C54949337FA1677E2380E865E8BE(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_55BB68CC4DA86D28996257B1194195ED
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_55BB68CC4DA86D28996257B1194195ED(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_29C65B7342F785B35FEC1A9909C527B2
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_29C65B7342F785B35FEC1A9909C527B2(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_590FBB28457F43249CCC7AA583A29DDF
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_590FBB28457F43249CCC7AA583A29DDF(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_GenerateRandom
	// void AnimNotify_GenerateRandom();                                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.BP_OnCustomizationAnimationMappingIDChanged
	// void BP_OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex);                                      // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.UpdateAnimationSet
	// void UpdateAnimationSet();                                                                                            // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_Idle
	// void AnimNotify_Idle();                                                                                               // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_Interupt01Start
	// void AnimNotify_Interupt01Start();                                                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_Interupt02Start
	// void AnimNotify_Interupt02Start();                                                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_K24_Menu_Interrupt01
	// void AnimNotify_K24_Menu_Interrupt01();                                                                               // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_Hand_Start
	// void AnimNotify_Hand_Start();                                                                                         // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_IntroEnd
	// void AnimNotify_IntroEnd();                                                                                           // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.ExecuteUbergraph_AB_Menu_Slasher28
	// void ExecuteUbergraph_AB_Menu_Slasher28(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.K28_IntroEnd_Menu_EventDispatcher__DelegateSignature
	// void K28_IntroEnd_Menu_EventDispatcher__DelegateSignature();                                                          // [0x61c32d0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher28.AB_Menu_Slasher28_C.K28_IntroStart_Menu_EventDispatcher__DelegateSignature
	// void K28_IntroStart_Menu_EventDispatcher__DelegateSignature();                                                        // [0x61c32d0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Characters/Slashers/K28/Weapons/Blueprints/AB_K28_MoriArm.AB_K28_MoriArm_C
/// Size: 0x0178 (0x0002C0 - 0x000438)
class UAB_K28_MoriArm_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0300   (0x0050)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0350   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0388   (0x00B0)  


	/// Functions
	// Function /Game/Characters/Slashers/K28/Weapons/Blueprints/AB_K28_MoriArm.AB_K28_MoriArm_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K28/Weapons/Blueprints/AB_K28_MoriArm.AB_K28_MoriArm_C.ExecuteUbergraph_AB_K28_MoriArm
	// void ExecuteUbergraph_AB_K28_MoriArm(int32_t EntryPoint);                                                             // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/K28/Weapons/Blueprints/AB_K28_HorsHead.AB_K28_HorsHead_C
/// Size: 0x0178 (0x0002C0 - 0x000438)
class UAB_K28_HorsHead_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0300   (0x0050)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0350   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0388   (0x00B0)  


	/// Functions
	// Function /Game/Characters/Slashers/K28/Weapons/Blueprints/AB_K28_HorsHead.AB_K28_HorsHead_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K28/Weapons/Blueprints/AB_K28_HorsHead.AB_K28_HorsHead_C.ExecuteUbergraph_AB_K28_HorsHead
	// void ExecuteUbergraph_AB_K28_HorsHead(int32_t EntryPoint);                                                            // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher28.BP_Menu_Slasher28_C
/// Size: 0x002F (0x000779 - 0x0007A8)
class ABP_Menu_Slasher28_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UBP_Audio_KLR_28_C*                          BP_Audio_KLR;                                               // 0x0788   (0x0008)  
	class USkeletalMeshComponent*                      MoriArmes;                                                  // 0x0790   (0x0008)  
	class USkeletalMeshComponent*                      HorseHead;                                                  // 0x0798   (0x0008)  
	class USkeletalMeshComponent*                      GrabArmes;                                                  // 0x07A0   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher28.BP_Menu_Slasher28_C.SetAudioSwitchSubKillerState
	// void SetAudioSwitchSubKillerState(FString Switch State);                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher28.BP_Menu_Slasher28_C.FX_K28_NightBegins
	// void FX_K28_NightBegins();                                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher28.BP_Menu_Slasher28_C.FX_K28_NightEnds
	// void FX_K28_NightEnds();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher28.BP_Menu_Slasher28_C.FX_K28_ExitingLocker
	// void FX_K28_ExitingLocker();                                                                                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher28.BP_Menu_Slasher28_C.FX_K28_ShowKiller
	// void FX_K28_ShowKiller();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher28.BP_Menu_Slasher28_C.FX_K28_HideKiller
	// void FX_K28_HideKiller();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher28.BP_Menu_Slasher28_C.ExecuteUbergraph_BP_Menu_Slasher28
	// void ExecuteUbergraph_BP_Menu_Slasher28(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/K28/Weapons/Blueprints/AB_K28_GrabArm.AB_K28_GrabArm_C
/// Size: 0x0178 (0x0002C0 - 0x000438)
class UAB_K28_GrabArm_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0300   (0x0050)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0350   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0388   (0x00B0)  


	/// Functions
	// Function /Game/Characters/Slashers/K28/Weapons/Blueprints/AB_K28_GrabArm.AB_K28_GrabArm_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K28/Weapons/Blueprints/AB_K28_GrabArm.AB_K28_GrabArm_C.ExecuteUbergraph_AB_K28_GrabArm
	// void ExecuteUbergraph_AB_K28_GrabArm(int32_t EntryPoint);                                                             // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale16.BP_Menu_CamperFemale16_C
/// Size: 0x0020 (0x000758 - 0x000778)
class ABP_Menu_CamperFemale16_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  
	class USkeletalMeshComponent*                      S31Radio;                                                   // 0x0760   (0x0008)  
	class UAB_S31_Radio_C*                             As_AB_S31_Radio;                                            // 0x0768   (0x0008)  
	class UAB_Menu_S31_C*                              As_AB_Menu_S31;                                             // 0x0770   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale16.BP_Menu_CamperFemale16_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale16.BP_Menu_CamperFemale16_C.ExecuteUbergraph_BP_Menu_CamperFemale16
	// void ExecuteUbergraph_BP_Menu_CamperFemale16(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S31/Blueprints/AB_Menu_S31.AB_Menu_S31_C
/// Size: 0x0009 (0x001B18 - 0x001B21)
class UAB_Menu_S31_C : public UAB_Menu_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1B18   (0x0008)  
	bool                                               radioInterruptTransition;                                   // 0x1B20   (0x0001)  


	/// Functions
	// Function /Game/Characters/Campers/S31/Blueprints/AB_Menu_S31.AB_Menu_S31_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S31/Blueprints/AB_Menu_S31.AB_Menu_S31_C.AnimNotify_IsPlayingMenuInterruptFromTransition
	// void AnimNotify_IsPlayingMenuInterruptFromTransition();                                                               // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S31/Blueprints/AB_Menu_S31.AB_Menu_S31_C.AnimNotify_IsLeavingMenuInterruptFromTransition
	// void AnimNotify_IsLeavingMenuInterruptFromTransition();                                                               // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S31/Blueprints/AB_Menu_S31.AB_Menu_S31_C.ExecuteUbergraph_AB_Menu_S31
	// void ExecuteUbergraph_AB_Menu_S31(int32_t EntryPoint);                                                                // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher16.BP_Menu_Slasher16_C
/// Size: 0x000F (0x000779 - 0x000788)
class ABP_Menu_Slasher16_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	class UBP_Audio_KLR_16_C*                          BP_Audio_KLR;                                               // 0x0780   (0x0008)  
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher16.AB_Menu_Slasher16_C
/// Size: 0x0120 (0x000300 - 0x000420)
class UAB_Menu_Slasher16_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03E8   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher16.AB_Menu_Slasher16_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher16.AB_Menu_Slasher16_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher16.AB_Menu_Slasher16_C.ExecuteUbergraph_AB_Menu_Slasher16
	// void ExecuteUbergraph_AB_Menu_Slasher16(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher29.AB_Menu_Slasher29_C
/// Size: 0x0A80 (0x000300 - 0x000D80)
class UAB_Menu_Slasher29_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0340   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0368   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0390   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x03B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x03E0   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0408   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0488   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer4;                              // 0x04C0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult5;                                 // 0x0540   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0578   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult6;                                 // 0x0628   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer7;                              // 0x0660   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult8;                                 // 0x06E0   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer9;                              // 0x0718   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult10;                                // 0x0798   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult11;                           // 0x07D0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult12;                           // 0x07F8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult13;                           // 0x0820   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult14;                           // 0x0848   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult15;                           // 0x0870   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult16;                           // 0x0898   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer17;                             // 0x08C0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult18;                                // 0x0940   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer19;                             // 0x0978   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult20;                                // 0x09F8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer21;                             // 0x0A30   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult22;                                // 0x0AB0   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer23;                             // 0x0AE8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult24;                                // 0x0B68   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine25;                               // 0x0BA0   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult26;                                // 0x0C50   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine27;                               // 0x0C88   (0x00B0)  
	bool                                               Role_Selected;                                              // 0x0D38   (0x0001)  
	bool                                               Is_Online;                                                  // 0x0D39   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0D3A   (0x0002)  MISSED
	int32_t                                            RandomInterupt;                                             // 0x0D3C   (0x0004)  
	FRotator                                           StartRot;                                                   // 0x0D40   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0D4C   (0x0004)  MISSED
	class ABP_Menu_Slasher27_C*                        KillerBP;                                                   // 0x0D50   (0x0008)  
	FRotator                                           CharacterRotationBeforeJumpScare;                           // 0x0D58   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0D64   (0x0004)  MISSED
	class ABP_Menu_Slasher29_C*                        As_BP_Menu_Slasher_29;                                      // 0x0D68   (0x0008)  
	bool                                               _isAboutToPlayCameraInterrupt;                              // 0x0D70   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0D71   (0x0007)  MISSED
	class ADBDMenuPlayer*                              As_DBDMenu_Player;                                          // 0x0D78   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher29.AB_Menu_Slasher29_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher29.AB_Menu_Slasher29_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_707E28DC47ACE390FE617EB7FC2B8C2D
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_707E28DC47ACE390FE617EB7FC2B8C2D(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher29.AB_Menu_Slasher29_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_E78BBE4441702E793C6476A83981FEA0
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_E78BBE4441702E793C6476A83981FEA0(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher29.AB_Menu_Slasher29_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_4E65A5A7443D73F2DCB461B382A86454
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_4E65A5A7443D73F2DCB461B382A86454(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher29.AB_Menu_Slasher29_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher29.AB_Menu_Slasher29_C.AnimNotify_GenerateRandom
	// void AnimNotify_GenerateRandom();                                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher29.AB_Menu_Slasher29_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher29.AB_Menu_Slasher29_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_933F777D4FDB588172B385AEE6364472
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_933F777D4FDB588172B385AEE6364472(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher29.AB_Menu_Slasher29_C.AnimNotify_GrabAnimationStarted
	// void AnimNotify_GrabAnimationStarted();                                                                               // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher29.AB_Menu_Slasher29_C.AnimNotify_GrabAnimationEnded
	// void AnimNotify_GrabAnimationEnded();                                                                                 // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher29.AB_Menu_Slasher29_C.AnimNotify_EnableCloth
	// void AnimNotify_EnableCloth();                                                                                        // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher29.AB_Menu_Slasher29_C.AnimNotify_InterruptStart
	// void AnimNotify_InterruptStart();                                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher29.AB_Menu_Slasher29_C.ExecuteUbergraph_AB_Menu_Slasher29
	// void ExecuteUbergraph_AB_Menu_Slasher29(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher29.BP_Menu_Slasher29_C
/// Size: 0x001F (0x000779 - 0x000798)
class ABP_Menu_Slasher29_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class USkeletalMeshComponent*                      TentacleArm;                                                // 0x0788   (0x0008)  
	class UBP_Audio_KLR_29_C*                          BP_Audio_KLR;                                               // 0x0790   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher29.BP_Menu_Slasher29_C.BeginSmokeIn
	// void BeginSmokeIn();                                                                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher29.BP_Menu_Slasher29_C.EnableCloth
	// void EnableCloth();                                                                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher29.BP_Menu_Slasher29_C.PlayTentacleInterrupt
	// void PlayTentacleInterrupt();                                                                                         // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher29.BP_Menu_Slasher29_C.ExecuteUbergraph_BP_Menu_Slasher29
	// void ExecuteUbergraph_BP_Menu_Slasher29(int32_t EntryPoint);                                                          // [0x61c32d0] Final|HasDefaults    
};

/// Class /Game/Characters/Slashers/k29/Weapons/Models/Blueprints/AB_K29_Tentacle01_Menu.AB_K29_Tentacle01_Menu_C
/// Size: 0x02C9 (0x000300 - 0x0005C9)
class UAB_K29_Tentacle01_Menu_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0340   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0368   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0390   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0410   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer1;                              // 0x0448   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult2;                                 // 0x04C8   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0500   (0x00B0)  
	bool                                               Role_Selected;                                              // 0x05B0   (0x0001)  
	bool                                               Is_Online;                                                  // 0x05B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x05B2   (0x0002)  MISSED
	int32_t                                            RandomInterupt;                                             // 0x05B4   (0x0004)  
	class UAB_Menu_Slasher29_C*                        As_AB_Menu_Slasher_29;                                      // 0x05B8   (0x0008)  
	class ADBDMenuPlayer*                              As_DBDMenu_Player;                                          // 0x05C0   (0x0008)  
	bool                                               _IsPlayingInterrupt;                                        // 0x05C8   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/k29/Weapons/Models/Blueprints/AB_K29_Tentacle01_Menu.AB_K29_Tentacle01_Menu_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/k29/Weapons/Models/Blueprints/AB_K29_Tentacle01_Menu.AB_K29_Tentacle01_Menu_C.PlayInterrupt
	// void PlayInterrupt();                                                                                                 // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/k29/Weapons/Models/Blueprints/AB_K29_Tentacle01_Menu.AB_K29_Tentacle01_Menu_C.ExecuteUbergraph_AB_K29_Tentacle01_Menu
	// void ExecuteUbergraph_AB_K29_Tentacle01_Menu(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale17.BP_Menu_CamperFemale17_C
/// Size: 0x0008 (0x000758 - 0x000760)
class ABP_Menu_CamperFemale17_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale17.BP_Menu_CamperFemale17_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale17.BP_Menu_CamperFemale17_C.ExecuteUbergraph_BP_Menu_CamperFemale17
	// void ExecuteUbergraph_BP_Menu_CamperFemale17(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S32/Blueprints/AB_Menu_S32.AB_Menu_S32_C
/// Size: 0x0008 (0x001B18 - 0x001B20)
class UAB_Menu_S32_C : public UAB_Menu_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1B18   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S32/Blueprints/AB_Menu_S32.AB_Menu_S32_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S32/Blueprints/AB_Menu_S32.AB_Menu_S32_C.ExecuteUbergraph_AB_Menu_S32
	// void ExecuteUbergraph_AB_Menu_S32(int32_t EntryPoint);                                                                // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale18.BP_Menu_CamperFemale18_C
/// Size: 0x0008 (0x000758 - 0x000760)
class ABP_Menu_CamperFemale18_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale18.BP_Menu_CamperFemale18_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale18.BP_Menu_CamperFemale18_C.ExecuteUbergraph_BP_Menu_CamperFemale18
	// void ExecuteUbergraph_BP_Menu_CamperFemale18(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S33/Blueprints/AB_Menu_S33.AB_Menu_S33_C
/// Size: 0x0008 (0x001B18 - 0x001B20)
class UAB_Menu_S33_C : public UAB_Menu_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1B18   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S33/Blueprints/AB_Menu_S33.AB_Menu_S33_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S33/Blueprints/AB_Menu_S33.AB_Menu_S33_C.ExecuteUbergraph_AB_Menu_S33
	// void ExecuteUbergraph_AB_Menu_S33(int32_t EntryPoint);                                                                // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher17.BP_Menu_Slasher17_C
/// Size: 0x0017 (0x000779 - 0x000790)
class ABP_Menu_Slasher17_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	class UBP_Audio_KLR_17_C*                          BP_Audio_KLR;                                               // 0x0780   (0x0008)  
	class UDBDPlayerPositionOffsetComponent*           DBDPlayerPositionOffset;                                    // 0x0788   (0x0008)  
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher17.AB_Menu_Slasher17_C
/// Size: 0x0120 (0x000300 - 0x000420)
class UAB_Menu_Slasher17_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03E8   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher17.AB_Menu_Slasher17_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher17.AB_Menu_Slasher17_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher17.AB_Menu_Slasher17_C.ExecuteUbergraph_AB_Menu_Slasher17
	// void ExecuteUbergraph_AB_Menu_Slasher17(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Qatar_F/Blueprint/Charms/AB_QF_Longcoat_SurvivorCharmsChains.AB_QF_Longcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_QF_Longcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4372) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_871956D9487011CF7C24539794055CC0); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_871956D9487011CF7C24539794055CC0; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_871956D9487011CF7C24539794055CC0; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4373) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_871956D9487011CF7C24539794055CC0); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4374) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_F9B99B784F91207F7BE726A4D2F83A31); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_F9B99B784F91207F7BE726A4D2F83A31; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_F9B99B784F91207F7BE726A4D2F83A31; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4375) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_F9B99B784F91207F7BE726A4D2F83A31); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4376) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_7F114AF54C1CB42F3A60B9AE8E041C07); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_7F114AF54C1CB42F3A60B9AE8E041C07; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_7F114AF54C1CB42F3A60B9AE8E041C07; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4377) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_7F114AF54C1CB42F3A60B9AE8E041C07); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Qatar_F/Blueprint/Charms/AB_QF_Longcoat_SurvivorCharmsChains.AB_QF_Longcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Qatar_F/Blueprint/Charms/AB_QF_Longcoat_SurvivorCharmsChains.AB_QF_Longcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Qatar_F/Blueprint/Charms/AB_QF_Longcoat_SurvivorCharmsChains.AB_QF_Longcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_QF_Longcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_QF_Longcoat_SurvivorCharmsChains(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Qatar_F/Blueprint/Charms/AB_QF_Default_SurvivorCharmsChains.AB_QF_Default_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_QF_Default_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4378) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_5D57A61D4D31721294FBBE9D36B208D7); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_5D57A61D4D31721294FBBE9D36B208D7; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_5D57A61D4D31721294FBBE9D36B208D7; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4379) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_5D57A61D4D31721294FBBE9D36B208D7); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4380) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_B4B72FE44BE019F63424BABE73A6B7B5); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_B4B72FE44BE019F63424BABE73A6B7B5; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_B4B72FE44BE019F63424BABE73A6B7B5; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4381) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_B4B72FE44BE019F63424BABE73A6B7B5); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4382) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_B7DFF37747636C1A7D40FC9F5C79AA3D); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_B7DFF37747636C1A7D40FC9F5C79AA3D; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_B7DFF37747636C1A7D40FC9F5C79AA3D; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4383) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_B7DFF37747636C1A7D40FC9F5C79AA3D); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Qatar_F/Blueprint/Charms/AB_QF_Default_SurvivorCharmsChains.AB_QF_Default_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Qatar_F/Blueprint/Charms/AB_QF_Default_SurvivorCharmsChains.AB_QF_Default_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Qatar_F/Blueprint/Charms/AB_QF_Default_SurvivorCharmsChains.AB_QF_Default_SurvivorCharmsChains_C.ExecuteUbergraph_AB_QF_Default_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_QF_Default_SurvivorCharmsChains(int32_t EntryPoint);                                         // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale08.BP_Menu_CamperFemale08_C
/// Size: 0x0000 (0x000758 - 0x000758)
class ABP_Menu_CamperFemale08_C : public ABP_Menu_Base_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Qatar_F/Blueprint/AB_Menu_Nancy.AB_Menu_Nancy_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_Nancy_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale11.BP_Menu_CamperMale11_C
/// Size: 0x0000 (0x000758 - 0x000758)
class ABP_Menu_CamperMale11_C : public ABP_Menu_Base_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Qatar_M/Blueprint/AB_Menu_Steve.AB_Menu_Steve_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_Steve_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher30.BP_Menu_Slasher30_C
/// Size: 0x001F (0x000779 - 0x000798)
class ABP_Menu_Slasher30_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UBP_Audio_KLR_30_C*                          BP_Audio_KLR;                                               // 0x0788   (0x0008)  
	class ABP_MenuFlags_C*                             MenuFlags;                                                  // 0x0790   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher30.BP_Menu_Slasher30_C.BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
	// void BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory category, FString switchState); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher30.BP_Menu_Slasher30_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher30.BP_Menu_Slasher30_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher30.BP_Menu_Slasher30_C.RemoveAssetsBeforeDestroy
	// void RemoveAssetsBeforeDestroy();                                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher30.BP_Menu_Slasher30_C.BeginSmokeIn
	// void BeginSmokeIn();                                                                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher30.BP_Menu_Slasher30_C.ExecuteUbergraph_BP_Menu_Slasher30
	// void ExecuteUbergraph_BP_Menu_Slasher30(int32_t EntryPoint);                                                          // [0x61c32d0] Final|HasDefaults    
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher30.AB_Menu_Slasher30_C
/// Size: 0x08E8 (0x000300 - 0x000BE8)
class UAB_Menu_Slasher30_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0340   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0368   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x03E8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer0;                              // 0x0420   (0x0080)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x04A0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x04C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x04F0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult4;                            // 0x0518   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult5;                            // 0x0540   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult6;                            // 0x0568   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer7;                              // 0x0590   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult8;                                 // 0x0610   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer9;                              // 0x0648   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult10;                                // 0x06C8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer11;                             // 0x0700   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult12;                                // 0x0780   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer13;                             // 0x07B8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult14;                                // 0x0838   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0870   (0x00B0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer15;                             // 0x0920   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x09A0   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool16;                            // 0x0A40   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult17;                                // 0x0AE0   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine18;                               // 0x0B18   (0x00B0)  
	bool                                               Role_Selected;                                              // 0x0BC8   (0x0001)  
	bool                                               Is_Online;                                                  // 0x0BC9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0BCA   (0x0002)  MISSED
	int32_t                                            RandomInterupt;                                             // 0x0BCC   (0x0004)  
	EGameFlowStep                                      CurrentMenu;                                                // 0x0BD0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0BD1   (0x0007)  MISSED
	SDK_UNDEFINED(16,4384) /* FString */               __um(CurrentMenuString);                                    // 0x0BD8   (0x0010)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher30.AB_Menu_Slasher30_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher30.AB_Menu_Slasher30_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher30_AnimGraphNode_TransitionResult_956F39ED48CD98A09FE24DAA729BAA00
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher30_AnimGraphNode_TransitionResult_956F39ED48CD98A09FE24DAA729BAA00(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher30.AB_Menu_Slasher30_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher30_AnimGraphNode_TransitionResult_49B0FA774C2EF6200E273FA5D3754906
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher30_AnimGraphNode_TransitionResult_49B0FA774C2EF6200E273FA5D3754906(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher30.AB_Menu_Slasher30_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher30_AnimGraphNode_TransitionResult_1352FA0845D1127F5A5445AF45F2DCCA
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher30_AnimGraphNode_TransitionResult_1352FA0845D1127F5A5445AF45F2DCCA(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher30.AB_Menu_Slasher30_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher30_AnimGraphNode_TransitionResult_715BB76B4EF6E3FAA4367198980C8551
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher30_AnimGraphNode_TransitionResult_715BB76B4EF6E3FAA4367198980C8551(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher30.AB_Menu_Slasher30_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher30.AB_Menu_Slasher30_C.AnimNotify_GenerateRandom
	// void AnimNotify_GenerateRandom();                                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher30.AB_Menu_Slasher30_C.ExecuteUbergraph_AB_Menu_Slasher30
	// void ExecuteUbergraph_AB_Menu_Slasher30(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S34/Blueprints/AB_Menu_S34.AB_Menu_S34_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_S34_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale16.BP_Menu_CamperMale16_C
/// Size: 0x0008 (0x000758 - 0x000760)
class ABP_Menu_CamperMale16_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale16.BP_Menu_CamperMale16_C.ExecuteUbergraph_BP_Menu_CamperMale16
	// void ExecuteUbergraph_BP_Menu_CamperMale16(int32_t EntryPoint);                                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C
/// Size: 0x0AF0 (0x0002E0 - 0x000DD0)
class UAB_K31_Drone_SW00_C : public UK31DroneAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02E0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02E8   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0320   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0348   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0370   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x0398   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x03C0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult4;                            // 0x03E8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult5;                            // 0x0410   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult6;                            // 0x0438   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult7;                            // 0x0460   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult8;                            // 0x0488   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult9;                            // 0x04B0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult10;                           // 0x04D8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult11;                           // 0x0500   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult12;                           // 0x0528   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult13;                           // 0x0550   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult14;                           // 0x0578   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x05A0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0620   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer15;                             // 0x0658   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult16;                                // 0x06D8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer17;                             // 0x0710   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult18;                                // 0x0790   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer19;                             // 0x07C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult20;                                // 0x0848   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer21;                             // 0x0880   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult22;                                // 0x0900   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer23;                             // 0x0938   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult24;                                // 0x09B8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer25;                             // 0x09F0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult26;                                // 0x0A70   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer27;                             // 0x0AA8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult28;                                // 0x0B28   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer29;                             // 0x0B60   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult30;                                // 0x0BE0   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer31;                             // 0x0C18   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult32;                                // 0x0C98   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0CD0   (0x00B0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0D80   (0x0050)  


	/// Functions
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_705D2D3949AAD85E4074D0914BA9F216
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_705D2D3949AAD85E4074D0914BA9F216(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_876FD404465408A92338A48C40A44D93
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_876FD404465408A92338A48C40A44D93(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_4BFE553B42F42C9097E843B0529AB1D5
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_4BFE553B42F42C9097E843B0529AB1D5(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_1165791C4728D35F9929D5A94DC42FA6
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_1165791C4728D35F9929D5A94DC42FA6(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_32CFE95D49F5416722CFF680EA49A230
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_32CFE95D49F5416722CFF680EA49A230(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_5E09C99C4A7E608D0ED899873F1E7093
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_5E09C99C4A7E608D0ED899873F1E7093(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_6FA5AD214342AE2F2FCA298BB8B0E8E8
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_6FA5AD214342AE2F2FCA298BB8B0E8E8(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_9CEB5D274D8EA01ACAC5D5ACBD0E7374
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_9CEB5D274D8EA01ACAC5D5ACBD0E7374(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_20DFB751402AC8571068C686F3801BDF
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_20DFB751402AC8571068C686F3801BDF(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_8507F89C4EA9EB6B3E3A4C85AA5CD8DA
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_8507F89C4EA9EB6B3E3A4C85AA5CD8DA(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_F9DEEE334283F85D5C3957A5C74774A2
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_F9DEEE334283F85D5C3957A5C74774A2(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_90B5ED4C40B4A31418674A9F74279CEE
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_90B5ED4C40B4A31418674A9F74279CEE(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_93C0EB0A4E7158E365EA3380454D4128
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_93C0EB0A4E7158E365EA3380454D4128(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_FE86B32142BD91799B0455A684E68DE0
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_FE86B32142BD91799B0455A684E68DE0(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_7D627FE941E27477A045B8B20A283523
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_7D627FE941E27477A045B8B20A283523(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_AC2DDE8B436224248903E6A59C1C8592
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K31_Drone_SW00_AnimGraphNode_TransitionResult_AC2DDE8B436224248903E6A59C1C8592(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Drone_SW00.AB_K31_Drone_SW00_C.ExecuteUbergraph_AB_K31_Drone_SW00
	// void ExecuteUbergraph_AB_K31_Drone_SW00(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Radar.AB_K31_Radar_C
/// Size: 0x0BB1 (0x000300 - 0x000EB1)
class UAB_K31_Radar_C : public UK31RadarAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0340   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0368   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0390   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x03B8   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x03E0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0460   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer3;                              // 0x0498   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult4;                                 // 0x0518   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer5;                              // 0x0550   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult6;                                 // 0x05D0   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer7;                              // 0x0608   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult8;                                 // 0x0688   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x06C0   (0x00B0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0770   (0x0050)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x07C0   (0x0158)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult9;                            // 0x0918   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult10;                           // 0x0940   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer11;                             // 0x0968   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult12;                                // 0x09E8   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0A20   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult13;                                // 0x0A50   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine14;                               // 0x0A88   (0x00B0)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult15;                           // 0x0B38   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult16;                           // 0x0B60   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer17;                             // 0x0B88   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult18;                                // 0x0C08   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose19;                              // 0x0C40   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult20;                                // 0x0C70   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine21;                               // 0x0CA8   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose22;                             // 0x0D58   (0x0158)  
	bool                                               _isFPV;                                                     // 0x0EB0   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Radar.AB_K31_Radar_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Radar.AB_K31_Radar_C.BlueprintBeginPlay
	// void BlueprintBeginPlay();                                                                                            // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Radar.AB_K31_Radar_C.AnimNotify__consumeIsActivatingADroneRadar
	// void AnimNotify__consumeIsActivatingADroneRadar();                                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Radar.AB_K31_Radar_C.AnimNotify__consumeIsRecallingADroneRadar
	// void AnimNotify__consumeIsRecallingADroneRadar();                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K31/Weapons/Blueprint/AB_K31_Radar.AB_K31_Radar_C.ExecuteUbergraph_AB_K31_Radar
	// void ExecuteUbergraph_AB_K31_Radar(int32_t EntryPoint);                                                               // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C
/// Size: 0x03B0 (0x000310 - 0x0006C0)
class UAB_Menu_Slasher31_C : public UK31MenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0318   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0350   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0378   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x03F8   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0430   (0x00A8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult0;                                 // 0x04D8   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0510   (0x00B0)  
	FVector                                            __CustomProperty_ScaleInLobby_226EA7614F8616A5F20B86B02F45F8A4; // 0x05C0   (0x000C)  
	bool                                               Role_Selected;                                              // 0x05CC   (0x0001)  
	bool                                               Is_Online;                                                  // 0x05CD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x05CE   (0x0002)  MISSED
	int32_t                                            RandomInterupt;                                             // 0x05D0   (0x0004)  
	EGameFlowStep                                      CurrentMenu;                                                // 0x05D4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x05D5   (0x0003)  MISSED
	class ABP_Menu_Slasher31_C*                        KillerBP;                                                   // 0x05D8   (0x0008)  
	FAset_Slasher_Menu                                 MenuAnimSet_01;                                             // 0x05E0   (0x0038)  
	FAset_Slasher_Menu                                 MenuAnimSet_02;                                             // 0x0618   (0x0038)  
	FAset_Slasher_Menu                                 MenuAnimSet_03;                                             // 0x0650   (0x0038)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x0688   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnNotifyEnd_FF79019945E856B21A4DD7B9040097DE
	// void OnNotifyEnd_FF79019945E856B21A4DD7B9040097DE(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnNotifyBegin_FF79019945E856B21A4DD7B9040097DE
	// void OnNotifyBegin_FF79019945E856B21A4DD7B9040097DE(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnInterrupted_FF79019945E856B21A4DD7B9040097DE
	// void OnInterrupted_FF79019945E856B21A4DD7B9040097DE(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnBlendOut_FF79019945E856B21A4DD7B9040097DE
	// void OnBlendOut_FF79019945E856B21A4DD7B9040097DE(FName NotifyName);                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnCompleted_FF79019945E856B21A4DD7B9040097DE
	// void OnCompleted_FF79019945E856B21A4DD7B9040097DE(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnNotifyEnd_0A05E92D4B4424ABA1D3BABD878923E8
	// void OnNotifyEnd_0A05E92D4B4424ABA1D3BABD878923E8(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnNotifyBegin_0A05E92D4B4424ABA1D3BABD878923E8
	// void OnNotifyBegin_0A05E92D4B4424ABA1D3BABD878923E8(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnInterrupted_0A05E92D4B4424ABA1D3BABD878923E8
	// void OnInterrupted_0A05E92D4B4424ABA1D3BABD878923E8(FName NotifyName);                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnBlendOut_0A05E92D4B4424ABA1D3BABD878923E8
	// void OnBlendOut_0A05E92D4B4424ABA1D3BABD878923E8(FName NotifyName);                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnCompleted_0A05E92D4B4424ABA1D3BABD878923E8
	// void OnCompleted_0A05E92D4B4424ABA1D3BABD878923E8(FName NotifyName);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher31_AnimGraphNode_TransitionResult_4D69DF7844ADC3C46C7608990975E05A
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher31_AnimGraphNode_TransitionResult_4D69DF7844ADC3C46C7608990975E05A(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnCustoChange
	// void OnCustoChange(int32_t animationMappingIndex);                                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnMenuAnimationStateChange_Event
	// void OnMenuAnimationStateChange_Event(TEnumAsByte<Enum_MenuAnimationState> State);                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.OnCustomizationAnimationMappingIDChanged
	// void OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex);                                         // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher31.AB_Menu_Slasher31_C.ExecuteUbergraph_AB_Menu_Slasher31
	// void ExecuteUbergraph_AB_Menu_Slasher31(int32_t EntryPoint);                                                          // [0x61c32d0] Final|HasDefaults    
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher31.BP_Menu_Slasher31_C
/// Size: 0x0027 (0x000779 - 0x0007A0)
class ABP_Menu_Slasher31_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UBP_Audio_KLR_31_C*                          BP_Audio_KLR;                                               // 0x0788   (0x0008)  
	class USkeletalMeshComponent*                      Drone;                                                      // 0x0790   (0x0008)  
	class USkeletalMeshComponent*                      Scanner;                                                    // 0x0798   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher31.BP_Menu_Slasher31_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher31.BP_Menu_Slasher31_C.BndEvt__BP_Slasher_Character_31_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
	// void BndEvt__BP_Slasher_Character_31_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory category, FString switchState); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher31.BP_Menu_Slasher31_C.ExecuteUbergraph_BP_Menu_Slasher31
	// void ExecuteUbergraph_BP_Menu_Slasher31(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale19.BP_Menu_CamperFemale19_C
/// Size: 0x0008 (0x000758 - 0x000760)
class ABP_Menu_CamperFemale19_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale19.BP_Menu_CamperFemale19_C.ExecuteUbergraph_BP_Menu_CamperFemale19
	// void ExecuteUbergraph_BP_Menu_CamperFemale19(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S35/Blueprints/AB_Menu_S35.AB_Menu_S35_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_S35_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/S36/Blueprints/Charms/AB_S36_Default_SurvivorCharmsChains.AB_S36_Default_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_S36_Default_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4385) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_F15B57BE4982C97A7CD12DA7CEA5FB20); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_F15B57BE4982C97A7CD12DA7CEA5FB20; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_F15B57BE4982C97A7CD12DA7CEA5FB20; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4386) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_F15B57BE4982C97A7CD12DA7CEA5FB20); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4387) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_67E9CDCC4E2B646BC166548AA321F177); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_67E9CDCC4E2B646BC166548AA321F177; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_67E9CDCC4E2B646BC166548AA321F177; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4388) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_67E9CDCC4E2B646BC166548AA321F177); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4389) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_DDEE6E1F4100304BE99F5BB3FD8DEDB6); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_DDEE6E1F4100304BE99F5BB3FD8DEDB6; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_DDEE6E1F4100304BE99F5BB3FD8DEDB6; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4390) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_DDEE6E1F4100304BE99F5BB3FD8DEDB6); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S36/Blueprints/Charms/AB_S36_Default_SurvivorCharmsChains.AB_S36_Default_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S36/Blueprints/Charms/AB_S36_Default_SurvivorCharmsChains.AB_S36_Default_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S36/Blueprints/Charms/AB_S36_Default_SurvivorCharmsChains.AB_S36_Default_SurvivorCharmsChains_C.ExecuteUbergraph_AB_S36_Default_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_S36_Default_SurvivorCharmsChains(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale17.BP_Menu_CamperMale17_C
/// Size: 0x0008 (0x000758 - 0x000760)
class ABP_Menu_CamperMale17_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale17.BP_Menu_CamperMale17_C.ExecuteUbergraph_BP_Menu_CamperMale17
	// void ExecuteUbergraph_BP_Menu_CamperMale17(int32_t EntryPoint);                                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S36/Blueprints/AB_Menu_S36.AB_Menu_S36_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_S36_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Slashers/Sweden/Weapons/Models/ACC/Blueprints/AB_SK_Ring_ACC01.AB_SK_Ring_ACC01_C
/// Size: 0x0B30 (0x0002C0 - 0x000DF0)
class UAB_SK_Ring_ACC01_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x04D8   (0x0008)  MISSED
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics;                                 // 0x04E0   (0x0460)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0940   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0960   (0x0020)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics0;                                // 0x0980   (0x0460)  
	bool                                               Initialized;                                                // 0x0DE0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0DE1   (0x0007)  MISSED
	class USkeletalMeshComponent*                      OwningCharacterSkeletalMesh;                                // 0x0DE8   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Sweden/Weapons/Models/ACC/Blueprints/AB_SK_Ring_ACC01.AB_SK_Ring_ACC01_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Sweden/Weapons/Models/ACC/Blueprints/AB_SK_Ring_ACC01.AB_SK_Ring_ACC01_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Sweden/Weapons/Models/ACC/Blueprints/AB_SK_Ring_ACC01.AB_SK_Ring_ACC01_C.ExecuteUbergraph_AB_SK_Ring_ACC01
	// void ExecuteUbergraph_AB_SK_Ring_ACC01(int32_t EntryPoint);                                                           // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher18.AB_Menu_Slasher18_C
/// Size: 0x0120 (0x000300 - 0x000420)
class UAB_Menu_Slasher18_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03E8   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher18.AB_Menu_Slasher18_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher18.AB_Menu_Slasher18_C.AnimNotify_FX_SK_SwitchClub_DemonMode
	// void AnimNotify_FX_SK_SwitchClub_DemonMode();                                                                         // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher18.AB_Menu_Slasher18_C.AnimNotify_FX_SK_SwitchClub_NormalMode
	// void AnimNotify_FX_SK_SwitchClub_NormalMode();                                                                        // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher18.AB_Menu_Slasher18_C.AnimNotify_FK_SK_ShowKatana
	// void AnimNotify_FK_SK_ShowKatana();                                                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher18.AB_Menu_Slasher18_C.AnimNotify_FX_SK_HideKatana
	// void AnimNotify_FX_SK_HideKatana();                                                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher18.AB_Menu_Slasher18_C.AnimNotify_FX_SK_ShowDemonCosmetic
	// void AnimNotify_FX_SK_ShowDemonCosmetic();                                                                            // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher18.AB_Menu_Slasher18_C.AnimNotify_FX_SK_HideDemonCosmetic
	// void AnimNotify_FX_SK_HideDemonCosmetic();                                                                            // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher18.AB_Menu_Slasher18_C.AnimNotify_FX_SK_HideKatana_TPV
	// void AnimNotify_FX_SK_HideKatana_TPV();                                                                               // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher18.AB_Menu_Slasher18_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher18.AB_Menu_Slasher18_C.AnimNotify_FX_SK_ReturnToNormal
	// void AnimNotify_FX_SK_ReturnToNormal();                                                                               // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher18.AB_Menu_Slasher18_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher18.AB_Menu_Slasher18_C.ExecuteUbergraph_AB_Menu_Slasher18
	// void ExecuteUbergraph_AB_Menu_Slasher18(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C
/// Size: 0x00EC (0x000779 - 0x000865)
class ABP_Menu_Slasher18_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UBP_Audio_KLR_18_C*                          BP_Audio_KLR;                                               // 0x0788   (0x0008)  
	class USkeletalMeshComponent*                      rings;                                                      // 0x0790   (0x0008)  
	class UDemonModeMenuComponent*                     DemonModeMenu;                                              // 0x0798   (0x0008)  
	class USkeletalMeshComponent*                      SKWS01_REF;                                                 // 0x07A0   (0x0008)  
	FLinearColor                                       TML_DemonModeCusto_Color_4A028AF64D8C75B37ACB968AFFF999A6;  // 0x07A8   (0x0010)  
	float                                              TML_DemonModeCusto_Demon_Custo_Dissolve_4A028AF64D8C75B37ACB968AFFF999A6; // 0x07B8   (0x0004)  
	float                                              TML_DemonModeCusto_Normal_Custo_Dissolve_4A028AF64D8C75B37ACB968AFFF999A6; // 0x07BC   (0x0004)  
	SDK_UNDEFINED(1,4391) /* TEnumAsByte<ETimelineDirection> */ __um(TML_DemonModeCusto__Direction_4A028AF64D8C75B37ACB968AFFF999A6); // 0x07C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x07C1   (0x0007)  MISSED
	class UTimelineComponent*                          TML_DemonModeCusto;                                         // 0x07C8   (0x0008)  
	float                                              TML_KatanaDissolve_Dissolve_E350E1F74AF3386DE5C9E7A92E1CFCA4; // 0x07D0   (0x0004)  
	SDK_UNDEFINED(1,4392) /* TEnumAsByte<ETimelineDirection> */ __um(TML_KatanaDissolve__Direction_E350E1F74AF3386DE5C9E7A92E1CFCA4); // 0x07D4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x07D5   (0x0003)  MISSED
	class UTimelineComponent*                          TML_KatanaDissolve;                                         // 0x07D8   (0x0008)  
	bool                                               IsKatanaVisible;                                            // 0x07E0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x07E1   (0x0007)  MISSED
	TArray<class USkeletalMeshComponent*>              NormalModeCustoParts;                                       // 0x07E8   (0x0010)  
	TArray<class UParticleSystemComponent*>            DemonModeVFX;                                               // 0x07F8   (0x0010)  
	TArray<class USkeletalMeshComponent*>              DemonModeCustoParts;                                        // 0x0808   (0x0010)  
	TArray<FLinearColor>                               SKOniEmissiveDefault;                                       // 0x0818   (0x0010)  
	bool                                               IsInDemonMode;                                              // 0x0828   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0829   (0x0007)  MISSED
	TArray<FLinearColor>                               SM_OniEmissiveDefault;                                      // 0x0830   (0x0010)  
	float                                              MaxSwordDissolveValue;                                      // 0x0840   (0x0004)  
	float                                              MinDissolvevalue;                                           // 0x0844   (0x0004)  
	TArray<class UParticleSystemComponent*>            NormalModeVFX;                                              // 0x0848   (0x0010)  
	int32_t                                            SK_OniEmissiveIndex;                                        // 0x0858   (0x0004)  
	bool                                               SK_IsOniEmissiveIndex0;                                     // 0x085C   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x085D   (0x0003)  MISSED
	int32_t                                            OniSMEmissiveIndex;                                         // 0x0860   (0x0004)  
	bool                                               IsOniSMEmissiveIndex0;                                      // 0x0864   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ResetOniEmissiveParameterSM
	// void ResetOniEmissiveParameterSM();                                                                                   // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ResetOniEmissiveParameterSK
	// void ResetOniEmissiveParameterSK();                                                                                   // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.SM_SetOniEmissiveParameter
	// void SM_SetOniEmissiveParameter(FLinearColor Emissive);                                                               // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.SK_SetOniEmissiveParameter
	// void SK_SetOniEmissiveParameter(FLinearColor Emissive);                                                               // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowDemonModeCusto
	// void ShowDemonModeCusto(bool IsInDemonMode, bool IsInNormalMode);                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.SaveOniEmissiveParameter
	// void SaveOniEmissiveParameter();                                                                                      // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.GetDemonModeCusto
	// void GetDemonModeCusto();                                                                                             // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_KatanaDissolve__FinishedFunc
	// void TML_KatanaDissolve__FinishedFunc();                                                                              // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_KatanaDissolve__UpdateFunc
	// void TML_KatanaDissolve__UpdateFunc();                                                                                // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__FinishedFunc
	// void TML_DemonModeCusto__FinishedFunc();                                                                              // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__UpdateFunc
	// void TML_DemonModeCusto__UpdateFunc();                                                                                // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__Switch Normal__EventFunc
	// void TML_DemonModeCusto__Switch Normal__EventFunc();                                                                  // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__Switch Demon__EventFunc
	// void TML_DemonModeCusto__Switch Demon__EventFunc();                                                                   // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateEndGameVignette
	// void ActivateEndGameVignette(bool IsActive);                                                                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerExposedVFX
	// void ActivatePlayerExposedVFX();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateLocalPlayerExposedVFX
	// void ActivateLocalPlayerExposedVFX();                                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.SetPlayerExposedVFX
	// void SetPlayerExposedVFX();                                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.SetHighlightedVFX
	// void SetHighlightedVFX();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerLightningVFX
	// void ActivatePlayerLightningVFX(class UMaterialInstanceDynamic*& LightningFX, bool intense);                          // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerGlitchVFX
	// void ActivatePlayerGlitchVFX(class UMaterialInstanceDynamic*& GlitchFX, bool Face, bool Madness, bool killer);        // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Travelling PP
	// void Start Travelling PP();                                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Travelling Dissolve
	// void Start Travelling Dissolve();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Travelling Dissolve
	// void Stop Travelling Dissolve();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Pounce VFX
	// void Start Pounce VFX();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Pounce VFX
	// void Stop Pounce VFX();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Saliva VFX
	// void Start Saliva VFX();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Saliva VFX
	// void Stop Saliva VFX();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Travelling PP
	// void Stop Travelling PP();                                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePounceStateVFX
	// void ActivatePounceStateVFX();                                                                                        // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Destroy Blood Orb
	// void Destroy Blood Orb();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Oni Weapons To Normal
	// void Switch Oni Weapons To Normal();                                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.DisableDemonMode
	// void DisableDemonMode();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ReturnToDemonMode
	// void ReturnToDemonMode();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Hide Oni Katana_TPV
	// void Hide Oni Katana_TPV();                                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowGunBullet
	// void ShowGunBullet();                                                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideGunBullet
	// void HideGunBullet();                                                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.SpawnFakeBullet
	// void SpawnFakeBullet();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateSacrificeCamBlood
	// void ActivateSacrificeCamBlood();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.StartDeathBedDissolve
	// void StartDeathBedDissolve();                                                                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.DeactivateKnockoutVFX
	// void DeactivateKnockoutVFX();                                                                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateKnockoutVFX
	// void ActivateKnockoutVFX();                                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.SpawnFullScreenBlood
	// void SpawnFullScreenBlood();                                                                                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.StartDeathBedRelocateVignette
	// void StartDeathBedRelocateVignette();                                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateAttemptEscapeVFX
	// void ActivateAttemptEscapeVFX();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowSyringe
	// void ShowSyringe();                                                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideSyringe
	// void HideSyringe();                                                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.AnimateLiquidSyringe
	// void AnimateLiquidSyringe();                                                                                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateVignetteOnWallCollision
	// void ActivateVignetteOnWallCollision();                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideSyringeOnStun
	// void HideSyringeOnStun();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_SpawnWipeVFX
	// void K22_SpawnWipeVFX();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightDormantMain
	// void K22_HighlightDormantMain(bool IsDormantMain?);                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightDormant
	// void K22_HighlightDormant(bool IsDormant?);                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightMissJump
	// void K22_HighlightMissJump();                                                                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_DormantAttachedSlasher
	// void K22_DormantAttachedSlasher();                                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_JumpTrail_Activate
	// void K22_JumpTrail_Activate();                                                                                        // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_JumpTrail_Deactivate
	// void K22_JumpTrail_Deactivate();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_ReleaseBrother
	// void K22_ReleaseBrother();                                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_MembraneRecovery
	// void K22_MembraneRecovery();                                                                                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_MembraneDelete
	// void K22_MembraneDelete();                                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_BabyBloodDissolve
	// void K22_BabyBloodDissolve();                                                                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_BabyRespawn
	// void K22_BabyRespawn();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_Jump_Active
	// void K22_Jump_Active();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_Jump_Inactive
	// void K22_Jump_Inactive();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.On Execution
	// void On Execution();                                                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_SetTrap
	// void K05_SetTrap();                                                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_TrapImpact
	// void K05_TrapImpact();                                                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_TrapImpactOff
	// void K05_TrapImpactOff();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_BloodDrops
	// void K05_BloodDrops();                                                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_InvisibleOn
	// void K04_InvisibleOn();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_InvisibleOff
	// void K04_InvisibleOff();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_TelekinesisOn
	// void K04_TelekinesisOn();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_TelekinesisOff
	// void K04_TelekinesisOff();                                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_WrongLanding
	// void K22_WrongLanding(bool Wrong Landing);                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_AttachedToSurvivor_VFX
	// void K22_AttachedToSurvivor_VFX();                                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_DetachedFromSurvivor_VFX
	// void K22_DetachedFromSurvivor_VFX();                                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_WrongLandingVignette
	// void K22_WrongLandingVignette(bool WrongLanding);                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_GetToxinVignette
	// void K12_GetToxinVignette(EBombType Bomb Type);                                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_GetAntidoteVignette
	// void K12_GetAntidoteVignette();                                                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_AntidoteEnd
	// void K12_Killer_AntidoteEnd();                                                                                        // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_AntidoteBegin
	// void K12_Killer_AntidoteBegin();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_BombSmokeColor
	// void K12_Killer_BombSmokeColor();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_RemoveVignette
	// void K12_Killer_RemoveVignette();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_PlaceVignette
	// void K12_Killer_PlaceVignette();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_QuickDissolveBrother
	// void K22_QuickDissolveBrother();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Killer_LungeAttack_Start
	// void Killer_LungeAttack_Start();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Killer_LungeAttack_End
	// void Killer_LungeAttack_End();                                                                                        // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Camper_AntidoteBoostVignette_Start
	// void Camper_AntidoteBoostVignette_Start();                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Camper_AntidoteBoostVignette_End
	// void Camper_AntidoteBoostVignette_End();                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_BrotherDissolveLocker
	// void K22_BrotherDissolveLocker();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightMissJump_Stop
	// void K22_HighlightMissJump_Stop();                                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_IsAttachedLocker
	// void K22_IsAttachedLocker(bool IsAttachedLocker);                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.AddBloodDrippingGKMoriMale
	// void AddBloodDrippingGKMoriMale();                                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Survivor_BoonRadius_Enter
	// void Survivor_BoonRadius_Enter();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Survivor_BoonRadius_Exit
	// void Survivor_BoonRadius_Exit();                                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Boon_Unbound
	// void Boon_Unbound();                                                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Kanobo To Demon Mode
	// void Switch Kanobo To Demon Mode();                                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Kanobo to Normal Mode
	// void Switch Kanobo to Normal Mode();                                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Show Oni Katana
	// void Show Oni Katana();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.Hide Oni Katana
	// void Hide Oni Katana();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.On Customisation Updated
	// void On Customisation Updated();                                                                                      // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowDemonCosmetic
	// void ShowDemonCosmetic();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideDemonCosmetic
	// void HideDemonCosmetic();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ReturnOniToNormal
	// void ReturnOniToNormal();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.StopTransformation
	// void StopTransformation();                                                                                            // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher18.BP_Menu_Slasher18_C.ExecuteUbergraph_BP_Menu_Slasher18
	// void ExecuteUbergraph_BP_Menu_Slasher18(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Sweden/Blueprint/Charms/AB_SS_Mikasa017_SurvivorCharmsChains.AB_SS_Mikasa017_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_SS_Mikasa017_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4393) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_6B94CDA74443AD636BEF5A817AA0FBF0); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_6B94CDA74443AD636BEF5A817AA0FBF0; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_6B94CDA74443AD636BEF5A817AA0FBF0; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4394) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_6B94CDA74443AD636BEF5A817AA0FBF0); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4395) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_9DF0E25A4D7788722115D886E9DD8FB2); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_9DF0E25A4D7788722115D886E9DD8FB2; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_9DF0E25A4D7788722115D886E9DD8FB2; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4396) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_9DF0E25A4D7788722115D886E9DD8FB2); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4397) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_56D893F2424AD4EA5524A18D53632371); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_56D893F2424AD4EA5524A18D53632371; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_56D893F2424AD4EA5524A18D53632371; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4398) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_56D893F2424AD4EA5524A18D53632371); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Sweden/Blueprint/Charms/AB_SS_Mikasa017_SurvivorCharmsChains.AB_SS_Mikasa017_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Sweden/Blueprint/Charms/AB_SS_Mikasa017_SurvivorCharmsChains.AB_SS_Mikasa017_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Sweden/Blueprint/Charms/AB_SS_Mikasa017_SurvivorCharmsChains.AB_SS_Mikasa017_SurvivorCharmsChains_C.ExecuteUbergraph_AB_SS_Mikasa017_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_SS_Mikasa017_SurvivorCharmsChains(int32_t EntryPoint);                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Sweden/Blueprint/Charms/AB_SS_Longcoat_SurvivorCharmsChains.AB_SS_Longcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_SS_Longcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4399) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_3AFA5DFF4DE905B6CA33A4A9505DDB04); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_3AFA5DFF4DE905B6CA33A4A9505DDB04; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_3AFA5DFF4DE905B6CA33A4A9505DDB04; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4400) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_3AFA5DFF4DE905B6CA33A4A9505DDB04); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4401) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_CA8DCE17400F0C1B30327D9AEAF50FFB); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_CA8DCE17400F0C1B30327D9AEAF50FFB; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_CA8DCE17400F0C1B30327D9AEAF50FFB; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4402) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_CA8DCE17400F0C1B30327D9AEAF50FFB); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4403) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_0E21E575439803D1A1B12B988738641D); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_0E21E575439803D1A1B12B988738641D; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_0E21E575439803D1A1B12B988738641D; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4404) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_0E21E575439803D1A1B12B988738641D); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Sweden/Blueprint/Charms/AB_SS_Longcoat_SurvivorCharmsChains.AB_SS_Longcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Sweden/Blueprint/Charms/AB_SS_Longcoat_SurvivorCharmsChains.AB_SS_Longcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Sweden/Blueprint/Charms/AB_SS_Longcoat_SurvivorCharmsChains.AB_SS_Longcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_SS_Longcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_SS_Longcoat_SurvivorCharmsChains(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Sweden/Blueprint/Charms/AB_SS_Komocoat_SurvivorCharmsChains.AB_SS_Komocoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_SS_Komocoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4405) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_DCC87BC249C2277628AA62849B95FABB); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_DCC87BC249C2277628AA62849B95FABB; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_DCC87BC249C2277628AA62849B95FABB; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4406) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_DCC87BC249C2277628AA62849B95FABB); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4407) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_0DA5C2CE4391A80AECE17C9CE05C65C2); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_0DA5C2CE4391A80AECE17C9CE05C65C2; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_0DA5C2CE4391A80AECE17C9CE05C65C2; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4408) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_0DA5C2CE4391A80AECE17C9CE05C65C2); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4409) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_4B52DDE0474210B480CE8A84AECB1090); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_4B52DDE0474210B480CE8A84AECB1090; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_4B52DDE0474210B480CE8A84AECB1090; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4410) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_4B52DDE0474210B480CE8A84AECB1090); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Sweden/Blueprint/Charms/AB_SS_Komocoat_SurvivorCharmsChains.AB_SS_Komocoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Sweden/Blueprint/Charms/AB_SS_Komocoat_SurvivorCharmsChains.AB_SS_Komocoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Sweden/Blueprint/Charms/AB_SS_Komocoat_SurvivorCharmsChains.AB_SS_Komocoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_SS_Komocoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_SS_Komocoat_SurvivorCharmsChains(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Sweden/Blueprint/Charms/AB_SS_Default_SurvivorCharmsChains.AB_SS_Default_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_SS_Default_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4411) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_ABF419D84FF2083963A069866C02AF69); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_ABF419D84FF2083963A069866C02AF69; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_ABF419D84FF2083963A069866C02AF69; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4412) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_ABF419D84FF2083963A069866C02AF69); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4413) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_5568BA1A439E6B276EA6EC8692B1B42B); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_5568BA1A439E6B276EA6EC8692B1B42B; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_5568BA1A439E6B276EA6EC8692B1B42B; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4414) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_5568BA1A439E6B276EA6EC8692B1B42B); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4415) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_7781AA3C41701A0BEFE6DD85C616F745); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_7781AA3C41701A0BEFE6DD85C616F745; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_7781AA3C41701A0BEFE6DD85C616F745; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4416) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_7781AA3C41701A0BEFE6DD85C616F745); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Sweden/Blueprint/Charms/AB_SS_Default_SurvivorCharmsChains.AB_SS_Default_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Sweden/Blueprint/Charms/AB_SS_Default_SurvivorCharmsChains.AB_SS_Default_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Sweden/Blueprint/Charms/AB_SS_Default_SurvivorCharmsChains.AB_SS_Default_SurvivorCharmsChains_C.ExecuteUbergraph_AB_SS_Default_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_SS_Default_SurvivorCharmsChains(int32_t EntryPoint);                                         // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale09.BP_Menu_CamperFemale09_C
/// Size: 0x0000 (0x000758 - 0x000758)
class ABP_Menu_CamperFemale09_C : public ABP_Menu_Base_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Sweden/Blueprint/AB_Menu_Yui.AB_Menu_Yui_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_Yui_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher04.AB_Menu_Slasher04_C
/// Size: 0x0128 (0x000300 - 0x000428)
class UAB_Menu_Slasher04_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	bool                                               Role_Selected;                                              // 0x03E8   (0x0001)  
	bool                                               Is_Online;                                                  // 0x03E9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x03EA   (0x0006)  MISSED
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03F0   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher04.AB_Menu_Slasher04_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher04.AB_Menu_Slasher04_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher04.AB_Menu_Slasher04_C.ExecuteUbergraph_AB_Menu_Slasher04
	// void ExecuteUbergraph_AB_Menu_Slasher04(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher04.BP_Menu_Slasher04_C
/// Size: 0x000F (0x000779 - 0x000788)
class ABP_Menu_Slasher04_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	class UBP_Audio_KLR_04_C*                          BP_Audio_KLR_04;                                            // 0x0780   (0x0008)  
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher19.AB_Menu_Slasher19_C
/// Size: 0x0120 (0x000300 - 0x000420)
class UAB_Menu_Slasher19_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03E8   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher19.AB_Menu_Slasher19_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher19.AB_Menu_Slasher19_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher19.AB_Menu_Slasher19_C.ExecuteUbergraph_AB_Menu_Slasher19
	// void ExecuteUbergraph_AB_Menu_Slasher19(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher19.BP_Menu_Slasher19_C
/// Size: 0x001F (0x000779 - 0x000798)
class ABP_Menu_Slasher19_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UBP_Audio_KLR_19_C*                          BP_Audio_KLR;                                               // 0x0788   (0x0008)  
	class USkeletalMeshComponent*                      HarpoonMesh;                                                // 0x0790   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher19.BP_Menu_Slasher19_C.UpdateHarpoonOnRifle
	// void UpdateHarpoonOnRifle(class USkeletalMeshComponent* Rifle Mesh);                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher19.BP_Menu_Slasher19_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher19.BP_Menu_Slasher19_C.OnMeshSwitchBP
	// void OnMeshSwitchBP(ECustomizationCategory category, class USkeletalMeshComponent* Mesh);                             // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher19.BP_Menu_Slasher19_C.ExecuteUbergraph_BP_Menu_Slasher19
	// void ExecuteUbergraph_BP_Menu_Slasher19(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Ukraine/Blueprint/Charms/AB_US_Shortcoat_SurvivorCharmsChains.AB_US_Shortcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_US_Shortcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4417) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_A15E677B49767A88D4E25C8E362B8C51); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_A15E677B49767A88D4E25C8E362B8C51; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_A15E677B49767A88D4E25C8E362B8C51; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4418) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_A15E677B49767A88D4E25C8E362B8C51); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4419) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_583BC6614BDC4DBDFD7C9884B243686C); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_583BC6614BDC4DBDFD7C9884B243686C; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_583BC6614BDC4DBDFD7C9884B243686C; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4420) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_583BC6614BDC4DBDFD7C9884B243686C); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4421) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_1736DB5849BB814EFBB6FA8AB514EA95); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_1736DB5849BB814EFBB6FA8AB514EA95; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_1736DB5849BB814EFBB6FA8AB514EA95; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4422) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_1736DB5849BB814EFBB6FA8AB514EA95); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Ukraine/Blueprint/Charms/AB_US_Shortcoat_SurvivorCharmsChains.AB_US_Shortcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Ukraine/Blueprint/Charms/AB_US_Shortcoat_SurvivorCharmsChains.AB_US_Shortcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Ukraine/Blueprint/Charms/AB_US_Shortcoat_SurvivorCharmsChains.AB_US_Shortcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_US_Shortcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_US_Shortcoat_SurvivorCharmsChains(int32_t EntryPoint);                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Ukraine/Blueprint/Charms/AB_US_Longcoat_SurvivorCharmsChains.AB_US_Longcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_US_Longcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4423) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_859B7E5A4ED0B7A755246B9815FF3A74); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_859B7E5A4ED0B7A755246B9815FF3A74; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_859B7E5A4ED0B7A755246B9815FF3A74; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4424) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_859B7E5A4ED0B7A755246B9815FF3A74); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4425) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_5F2FADF74A486D284A3447A8C5450CA3); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_5F2FADF74A486D284A3447A8C5450CA3; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_5F2FADF74A486D284A3447A8C5450CA3; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4426) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_5F2FADF74A486D284A3447A8C5450CA3); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4427) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_7B22EC6B41D4B06638DE03AA81E574BB); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_7B22EC6B41D4B06638DE03AA81E574BB; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_7B22EC6B41D4B06638DE03AA81E574BB; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4428) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_7B22EC6B41D4B06638DE03AA81E574BB); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Ukraine/Blueprint/Charms/AB_US_Longcoat_SurvivorCharmsChains.AB_US_Longcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Ukraine/Blueprint/Charms/AB_US_Longcoat_SurvivorCharmsChains.AB_US_Longcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Ukraine/Blueprint/Charms/AB_US_Longcoat_SurvivorCharmsChains.AB_US_Longcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_US_Longcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_US_Longcoat_SurvivorCharmsChains(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Ukraine/Blueprint/Charms/AB_US_Default_SurvivorCharmsChains.AB_US_Default_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_US_Default_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4429) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_5476A7184E5C418BA17103B376D71FA6); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_5476A7184E5C418BA17103B376D71FA6; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_5476A7184E5C418BA17103B376D71FA6; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4430) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_5476A7184E5C418BA17103B376D71FA6); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4431) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_0521D43D4F6A9B1D5BABCFAA45262B81); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_0521D43D4F6A9B1D5BABCFAA45262B81; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_0521D43D4F6A9B1D5BABCFAA45262B81; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4432) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_0521D43D4F6A9B1D5BABCFAA45262B81); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4433) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_A685C2A44660D1B16A2B88954320F6D4); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_A685C2A44660D1B16A2B88954320F6D4; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_A685C2A44660D1B16A2B88954320F6D4; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4434) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_A685C2A44660D1B16A2B88954320F6D4); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Ukraine/Blueprint/Charms/AB_US_Default_SurvivorCharmsChains.AB_US_Default_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Ukraine/Blueprint/Charms/AB_US_Default_SurvivorCharmsChains.AB_US_Default_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Ukraine/Blueprint/Charms/AB_US_Default_SurvivorCharmsChains.AB_US_Default_SurvivorCharmsChains_C.ExecuteUbergraph_AB_US_Default_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_US_Default_SurvivorCharmsChains(int32_t EntryPoint);                                         // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale10.BP_Menu_CamperFemale10_C
/// Size: 0x0000 (0x000758 - 0x000758)
class ABP_Menu_CamperFemale10_C : public ABP_Menu_Base_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/Ukraine/Blueprint/AB_Menu_Zarina.AB_Menu_Zarina_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_Zarina_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher32.BP_Menu_Slasher32_C
/// Size: 0x000F (0x000779 - 0x000788)
class ABP_Menu_Slasher32_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	class UBP_Audio_KLR_32_C*                          BP_Audio_KLR;                                               // 0x0780   (0x0008)  
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher32.AB_Menu_Slasher32_C
/// Size: 0x05B0 (0x000300 - 0x0008B0)
class UAB_Menu_Slasher32_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0340   (0x0028)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0368   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0388   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x03A8   (0x0110)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x04B8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0538   (0x0038)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace0;                       // 0x0570   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace1;                       // 0x0590   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone2;                                  // 0x05B0   (0x0110)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x06C0   (0x00A8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult3;                                 // 0x0768   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x07A0   (0x00B0)  
	FVector                                            __CustomProperty_ScaleInLobby_710133574F4DE2FB2774CBAD40AF348F; // 0x0850   (0x000C)  
	bool                                               Role_Selected;                                              // 0x085C   (0x0001)  
	bool                                               Is_Online;                                                  // 0x085D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x085E   (0x0002)  MISSED
	int32_t                                            RandomInterupt;                                             // 0x0860   (0x0004)  
	EGameFlowStep                                      CurrentMenu;                                                // 0x0864   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0865   (0x0003)  MISSED
	SDK_UNDEFINED(16,4435) /* FString */               __um(CurrentMenuString);                                    // 0x0868   (0x0010)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x0878   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher32.AB_Menu_Slasher32_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher32.AB_Menu_Slasher32_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher32_AnimGraphNode_TransitionResult_13FC268E47D12B172B1C768D9D6C59EC
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher32_AnimGraphNode_TransitionResult_13FC268E47D12B172B1C768D9D6C59EC(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher32.AB_Menu_Slasher32_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher32.AB_Menu_Slasher32_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher32.AB_Menu_Slasher32_C.ExecuteUbergraph_AB_Menu_Slasher32
	// void ExecuteUbergraph_AB_Menu_Slasher32(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S37/Blueprints/AB_Menu_S37.AB_Menu_S37_C
/// Size: 0x0008 (0x001B18 - 0x001B20)
class UAB_Menu_S37_C : public UAB_Menu_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1B18   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S37/Blueprints/AB_Menu_S37.AB_Menu_S37_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S37/Blueprints/AB_Menu_S37.AB_Menu_S37_C.AnimNotify_FX_ShowProps
	// void AnimNotify_FX_ShowProps();                                                                                       // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S37/Blueprints/AB_Menu_S37.AB_Menu_S37_C.AnimNotify_FX_HideProps
	// void AnimNotify_FX_HideProps();                                                                                       // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S37/Blueprints/AB_Menu_S37.AB_Menu_S37_C.ExecuteUbergraph_AB_Menu_S37
	// void ExecuteUbergraph_AB_Menu_S37(int32_t EntryPoint);                                                                // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale18.BP_Menu_CamperMale18_C
/// Size: 0x0020 (0x000758 - 0x000778)
class ABP_Menu_CamperMale18_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  
	class UNiagaraComponent*                           Niagara;                                                    // 0x0760   (0x0008)  
	class UStaticMeshComponent*                        SM_K32_Tool_Sphere_02;                                      // 0x0768   (0x0008)  
	class USkeletalMeshComponentBudgeted*              S37_EMP;                                                    // 0x0770   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale18.BP_Menu_CamperMale18_C.GoToAddMoriVomitStain
	// void GoToAddMoriVomitStain();                                                                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale18.BP_Menu_CamperMale18_C.GoToAddVomitDecal
	// void GoToAddVomitDecal();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale18.BP_Menu_CamperMale18_C.StartEndGameDissolve
	// void StartEndGameDissolve();                                                                                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale18.BP_Menu_CamperMale18_C.CK_StartSacrificeDissolve
	// void CK_StartSacrificeDissolve();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale18.BP_Menu_CamperMale18_C.AddBloodOnCamper
	// void AddBloodOnCamper();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale18.BP_Menu_CamperMale18_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale18.BP_Menu_CamperMale18_C.HideProps
	// void HideProps();                                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale18.BP_Menu_CamperMale18_C.ShowProps
	// void ShowProps();                                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale18.BP_Menu_CamperMale18_C.ExecuteUbergraph_BP_Menu_CamperMale18
	// void ExecuteUbergraph_BP_Menu_CamperMale18(int32_t EntryPoint);                                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S38/Blueprints/Charms/AB_S38_Longcoat_SurvivorCharmsChains.AB_S38_Longcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_S38_Longcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4436) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_1E5FF1424860843A7552D9AADE26E86C); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_1E5FF1424860843A7552D9AADE26E86C; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_1E5FF1424860843A7552D9AADE26E86C; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4437) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_1E5FF1424860843A7552D9AADE26E86C); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4438) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_73E632CA41587D09F58691A48405A4B9); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_73E632CA41587D09F58691A48405A4B9; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_73E632CA41587D09F58691A48405A4B9; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4439) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_73E632CA41587D09F58691A48405A4B9); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4440) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_6C1F578849B038DB28A4F9AD1A46044E); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_6C1F578849B038DB28A4F9AD1A46044E; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_6C1F578849B038DB28A4F9AD1A46044E; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4441) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_6C1F578849B038DB28A4F9AD1A46044E); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S38/Blueprints/Charms/AB_S38_Longcoat_SurvivorCharmsChains.AB_S38_Longcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S38/Blueprints/Charms/AB_S38_Longcoat_SurvivorCharmsChains.AB_S38_Longcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S38/Blueprints/Charms/AB_S38_Longcoat_SurvivorCharmsChains.AB_S38_Longcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_S38_Longcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_S38_Longcoat_SurvivorCharmsChains(int32_t EntryPoint);                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S38/Blueprints/Charms/AB_S38_Default_SurvivorCharmsChains.AB_S38_Default_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_S38_Default_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4442) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_AFEF0D334EDD850869702E82F26E831B); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_AFEF0D334EDD850869702E82F26E831B; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_AFEF0D334EDD850869702E82F26E831B; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4443) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_AFEF0D334EDD850869702E82F26E831B); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4444) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_0F97BBC54C294B6CFD4D70B2D2AF8221); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_0F97BBC54C294B6CFD4D70B2D2AF8221; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_0F97BBC54C294B6CFD4D70B2D2AF8221; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4445) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_0F97BBC54C294B6CFD4D70B2D2AF8221); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4446) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_9899B5E4458D5E4C18F486A2DEB62689); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_9899B5E4458D5E4C18F486A2DEB62689; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_9899B5E4458D5E4C18F486A2DEB62689; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4447) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_9899B5E4458D5E4C18F486A2DEB62689); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S38/Blueprints/Charms/AB_S38_Default_SurvivorCharmsChains.AB_S38_Default_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S38/Blueprints/Charms/AB_S38_Default_SurvivorCharmsChains.AB_S38_Default_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S38/Blueprints/Charms/AB_S38_Default_SurvivorCharmsChains.AB_S38_Default_SurvivorCharmsChains_C.ExecuteUbergraph_AB_S38_Default_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_S38_Default_SurvivorCharmsChains(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale19.BP_Menu_CamperMale19_C
/// Size: 0x0000 (0x000758 - 0x000758)
class ABP_Menu_CamperMale19_C : public ABP_Menu_Base_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/S38/Blueprints/AB_Menu_S38.AB_Menu_S38_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_S38_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher20.BP_Menu_Slasher20_C
/// Size: 0x000F (0x000779 - 0x000788)
class ABP_Menu_Slasher20_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	class UBP_Audio_KLR_20_C*                          BP_Audio_KLR;                                               // 0x0780   (0x0008)  
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher20.AB_Menu_Slasher20_C
/// Size: 0x0120 (0x000300 - 0x000420)
class UAB_Menu_Slasher20_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x03E8   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher20.AB_Menu_Slasher20_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher20.AB_Menu_Slasher20_C.ExecuteUbergraph_AB_Menu_Slasher20
	// void ExecuteUbergraph_AB_Menu_Slasher20(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S22/Blueprint/Charms/AB_S22_Shortcoat_SurvivorCharmsChains.AB_S22_Shortcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_S22_Shortcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4448) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_DCA96F054ED3A1004D30D1B663C9B7ED); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_DCA96F054ED3A1004D30D1B663C9B7ED; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_DCA96F054ED3A1004D30D1B663C9B7ED; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4449) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_DCA96F054ED3A1004D30D1B663C9B7ED); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4450) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_6BC39C9745F47E0FFEA32D88BF7BBD0C); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_6BC39C9745F47E0FFEA32D88BF7BBD0C; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_6BC39C9745F47E0FFEA32D88BF7BBD0C; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4451) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_6BC39C9745F47E0FFEA32D88BF7BBD0C); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4452) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_0BBCB9934C3176FE412412B66121F10E); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_0BBCB9934C3176FE412412B66121F10E; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_0BBCB9934C3176FE412412B66121F10E; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4453) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_0BBCB9934C3176FE412412B66121F10E); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S22/Blueprint/Charms/AB_S22_Shortcoat_SurvivorCharmsChains.AB_S22_Shortcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S22/Blueprint/Charms/AB_S22_Shortcoat_SurvivorCharmsChains.AB_S22_Shortcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S22/Blueprint/Charms/AB_S22_Shortcoat_SurvivorCharmsChains.AB_S22_Shortcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_S22_Shortcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_S22_Shortcoat_SurvivorCharmsChains(int32_t EntryPoint);                                      // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S22/Blueprint/Charms/AB_S22_Midcoat_SurvivorCharmsChains.AB_S22_Midcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_S22_Midcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4454) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_1580CC95433F013F333BA2A9157CDB65); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_1580CC95433F013F333BA2A9157CDB65; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_1580CC95433F013F333BA2A9157CDB65; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4455) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_1580CC95433F013F333BA2A9157CDB65); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4456) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_B2EC331142E0A506E40A9798BE160E10); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_B2EC331142E0A506E40A9798BE160E10; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_B2EC331142E0A506E40A9798BE160E10; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4457) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_B2EC331142E0A506E40A9798BE160E10); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4458) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_D928DE5E4A6AD9544C0063ADC48B5394); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_D928DE5E4A6AD9544C0063ADC48B5394; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_D928DE5E4A6AD9544C0063ADC48B5394; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4459) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_D928DE5E4A6AD9544C0063ADC48B5394); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S22/Blueprint/Charms/AB_S22_Midcoat_SurvivorCharmsChains.AB_S22_Midcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S22/Blueprint/Charms/AB_S22_Midcoat_SurvivorCharmsChains.AB_S22_Midcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S22/Blueprint/Charms/AB_S22_Midcoat_SurvivorCharmsChains.AB_S22_Midcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_S22_Midcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_S22_Midcoat_SurvivorCharmsChains(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S22/Blueprint/Charms/AB_S22_Longcoat_SurvivorCharmsChains.AB_S22_Longcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_S22_Longcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4460) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_B3B8C2384303CF5244285FB675488B35); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_B3B8C2384303CF5244285FB675488B35; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_B3B8C2384303CF5244285FB675488B35; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4461) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_B3B8C2384303CF5244285FB675488B35); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4462) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_C1C72CF748AAFA2B25C8D0917CCED933); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_C1C72CF748AAFA2B25C8D0917CCED933; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_C1C72CF748AAFA2B25C8D0917CCED933; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4463) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_C1C72CF748AAFA2B25C8D0917CCED933); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4464) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_11D3CEF447A45E474FCEF48D694C1133); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_11D3CEF447A45E474FCEF48D694C1133; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_11D3CEF447A45E474FCEF48D694C1133; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4465) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_11D3CEF447A45E474FCEF48D694C1133); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S22/Blueprint/Charms/AB_S22_Longcoat_SurvivorCharmsChains.AB_S22_Longcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S22/Blueprint/Charms/AB_S22_Longcoat_SurvivorCharmsChains.AB_S22_Longcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S22/Blueprint/Charms/AB_S22_Longcoat_SurvivorCharmsChains.AB_S22_Longcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_S22_Longcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_S22_Longcoat_SurvivorCharmsChains(int32_t EntryPoint);                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S22/Blueprint/Charms/AB_S22_Default_SurvivorCharmsChains.AB_S22_Default_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_S22_Default_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4466) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_E054A249466CFCE09E0411A14CF6CD84); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_E054A249466CFCE09E0411A14CF6CD84; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_E054A249466CFCE09E0411A14CF6CD84; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4467) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_E054A249466CFCE09E0411A14CF6CD84); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4468) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_E08E9A2545BEBD12EB3C658FBB618ACE); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_E08E9A2545BEBD12EB3C658FBB618ACE; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_E08E9A2545BEBD12EB3C658FBB618ACE; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4469) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_E08E9A2545BEBD12EB3C658FBB618ACE); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4470) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_9F9FF64C49D3737F770387A0E3B5F77B); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_9F9FF64C49D3737F770387A0E3B5F77B; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_9F9FF64C49D3737F770387A0E3B5F77B; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4471) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_9F9FF64C49D3737F770387A0E3B5F77B); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S22/Blueprint/Charms/AB_S22_Default_SurvivorCharmsChains.AB_S22_Default_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S22/Blueprint/Charms/AB_S22_Default_SurvivorCharmsChains.AB_S22_Default_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S22/Blueprint/Charms/AB_S22_Default_SurvivorCharmsChains.AB_S22_Default_SurvivorCharmsChains_C.ExecuteUbergraph_AB_S22_Default_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_S22_Default_SurvivorCharmsChains(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale11.BP_Menu_CamperFemale11_C
/// Size: 0x0000 (0x000758 - 0x000758)
class ABP_Menu_CamperFemale11_C : public ABP_Menu_Base_Camper_C
{ 
public:
};

/// Class /Game/Characters/Campers/S22/Blueprint/AB_Menu_S22.AB_Menu_S22_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_S22_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher33.AB_Menu_Slasher33_C
/// Size: 0x02F8 (0x000300 - 0x0005F8)
class UAB_Menu_Slasher33_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0340   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0368   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x03E8   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0420   (0x00A8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult0;                                 // 0x04C8   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0500   (0x00B0)  
	FVector                                            __CustomProperty_ScaleInLobby_C6F5ED8E4CE3D3B3F6808E979E70CB6E; // 0x05B0   (0x000C)  
	EGameFlowStep                                      CurrentMenu;                                                // 0x05BC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x05BD   (0x0003)  MISSED
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x05C0   (0x0038)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher33.AB_Menu_Slasher33_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher33.AB_Menu_Slasher33_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher33_AnimGraphNode_TransitionResult_456783104290BB752F2228A23435EA10
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher33_AnimGraphNode_TransitionResult_456783104290BB752F2228A23435EA10(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher33.AB_Menu_Slasher33_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher33.AB_Menu_Slasher33_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher33.AB_Menu_Slasher33_C.ExecuteUbergraph_AB_Menu_Slasher33
	// void ExecuteUbergraph_AB_Menu_Slasher33(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher33.BP_Menu_Slasher33_C
/// Size: 0x0017 (0x000779 - 0x000790)
class ABP_Menu_Slasher33_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UBP_Audio_KLR_33_C*                          BP_Audio_KLR;                                               // 0x0788   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher33.BP_Menu_Slasher33_C.RemoveAssetsBeforeDestroy
	// void RemoveAssetsBeforeDestroy();                                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher33.BP_Menu_Slasher33_C.ExecuteUbergraph_BP_Menu_Slasher33
	// void ExecuteUbergraph_BP_Menu_Slasher33(int32_t EntryPoint);                                                          // [0x61c32d0] Final|HasDefaults    
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C
/// Size: 0x0039 (0x000758 - 0x000791)
class ABP_Menu_CamperFemale20_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  
	class USkeletalMeshComponent*                      Quesita;                                                    // 0x0760   (0x0008)  
	float                                              TML_QuesitaMenuDissolveController_DissolveAmount_D17C04F24597E2E9472870A4ADA20B1B; // 0x0768   (0x0004)  
	SDK_UNDEFINED(1,4472) /* TEnumAsByte<ETimelineDirection> */ __um(TML_QuesitaMenuDissolveController__Direction_D17C04F24597E2E9472870A4ADA20B1B); // 0x076C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x076D   (0x0003)  MISSED
	class UTimelineComponent*                          TML_QuesitaMenuDissolveController;                          // 0x0770   (0x0008)  
	class UAB_Menu_Quesita01_REF_C*                    As_AB_Menu_Quesita_01_REF;                                  // 0x0778   (0x0008)  
	class UAB_Menu_S33_C*                              As_AB_Menu_S33;                                             // 0x0780   (0x0008)  
	class UMaterialInstanceDynamic*                    MID_Quesita;                                                // 0x0788   (0x0008)  
	bool                                               VisibleAfterDissolve;                                       // 0x0790   (0x0001)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C.TML_QuesitaMenuDissolveController__FinishedFunc
	// void TML_QuesitaMenuDissolveController__FinishedFunc();                                                               // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C.TML_QuesitaMenuDissolveController__UpdateFunc
	// void TML_QuesitaMenuDissolveController__UpdateFunc();                                                                 // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C.CustomEvent
	// void CustomEvent(EAkResult Result);                                                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C.AnimNotify_Quesita_MenuDissolve_In
	// void AnimNotify_Quesita_MenuDissolve_In();                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C.AnimNotify_Quesita_MenuDissolve_Out
	// void AnimNotify_Quesita_MenuDissolve_Out();                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C.SetQuesitaVisibility
	// void SetQuesitaVisibility(bool IsVisible);                                                                            // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperFemale20.BP_Menu_CamperFemale20_C.ExecuteUbergraph_BP_Menu_CamperFemale20
	// void ExecuteUbergraph_BP_Menu_CamperFemale20(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S39/Blueprints/AB_Menu_S39.AB_Menu_S39_C
/// Size: 0x0290 (0x0002C0 - 0x000550)
class UAB_Menu_S39_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0300   (0x00A8)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x03A8   (0x0110)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x04B8   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x04D8   (0x0020)  
	FAset_Camper_Menu                                  MenuAnimSet;                                                // 0x04F8   (0x0058)  


	/// Functions
	// Function /Game/Characters/Campers/S39/Blueprints/AB_Menu_S39.AB_Menu_S39_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S39/Blueprints/AB_Menu_S39.AB_Menu_S39_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S39/Blueprints/AB_Menu_S39.AB_Menu_S39_C.ExecuteUbergraph_AB_Menu_S39
	// void ExecuteUbergraph_AB_Menu_S39(int32_t EntryPoint);                                                                // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/BaseCinematicCam.BaseCinematicCam_C
/// Size: 0x0008 (0x0007C0 - 0x0007C8)
class ABaseCinematicCam_C : public ACameraActor
{ 
public:
	class UParticleSystemComponent*                    P_FullscreenBlood;                                          // 0x07C0   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/BaseCinematicCam.BaseCinematicCam_C.ActivateFullscreenBlood
	// void ActivateFullscreenBlood();                                                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Characters/Campers/Blueprints/KillCam.KillCam_C
/// Size: 0x0000 (0x0007C8 - 0x0007C8)
class AKillCam_C : public ABaseCinematicCam_C
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher21.BP_Menu_Slasher21_C
/// Size: 0x0017 (0x000779 - 0x000790)
class ABP_Menu_Slasher21_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UBP_Audio_KLR_21_C*                          BP_Audio_KLR;                                               // 0x0788   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher21.BP_Menu_Slasher21_C.BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
	// void BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory category, FString switchState); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher21.BP_Menu_Slasher21_C.ExecuteUbergraph_BP_Menu_Slasher21
	// void ExecuteUbergraph_BP_Menu_Slasher21(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher21.AB_Menu_Slasher21_C
/// Size: 0x1079 (0x000300 - 0x001379)
class UAB_Menu_Slasher21_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0340   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0368   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0390   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x03B8   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x03E0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0460   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer3;                              // 0x0498   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult4;                                 // 0x0518   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer5;                              // 0x0550   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult6;                                 // 0x05D0   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult7;                            // 0x0608   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult8;                            // 0x0630   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult9;                            // 0x0658   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult10;                           // 0x0680   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult11;                           // 0x06A8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult12;                           // 0x06D0   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer13;                             // 0x06F8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult14;                                // 0x0778   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer15;                             // 0x07B0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult16;                                // 0x0830   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer17;                             // 0x0868   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult18;                                // 0x08E8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer19;                             // 0x0920   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult20;                                // 0x09A0   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x09D8   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult21;                                // 0x0A88   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer22;                             // 0x0AC0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult23;                                // 0x0B40   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer24;                             // 0x0B78   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer25;                             // 0x0BF8   (0x0080)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult26;                           // 0x0C78   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult27;                           // 0x0CA0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult28;                           // 0x0CC8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult29;                           // 0x0CF0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult30;                           // 0x0D18   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult31;                           // 0x0D40   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer32;                             // 0x0D68   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult33;                                // 0x0DE8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer34;                             // 0x0E20   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult35;                                // 0x0EA0   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer36;                             // 0x0ED8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult37;                                // 0x0F58   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer38;                             // 0x0F90   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult39;                                // 0x1010   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine40;                               // 0x1048   (0x00B0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x10F8   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool41;                            // 0x1198   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult42;                                // 0x1238   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine43;                               // 0x1270   (0x00B0)  
	bool                                               Role_Selected;                                              // 0x1320   (0x0001)  
	bool                                               Is_Online;                                                  // 0x1321   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x1322   (0x0006)  MISSED
	class UAnimSequenceBase*                           IdleMenu;                                                   // 0x1328   (0x0008)  
	class UAnimSequenceBase*                           IdleMenu_Intro;                                             // 0x1330   (0x0008)  
	class UAnimSequenceBase*                           IdleMenu_Lobby;                                             // 0x1338   (0x0008)  
	class UAnimSequenceBase*                           IdleMenu__Back;                                             // 0x1340   (0x0008)  
	class UAnimSequenceBase*                           idleMenu_Interrupt01;                                       // 0x1348   (0x0008)  
	class UAnimSequenceBase*                           idleMenu_Interrupt02;                                       // 0x1350   (0x0008)  
	class UAnimSequenceBase*                           idleMenu_Interrupt03;                                       // 0x1358   (0x0008)  
	int32_t                                            RandomInterupt;                                             // 0x1360   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x1364   (0x0004)  MISSED
	SDK_UNDEFINED(16,4473) /* FString */               __um(CurrentMenuString);                                    // 0x1368   (0x0010)  
	EGameFlowStep                                      CurrentMenu;                                                // 0x1378   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher21.AB_Menu_Slasher21_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher21.AB_Menu_Slasher21_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_65E3A51A4E4A32F3EB4E6084B6C2051B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_65E3A51A4E4A32F3EB4E6084B6C2051B(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher21.AB_Menu_Slasher21_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_0308113A4692318ED9C00FA18D1BAE8F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_0308113A4692318ED9C00FA18D1BAE8F(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher21.AB_Menu_Slasher21_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_8B8BA99E43DCB2CD83B2A1A5049D28B0
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_8B8BA99E43DCB2CD83B2A1A5049D28B0(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher21.AB_Menu_Slasher21_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_6836D95B44C934D53C9EA686EC26F524
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_6836D95B44C934D53C9EA686EC26F524(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher21.AB_Menu_Slasher21_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_31788C2048D69F83B9A4D4A3DB16BDB7
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_31788C2048D69F83B9A4D4A3DB16BDB7(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher21.AB_Menu_Slasher21_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_460FAC434547763AE5D8ABAEEA2332A9
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_460FAC434547763AE5D8ABAEEA2332A9(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher21.AB_Menu_Slasher21_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_7E106FCE45C1E61B87C563AA3F91739B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_7E106FCE45C1E61B87C563AA3F91739B(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher21.AB_Menu_Slasher21_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher21.AB_Menu_Slasher21_C.AnimNotify_GenerateRandom
	// void AnimNotify_GenerateRandom();                                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher21.AB_Menu_Slasher21_C.ExecuteUbergraph_AB_Menu_Slasher21
	// void ExecuteUbergraph_AB_Menu_Slasher21(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S23/Blueprint/Charms/AB_S23_Longcoat_SurvivorCharmsChains.AB_S23_Longcoat_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_S23_Longcoat_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4474) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_06D54EFA42E8501E30E3F6A294580CA6); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_06D54EFA42E8501E30E3F6A294580CA6; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_06D54EFA42E8501E30E3F6A294580CA6; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4475) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_06D54EFA42E8501E30E3F6A294580CA6); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4476) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_1877F5EF44F0477FBF9AAFA0202D6D02); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_1877F5EF44F0477FBF9AAFA0202D6D02; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_1877F5EF44F0477FBF9AAFA0202D6D02; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4477) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_1877F5EF44F0477FBF9AAFA0202D6D02); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4478) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_ED14FA454728D263AB6C72A0F06E453B); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_ED14FA454728D263AB6C72A0F06E453B; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_ED14FA454728D263AB6C72A0F06E453B; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4479) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_ED14FA454728D263AB6C72A0F06E453B); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S23/Blueprint/Charms/AB_S23_Longcoat_SurvivorCharmsChains.AB_S23_Longcoat_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S23/Blueprint/Charms/AB_S23_Longcoat_SurvivorCharmsChains.AB_S23_Longcoat_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S23/Blueprint/Charms/AB_S23_Longcoat_SurvivorCharmsChains.AB_S23_Longcoat_SurvivorCharmsChains_C.ExecuteUbergraph_AB_S23_Longcoat_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_S23_Longcoat_SurvivorCharmsChains(int32_t EntryPoint);                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S23/Blueprint/Charms/AB_S23_Highpants_SurvivorCharmsChains.AB_S23_Highpants_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_S23_Highpants_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4480) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_43E4199347F972B3EADC6EBDF636275B); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_43E4199347F972B3EADC6EBDF636275B; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_43E4199347F972B3EADC6EBDF636275B; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4481) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_43E4199347F972B3EADC6EBDF636275B); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4482) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_4128B09F4BAD930F4EBD229B00226534); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_4128B09F4BAD930F4EBD229B00226534; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_4128B09F4BAD930F4EBD229B00226534; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4483) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_4128B09F4BAD930F4EBD229B00226534); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4484) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_4F02A68D4E087759443F71AF73497526); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_4F02A68D4E087759443F71AF73497526; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_4F02A68D4E087759443F71AF73497526; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4485) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_4F02A68D4E087759443F71AF73497526); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S23/Blueprint/Charms/AB_S23_Highpants_SurvivorCharmsChains.AB_S23_Highpants_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S23/Blueprint/Charms/AB_S23_Highpants_SurvivorCharmsChains.AB_S23_Highpants_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S23/Blueprint/Charms/AB_S23_Highpants_SurvivorCharmsChains.AB_S23_Highpants_SurvivorCharmsChains_C.ExecuteUbergraph_AB_S23_Highpants_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_S23_Highpants_SurvivorCharmsChains(int32_t EntryPoint);                                      // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S23/Blueprint/Charms/AB_S23_Default_SurvivorCharmsChains.AB_S23_Default_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_S23_Default_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4486) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_A51014CC40A206BC8B4190B4D6A664D7); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_A51014CC40A206BC8B4190B4D6A664D7; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_A51014CC40A206BC8B4190B4D6A664D7; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4487) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_A51014CC40A206BC8B4190B4D6A664D7); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4488) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_C6B5E1DC4579F199DCE9EA9279BA74BB); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_C6B5E1DC4579F199DCE9EA9279BA74BB; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_C6B5E1DC4579F199DCE9EA9279BA74BB; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4489) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_C6B5E1DC4579F199DCE9EA9279BA74BB); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4490) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_BA5046D2438C25C88F2C86B9BF59F5E8); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_BA5046D2438C25C88F2C86B9BF59F5E8; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_BA5046D2438C25C88F2C86B9BF59F5E8; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4491) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_BA5046D2438C25C88F2C86B9BF59F5E8); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S23/Blueprint/Charms/AB_S23_Default_SurvivorCharmsChains.AB_S23_Default_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S23/Blueprint/Charms/AB_S23_Default_SurvivorCharmsChains.AB_S23_Default_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S23/Blueprint/Charms/AB_S23_Default_SurvivorCharmsChains.AB_S23_Default_SurvivorCharmsChains_C.ExecuteUbergraph_AB_S23_Default_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_S23_Default_SurvivorCharmsChains(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S23/Blueprint/Charms/AB_S23_Armin_SurvivorCharmsChains.AB_S23_Armin_SurvivorCharmsChains_C
/// Size: 0x0478 (0x0002C0 - 0x000738)
class UAB_S23_Armin_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0300   (0x01D8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x04D8   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph0;                             // 0x0580   (0x00A8)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph1;                             // 0x0628   (0x00A8)  
	SDK_UNDEFINED(1,4492) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_5D7C32AD414CF329EF2530B4AC27DB76); // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06D1   (0x0003)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_5D7C32AD414CF329EF2530B4AC27DB76; // 0x06D4   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_5D7C32AD414CF329EF2530B4AC27DB76; // 0x06E0   (0x000C)  
	SDK_UNDEFINED(1,4493) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_5D7C32AD414CF329EF2530B4AC27DB76); // 0x06EC   (0x0001)  
	SDK_UNDEFINED(1,4494) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_4909FE6B48B54505D6B5EA91BBE4DB26); // 0x06ED   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x06EE   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_4909FE6B48B54505D6B5EA91BBE4DB26; // 0x06F0   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_4909FE6B48B54505D6B5EA91BBE4DB26; // 0x06FC   (0x000C)  
	SDK_UNDEFINED(1,4495) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_4909FE6B48B54505D6B5EA91BBE4DB26); // 0x0708   (0x0001)  
	SDK_UNDEFINED(1,4496) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(__CustomProperty_JointChain_C6E8A7F34303AEEF65799AA58B59E6D5); // 0x0709   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x070A   (0x0002)  MISSED
	FRotator                                           __CustomProperty_RotationOffset_C6E8A7F34303AEEF65799AA58B59E6D5; // 0x070C   (0x000C)  
	FVector                                            __CustomProperty_TranslationOffset_C6E8A7F34303AEEF65799AA58B59E6D5; // 0x0718   (0x000C)  
	SDK_UNDEFINED(1,4497) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(__CustomProperty_ConstraintParent_C6E8A7F34303AEEF65799AA58B59E6D5); // 0x0724   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0725   (0x0003)  MISSED
	class ACharmAttacher*                              CharmAttacher;                                              // 0x0728   (0x0008)  
	class USkeletalMeshComponent*                      OwningSkeletalMesh;                                         // 0x0730   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/S23/Blueprint/Charms/AB_S23_Armin_SurvivorCharmsChains.AB_S23_Armin_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S23/Blueprint/Charms/AB_S23_Armin_SurvivorCharmsChains.AB_S23_Armin_SurvivorCharmsChains_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/S23/Blueprint/Charms/AB_S23_Armin_SurvivorCharmsChains.AB_S23_Armin_SurvivorCharmsChains_C.ExecuteUbergraph_AB_S23_Armin_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_S23_Armin_SurvivorCharmsChains(int32_t EntryPoint);                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale12.BP_Menu_CamperMale12_C
/// Size: 0x0008 (0x000758 - 0x000760)
class ABP_Menu_CamperMale12_C : public ABP_Menu_Base_Camper_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0758   (0x0008)  


	/// Functions
	// Function /Game/Characters/Campers/Blueprints/Menu/BP_Menu_CamperMale12.BP_Menu_CamperMale12_C.ExecuteUbergraph_BP_Menu_CamperMale12
	// void ExecuteUbergraph_BP_Menu_CamperMale12(int32_t EntryPoint);                                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S23/Blueprint/AB_Menu_S23.AB_Menu_S23_C
/// Size: 0x0000 (0x001B18 - 0x001B18)
class UAB_Menu_S23_C : public UAB_Menu_Camper_C
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher34_SW01.AB_Menu_Slasher34_SW01_C
/// Size: 0x0211 (0x000300 - 0x000511)
class UAB_Menu_Slasher34_SW01_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0340   (0x00A8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x03E8   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0420   (0x00B0)  
	class ABP_Menu_Slasher34_C*                        KillerBP;                                                   // 0x04D0   (0x0008)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x04D8   (0x0038)  
	EGameFlowStep                                      CurrentMenu;                                                // 0x0510   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher34_SW01.AB_Menu_Slasher34_SW01_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher34_SW01.AB_Menu_Slasher34_SW01_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher34_SW01.AB_Menu_Slasher34_SW01_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher34_SW01.AB_Menu_Slasher34_SW01_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher34_SW01.AB_Menu_Slasher34_SW01_C.ExecuteUbergraph_AB_Menu_Slasher34_SW01
	// void ExecuteUbergraph_AB_Menu_Slasher34_SW01(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/K34/Weapons/Models/AB_K34_007_Menu_ACC.AB_K34_007_Menu_ACC_C
/// Size: 0x00A8 (0x0002C0 - 0x000368)
class UAB_K34_007_Menu_ACC_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0300   (0x0050)  
	FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose;                                 // 0x0350   (0x0018)  


	/// Functions
	// Function /Game/Characters/Slashers/K34/Weapons/Models/AB_K34_007_Menu_ACC.AB_K34_007_Menu_ACC_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K34/Weapons/Models/AB_K34_007_Menu_ACC.AB_K34_007_Menu_ACC_C.ExecuteUbergraph_AB_K34_007_Menu_ACC
	// void ExecuteUbergraph_AB_K34_007_Menu_ACC(int32_t EntryPoint);                                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher34.BP_Menu_Slasher34_C
/// Size: 0x0047 (0x000779 - 0x0007C0)
class ABP_Menu_Slasher34_C : public ABP_Menu_BaseSlasher_C
{ 
public:
	unsigned char                                      UnknownData00_2[0x7];                                       // 0x0779   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0780   (0x0008)  
	class UNiagaraComponent*                           Dodson_VFX;                                                 // 0x0788   (0x0008)  
	class USkeletalMeshComponent*                      K34_007_Menu_REF_ACC;                                       // 0x0790   (0x0008)  
	class USkeletalMeshComponent*                      Dodson;                                                     // 0x0798   (0x0008)  
	class USkeletalMeshComponent*                      K34_Chair_Menu_REF_ACC;                                     // 0x07A0   (0x0008)  
	class UBP_Audio_KLR_34_C*                          BP_Audio_KLR;                                               // 0x07A8   (0x0008)  
	class UObject*                                     AB_K34_SW01;                                                // 0x07B0   (0x0008)  
	class UAB_Menu_Slasher34_C*                        AB_Menu_K34;                                                // 0x07B8   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher34.BP_Menu_Slasher34_C.BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
	// void BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory category, FString switchState); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher34.BP_Menu_Slasher34_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher34.BP_Menu_Slasher34_C.OnCustomizationChanged_Event
	// void OnCustomizationChanged_Event();                                                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher34.BP_Menu_Slasher34_C.ExecuteUbergraph_BP_Menu_Slasher34
	// void ExecuteUbergraph_BP_Menu_Slasher34(int32_t EntryPoint);                                                          // [0x61c32d0] Final|HasDefaults    
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher01_018.BP_Menu_Slasher01_018_C
/// Size: 0x0010 (0x000788 - 0x000798)
class ABP_Menu_Slasher01_018_C : public ABP_Menu_Slasher01_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0788   (0x0008)  
	class UDBDSkeletalMeshComponentBudgeted*           Leaf;                                                       // 0x0790   (0x0008)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher01_018.BP_Menu_Slasher01_018_C.BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
	// void BndEvt__BP_Slasher_Character_14_CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory category, FString switchState); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher01_018.BP_Menu_Slasher01_018_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher01_018.BP_Menu_Slasher01_018_C.CustomEvent
	// void CustomEvent(EAkResult Result);                                                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher01_018.BP_Menu_Slasher01_018_C.SetMenuAnimationState
	// void SetMenuAnimationState(TEnumAsByte<Enum_MenuAnimationState> State);                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/BP_Menu_Slasher01_018.BP_Menu_Slasher01_018_C.ExecuteUbergraph_BP_Menu_Slasher01_018
	// void ExecuteUbergraph_BP_Menu_Slasher01_018(int32_t EntryPoint);                                                      // [0x61c32d0] Final                
};

/// Class /Game/Characters/BP_Player_Controller_Menu.BP_Player_Controller_Menu_C
/// Size: 0x0000 (0x000668 - 0x000668)
class ABP_Player_Controller_Menu_C : public ADBDPlayerController_Menu
{ 
public:
};

/// Class /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher34.AB_Menu_Slasher34_C
/// Size: 0x0412 (0x000300 - 0x000712)
class UAB_Menu_Slasher34_C : public UBaseMenuAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0308   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0340   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0368   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x03E8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer0;                              // 0x0420   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x04A0   (0x00A0)  
	FAnimNode_LinkedAnimGraph                          AnimGraphNode_LinkedAnimGraph;                              // 0x0540   (0x00A8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult1;                                 // 0x05E8   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0620   (0x00B0)  
	class ABP_Menu_Slasher34_C*                        KillerBP;                                                   // 0x06D0   (0x0008)  
	FAset_Slasher_Menu                                 MenuAnimSet;                                                // 0x06D8   (0x0038)  
	EGameFlowStep                                      CurrentMenu;                                                // 0x0710   (0x0001)  
	bool                                               IsInStore;                                                  // 0x0711   (0x0001)  


	/// Functions
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher34.AB_Menu_Slasher34_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher34.AB_Menu_Slasher34_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher34_AnimGraphNode_TransitionResult_9A66974D44E2A6F3C72019A62C0BBCF8
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher34_AnimGraphNode_TransitionResult_9A66974D44E2A6F3C72019A62C0BBCF8(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher34.AB_Menu_Slasher34_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher34.AB_Menu_Slasher34_C.BlueprintLinkedAnimationLayersInitialized
	// void BlueprintLinkedAnimationLayersInitialized();                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher34.AB_Menu_Slasher34_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Slashers/Blueprints/Menu/AB_Menu_Slasher34.AB_Menu_Slasher34_C.ExecuteUbergraph_AB_Menu_Slasher34
	// void ExecuteUbergraph_AB_Menu_Slasher34(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Slashers/K34/Weapons/Models/AB_K34_Chair_menu.AB_K34_Chair_menu_C
/// Size: 0x00C0 (0x0002C0 - 0x000380)
class UAB_K34_Chair_menu_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0300   (0x0080)  


	/// Functions
	// Function /Game/Characters/Slashers/K34/Weapons/Models/AB_K34_Chair_menu.AB_K34_Chair_menu_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Slashers/K34/Weapons/Models/AB_K34_Chair_menu.AB_K34_Chair_menu_C.ExecuteUbergraph_AB_K34_Chair_menu
	// void ExecuteUbergraph_AB_K34_Chair_menu(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Claudette/Models/Torsos/ACC/Neck/Blueprints/AB_CM_Badge03.AB_CM_Badge03_C
/// Size: 0x0AB9 (0x0002C0 - 0x000D79)
class UAB_CM_Badge03_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0300   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0328   (0x0028)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0350   (0x0020)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics;                                 // 0x0370   (0x0460)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x07D0   (0x0038)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace1;                       // 0x0808   (0x0020)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0828   (0x0008)  MISSED
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics2;                                // 0x0830   (0x0460)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult3;                                 // 0x0C90   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0CC8   (0x00B0)  
	bool                                               IsMenu;                                                     // 0x0D78   (0x0001)  


	/// Functions
	// Function /Game/Characters/Campers/Claudette/Models/Torsos/ACC/Neck/Blueprints/AB_CM_Badge03.AB_CM_Badge03_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Claudette/Models/Torsos/ACC/Neck/Blueprints/AB_CM_Badge03.AB_CM_Badge03_C.InOwnerMenu
	// void InOwnerMenu(bool& OwnerIsMenuCharacter);                                                                         // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Characters/Campers/Claudette/Models/Torsos/ACC/Neck/Blueprints/AB_CM_Badge03.AB_CM_Badge03_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Characters/Campers/Claudette/Models/Torsos/ACC/Neck/Blueprints/AB_CM_Badge03.AB_CM_Badge03_C.ExecuteUbergraph_AB_CM_Badge03
	// void ExecuteUbergraph_AB_CM_Badge03(int32_t EntryPoint);                                                              // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Claudette/Models/Torsos/ACC/Neck/Blueprints/BP_CM_Badge03.BP_CM_Badge03_C
/// Size: 0x0000 (0x001030 - 0x001030)
class UBP_CM_Badge03_C : public UAccessory
{ 
public:
};

/// Class /Game/Characters/Campers/Claudette/Models/Heads/ACC/Glasses/Blueprints/AB_CM_Glasses_ACC03.AB_CM_Glasses_ACC03_C
/// Size: 0x0218 (0x0002D0 - 0x0004E8)
class UAB_CM_Glasses_ACC03_C : public UDynamicAccessoryAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02D8   (0x0038)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0310   (0x01D8)  


	/// Functions
	// Function /Game/Characters/Campers/Claudette/Models/Heads/ACC/Glasses/Blueprints/AB_CM_Glasses_ACC03.AB_CM_Glasses_ACC03_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Claudette/Models/Heads/ACC/Glasses/Blueprints/AB_CM_Glasses_ACC03.AB_CM_Glasses_ACC03_C.ExecuteUbergraph_AB_CM_Glasses_ACC03
	// void ExecuteUbergraph_AB_CM_Glasses_ACC03(int32_t EntryPoint);                                                        // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Claudette/Models/Heads/ACC/Glasses/Blueprints/BP_CM_Glasses_ACC03.BP_CM_Glasses_ACC03_C
/// Size: 0x0000 (0x001030 - 0x001030)
class UBP_CM_Glasses_ACC03_C : public UAccessory
{ 
public:
};

/// Class /Game/Characters/Campers/Claudette/Models/Heads/ACC/Top/Blueprints/BP_CM_Hair_Acc03.BP_CM_Hair_Acc03_C
/// Size: 0x0000 (0x001030 - 0x001030)
class UBP_CM_Hair_Acc03_C : public UAccessory
{ 
public:
};

/// Class /Game/Characters/Campers/Claudette/Models/Heads/ACC/Top/Blueprints/AB_CM_Hair_ACC01.AB_CM_Hair_ACC01_C
/// Size: 0x0628 (0x0002D0 - 0x0008F8)
class UAB_CM_Hair_ACC01_C : public UDynamicAccessoryAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02D8   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0310   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0338   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0360   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0390   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose1;                               // 0x03C8   (0x0030)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x03F8   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0418   (0x0020)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult2;                                 // 0x0438   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose3;                               // 0x0470   (0x0030)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace4;                       // 0x04A0   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace5;                       // 0x04C0   (0x0020)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult6;                                 // 0x04E0   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0518   (0x00B0)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x05C8   (0x01D8)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x07A0   (0x0158)  


	/// Functions
	// Function /Game/Characters/Campers/Claudette/Models/Heads/ACC/Top/Blueprints/AB_CM_Hair_ACC01.AB_CM_Hair_ACC01_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Claudette/Models/Heads/ACC/Top/Blueprints/AB_CM_Hair_ACC01.AB_CM_Hair_ACC01_C.ExecuteUbergraph_AB_CM_Hair_ACC01
	// void ExecuteUbergraph_AB_CM_Hair_ACC01(int32_t EntryPoint);                                                           // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Nea/Models/Heads/ACC/Top/Blueprints/BP_NK_Hair_Acc01.BP_NK_Hair_Acc01_C
/// Size: 0x0000 (0x001030 - 0x001030)
class UBP_NK_Hair_Acc01_C : public UAccessory
{ 
public:
};

/// Class /Game/Characters/Campers/Nea/Models/Heads/ACC/Top/Blueprints/AB_NK_Hair_ACC01.AB_NK_Hair_ACC01_C
/// Size: 0x1350 (0x0002D0 - 0x001620)
class UAB_NK_Hair_ACC01_C : public UDynamicAccessoryAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02D8   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0310   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0338   (0x0028)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics;                                 // 0x0360   (0x0460)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x07C0   (0x0030)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x07F0   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0810   (0x0020)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0830   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose1;                               // 0x0868   (0x0030)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace2;                       // 0x0898   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace3;                       // 0x08B8   (0x0020)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x08D8   (0x0008)  MISSED
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics4;                                // 0x08E0   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics5;                                // 0x0D40   (0x0460)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult6;                                 // 0x11A0   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose7;                               // 0x11D8   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult8;                                 // 0x1208   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x1240   (0x00B0)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x12F0   (0x01D8)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x14C8   (0x0158)  


	/// Functions
	// Function /Game/Characters/Campers/Nea/Models/Heads/ACC/Top/Blueprints/AB_NK_Hair_ACC01.AB_NK_Hair_ACC01_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Nea/Models/Heads/ACC/Top/Blueprints/AB_NK_Hair_ACC01.AB_NK_Hair_ACC01_C.ExecuteUbergraph_AB_NK_Hair_ACC01
	// void ExecuteUbergraph_AB_NK_Hair_ACC01(int32_t EntryPoint);                                                           // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/Mali/Models/Heads/ACC/Top/Blueprints/BP_MS_Hair_ACC01.BP_MS_Hair_ACC01_C
/// Size: 0x0000 (0x001030 - 0x001030)
class UBP_MS_Hair_ACC01_C : public UAccessory
{ 
public:
};

/// Class /Game/Characters/Campers/Mali/Models/Heads/ACC/Top/Blueprints/AB_MS_Hair_ACC01.AB_MS_Hair_ACC01_C
/// Size: 0x17B0 (0x0002D0 - 0x001A80)
class UAB_MS_Hair_ACC01_C : public UDynamicAccessoryAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02D8   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0310   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0338   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0360   (0x0030)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0390   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x03B0   (0x0020)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics;                                 // 0x03D0   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics1;                                // 0x0830   (0x0460)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0C90   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose2;                               // 0x0CC8   (0x0030)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0CF8   (0x0008)  MISSED
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics3;                                // 0x0D00   (0x0460)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace4;                       // 0x1160   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace5;                       // 0x1180   (0x0020)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics6;                                // 0x11A0   (0x0460)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult7;                                 // 0x1600   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose8;                               // 0x1638   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult9;                                 // 0x1668   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x16A0   (0x00B0)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x1750   (0x01D8)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1928   (0x0158)  


	/// Functions
	// Function /Game/Characters/Campers/Mali/Models/Heads/ACC/Top/Blueprints/AB_MS_Hair_ACC01.AB_MS_Hair_ACC01_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/Mali/Models/Heads/ACC/Top/Blueprints/AB_MS_Hair_ACC01.AB_MS_Hair_ACC01_C.ExecuteUbergraph_AB_MS_Hair_ACC01
	// void ExecuteUbergraph_AB_MS_Hair_ACC01(int32_t EntryPoint);                                                           // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S32/Models/Heads/ACC/Blueprints/AB_S32_Hair_ACC01.AB_S32_Hair_ACC01_C
/// Size: 0x4C30 (0x0002D0 - 0x004F00)
class UAB_S32_Hair_ACC01_C : public UDynamicAccessoryAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02D8   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0310   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0338   (0x0028)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics;                                 // 0x0360   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics1;                                // 0x07C0   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics2;                                // 0x0C20   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics3;                                // 0x1080   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics4;                                // 0x14E0   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics5;                                // 0x1940   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics6;                                // 0x1DA0   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics7;                                // 0x2200   (0x0460)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x2660   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x2680   (0x0020)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x26A0   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x26D0   (0x0038)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x2708   (0x0008)  MISSED
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics8;                                // 0x2710   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics9;                                // 0x2B70   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics10;                               // 0x2FD0   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics11;                               // 0x3430   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics12;                               // 0x3890   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics13;                               // 0x3CF0   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics14;                               // 0x4150   (0x0460)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace15;                      // 0x45B0   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace16;                      // 0x45D0   (0x0020)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics17;                               // 0x45F0   (0x0460)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose18;                              // 0x4A50   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult19;                                // 0x4A80   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose20;                              // 0x4AB8   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult21;                                // 0x4AE8   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x4B20   (0x00B0)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x4BD0   (0x01D8)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x4DA8   (0x0158)  


	/// Functions
	// Function /Game/Characters/Campers/S32/Models/Heads/ACC/Blueprints/AB_S32_Hair_ACC01.AB_S32_Hair_ACC01_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S32/Models/Heads/ACC/Blueprints/AB_S32_Hair_ACC01.AB_S32_Hair_ACC01_C.ExecuteUbergraph_AB_S32_Hair_ACC01
	// void ExecuteUbergraph_AB_S32_Hair_ACC01(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S32/Models/Heads/ACC/Blueprints/BP_S32_Hair_ACC01.BP_S32_Hair_ACC01_C
/// Size: 0x0000 (0x001030 - 0x001030)
class UBP_S32_Hair_ACC01_C : public UAccessory
{ 
public:
};

/// Class /Game/Characters/Campers/S32/Models/Torsos/ACC/Blueprints/AB_S32_Holster_ACC01.AB_S32_Holster_ACC01_C
/// Size: 0x0EF0 (0x0002D0 - 0x0011C0)
class UAB_S32_Holster_ACC01_C : public UDynamicAccessoryAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02D8   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0310   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0338   (0x0028)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics;                                 // 0x0360   (0x0460)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x07C0   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x07E0   (0x0020)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0800   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0830   (0x0038)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace1;                       // 0x0868   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace2;                       // 0x0888   (0x0020)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x08A8   (0x0008)  MISSED
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics3;                                // 0x08B0   (0x0460)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose4;                               // 0x0D10   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult5;                                 // 0x0D40   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose6;                               // 0x0D78   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult7;                                 // 0x0DA8   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0DE0   (0x00B0)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0E90   (0x01D8)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x1068   (0x0158)  


	/// Functions
	// Function /Game/Characters/Campers/S32/Models/Torsos/ACC/Blueprints/AB_S32_Holster_ACC01.AB_S32_Holster_ACC01_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Characters/Campers/S32/Models/Torsos/ACC/Blueprints/AB_S32_Holster_ACC01.AB_S32_Holster_ACC01_C.ExecuteUbergraph_AB_S32_Holster_ACC01
	// void ExecuteUbergraph_AB_S32_Holster_ACC01(int32_t EntryPoint);                                                       // [0x61c32d0] Final                
};

/// Class /Game/Characters/Campers/S32/Models/Torsos/ACC/Blueprints/BP_S32_Holster_ACC01.BP_S32_Holster_ACC01_C
/// Size: 0x0000 (0x001030 - 0x001030)
class UBP_S32_Holster_ACC01_C : public UAccessory
{ 
public:
};

/// Struct /Game/Characters/Slashers/Animations/AnimSets/Aset_Slasher_BaseAttack.Aset_Slasher_BaseAttack
/// Size: 0x0078 (0x000000 - 0x000078)
struct FAset_Slasher_BaseAttack
{ 
	FAnimSequenceSelector                              Attack_In_2_F1088CF94CB5CD5805E3C5A5297C24E8;               // 0x0000   (0x0018)  
	FAnimSequenceSelector                              Attack_Swing_4_C44C1EBF4AF6D526D301BF8E66D9768A;            // 0x0018   (0x0018)  
	FAnimSequenceSelector                              Attack_Miss_6_B0913CA54BD2768CC1EB77A8D84376B1;             // 0x0030   (0x0018)  
	FAnimSequenceSelector                              Attack_Hit_8_8D9337BA4F10337CBF0521BE85A5DE67;              // 0x0048   (0x0018)  
	FAnimSequenceSelector                              Attack_BounceOnWall_10_6CE8D7714C443E321DA9EFA40A13CB1F;    // 0x0060   (0x0018)  
};

/// Class /Game/Meshes/Charms/Blueprints/Survivor_Chains/AB_SurvivorCharmsChains.AB_SurvivorCharmsChains_C
/// Size: 0x2E16 (0x0002C0 - 0x0030D6)
class UAB_SurvivorCharmsChains_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0300   (0x0030)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0330   (0x0020)  
	FAnimNode_Constraint                               AnimGraphNode_Constraint;                                   // 0x0350   (0x0118)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0468   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace0;                       // 0x0488   (0x0020)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum;                              // 0x04A8   (0x00B0)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x0558   (0x0120)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0678   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose1;                               // 0x07D0   (0x0030)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose2;                               // 0x0800   (0x0030)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose3;                               // 0x0830   (0x0030)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x0860   (0x0110)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace4;                       // 0x0970   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace5;                       // 0x0990   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace6;                       // 0x09B0   (0x0020)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics;                                 // 0x09D0   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics7;                                // 0x0E30   (0x0460)  
	FAnimNode_Constraint                               AnimGraphNode_Constraint8;                                  // 0x1290   (0x0118)  
	FAnimNode_Constraint                               AnimGraphNode_Constraint9;                                  // 0x13A8   (0x0118)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace10;                      // 0x14C0   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace11;                      // 0x14E0   (0x0020)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose12;                              // 0x1500   (0x0030)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum13;                            // 0x1530   (0x00B0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone14;                                 // 0x15E0   (0x0110)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace15;                      // 0x16F0   (0x0020)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose16;                              // 0x1710   (0x0030)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace17;                      // 0x1740   (0x0020)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics18;                               // 0x1760   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics19;                               // 0x1BC0   (0x0460)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose20;                              // 0x2020   (0x0030)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone21;                                 // 0x2050   (0x0110)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace22;                      // 0x2160   (0x0020)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose23;                              // 0x2180   (0x0030)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace24;                      // 0x21B0   (0x0020)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics25;                               // 0x21D0   (0x0460)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics26;                               // 0x2630   (0x0460)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum27;                            // 0x2A90   (0x00B0)  
	FAnimNode_Constraint                               AnimGraphNode_Constraint28;                                 // 0x2B40   (0x0118)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace29;                      // 0x2C58   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace30;                      // 0x2C78   (0x0020)  
	FAnimNode_BlendListByEnum                          AnimGraphNode_BlendListByEnum31;                            // 0x2C98   (0x00B0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose32;                              // 0x2D48   (0x0030)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose33;                              // 0x2D78   (0x0030)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose34;                              // 0x2DA8   (0x0030)  
	FAnimNode_Constraint                               AnimGraphNode_Constraint35;                                 // 0x2DD8   (0x0118)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace36;                      // 0x2EF0   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace37;                      // 0x2F10   (0x0020)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose38;                              // 0x2F30   (0x0030)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace39;                      // 0x2F60   (0x0020)  
	FAnimNode_Constraint                               AnimGraphNode_Constraint40;                                 // 0x2F80   (0x0118)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace41;                      // 0x3098   (0x0020)  
	SDK_UNDEFINED(1,4498) /* TEnumAsByte<Enum_CharmsJointAttachment> */ __um(ConstraintParent);                    // 0x30B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x30B9   (0x0003)  MISSED
	FVector                                            TranslationOffset;                                          // 0x30BC   (0x000C)  
	FRotator                                           RotationOffset;                                             // 0x30C8   (0x000C)  
	AnimPhysSimSpaceType                               SimulationSpace;                                            // 0x30D4   (0x0001)  
	SDK_UNDEFINED(1,4499) /* TEnumAsByte<Enum_CharmsJointChains> */ __um(JointChain);                              // 0x30D5   (0x0001)  


	/// Functions
	// Function /Game/Meshes/Charms/Blueprints/Survivor_Chains/AB_SurvivorCharmsChains.AB_SurvivorCharmsChains_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                               // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Meshes/Charms/Blueprints/Survivor_Chains/AB_SurvivorCharmsChains.AB_SurvivorCharmsChains_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Meshes/Charms/Blueprints/Survivor_Chains/AB_SurvivorCharmsChains.AB_SurvivorCharmsChains_C.ExecuteUbergraph_AB_SurvivorCharmsChains
	// void ExecuteUbergraph_AB_SurvivorCharmsChains(int32_t EntryPoint);                                                    // [0x61c32d0] Final                
};

/// Class /Game/Meshes/InteractableObjects/Cenobite/AB_LamentBox_REF.AB_LamentBox_REF_C
/// Size: 0x00A8 (0x0002C0 - 0x000368)
class UAB_LamentBox_REF_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0300   (0x0050)  
	FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose;                                 // 0x0350   (0x0018)  


	/// Functions
	// Function /Game/Meshes/InteractableObjects/Cenobite/AB_LamentBox_REF.AB_LamentBox_REF_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Meshes/InteractableObjects/Cenobite/AB_LamentBox_REF.AB_LamentBox_REF_C.ExecuteUbergraph_AB_LamentBox_REF
	// void ExecuteUbergraph_AB_LamentBox_REF(int32_t EntryPoint);                                                           // [0x61c32d0] Final                
};

/// Class /Game/Meshes/InteractableObjects/S28Book/Blueprints/AB_S28_Book.AB_S28_Book_C
/// Size: 0x024A (0x0002C0 - 0x00050A)
class UAB_S28_Book_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0300   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0328   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0350   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x03D0   (0x0038)  
	FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose;                                 // 0x0408   (0x0018)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult1;                                 // 0x0420   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0458   (0x00B0)  
	EItemHandPosition                                  Hand_Position;                                              // 0x0508   (0x0001)  
	bool                                               MenuInterrupt;                                              // 0x0509   (0x0001)  


	/// Functions
	// Function /Game/Meshes/InteractableObjects/S28Book/Blueprints/AB_S28_Book.AB_S28_Book_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Meshes/InteractableObjects/S28Book/Blueprints/AB_S28_Book.AB_S28_Book_C.ExecuteUbergraph_AB_S28_Book
	// void ExecuteUbergraph_AB_S28_Book(int32_t EntryPoint);                                                                // [0x61c32d0] Final                
};

/// Class /Game/Meshes/InteractableObjects/S29_Tablet/Blueprint/AB_S29_Tablete.AB_S29_Tablete_C
/// Size: 0x0141 (0x0002C0 - 0x000401)
class UAB_S29_Tablete_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose;                                 // 0x0300   (0x0018)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0318   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0350   (0x00B0)  
	bool                                               Role_Selected;                                              // 0x0400   (0x0001)  


	/// Functions
	// Function /Game/Meshes/InteractableObjects/S29_Tablet/Blueprint/AB_S29_Tablete.AB_S29_Tablete_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Meshes/InteractableObjects/S29_Tablet/Blueprint/AB_S29_Tablete.AB_S29_Tablete_C.ExecuteUbergraph_AB_S29_Tablete
	// void ExecuteUbergraph_AB_S29_Tablete(int32_t EntryPoint);                                                             // [0x61c32d0] Final                
};

/// Class /Game/Meshes/Props/K27/Meshes/BP_Well.BP_Well_C
/// Size: 0x0030 (0x000230 - 0x000260)
class ABP_Well_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0230   (0x0008)  
	class UMaterialHelper*                             MaterialHelper;                                             // 0x0238   (0x0008)  
	class UStaticMeshComponent*                        StaticMesh;                                                 // 0x0240   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0248   (0x0008)  
	float                                              TML_WellDissolveController_Dissolve_67D9A2534602A3F9B1003CA8800C736F; // 0x0250   (0x0004)  
	SDK_UNDEFINED(1,4500) /* TEnumAsByte<ETimelineDirection> */ __um(TML_WellDissolveController__Direction_67D9A2534602A3F9B1003CA8800C736F); // 0x0254   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0255   (0x0003)  MISSED
	class UTimelineComponent*                          TML_WellDissolveController;                                 // 0x0258   (0x0008)  


	/// Functions
	// Function /Game/Meshes/Props/K27/Meshes/BP_Well.BP_Well_C.TML_WellDissolveController__FinishedFunc
	// void TML_WellDissolveController__FinishedFunc();                                                                      // [0x61c32d0] BlueprintEvent       
	// Function /Game/Meshes/Props/K27/Meshes/BP_Well.BP_Well_C.TML_WellDissolveController__UpdateFunc
	// void TML_WellDissolveController__UpdateFunc();                                                                        // [0x61c32d0] BlueprintEvent       
	// Function /Game/Meshes/Props/K27/Meshes/BP_Well.BP_Well_C.TML_WellDissolveController__Disable Shadow__EventFunc
	// void TML_WellDissolveController__Disable Shadow__EventFunc();                                                         // [0x61c32d0] BlueprintEvent       
	// Function /Game/Meshes/Props/K27/Meshes/BP_Well.BP_Well_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Meshes/Props/K27/Meshes/BP_Well.BP_Well_C.Event_DissolveWell
	// void Event_DissolveWell();                                                                                            // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Meshes/Props/K27/Meshes/BP_Well.BP_Well_C.Event_QuickDissolveWell_In
	// void Event_QuickDissolveWell_In();                                                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Meshes/Props/K27/Meshes/BP_Well.BP_Well_C.ExecuteUbergraph_BP_Well
	// void ExecuteUbergraph_BP_Well(int32_t EntryPoint);                                                                    // [0x61c32d0] Final                
};

/// Class /Game/Meshes/InteractableObjects/S31_Radio/Blueprint/AB_S31_Radio.AB_S31_Radio_C
/// Size: 0x03EC (0x0002C0 - 0x0006AC)
class UAB_S31_Radio_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0300   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0328   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0350   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x0378   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x03A0   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x03C8   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0448   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer4;                              // 0x0480   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult5;                                 // 0x0500   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer6;                              // 0x0538   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult7;                                 // 0x05B8   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x05F0   (0x00B0)  
	class UAB_Menu_S31_C*                              As_AB_Menu_S31;                                             // 0x06A0   (0x0008)  
	bool                                               Role_Selected;                                              // 0x06A8   (0x0001)  
	bool                                               Menu_Interrupt;                                             // 0x06A9   (0x0001)  
	EItemHandPosition                                  Hand_Position;                                              // 0x06AA   (0x0001)  
	bool                                               radioInterruptTransition;                                   // 0x06AB   (0x0001)  


	/// Functions
	// Function /Game/Meshes/InteractableObjects/S31_Radio/Blueprint/AB_S31_Radio.AB_S31_Radio_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Meshes/InteractableObjects/S31_Radio/Blueprint/AB_S31_Radio.AB_S31_Radio_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Meshes/InteractableObjects/S31_Radio/Blueprint/AB_S31_Radio.AB_S31_Radio_C.BlueprintBeginPlay
	// void BlueprintBeginPlay();                                                                                            // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Meshes/InteractableObjects/S31_Radio/Blueprint/AB_S31_Radio.AB_S31_Radio_C.ExecuteUbergraph_AB_S31_Radio
	// void ExecuteUbergraph_AB_S31_Radio(int32_t EntryPoint);                                                               // [0x61c32d0] Final                
};

/// Class /Game/Meshes/Props/K30/BP_MenuFlags.BP_MenuFlags_C
/// Size: 0x0050 (0x000230 - 0x000280)
class ABP_MenuFlags_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0230   (0x0008)  
	class UMaterialHelper*                             MaterialHelper;                                             // 0x0238   (0x0008)  
	class UStaticMeshComponent*                        Flag03;                                                     // 0x0240   (0x0008)  
	class UStaticMeshComponent*                        Flag02;                                                     // 0x0248   (0x0008)  
	class UStaticMeshComponent*                        Flag01;                                                     // 0x0250   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0258   (0x0008)  
	float                                              TML_FlagDissolveController_DissolveSwitch_44E3C9B54D31D0CA3010458ADEAE888A; // 0x0260   (0x0004)  
	float                                              TML_FlagDissolveController_BannerOpacity_44E3C9B54D31D0CA3010458ADEAE888A; // 0x0264   (0x0004)  
	float                                              TML_FlagDissolveController_Banner_Dissolve_Progress_44E3C9B54D31D0CA3010458ADEAE888A; // 0x0268   (0x0004)  
	float                                              TML_FlagDissolveController_Flag_Stand_Dissolve_Progress_44E3C9B54D31D0CA3010458ADEAE888A; // 0x026C   (0x0004)  
	SDK_UNDEFINED(1,4501) /* TEnumAsByte<ETimelineDirection> */ __um(TML_FlagDissolveController__Direction_44E3C9B54D31D0CA3010458ADEAE888A); // 0x0270   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0271   (0x0007)  MISSED
	class UTimelineComponent*                          TML_FlagDissolveController;                                 // 0x0278   (0x0008)  


	/// Functions
	// Function /Game/Meshes/Props/K30/BP_MenuFlags.BP_MenuFlags_C.TML_FlagDissolveController__FinishedFunc
	// void TML_FlagDissolveController__FinishedFunc();                                                                      // [0x61c32d0] BlueprintEvent       
	// Function /Game/Meshes/Props/K30/BP_MenuFlags.BP_MenuFlags_C.TML_FlagDissolveController__UpdateFunc
	// void TML_FlagDissolveController__UpdateFunc();                                                                        // [0x61c32d0] BlueprintEvent       
	// Function /Game/Meshes/Props/K30/BP_MenuFlags.BP_MenuFlags_C.TML_FlagDissolveController__Disable Shadow__EventFunc
	// void TML_FlagDissolveController__Disable Shadow__EventFunc();                                                         // [0x61c32d0] BlueprintEvent       
	// Function /Game/Meshes/Props/K30/BP_MenuFlags.BP_MenuFlags_C.Event_DissolveFlag
	// void Event_DissolveFlag();                                                                                            // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Meshes/Props/K30/BP_MenuFlags.BP_MenuFlags_C.Event_QuickDissolveFlag_In
	// void Event_QuickDissolveFlag_In();                                                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Meshes/Props/K30/BP_MenuFlags.BP_MenuFlags_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Meshes/Props/K30/BP_MenuFlags.BP_MenuFlags_C.ExecuteUbergraph_BP_MenuFlags
	// void ExecuteUbergraph_BP_MenuFlags(int32_t EntryPoint);                                                               // [0x61c32d0] Final                
};

/// Class /Game/Meshes/InteractableObjects/Animals/Quesita01/Blueprints/AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C
/// Size: 0x0399 (0x0002C0 - 0x000659)
class UAB_Menu_Quesita01_REF_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0300   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0328   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0350   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x03D0   (0x0038)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0408   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x0428   (0x0110)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0538   (0x0020)  
	FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose;                                 // 0x0558   (0x0018)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult1;                                 // 0x0570   (0x0038)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x05A8   (0x00B0)  
	SDK_UNDEFINED(1,4502) /* TEnumAsByte<Enum_CamperMenuAnimationState> */ __um(CamperMenuAnimationState);         // 0x0658   (0x0001)  


	/// Functions
	// Function /Game/Meshes/InteractableObjects/Animals/Quesita01/Blueprints/AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Meshes/InteractableObjects/Animals/Quesita01/Blueprints/AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.AnimNotify_Quesita_MenuDissolve_Out
	// void AnimNotify_Quesita_MenuDissolve_Out();                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Meshes/InteractableObjects/Animals/Quesita01/Blueprints/AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.AnimNotify_Quesita_MenuDissolve_In
	// void AnimNotify_Quesita_MenuDissolve_In();                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Meshes/InteractableObjects/Animals/Quesita01/Blueprints/AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Quesita01_REF_AnimGraphNode_TransitionResult_29CAF8FC40571879471B8C9E6B29B59A
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Quesita01_REF_AnimGraphNode_TransitionResult_29CAF8FC40571879471B8C9E6B29B59A(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Meshes/InteractableObjects/Animals/Quesita01/Blueprints/AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Quesita01_REF_AnimGraphNode_TransitionResult_0D6B54F141E620F76F829D9F6FDE3069
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Quesita01_REF_AnimGraphNode_TransitionResult_0D6B54F141E620F76F829D9F6FDE3069(); // [0x61c32d0] BlueprintEvent       
	// Function /Game/Meshes/InteractableObjects/Animals/Quesita01/Blueprints/AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.BlueprintBeginPlay
	// void BlueprintBeginPlay();                                                                                            // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Meshes/InteractableObjects/Animals/Quesita01/Blueprints/AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.OnCamperAnimationMenuStateChanged
	// void OnCamperAnimationMenuStateChanged(TEnumAsByte<Enum_CamperMenuAnimationState> State);                             // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Meshes/InteractableObjects/Animals/Quesita01/Blueprints/AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.AnimNotify_FX_QuesitaDissolve_In
	// void AnimNotify_FX_QuesitaDissolve_In();                                                                              // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Meshes/InteractableObjects/Animals/Quesita01/Blueprints/AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.AnimNotify_FX_QuesitaDissolve_Out
	// void AnimNotify_FX_QuesitaDissolve_Out();                                                                             // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Meshes/InteractableObjects/Animals/Quesita01/Blueprints/AB_Menu_Quesita01_REF.AB_Menu_Quesita01_REF_C.ExecuteUbergraph_AB_Menu_Quesita01_REF
	// void ExecuteUbergraph_AB_Menu_Quesita01_REF(int32_t EntryPoint);                                                      // [0x61c32d0] Final                
};

/// Class /Game/Meshes/Environment/Archives/Structures/Bookshelf/Blueprints/AB_Arc_Bookshelf.AB_Arc_Bookshelf_C
/// Size: 0x00C4 (0x0002C0 - 0x000384)
class UAB_Arc_Bookshelf_C : public UAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0038)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0300   (0x0080)  
	float                                              PlayRate;                                                   // 0x0380   (0x0004)  


	/// Functions
	// Function /Game/Meshes/Environment/Archives/Structures/Bookshelf/Blueprints/AB_Arc_Bookshelf.AB_Arc_Bookshelf_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x61c32d0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Meshes/Environment/Archives/Structures/Bookshelf/Blueprints/AB_Arc_Bookshelf.AB_Arc_Bookshelf_C.OwningActor
	// void OwningActor(float& RateScale);                                                                                   // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Meshes/Environment/Archives/Structures/Bookshelf/Blueprints/AB_Arc_Bookshelf.AB_Arc_Bookshelf_C.BlueprintBeginPlay
	// void BlueprintBeginPlay();                                                                                            // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Meshes/Environment/Archives/Structures/Bookshelf/Blueprints/AB_Arc_Bookshelf.AB_Arc_Bookshelf_C.ExecuteUbergraph_AB_Arc_Bookshelf
	// void ExecuteUbergraph_AB_Arc_Bookshelf(int32_t EntryPoint);                                                           // [0x61c32d0] Final                
};

/// Class /Game/Meshes/Environment/Archives/Structures/Bookshelf/Blueprints/BP_Arc_Bookshelf.BP_Arc_Bookshelf_C
/// Size: 0x0035 (0x000230 - 0x000265)
class ABP_Arc_Bookshelf_C : public AActor
{ 
public:
	class UDBDSkeletalMeshComponentBudgeted*           SkeletalMeshComponent;                                      // 0x0230   (0x0008)  
	class USleepingSkinnedMeshRegisterer*              SleepingSkinnedMeshRegisterer;                              // 0x0238   (0x0008)  
	class UStaticMeshComponent*                        SM_BookshelfC;                                              // 0x0240   (0x0008)  
	class UStaticMeshComponent*                        SM_BookshelfB;                                              // 0x0248   (0x0008)  
	class UStaticMeshComponent*                        SM_BookshelfA;                                              // 0x0250   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0258   (0x0008)  
	float                                              RateScale;                                                  // 0x0260   (0x0004)  
	bool                                               InverseDirection;                                           // 0x0264   (0x0001)  


	/// Functions
	// Function /Game/Meshes/Environment/Archives/Structures/Bookshelf/Blueprints/BP_Arc_Bookshelf.BP_Arc_Bookshelf_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Meshes/Props/Artefact/BP_Artefact.BP_Artefact_C
/// Size: 0x0018 (0x000230 - 0x000248)
class ABP_Artefact_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0230   (0x0008)  
	class UAkComponent*                                AudioEvent_Archives_Artefact_Loop_Start;                    // 0x0238   (0x0008)  
	class USkeletalMeshComponent*                      SkeletalMesh;                                               // 0x0240   (0x0008)  


	/// Functions
	// Function /Game/Meshes/Props/Artefact/BP_Artefact.BP_Artefact_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Meshes/Props/Artefact/BP_Artefact.BP_Artefact_C.ExecuteUbergraph_BP_Artefact
	// void ExecuteUbergraph_BP_Artefact(int32_t EntryPoint);                                                                // [0x61c32d0] Final|HasDefaults    
};

