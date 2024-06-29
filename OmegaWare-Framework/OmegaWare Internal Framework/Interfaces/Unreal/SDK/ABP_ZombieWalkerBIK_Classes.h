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
	 * AnimBlueprintGeneratedClass ABP_ZombieWalkerBIK.ABP_ZombieWalkerBIK_C
	 * Size -> 0x0A94 (FullSize[0x17E4] - InheritedSize[0x0D50])
	 */
	class UABP_ZombieWalkerBIK_C : public UDINPCIKAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0D50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0D58(0x0030)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0D88(0x0020)
		struct FAnimNode_BIKRig                                    AnimGraphNode_BIKRig;                                    // 0x0DA8(0x00B8) ContainsInstancedReference
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x0E60(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x0E80(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0EA8(0x00A0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0F48(0x0020)
		unsigned char                                              UnknownData_IYKM[0x8];                                   // 0x0F68(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_SetIkTargetFromGroundCollision            AnimGraphNode_SetIkTargetFromGroundCollision_2;          // 0x0F70(0x0320)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1290(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x12B0(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x12D8(0x0110)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x13E8(0x00D0)
		unsigned char                                              UnknownData_3WMO[0x8];                                   // 0x14B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_SetIkTargetFromGroundCollision            AnimGraphNode_SetIkTargetFromGroundCollision;            // 0x14C0(0x0320)
		float                                                      Layer_IKinema;                                           // 0x17E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_ABP_ZombieWalkerBIK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
