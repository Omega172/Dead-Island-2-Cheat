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
	 * BlueprintGeneratedClass BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C
	 * Size -> 0x0050 (FullSize[0x0168] - InheritedSize[0x0118])
	 */
	class UBP_InteractionState_InventoryDockable_C : public UBP_Base_InteractionState_Player_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0118(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_Player_C*                                   User;                                                    // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPC_InventoryItem_DockingPoint_C*                   This;                                                    // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      ClassToTest;                                             // 0x0130(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class ABP_Base_InventoryItemHolder_C*                      Owner;                                                   // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPC_InventoryItem_DockingPoint_C*                   DockingComp;                                             // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                BlockedDisplayActionText;                                // 0x0150(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UserExitedRange(class APawn* User);
		void UserEnteredRange(class APawn* User);
		void CacheRequiredComponents(class AActor* Target);
		void InventoryUpdatedCheck(class UItemArchetype* InputPin);
		void SetInteractAction();
		void CheckInventory(class ADICharacter* UserIn, bool* ItemFound);
		void OnInventoryUpdated(class UItemArchetype* ItemArchetype, class AItemActor* Item, int32_t NewCount, int32_t Delta);
		void OnInteractionComplete_Server(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void Initialize(class UInteractiveComponent* InInteractiveComponent);
		void ExecuteUbergraph_BP_InteractionState_InventoryDockable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
