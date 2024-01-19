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
	 * BlueprintGeneratedClass BP_InteractionState_InventoryCheck.BP_InteractionState_InventoryCheck_C
	 * Size -> 0x0008 (FullSize[0x0130] - InheritedSize[0x0128])
	 */
	class UBP_InteractionState_InventoryCheck_C : public UBP_Base_InteractionState_Inventory_C
	{
	public:
		class UBPC_InteractionStateHelper_Inventory_C*             HelperComp;                                              // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckInventory();
		void GetItemArchetype(class UItemArchetype** ItemArchetype);
		void CacheRequiredComponents(class AActor* Target);
		void SetDisplayAction();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
