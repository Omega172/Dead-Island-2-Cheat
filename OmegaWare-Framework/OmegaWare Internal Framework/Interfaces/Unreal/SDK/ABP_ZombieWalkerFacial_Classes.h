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
	 * AnimBlueprintGeneratedClass ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C
	 * Size -> 0x0828 (FullSize[0x1698] - InheritedSize[0x0E70])
	 */
	class UABP_ZombieWalkerFacial_C : public UDIFacialAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0E70(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0E78(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0EA8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0ED0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0EF8(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0F20(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x0F50(0x00C0)
		struct FAnimNode_AnimSetBlendSpacePlayer                   AnimGraphNode_AnimSetBlendSpacePlayer_2;                 // 0x1010(0x00F8)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_2;                   // 0x1108(0x0068)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1170(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x11A0(0x00C0)
		struct FAnimNode_AnimSetBlendSpacePlayer                   AnimGraphNode_AnimSetBlendSpacePlayer;                   // 0x1260(0x00F8)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer;                     // 0x1358(0x0068)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x13C0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x13F0(0x00B0)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_SubInput;                                  // 0x14A0(0x00D0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x1570(0x0110)
		ECosmeticCombatState                                       InternalCombatState;                                     // 0x1680(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WJOU[0x7];                                   // 0x1681(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDIAnimInstance*                                     ParentClass;                                             // 0x1688(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsReady;                                                 // 0x1690(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RAQQ[0x3];                                   // 0x1691(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Layer_ProceduralMouth;                                   // 0x1694(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_TransitionResult_4895FB2F4D5E0E583CDCD889B0A95400();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_TransitionResult_4B79841643CC56B4CE5DD7998EF66067();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetBlendSpacePlayer_5CDE5A244B1FA0CA93D2E39481813B13();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetSequencePlayer_F2DDCEC7427D9519B3C448B045437E32();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetBlendSpacePlayer_CC45F0E940DCB534C6B07790EBA319F9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetSequencePlayer_F0BAD9FC4DA7809F5FFADE871E0B9107();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_ABP_ZombieWalkerFacial(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
