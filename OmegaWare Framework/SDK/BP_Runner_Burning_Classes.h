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
	 * BlueprintGeneratedClass BP_Runner_Burning.BP_Runner_Burning_C
	 * Size -> 0x0018 (FullSize[0x10C0] - InheritedSize[0x10A8])
	 */
	class ABP_Runner_Burning_C : public ABP_Base_Runner_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<EAccumulatingEffectType>                            Immunities;                                              // 0x10B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Runner_Burning(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
