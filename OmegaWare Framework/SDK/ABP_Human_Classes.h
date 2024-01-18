#pragma once

/**
 * Name: Dead_Island_2
 * Version: Cracked
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
	 * Size -> 0x34AC (FullSize[0x4CAC] - InheritedSize[0x1800])
	 */
	class UABP_Human_C : public UDINPCAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1800(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_10;                         // 0x1808(0x0110)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0x1918(0x0110)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_5;                            // 0x1A28(0x0018)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_8;                             // 0x1A40(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x1B08(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0x1B30(0x0110)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_4;                            // 0x1C40(0x0018)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_7;                             // 0x1C58(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x1D20(0x0110)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x1E30(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_6;                             // 0x1E58(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x1F20(0x0110)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x2030(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x2058(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x2080(0x0110)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_3;                            // 0x2190(0x0018)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_5;                             // 0x21A8(0x00C8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x2270(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x2298(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x22C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x22E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x2310(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x2338(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x2360(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x2388(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x23B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x23D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x2400(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x2428(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x2450(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x2478(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x24A0(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x24C8(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x25A8(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x25D8(0x00E0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x26B8(0x00E0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x2798(0x00E0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_4;                             // 0x2878(0x00C8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x2940(0x00A0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_3;                             // 0x29E0(0x00C8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x2AA8(0x00E0)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_2;                            // 0x2B88(0x0018)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x2BA0(0x00A0)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_7;                   // 0x2C40(0x0068)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x2CA8(0x00C0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x2D68(0x0030)
		struct FAnimNode_AnimSetBlendSpacePlayer                   AnimGraphNode_AnimSetBlendSpacePlayer_3;                 // 0x2D98(0x00F8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x2E90(0x0030)
		struct FAnimNode_AnimSetBlendSpacePlayer                   AnimGraphNode_AnimSetBlendSpacePlayer_2;                 // 0x2EC0(0x00F8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x2FB8(0x0030)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x2FE8(0x0018)
		struct FAnimNode_AnimSetBlendSpacePlayer                   AnimGraphNode_AnimSetBlendSpacePlayer;                   // 0x3000(0x00F8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x30F8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x3198(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x31C8(0x00A0)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_6;                   // 0x3268(0x0068)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_5;                   // 0x32D0(0x0068)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_4;                   // 0x3338(0x0068)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x33A0(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x3450(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x34C8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x34F8(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x35A8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x35D8(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x3688(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x36E0(0x0058)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x3738(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x37F8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x3820(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x3848(0x0110)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x3958(0x0058)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x39B0(0x00A0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x3A50(0x0058)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x3AA8(0x0110)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x3BB8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x3BE0(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x3C08(0x00C0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x3CC8(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_2;                             // 0x3D90(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x3E58(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x3E80(0x0110)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x3F90(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x4058(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x4080(0x0028)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_3;                   // 0x40A8(0x0068)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_2;                   // 0x4110(0x0068)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer;                     // 0x4178(0x0068)
		float                                                      __CustomProperty_Layer_FaceFx_429649D64F74F1138B1165A09DC58F0B; // 0x41E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_Layer_LookAtEyes_429649D64F74F1138B1165A09DC58F0B; // 0x41E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_SubInstance;                               // 0x41E8(0x00A0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x4288(0x0020)
		struct FAnimNode_SmartBoneDriver                           AnimGraphNode_SmartBoneDriver;                           // 0x42A8(0x0150)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x43F8(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x4418(0x0028)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x4440(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x4470(0x00C0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x4530(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x4638(0x0108)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x4740(0x0110)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x4850(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x4878(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x48A0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x48C8(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x48F0(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x49B8(0x0028)
		struct FAnimNode_NPCLookAt                                 AnimGraphNode_NPCLookAt;                                 // 0x49E0(0x01E8)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x4BC8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x4BE8(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x4C08(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x4C30(0x0028)
		float                                                      Layer_Locomotion;                                        // 0x4C58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_Airborne;                                          // 0x4C5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_Facial;                                            // 0x4C60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_IK;                                                // 0x4C64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_HitReactions;                                      // 0x4C68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_AnimDynamics;                                      // 0x4C6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_CycleBreak;                                        // 0x4C70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_Personality;                                       // 0x4C74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isCrouched;                                              // 0x4C78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8ZKN[0x3];                                   // 0x4C79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WPN_OverridePose_L_Alpha;                                // 0x4C7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WPN_OverridePose_R_Alpha;                                // 0x4C80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WPN_VerticalPose_Alpha;                                  // 0x4C84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Wpn_Pose;                                                // 0x4C88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_WeaponPose;                                        // 0x4C8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_FaceFx;                                            // 0x4C90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_ProceduralCorrectors;                              // 0x4C94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_IKFoot;                                            // 0x4C98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_IKLookAt;                                          // 0x4C9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_IKAim;                                             // 0x4CA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_LookAtEyes;                                        // 0x4CA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_Glasses;                                           // 0x4CA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_ModifyBone_24E1E77E4B7116FA4C8D668ECA12D438();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_ModifyBone_2BC4449645630F6040116E8693216053();
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
