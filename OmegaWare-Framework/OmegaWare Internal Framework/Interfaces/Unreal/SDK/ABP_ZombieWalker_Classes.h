#pragma once

/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass ABP_ZombieWalker.ABP_ZombieWalker_C
	 * Size -> 0x4E70 (FullSize[0x6630] - InheritedSize[0x17C0])
	 */
	class UABP_ZombieWalker_C : public UDINPCAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x17C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_10;                                   // 0x17C8(0x0058)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x1820(0x00A0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_27;                       // 0x18C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_26;                       // 0x18E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0x1910(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0x1938(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x1960(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x1988(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_12;                       // 0x19B0(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x1A90(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_11;                       // 0x1AC0(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x1BA0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x1BD0(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1C48(0x0078)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_4;                         // 0x1CC0(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x1D70(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x1DA0(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x1E50(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x1E78(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x1EA0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x1EC8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x1EF0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x1F18(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x1F40(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x1F68(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x1F90(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x1FB8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x1FE0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x2008(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x2030(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x2058(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x2080(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x20A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x20D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x20F8(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_10;                       // 0x2120(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x2200(0x0030)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_5;                           // 0x2230(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4;                       // 0x22F8(0x0048)
		struct FAnimNode_AnimSetBlendSpacePlayer                   AnimGraphNode_AnimSetBlendSpacePlayer_6;                 // 0x2340(0x00F8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x2438(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_9;                        // 0x2468(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x2548(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_8;                        // 0x2578(0x00E0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_4;                           // 0x2658(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3;                       // 0x2720(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x2768(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_7;                        // 0x2798(0x00E0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0x2878(0x00E0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_3;                         // 0x2958(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x2A08(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x2AD0(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x2B18(0x0030)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0x2B48(0x00B0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_11;                            // 0x2BF8(0x00C8)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_7;                   // 0x2CC0(0x0068)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_6;                   // 0x2D28(0x0068)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_5;                   // 0x2D90(0x0068)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x2DF8(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x2E40(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x2E70(0x00E0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x2F50(0x00E0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x3030(0x00E0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x3110(0x00E0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_10;                            // 0x31F0(0x00C8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x32B8(0x00A0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_9;                             // 0x3358(0x00C8)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_4;                   // 0x3420(0x0068)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_3;                   // 0x3488(0x0068)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_2;                   // 0x34F0(0x0068)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x3558(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7;                        // 0x3608(0x00C0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_8;                             // 0x36C8(0x00C8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x3790(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x3870(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x38A0(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x3950(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x3980(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_6;                        // 0x3A30(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_10;                         // 0x3AF0(0x0110)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0x3C00(0x0110)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_9;                                    // 0x3D10(0x0058)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_7;                             // 0x3D68(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0x3E30(0x0110)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_6;                             // 0x3F40(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_8;                                    // 0x4008(0x0058)
		struct FAnimNode_PoseSnapshot                              AnimGraphNode_PoseSnapshot;                              // 0x4060(0x0090)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_5;                             // 0x40F0(0x00C8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x41B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x41E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x4208(0x0028)
		struct FAnimNode_AnimSetBlendSpacePlayer                   AnimGraphNode_AnimSetBlendSpacePlayer_5;                 // 0x4230(0x00F8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x4328(0x0030)
		struct FAnimNode_AnimSetBlendSpacePlayer                   AnimGraphNode_AnimSetBlendSpacePlayer_4;                 // 0x4358(0x00F8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x4450(0x0030)
		struct FAnimNode_AnimSetBlendSpacePlayer                   AnimGraphNode_AnimSetBlendSpacePlayer_3;                 // 0x4480(0x00F8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x4578(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x45A8(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x4658(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_20;                          // 0x46F8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x4720(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x4748(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x4810(0x0110)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_5;                        // 0x4920(0x00C0)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer;                     // 0x49E0(0x0068)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x4A48(0x00A0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7;                                    // 0x4AE8(0x0058)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x4B40(0x0110)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x4C50(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x4C78(0x0028)
		float                                                      __CustomProperty_Layer_ProceduralMouth_36BA661D4284D50ACDE1E1B0381C5327; // 0x4CA0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TN42[0x4];                                   // 0x4CA4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDIAnimInstance*                                     __CustomProperty_parentClass_36BA661D4284D50ACDE1E1B0381C5327; // 0x4CA8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECosmeticCombatState                                       __CustomProperty_InternalCombatState_36BA661D4284D50ACDE1E1B0381C5327; // 0x4CB0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CVWN[0x7];                                   // 0x4CB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_SubInstance;                               // 0x4CB8(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x4D58(0x0110)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x4E68(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x4F30(0x0110)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_4;                             // 0x5040(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x5108(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x5130(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x5158(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x5180(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x51A8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x51D0(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6;                                    // 0x51F8(0x0058)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x5250(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x5310(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5;                                    // 0x5338(0x0058)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x5390(0x0110)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x54A0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x54C8(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x54F0(0x0058)
		struct FAnimNode_AnimSetBlendSpacePlayer                   AnimGraphNode_AnimSetBlendSpacePlayer_2;                 // 0x5548(0x00F8)
		struct FAnimNode_SmartBoneDriver                           AnimGraphNode_SmartBoneDriver;                           // 0x5640(0x0150)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x5790(0x0020)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x57B0(0x0018)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_3;                             // 0x57C8(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x5890(0x0058)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x58E8(0x0020)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x5908(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x5938(0x0058)
		struct FAnimNode_AnimSetBlendSpacePlayer                   AnimGraphNode_AnimSetBlendSpacePlayer;                   // 0x5990(0x00F8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x5A88(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x5B48(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_2;                             // 0x5B70(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x5C38(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x5C60(0x00A0)
		struct FAnimNode_NPCLookAt                                 AnimGraphNode_NPCLookAt;                                 // 0x5D00(0x01E8)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x5EE8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x5F08(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x5F28(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x5FE8(0x0110)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x60F8(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x6120(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x61E8(0x0028)
		float                                                      __CustomProperty_Layer_IKinema_92F3E886409B9B0DB016ACAFA9BE4AA6; // 0x6210(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6UTR[0x4];                                   // 0x6214(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x6218(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x62B8(0x0110)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x63C8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x63F0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x6418(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x6440(0x00C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x6500(0x0058)
		class ABP_Base_AI_C*                                       Zombie;                                                  // 0x6558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LocalSpaceVelocity;                                      // 0x6560(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsInAir;                                                // 0x656C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MZBO[0x3];                                   // 0x656D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedCurrent;                                            // 0x6570(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              CombatState;                                             // 0x6574(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_49OS[0x3];                                   // 0x6575(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomIdleToPlay;                                        // 0x6578(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RandCombatIdleIndex;                                     // 0x657C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayRate;                                                // 0x6580(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpeedTarget;                                             // 0x6584(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpeedTarget_Stops;                                       // 0x6588(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationCurrent;                                         // 0x658C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationTarget;                                          // 0x6590(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_Locomotion;                                        // 0x6594(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_Facial;                                            // 0x6598(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_IK;                                                // 0x659C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RandomPersonality;                                       // 0x65A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_CycleBreak;                                        // 0x65A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationTarget_Stops;                                    // 0x65A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_Ragdoll;                                           // 0x65AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ELocomotionState                                           LocomotionState;                                         // 0x65B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       _OLD_IsCrawler;                                          // 0x65B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7Q5R[0x6];                                   // 0x65B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWindUpDefinition*                                   Attack_WD;                                               // 0x65B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_Airborne;                                          // 0x65C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AirborneDirection;                                       // 0x65C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AirborneVelocity;                                        // 0x65C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AirborneHeight;                                          // 0x65CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLanding;                                               // 0x65D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AirborneSkipInto;                                        // 0x65D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V4EG[0x2];                                   // 0x65D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Layer_Personality;                                       // 0x65D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_IKFoot;                                            // 0x65D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_IKLookAt;                                          // 0x65DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_IKAim;                                             // 0x65E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PersonalityWeight;                                       // 0x65E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_MorphTargets;                                      // 0x65E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MorphTargetsWeight;                                      // 0x65EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MorphTargetsPlayRate;                                    // 0x65F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_Twitch;                                            // 0x65F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Twitch_Intensity;                                        // 0x65F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LayerLHRFullBodySlot;                                    // 0x65FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LayerLHRUpperBodySlot;                                   // 0x6600(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LayerFullBodySlot;                                       // 0x6604(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LayerLowerBodySlot;                                      // 0x6608(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LayerUpperBodySlot;                                      // 0x660C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LayerStaticAttackSlot;                                   // 0x6610(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LayerRagdollSlot;                                        // 0x6614(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_PersonalityAdditive;                               // 0x6618(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LayerUpperBodyPartialSlot;                               // 0x661C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_IKinema;                                           // 0x6620(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_Block;                                             // 0x6624(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_ProceduralMouth;                                   // 0x6628(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_ProceduralCorrectors;                              // 0x662C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void GetLocomotionTransitionOverride(ELocomotionState OldState, ELocomotionState NewState, bool* bTransition, bool* bOverridden);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_2ECD65C04DC72896DB3858942796C7D8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_34D475A1448FBCDFF0DEBA82906F4B84();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_LinkedAnimGraph_36BA661D4284D50ACDE1E1B0381C5327();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetSequencePlayer_9232E14145B7FC7AD65F0B9833EA2C6E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_BlendListByBool_1ABE12964F72558C7BC58A9FBB20266C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_E81E06DB435BB167D1A2F1A6C19C181B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_TransitionResult_1762574C4CA12E8B04235BB5BAF2F023();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_139388184E4B90828FF7C79A5E6D8B91();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_383BEA4D4E0FD15DA89E69AB318AE4A3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_TransitionResult_5E3FD07048B88BEF325159866FBC9B81();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_BlendSpacePlayer_57B8563F4331065F58901593A9110C21();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_SequenceEvaluator_50992E5B49F39FD2811763A6982451D7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_ApplyAdditive_4021464543B5647FEFE607AF928A0620();
		void AnimNotify_LevitateRandom();
		void BlueprintInitializeAnimation();
		void EnableAirborne(bool bEnable, class UAnimMontage* BeginMontage, bool bSkipIntoAnimation);
		void AnimNotify_Landing();
		void AlphaLayerChange(const class FName& LayerName, float Alpha);
		void CycleBreakEnable();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_SequenceEvaluator_7F502D0D443E66DD8B5FCDA18EA84C22();
		void TickAirborne(float DeltaSeconds);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_ApplyAdditive_51C26F024095E79995F0D0A0D2B40D4A();
		void ExecuteUbergraph_ABP_ZombieWalker(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
