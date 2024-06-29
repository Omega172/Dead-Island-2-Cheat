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
	 * BlueprintGeneratedClass BP_PerkEffect_BurstRegenaration.BP_PerkEffect_BurstRegenaration_C
	 * Size -> 0x009C (FullSize[0x00FC] - InheritedSize[0x0060])
	 */
	class UBP_PerkEffect_BurstRegenaration_C : public UInstancedPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USimpleHealthComponent*                              HealthComponent;                                         // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            RegenAmount;                                             // 0x0070(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		class ADICharacter*                                        OwningCharacter;                                         // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RegenTime;                                               // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LAOE[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKnowledgeBaseComponent*                             KnowledgeBase;                                           // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               KnowledgeBaseRegenTimeFact;                              // 0x00C0(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H84U[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSExpressionAndCosmeticDefinition>           CosmeticEffect;                                          // 0x00D0(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		TArray<struct FCosmeticEffectsID>                          CosemeticEffect_Refs;                                    // 0x00E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                CE_AttachPoint;                                          // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CosmeticEffectDestroyDelay;                              // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnStart(const struct FPerkEffectStartParams& Params);
		void OnEnd(const struct FPerkEffectEndParams& Params);
		void ExecuteUbergraph_BP_PerkEffect_BurstRegenaration(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
