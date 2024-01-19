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
	 * BlueprintGeneratedClass BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C
	 * Size -> 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
	 */
	class UBP_CardGenerator_Latent_CombatTargetKB_C : public UBP_CardGenerator_Base_Latent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0068(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             CombatTargetKBComponent;                                 // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddKBListenerForCombatTarget(class AActor* CombatTargetActor);
		class FString GetBlueprintDescription();
		void OnInitialise();
		void OnCombatTargetChanged(class UCombatTargetComponent* NewTarget);
		void OnExpressionChanged(bool bResult);
		void OnUninitialise();
		void ExecuteUbergraph_BP_CardGenerator_Latent_CombatTargetKB(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
