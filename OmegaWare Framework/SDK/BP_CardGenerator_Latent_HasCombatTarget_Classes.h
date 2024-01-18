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
	 * BlueprintGeneratedClass BP_CardGenerator_Latent_HasCombatTarget.BP_CardGenerator_Latent_HasCombatTarget_C
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UBP_CardGenerator_Latent_HasCombatTarget_C : public UBP_CardGenerator_Base_Latent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UKnowledgeBaseComponent*                             CombatTargetKBComponent;                                 // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FString GetBlueprintDescription();
		void OnInitialise();
		void OnCombatTargetChanged(class UCombatTargetComponent* NewTarget);
		void OnUninitialise();
		void ExecuteUbergraph_BP_CardGenerator_Latent_HasCombatTarget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
