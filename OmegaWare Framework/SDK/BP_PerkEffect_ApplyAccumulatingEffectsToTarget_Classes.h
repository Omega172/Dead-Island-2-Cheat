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
	 * BlueprintGeneratedClass BP_PerkEffect_ApplyAccumulatingEffectsToTarget.BP_PerkEffect_ApplyAccumulatingEffectsToTarget_C
	 * Size -> 0x01E8 (FullSize[0x0228] - InheritedSize[0x0040])
	 */
	class UBP_PerkEffect_ApplyAccumulatingEffectsToTarget_C : public UPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0040(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FAccumulatingEffectTypeAndValue>             AccumulatingEffectParams;                                // 0x0048(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGeneralImpactEventParams                           ImpactParams;                                            // 0x0058(0x01B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       FriendlyFireAllowed;                                     // 0x0210(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DMS4[0x7];                                   // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKnowledgeBaseValueSelector>                 ImpactFacts;                                             // 0x0218(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnStart(const struct FPerkEffectStartParams& Params);
		void ExecuteUbergraph_BP_PerkEffect_ApplyAccumulatingEffectsToTarget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
