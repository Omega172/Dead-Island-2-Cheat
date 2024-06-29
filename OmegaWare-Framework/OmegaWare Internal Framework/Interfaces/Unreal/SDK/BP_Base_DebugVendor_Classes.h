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
	 * BlueprintGeneratedClass BP_Base_DebugVendor.BP_Base_DebugVendor_C
	 * Size -> 0x006B (FullSize[0x031B] - InheritedSize[0x02B0])
	 */
	class ABP_Base_DebugVendor_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTriggerShapeComponent*                              TriggerShape;                                            // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCapsuleComponent*                                   Capsule;                                                 // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInteractiveComponent*                               Interactive;                                             // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULootGroupObject*                                    VendorItemTableDefault;                                  // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULootGroupObject*                                    VendorItemTableSpecials;                                 // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULootGroupObject*                                    VendorItemTableDaily;                                    // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfInteractors;                                     // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MenuParticipants;                                        // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDebugVendorStates                                         VendorState;                                             // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HC48[0x3];                                   // 0x0301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DebugInventorySize;                                      // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AItemActor*>                                  ItemList;                                                // 0x0308(0x0010) Edit, BlueprintVisible, Net, DisableEditOnTemplate
		bool                                                       PopulateOnBegin;                                         // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Inventorypopulated;                                      // 0x0319(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       WaitingToOpenMenu;                                       // 0x031A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnRep_Inventorypopulated();
		void OnItemCreated(bool Success, class AItemActor* Item, class UItemSpecification* ItemSpecification);
		void PopulateInventory();
		void UpdateState(EDebugVendorStates NewState);
		void BndEvt__TriggerShape_K2Node_ComponentBoundEvent_0_InteractorEnteredSignature__DelegateSignature(class UTriggerInteractorComponent* Interactor);
		void BndEvt__TriggerShape_K2Node_ComponentBoundEvent_1_InteractorLeftSignature__DelegateSignature(class UTriggerInteractorComponent* Interactor);
		void StateIdle();
		void StateAttract();
		void StateInMenu();
		void ReceiveBeginPlay();
		void BndEvt__Interactive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void MenuClosed();
		void BndEvt__Interactive_K2Node_ComponentBoundEvent_3_InteractDelegate__DelegateSignature(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void OpenMenu();
		void ExecuteUbergraph_BP_Base_DebugVendor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
