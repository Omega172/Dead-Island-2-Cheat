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
	 * BlueprintGeneratedClass BP_StatusEffect_Flammable.BP_StatusEffect_Flammable_C
	 * Size -> 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
	 */
	class UBP_StatusEffect_Flammable_C : public UBP_Base_StatusEffect_ApplyDebuff_C
	{
	public:
		void ReceiveEnd(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState);
		void ReceiveBegin(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* FirstInstance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
