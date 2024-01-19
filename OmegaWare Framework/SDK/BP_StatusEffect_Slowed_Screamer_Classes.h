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
	 * BlueprintGeneratedClass BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C
	 * Size -> 0x000C (FullSize[0x0114] - InheritedSize[0x0108])
	 */
	class UBP_StatusEffect_Slowed_Screamer_C : public UBP_StatusEffect_Slowed_C
	{
	public:
		class UActionDefinition*                                   StatusEffectActionDefinition_Secondary;                  // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScreamerSearchRadius;                                    // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RefreshAggressors(class UBP_StatusEffectTypeState_Slowed_Screamer_C* TypeState);
		void FindNearestAggressor(class AActor* ToActor, class UBP_StatusEffectTypeState_Slowed_Screamer_C* TypeState, class AActor** NearestAggressor);
		void ReceiveEnd(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState);
		void ReceiveBegin(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* FirstInstance);
		void IsOwnerObstructed(class UBP_StatusEffectParams_Slowed_Screamer_C* Params, class UBP_Base_StatusEffectTypeState_C* TypeState, bool Debug, bool* Result);
		void RequestSecondaryAction(class UBP_Base_StatusEffectTypeState_C* TypeState, float DistanceScalar, float RequiredDistanceScalar, float DirectionScalar, float RequiredDirectionScalar);
		void ModifyCosmeticEffect(class UBP_StatusEffectTypeState_Slowed_Screamer_C* TypeState, float Scalar, float DistanceScalar, float DirectionScalar, float AngleScalar);
		void ScaleModifierWithMovementAgainstInstigatorPoint(class UBP_StatusEffectParams_Slowed_Screamer_C* Params, class UBP_StatusEffectTypeState_Slowed_Screamer_C* TypeState, bool Debug, float* ProcessedValue, float* IsolatedDistanceElement, float* IsolatedDirectionElement, float* IsolatedSourceAngleElement);
		void ReceiveTickInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance, float DeltaTime);
		void ReceiveEndInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance);
		void ReceiveBeginInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
