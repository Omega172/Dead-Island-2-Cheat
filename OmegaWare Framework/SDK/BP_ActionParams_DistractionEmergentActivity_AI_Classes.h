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
	 * BlueprintGeneratedClass BP_ActionParams_DistractionEmergentActivity_AI.BP_ActionParams_DistractionEmergentActivity_AI_C
	 * Size -> 0x0009 (FullSize[0x0041] - InheritedSize[0x0038])
	 */
	class UBP_ActionParams_DistractionEmergentActivity_AI_C : public UCustomActionParamsBase
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       IgnoreCombatStateChange;                                 // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
