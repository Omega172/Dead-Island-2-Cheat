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
	 * BlueprintGeneratedClass BP_StatusEffectInstance_Infested.BP_StatusEffectInstance_Infested_C
	 * Size -> 0x0068 (FullSize[0x0138] - InheritedSize[0x00D0])
	 */
	class UBP_StatusEffectInstance_Infested_C : public UBP_StatusEffectInstance_DamageOverTime_C
	{
	public:
		struct FScopedKnowledgeBaseExpressionListener              CancellationExpression;                                  // 0x00D0(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UKnowledgeBaseComponent*                             InstigatorsKnowledgeBaseComponent;                       // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnStatusEffectCancellationExpressionChanged(bool bResult);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
