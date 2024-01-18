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
	 * BlueprintGeneratedClass BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C
	 * Size -> 0x0040 (FullSize[0x0970] - InheritedSize[0x0930])
	 */
	class UBPC_InventoryItem_DockingPoint_C : public UInventoryItemDockComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0930(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       DisableDockAfterUse;                                     // 0x0938(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_01JV[0x7];                                   // 0x0939(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ActorDocked;                                             // 0x0940(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UInventoryComponent*                                 InventoryComponentRef;                                   // 0x0950(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UItemArchetype*>                              InventoryItemsAllowedToDock;                             // 0x0958(0x0010) Edit, BlueprintVisible
		class UInteractiveComponent*                               DockedInteractionComponentRef;                           // 0x0968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		TArray<class UItemArchetype*> GetDockableArchetypes();
		bool ShouldLockActor();
		void UpdateInteractionState(bool HasDocked);
		void ReceiveBeginPlay();
		void OnInteractionComplete_Server_Event(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void BlueprintOnDocked(class AItemPickupActor* Actor);
		void BlueprintOnUndocked(class AItemPickupActor* Actor);
		void ExecuteUbergraph_BPC_InventoryItem_DockingPoint(int32_t EntryPoint);
		void ActorDocked__DelegateSignature(class ABP_Base_ItemPickup_C* DockedActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
