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
	 * BlueprintGeneratedClass BP_StatusEffectTypeState_Flammable.BP_StatusEffectTypeState_Flammable_C
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	class UBP_StatusEffectTypeState_Flammable_C : public UBP_StatusEffectTypeState_ApplyDebuff_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0108(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAccumulatingEffectComponent*                        AccumulatingEffectsComponent;                            // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FlammableStateChanged(class UAccumulatingEffectComponent* AccumulatingEffectsComponent, bool IsFlammable);
		void OnAccumulatingEffectValueUpdated(EAccumulatingEffectType EffectType, float RequestedValue, class AController* Instigator, const struct FVector& HitLocation, class AActor* DamageCauser);
		void ExecuteUbergraph_BP_StatusEffectTypeState_Flammable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
