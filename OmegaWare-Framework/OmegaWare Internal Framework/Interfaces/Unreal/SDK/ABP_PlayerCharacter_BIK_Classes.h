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
	 * AnimBlueprintGeneratedClass ABP_PlayerCharacter_BIK.ABP_PlayerCharacter_BIK_C
	 * Size -> 0x0538 (FullSize[0x1260] - InheritedSize[0x0D28])
	 */
	class UABP_PlayerCharacter_BIK_C : public UDIIKAnimInstance
	{
	public:
		unsigned char                                              UnknownData_L0Z4[0x8];                                   // 0x0D28(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0D30(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0D38(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_SubInput;                                  // 0x0D68(0x00D0)
		unsigned char                                              UnknownData_NCY7[0x8];                                   // 0x0E38(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_SetIkTargetFromGroundCollision            AnimGraphNode_SetIkTargetFromGroundCollision;            // 0x0E40(0x0320)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1160(0x0020)
		struct FAnimNode_BIKRig                                    AnimGraphNode_BIKRig;                                    // 0x1180(0x00B8) ContainsInstancedReference
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1238(0x0020)
		bool                                                       AreFlinchesOn;                                           // 0x1258(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5F9V[0x3];                                   // 0x1259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LayreIKinema;                                            // 0x125C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_ABP_PlayerCharacter_BIK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
