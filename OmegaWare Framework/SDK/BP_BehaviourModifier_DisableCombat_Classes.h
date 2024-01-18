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
	 * BlueprintGeneratedClass BP_BehaviourModifier_DisableCombat.BP_BehaviourModifier_DisableCombat_C
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UBP_BehaviourModifier_DisableCombat_C : public UBehaviourModifier
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0028(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FKnowledgeBaseFactKey>                       CombatFacts;                                             // 0x0030(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                InvokerName;                                             // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnBegin(class AController* Controller);
		void OnEnd(class AController* Controller);
		void ExecuteUbergraph_BP_BehaviourModifier_DisableCombat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
