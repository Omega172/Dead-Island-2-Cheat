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
	 * BlueprintGeneratedClass BP_HUDIcon_ObjectiveMarker.BP_HUDIcon_ObjectiveMarker_C
	 * Size -> 0x0010 (FullSize[0x03C0] - InheritedSize[0x03B0])
	 */
	class UBP_HUDIcon_ObjectiveMarker_C : public UHUDIconObjective
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FTimerHandle                                        LongHoverTimerHandle;                                    // 0x03B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void OnPostObjectiveDataInitialize();
		void HoveringOverBegin();
		void HoveringOverEnd();
		void LongHover();
		void ExecuteUbergraph_BP_HUDIcon_ObjectiveMarker(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
