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
	 * BlueprintGeneratedClass BP_PerkEffect_RemoveAccumulatingEffectsFromTarget.BP_PerkEffect_RemoveAccumulatingEffectsFromTarget_C
	 * Size -> 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
	 */
	class UBP_PerkEffect_RemoveAccumulatingEffectsFromTarget_C : public UPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0050(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<EAccumulatingEffectType>                            EffectTypes;                                             // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		bool                                                       ApplyToOtherPlayersInRadius;                             // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YQY0[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Radius;                                                  // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFactionAgentComponent*                              TargetFactionAgentComponent;                             // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnStart(const struct FPerkEffectStartParams& Params);
		void ExecuteUbergraph_BP_PerkEffect_RemoveAccumulatingEffectsFromTarget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
