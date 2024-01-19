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
	 * AnimBlueprintGeneratedClass ABP_Facial_NPC.ABP_Facial_NPC_C
	 * Size -> 0x1828 (FullSize[0x2698] - InheritedSize[0x0E70])
	 */
	class UABP_Facial_NPC_C : public UDIFacialAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0E70(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0E78(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_SubInput;                                  // 0x0EA8(0x00D0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x0F78(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0F98(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x10A0(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x10C0(0x0108)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_4;                             // 0x11C8(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x1290(0x0110)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x13A0(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x1468(0x0110)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x1578(0x0028)
		struct FAnimNode_BlendFaceFXAnimation                      AnimGraphNode_BlendFaceFXAnimation;                      // 0x15A0(0x0058)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x15F8(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1618(0x0020)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_3;                             // 0x1638(0x00C8)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x1700(0x0018)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x1718(0x00C0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x17D8(0x00C0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_2;                             // 0x1898(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x1960(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1988(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x19B8(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x1A68(0x0110)
		unsigned char                                              UnknownData_WWM3[0x8];                                   // 0x1B78(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_2;                                  // 0x1B80(0x0190)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik;                                    // 0x1D10(0x0190)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x1EA0(0x0110)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x1FB0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x1FD8(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x2050(0x0078)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x20C8(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x2190(0x0028)
		struct FAnimNode_TwoWayBlendLayerWeight                    AnimGraphNode_TwoWayBlendLayerWeight;                    // 0x21B8(0x00E0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x2298(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x2310(0x0078)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x2388(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x23B0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x23D8(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x2400(0x0058)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x2458(0x0110)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x2568(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x2590(0x0028)
		struct FAnimNode_SetPropertiesFromLayerWeights             AnimGraphNode_SetPropertiesFromLayerWeights;             // 0x25B8(0x00C8)
		float                                                      Layer_LookAtEyes;                                        // 0x2680(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_Saccade;                                           // 0x2684(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_Blink;                                             // 0x2688(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_FaceFx;                                            // 0x268C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      Layer_FacialIdle;                                        // 0x2690(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAnimationLayerWeight                               Layer_Glasses;                                           // 0x2694(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Facial_NPC_AnimGraphNode_Fabrik_A734A7FD418D7F33CD24BDB821CBA869();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Facial_NPC_AnimGraphNode_Fabrik_6BD586FA4FC5AC2619FE86BF0A4D4F07();
		void ExecuteUbergraph_ABP_Facial_NPC(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
