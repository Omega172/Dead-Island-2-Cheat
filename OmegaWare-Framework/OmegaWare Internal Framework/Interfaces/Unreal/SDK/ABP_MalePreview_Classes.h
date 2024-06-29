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
	 * AnimBlueprintGeneratedClass ABP_MalePreview.ABP_MalePreview_C
	 * Size -> 0x0440 (FullSize[0x0FA0] - InheritedSize[0x0B60])
	 */
	class UABP_MalePreview_C : public UDIAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B60(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0B68(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5;                                    // 0x0B98(0x0058)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0BF0(0x0020)
		struct FAnimNode_SmartBoneDriver                           AnimGraphNode_SmartBoneDriver;                           // 0x0C10(0x0150)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0D60(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x0D80(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x0DD8(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0E30(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0E88(0x0058)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0EE0(0x00C0)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_ABP_MalePreview(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
