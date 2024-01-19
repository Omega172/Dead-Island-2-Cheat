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
	 * BlueprintGeneratedClass BP_BTTask_BeginAttackRulesWarmUp.BP_BTTask_BeginAttackRulesWarmUp_C
	 * Size -> 0x0014 (FullSize[0x00BC] - InheritedSize[0x00A8])
	 */
	class UBP_BTTask_BeginAttackRulesWarmUp_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x00B0(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BP_BTTask_BeginAttackRulesWarmUp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
