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
	 * BlueprintGeneratedClass BP_PerkEffect_SetTimeDilation.BP_PerkEffect_SetTimeDilation_C
	 * Size -> 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
	 */
	class UBP_PerkEffect_SetTimeDilation_C : public UInstancedPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FSlomoRequest                                       SlomoRequest;                                            // 0x0068(0x0020) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn
		struct FSlomoHandle                                        SlomoHandle;                                             // 0x0088(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void OnStart(const struct FPerkEffectStartParams& Params);
		void OnEnd(const struct FPerkEffectEndParams& Params);
		void ExecuteUbergraph_BP_PerkEffect_SetTimeDilation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
