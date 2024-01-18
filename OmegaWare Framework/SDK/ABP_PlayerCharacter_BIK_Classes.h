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
	 * AnimBlueprintGeneratedClass ABP_PlayerCharacter_BIK.ABP_PlayerCharacter_BIK_C
	 * Size -> 0x0538 (FullSize[0x12C0] - InheritedSize[0x0D88])
	 */
	class UABP_PlayerCharacter_BIK_C : public UDIIKAnimInstance
	{
	public:
		unsigned char                                              UnknownData_VA22[0x8];                                   // 0x0D88(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0D90(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0D98(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_SubInput;                                  // 0x0DC8(0x00D0)
		unsigned char                                              UnknownData_329U[0x8];                                   // 0x0E98(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_SetIkTargetFromGroundCollision            AnimGraphNode_SetIkTargetFromGroundCollision;            // 0x0EA0(0x0320)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x11C0(0x0020)
		struct FAnimNode_BIKRig                                    AnimGraphNode_BIKRig;                                    // 0x11E0(0x00B8) ContainsInstancedReference
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1298(0x0020)
		bool                                                       AreFlinchesOn;                                           // 0x12B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1Q8E[0x3];                                   // 0x12B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LayreIKinema;                                            // 0x12BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_ABP_PlayerCharacter_BIK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
