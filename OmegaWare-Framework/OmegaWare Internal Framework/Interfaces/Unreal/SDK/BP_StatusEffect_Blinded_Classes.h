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
	 * BlueprintGeneratedClass BP_StatusEffect_Blinded.BP_StatusEffect_Blinded_C
	 * Size -> 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
	 */
	class UBP_StatusEffect_Blinded_C : public UBP_Base_StatusEffect_ApplyDebuff_C
	{
	public:
		void ReceiveTick(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, TArray<class UStatusEffectInstance*> Instances, float DeltaTime);
		void ReceiveBeginInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
