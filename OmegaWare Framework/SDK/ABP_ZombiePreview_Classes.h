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
	 * AnimBlueprintGeneratedClass ABP_ZombiePreview.ABP_ZombiePreview_C
	 * Size -> 0x0390 (FullSize[0x0F50] - InheritedSize[0x0BC0])
	 */
	class UABP_ZombiePreview_C : public UDIAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0BC0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0BC8(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x0BF8(0x0058)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0C50(0x0020)
		struct FAnimNode_SmartBoneDriver                           AnimGraphNode_SmartBoneDriver;                           // 0x0C70(0x0150)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0DC0(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0DE0(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0E38(0x0058)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0E90(0x00C0)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_ABP_ZombiePreview(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
