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
	 * BlueprintGeneratedClass BP_PerkEffect_ClampedModifyIntFact.BP_PerkEffect_ClampedModifyIntFact_C
	 * Size -> 0x00D2 (FullSize[0x0132] - InheritedSize[0x0060])
	 */
	class UBP_PerkEffect_ClampedModifyIntFact_C : public UInstancedPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UKnowledgeBaseComponent*                             TargetKnowledgeBase;                                     // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               FactToModify;                                            // 0x0070(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ModifyAmount;                                            // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ClampValue;                                              // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TPFA[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            IncrementAmountExpression;                               // 0x0088(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            MinClampExpression;                                      // 0x00C0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            MaxClampExpression;                                      // 0x00F8(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		bool                                                       RevertValueChangeOnPerkEnd;                              // 0x0130(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ValueWasModified;                                        // 0x0131(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ClampedFactIncrement(bool* ValueWasModified);
		void OnStart(const struct FPerkEffectStartParams& Params);
		void OnEnd(const struct FPerkEffectEndParams& Params);
		void ExecuteUbergraph_BP_PerkEffect_ClampedModifyIntFact(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
