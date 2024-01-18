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
	 * BlueprintGeneratedClass BP_ActionParams_CombatErrand_AI.BP_ActionParams_CombatErrand_AI_C
	 * Size -> 0x00F0 (FullSize[0x0128] - InheritedSize[0x0038])
	 */
	class UBP_ActionParams_CombatErrand_AI_C : public UCustomActionParamsBase
	{
	public:
		struct FCardDealerCounterModification                      PreQueryCheckFailedDeckModificationCounter;              // 0x0038(0x00A0) Edit, BlueprintVisible, ExposeOnSpawn
		TMap<EErrandStates, class UCosmeticEffectsDefinition*>     CosmeticsEffectsToApplyAtEndOfState;                     // 0x00D8(0x0050) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
