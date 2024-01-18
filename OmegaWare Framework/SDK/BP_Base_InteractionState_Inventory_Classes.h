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
	 * BlueprintGeneratedClass BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C
	 * Size -> 0x0010 (FullSize[0x0128] - InheritedSize[0x0118])
	 */
	class UBP_Base_InteractionState_Inventory_C : public UBP_Base_InteractionState_Player_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0118(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDIInventoryComponent*                               Inventory;                                               // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetItemArchetype(class UItemArchetype** ItemArchetype);
		void UnbindFromInventory();
		void FindPlayerInventory(class UDIInventoryComponent** InventoryComponent);
		void UserExitedRange(class APawn* User);
		void UserEnteredRange(class APawn* User);
		void CheckInventory();
		void InventoryModified(class UItemArchetype* ItemArchetype, class AItemActor* Item, int32_t NewCount, int32_t Delta);
		void Uninitialize();
		void ExecuteUbergraph_BP_Base_InteractionState_Inventory(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
