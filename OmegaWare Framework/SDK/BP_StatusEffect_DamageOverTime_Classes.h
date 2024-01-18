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
	 * BlueprintGeneratedClass BP_StatusEffect_DamageOverTime.BP_StatusEffect_DamageOverTime_C
	 * Size -> 0x01F9 (FullSize[0x0289] - InheritedSize[0x0090])
	 */
	class UBP_StatusEffect_DamageOverTime_C : public UBP_Base_StatusEffect_C
	{
	public:
		class UClass*                                              DamageType;                                              // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamagePerSecond;                                         // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               KbFactToApply;                                           // 0x009C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UPerkDefinition*                                     PerkToAdd;                                               // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         DamageDecayCurve;                                        // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCosmeticEffectsDefinition*                          StatusEffectCosmeticEffect;                              // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CosmeticEffectOffset;                                    // 0x00C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InitialDamage;                                           // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGeneralImpactEventParams                           StatusEffectGeneralImpactParams;                         // 0x00D0(0x01B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       AllowFriendlyFire;                                       // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool IsFriendlyFireAllowed(class UStatusEffectTypeState* TypeState);
		void EstimateDamageToOwner(class AActor* Owner, float DamageToApply, const struct FWeakEventInstigator& Instigator, class AActor* DamageCauser, float* DamageEstimate);
		void ReceiveBeginInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance);
		void BeginPropagationEffect(const class FName& EffectName, class UStatusEffectComponent* StatusEffectComponent, class UStatusEffectInstance* StatusEffectInstance, class UBP_StatusEffectTypeState_DamageOverTime_C* TypeState);
		void BeginCosmeticEffect(class UBP_StatusEffectTypeState_DamageOverTime_C* TypeState);
		void ReceiveTick(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, TArray<class UStatusEffectInstance*> Instances, float DeltaTime);
		void GetInstanceTickDamageFromCurve(class UStatusEffectInstance* StatusEffectInstance, float DeltaTime, float* DamageToApply);
		void AddPerkToOwner(class UBP_StatusEffectTypeState_DamageOverTime_C* StatusEffectState, class ADICharacter* Character);
		void StopCosmeticEffect(class UBP_StatusEffectTypeState_DamageOverTime_C* TypeState);
		void ApplyDamageToOwner(class AActor* Owner, float DamageToApply, const struct FWeakEventInstigator& Instigator, class AActor* DamageCauser, bool FriendlyFireAllowed);
		void ReceiveEnd(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState);
		void ReceiveBegin(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* FirstInstance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
