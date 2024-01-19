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
	 * BlueprintGeneratedClass BP_Base_StatusEffect_ApplyDebuff.BP_Base_StatusEffect_ApplyDebuff_C
	 * Size -> 0x0078 (FullSize[0x0108] - InheritedSize[0x0090])
	 */
	class UBP_Base_StatusEffect_ApplyDebuff_C : public UBP_Base_StatusEffect_C
	{
	public:
		class UCosmeticEffectsDefinition*                          _1stPersonCosmeticEffect;                                // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCosmeticEffectsDefinition*                          _3rdPersonCosmeticEffect;                                // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCosmeticEffectsDefinition*                          _1stPersonEndCosmeticEffect;                             // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCosmeticEffectsDefinition*                          _3rdPersonEndCosmeticEffect;                             // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverrideStartCosmeticEffectBlend;                        // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OverrideEndCosmeticEffectBlend;                          // 0x00B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IMRV[0x2];                                   // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSStatusEffectDebuffCosmeticEffectBlendData         StartCosmeticEffectBlendData;                            // 0x00B4(0x001C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSStatusEffectDebuffCosmeticEffectBlendData         EndCosmeticEffectBlendData;                              // 0x00D0(0x001C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EndCosmeticEffectDestroyDelay;                           // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartCosmeticEffectDestroyDelay;                         // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StartTryAttachToSkeleton;                                // 0x00F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EndTryAttachToSkeleton;                                  // 0x00F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8148[0x2];                                   // 0x00F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ParticleToApply;                                         // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ModifiableValueSourceName;                               // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FName GetModifiableValueSourceName();
		void DestroyCosmeticStatusEffectSK(class UStatusEffectTypeState* Object);
		void CreateCosmeticStatusEffectSK(class UStatusEffectTypeState* Type);
		void DestroyCosmeticEffect(class AActor* TargetActor, class UStatusEffectTypeState* TypeState, bool OverrideCosmeticEffectBlend, float BlendOutTime, const class FName& ParameterName, float LerpTime, ECosmeticEffectLerpType LerpType, float Delay, float TimeToDestroyCE);
		void CreateCosmeticEffect(class AActor* TargetActor, class UStatusEffectTypeState* TypeState, class UCosmeticEffectsDefinition* _1stPersonCE, class UCosmeticEffectsDefinition* _3rdPersonCE, bool OverrideCosmeticEffectBlend, float BlendInTime, ECosmeticEffectLerpType LerpType, const class FName& ParameterName, float ParameterMaxValue, float Delay, bool TryAttachToSkeleton);
		void ReceiveEnd(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState);
		void ReceiveBegin(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* FirstInstance);
		void ReceiveEndInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance);
		void ReceiveBeginInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
