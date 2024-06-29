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
	 * AnimBlueprintGeneratedClass ABP_Human.ABP_Human_C
	 * Size -> 0x329C (FullSize[0x4A5C] - InheritedSize[0x17C0])
	 */
	class UABP_Human_C : public UDINPCAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x17C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_10;                         // 0x17C8(0x0110)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0x18D8(0x0110)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_5;                            // 0x19E8(0x0018)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_8;                             // 0x1A00(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x1AC8(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0x1AF0(0x0110)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_4;                            // 0x1C00(0x0018)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_7;                             // 0x1C18(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x1CE0(0x0110)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x1DF0(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_6;                             // 0x1E18(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x1EE0(0x0110)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x1FF0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x2018(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x2040(0x0110)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_3;                            // 0x2150(0x0018)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_5;                             // 0x2168(0x00C8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x2230(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x2258(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x2280(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x22A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x22D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x22F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x2320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x2348(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x2370(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x2398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x23C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x23E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x2410(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x2438(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x2460(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x2488(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x2568(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x2598(0x00E0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x2678(0x00E0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x2758(0x00E0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_4;                             // 0x2838(0x00C8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x2900(0x00A0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_3;                             // 0x29A0(0x00C8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x2A68(0x00E0)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_2;                            // 0x2B48(0x0018)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x2B60(0x00A0)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_7;                   // 0x2C00(0x0068)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x2C68(0x00C0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x2D28(0x0030)
		struct FAnimNode_AnimSetBlendSpacePlayer                   AnimGraphNode_AnimSetBlendSpacePlayer_3;                 // 0x2D58(0x00F8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x2E50(0x0030)
		struct FAnimNode_AnimSetBlendSpacePlayer                   AnimGraphNode_AnimSetBlendSpacePlayer_2;                 // 0x2E80(0x00F8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x2F78(0x0030)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x2FA8(0x0018)
		struct FAnimNode_AnimSetBlendSpacePlayer                   AnimGraphNode_AnimSetBlendSpacePlayer;                   // 0x2FC0(0x00F8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x30B8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x3158(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x3188(0x00A0)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_6;                   // 0x3228(0x0068)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_5;                   // 0x3290(0x0068)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_4;                   // 0x32F8(0x0068)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x3360(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x3410(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x3488(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x34B8(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x3568(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x3598(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x3648(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x36A0(0x0058)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x36F8(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x37B8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x37E0(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x3808(0x0110)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x3918(0x0058)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x3970(0x00A0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x3A10(0x0058)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x3A68(0x0110)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x3B78(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x3BA0(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x3BC8(0x00C0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x3C88(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_2;                             // 0x3D50(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x3E18(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x3E40(0x0110)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x3F50(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x4018(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x4040(0x0028)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_3;                   // 0x4068(0x0068)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_2;                   // 0x40D0(0x0068)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer;                     // 0x4138(0x0068)
		float                                                      __CustomProperty_Layer_FaceFx_429649D64F74F1138B1165A09DC58F0B; // 0x41A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_Layer_LookAtEyes_429649D64F74F1138B1165A09DC58F0B; // 0x41A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_SubInstance;                               // 0x41A8(0x00A0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x4248(0x0020)
		struct FAnimNode_SmartBoneDriver                           AnimGraphNode_SmartBoneDriver;                           // 0x4268(0x0150)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x43B8(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x43D8(0x0028)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x4400(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x4430(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x44F0(0x0110)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x4600(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x4628(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x4650(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x4678(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x46A0(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x4768(0x0028)
		struct FAnimNode_NPCLookAt                                 AnimGraphNode_NPCLookAt;                                 // 0x4790(0x01E8)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x4978(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x4998(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x49B8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x49E0(0x0028)
		float                                                      Layer_Locomotion;                                        // 0x4A08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_Airborne;                                          // 0x4A0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_Facial;                                            // 0x4A10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_IK;                                                // 0x4A14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_HitReactions;                                      // 0x4A18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_AnimDynamics;                                      // 0x4A1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_CycleBreak;                                        // 0x4A20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_Personality;                                       // 0x4A24(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isCrouched;                                              // 0x4A28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QVJ4[0x3];                                   // 0x4A29(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WPN_OverridePose_L_Alpha;                                // 0x4A2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WPN_OverridePose_R_Alpha;                                // 0x4A30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WPN_VerticalPose_Alpha;                                  // 0x4A34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Wpn_Pose;                                                // 0x4A38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_WeaponPose;                                        // 0x4A3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_FaceFx;                                            // 0x4A40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_ProceduralCorrectors;                              // 0x4A44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_IKFoot;                                            // 0x4A48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_IKLookAt;                                          // 0x4A4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_IKAim;                                             // 0x4A50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_LookAtEyes;                                        // 0x4A54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_Glasses;                                           // 0x4A58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_07D2435846AD5D64140B0AB3F687F7F8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_E9E3C6964209FEB160ECF8B25C8C6534();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_51B99D084C1778C852A311858AAD6FC0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_LayeredBoneBlend_9DDAA45546A23EB1F401E38BA36AE401();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_232AB8EB481718768336E2AD6C4B3253();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_LayeredBoneBlend_C0B26A8D4D4EA8F389F41EB68ECF7F47();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetBlendSpacePlayer_F19B5FE246D4BA8505B9B58E9E4EE4F9();
		void AlphaLayerChange(const class FName& LayerName, float Alpha);
		void ExecuteUbergraph_ABP_Human(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
