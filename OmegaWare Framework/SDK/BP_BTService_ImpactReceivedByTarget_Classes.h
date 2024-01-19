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
	 * BlueprintGeneratedClass BP_BTService_ImpactReceivedByTarget.BP_BTService_ImpactReceivedByTarget_C
	 * Size -> 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
	 */
	class UBP_BTService_ImpactReceivedByTarget_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ADICharacter*                                        OwningCharacter;                                         // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UImpactEventComponent*                               ImpactEventComponent;                                    // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCombatTargetComponent*                              DamageInstigator;                                        // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               FactToAddWhenTrue;                                       // 0x00C0(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BGQO[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCombatAggroComponent*                               AggroComponent;                                          // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float DamageSumReceived(class UBaseImpactEventResultWrapper* ImpactEvent);
		void CombatTargetHasChanged(class UCombatTargetComponent* NewTarget);
		void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void OnAnyImpactReceived(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent);
		void ExecuteUbergraph_BP_BTService_ImpactReceivedByTarget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
