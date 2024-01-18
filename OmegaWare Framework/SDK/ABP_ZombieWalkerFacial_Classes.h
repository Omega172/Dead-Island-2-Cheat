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
	 * AnimBlueprintGeneratedClass ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C
	 * Size -> 0x0828 (FullSize[0x16F8] - InheritedSize[0x0ED0])
	 */
	class UABP_ZombieWalkerFacial_C : public UDIFacialAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0ED0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0ED8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0F08(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0F30(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0F58(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0F80(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x0FB0(0x00C0)
		struct FAnimNode_AnimSetBlendSpacePlayer                   AnimGraphNode_AnimSetBlendSpacePlayer_2;                 // 0x1070(0x00F8)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer_2;                   // 0x1168(0x0068)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x11D0(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1200(0x00C0)
		struct FAnimNode_AnimSetBlendSpacePlayer                   AnimGraphNode_AnimSetBlendSpacePlayer;                   // 0x12C0(0x00F8)
		struct FAnimNode_AnimSetSequencePlayer                     AnimGraphNode_AnimSetSequencePlayer;                     // 0x13B8(0x0068)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1420(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1450(0x00B0)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_SubInput;                                  // 0x1500(0x00D0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x15D0(0x0110)
		ECosmeticCombatState                                       InternalCombatState;                                     // 0x16E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IEKV[0x7];                                   // 0x16E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDIAnimInstance*                                     ParentClass;                                             // 0x16E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsReady;                                                 // 0x16F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3QHE[0x3];                                   // 0x16F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Layer_ProceduralMouth;                                   // 0x16F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
