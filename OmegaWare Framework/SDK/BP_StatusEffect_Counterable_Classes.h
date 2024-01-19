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
	 * BlueprintGeneratedClass BP_StatusEffect_Counterable.BP_StatusEffect_Counterable_C
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UBP_StatusEffect_Counterable_C : public UBP_Base_StatusEffect_Stun_C
	{
	public:
		void ReceiveBeginInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance);
		void SetupActionBindings(class UStatusEffectComponent* Component, class UBP_Base_StatusEffectTypeState_C* TypeState, class UStatusEffectInstance* Instance);
		void EndAction(class UActorComponent* Component, class UBP_Base_StatusEffectTypeState_C* TypeState);
		void RequestAction(class ADICharacter* OwningCharacter, class UStatusEffectComponent* Component, class UBP_Base_StatusEffectTypeState_C* TypeState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
