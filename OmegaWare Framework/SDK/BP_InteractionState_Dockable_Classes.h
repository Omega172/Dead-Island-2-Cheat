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
	 * BlueprintGeneratedClass BP_InteractionState_Dockable.BP_InteractionState_Dockable_C
	 * Size -> 0x0040 (FullSize[0x0158] - InheritedSize[0x0118])
	 */
	class UBP_InteractionState_Dockable_C : public UBP_Base_InteractionState_Player_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0118(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_Carryable_DockingPoint_C*                       CarryableDockingPointComponent;                          // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      ClassToTest;                                             // 0x0128(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UPaperDollSlot*                                      UserSlot;                                                // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                ActionOverrideDescriptor;                                // 0x0140(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void IsClassToTest(class UClass* Class, bool* bResult);
		void UserExitedRange(class APawn* User);
		void UserEnteredRange(class APawn* User);
		void CacheRequiredComponents(class AActor* Target);
		void UnbindPaperDollUpdate(class UPaperDollSlot** Slot);
		void BindPaperDollUpdate(class UPaperDollSlot** Slot);
		void GetUserCarrySlot(class APawn* Pawn, class UPaperDollSlot** Slot);
		void CheckHands(class UPaperDollSlot** Slot, bool* Output_Get);
		void OnPaperDollSlotUpdated(class UEquippableComponent* PreviousItem, class UEquippableComponent* NewItem);
		void ExecuteUbergraph_BP_InteractionState_Dockable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
