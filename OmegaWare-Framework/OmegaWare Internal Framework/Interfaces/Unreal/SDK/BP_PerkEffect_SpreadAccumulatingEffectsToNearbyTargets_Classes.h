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
	 * BlueprintGeneratedClass BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets.BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C
	 * Size -> 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
	 */
	class UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C : public UInstancedPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      ValueToApply;                                            // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UsePerkOwnerAsInstigator;                                // 0x006C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WT9V[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Radius;                                                  // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S5KP[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EAccumulatingEffectType>                            StatusEffectType;                                        // 0x0078(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void FindTargets(class AActor* Actor, TArray<class ABP_Base_AI_C*>* FoundTargets);
		void FindActiveStatusEffects(class AActor* Actor);
		void ApplyStatusEffectAccumualtion(class AActor* Actor, class AActor* OwnerActor);
		void OnStart(const struct FPerkEffectStartParams& Params);
		void ExecuteUbergraph_BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
