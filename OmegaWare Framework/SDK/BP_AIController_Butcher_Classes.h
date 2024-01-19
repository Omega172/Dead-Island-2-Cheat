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
	 * BlueprintGeneratedClass BP_AIController_Butcher.BP_AIController_Butcher_C
	 * Size -> 0x0060 (FullSize[0x0728] - InheritedSize[0x06C8])
	 */
	class ABP_AIController_Butcher_C : public ABP_AIController_Base_Zombie_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCharacterActionRequestHelper*                       CrouchRequestHelper;                                     // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               CrouchAction;                                            // 0x06D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        CrouchDelay;                                             // 0x06E8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            CrouchRequestExpression;                                 // 0x06F0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash

	public:
		void OnButcherCrouchRequirementMet(bool bResult);
		void RequestCrouchAction();
		void ReceivePossess(class APawn* PossessedPawn);
		void CrouchActionSetup();
		void ReceiveUnPossess(class APawn* UnpossessedPawn);
		void ExecuteUbergraph_BP_AIController_Butcher(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
