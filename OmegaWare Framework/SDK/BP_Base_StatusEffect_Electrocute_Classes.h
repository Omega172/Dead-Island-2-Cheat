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
	 * BlueprintGeneratedClass BP_Base_StatusEffect_Electrocute.BP_Base_StatusEffect_Electrocute_C
	 * Size -> 0x0048 (FullSize[0x02D1] - InheritedSize[0x0289])
	 */
	class UBP_Base_StatusEffect_Electrocute_C : public UBP_StatusEffect_DamageOverTime_C
	{
	public:
		unsigned char                                              UnknownData_DF9J[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ParticlesToApply;                                        // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            IsElectrocutionByElectricScreamerExpression;             // 0x0298(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		bool                                                       IsSpecial;                                               // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool IsFriendlyFireAllowed(class UStatusEffectTypeState* TypeState);
		bool CheckStunnedActionConditions(class UBP_StatusEffectTypeState_Electrocute_C* ElecTypeState);
		void StopCosmeticEffect(class UBP_StatusEffectTypeState_DamageOverTime_C* TypeState);
		void BeginCosmeticEffect(class UBP_StatusEffectTypeState_DamageOverTime_C* TypeState);
		void AttemptToRequestStunnedAction(class AActor* Owner, class UStatusEffectTypeState* TypeState);
		void ReceiveTick(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, TArray<class UStatusEffectInstance*> Instances, float DeltaTime);
		void ReceiveEnd(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState);
		void ReceiveBegin(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* FirstInstance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
