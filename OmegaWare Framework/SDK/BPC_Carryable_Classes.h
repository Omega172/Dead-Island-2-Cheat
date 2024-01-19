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
	 * BlueprintGeneratedClass BPC_Carryable.BPC_Carryable_C
	 * Size -> 0x0278 (FullSize[0x08D8] - InheritedSize[0x0660])
	 */
	class UBPC_Carryable_C : public UCarryableComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0660(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             CarryableUnDocked;                                       // 0x0668(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBPC_CarryableInteractive_C*                         InteractiveComponentRef;                                 // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RowNameToUse;                                            // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             KnowledgeBaseRef;                                        // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       CarryableHeldActionRequestHelper;                        // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       CarryableHeavyAttackActionRequestHelper;                 // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionComponent*                           ActionComponentRef;                                      // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   CarryHeldActionDef;                                      // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCustomActionParamsBase*                             CarryHeldActionParams;                                   // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   CarryHeavyAttackActionDef;                               // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCustomActionParamsBase*                             CarryHeavyAttackActionParams;                            // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   CarryDockedActionDef;                                    // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       CarryableDockedActionRequestHelper;                      // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCustomActionParamsBase*                             CarryDockedActionParams;                                 // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               ThrownFactKey;                                           // 0x06E0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                DisableInteractionReason;                                // 0x06EC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCanRequestCustomHeavyAttackAction;                      // 0x06F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRequestedHeavyAttack;                                   // 0x06F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PHD8[0x2];                                   // 0x06F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseFactKey                               CarriedFactKey;                                          // 0x06F8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N5L8[0x4];                                   // 0x0704(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADIPlayerCharacter*                                  Carrier;                                                 // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMeleeSweepComponent*                                CarrierMeleeSweepComponent;                              // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              MeleeDamageType;                                         // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FImpactConfiguration                                MeleeImpactConfiguration;                                // 0x0720(0x00D8) Edit, BlueprintVisible, ContainsInstancedReference
		struct FImpactSettings                                     MeleeImpactSettings;                                     // 0x07F8(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FEventInstigator                                    MeleeImpactInstigator;                                   // 0x08C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      MeleeForceAmount;                                        // 0x08D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeleeDamageAmount;                                       // 0x08D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UnbindImpacyEvents();
		void GenerateMeleeImpact(TArray<struct FHitResult> HitResults, const struct FVector& SweepDirection, const struct FVector& AttackOrigin);
		void BindImpactEvents();
		void GetOwnerKnowledgeCompRef(class UKnowledgeBaseComponent** KnowledgeBaseRef);
		void GetOwnerActionCompRef();
		void SetUpBalancingData();
		void DockCarryable(struct FTransform* DockTransform, bool DisableAfterDock);
		void AttackHold();
		void EquippableAssignedToPaperDollSlot(class UPaperDollSlot* PaperDollSlot);
		void AttackReleased();
		void EquippableRemovedFromPaperDollSlot(class UPaperDollSlot* PaperDollSlot);
		void AttackPressed();
		void ReceiveBeginPlay();
		void RequestCustomHeavyAttackAction();
		void OnMeleeHit(TArray<struct FHitResult> HitResults, const struct FVector& SweepDirection, const struct FVector& AttackOrigin);
		void ExecuteUbergraph_BPC_Carryable(int32_t EntryPoint);
		void CarryableUnDocked__DelegateSignature(class AActor* UndockedActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
