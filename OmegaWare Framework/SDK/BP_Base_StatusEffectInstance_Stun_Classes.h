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
	 * BlueprintGeneratedClass BP_Base_StatusEffectInstance_Stun.BP_Base_StatusEffectInstance_Stun_C
	 * Size -> 0x0048 (FullSize[0x0118] - InheritedSize[0x00D0])
	 */
	class UBP_Base_StatusEffectInstance_Stun_C : public UBP_Base_StatusEffectInstance_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStatusEffectComponent*                              StatusEffectComponent;                                   // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            CounterEnabledExpression;                                // 0x00E0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash

	public:
		void OnCounterable(bool Counterable);
		void SetupActionListeners();
		void ExecuteUbergraph_BP_Base_StatusEffectInstance_Stun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
