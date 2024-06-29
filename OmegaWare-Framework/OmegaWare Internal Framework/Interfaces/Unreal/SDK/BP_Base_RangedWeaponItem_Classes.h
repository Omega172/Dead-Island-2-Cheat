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
	 * BlueprintGeneratedClass BP_Base_RangedWeaponItem.BP_Base_RangedWeaponItem_C
	 * Size -> 0x0019 (FullSize[0x0791] - InheritedSize[0x0778])
	 */
	class ABP_Base_RangedWeaponItem_C : public ARangedWeaponItemActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0778(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_ScrappableComponent_C*                          BPC_ScrappableComponent;                                 // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ADICharacter*                                        Character;                                               // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseAdditivePose;                                         // 0x0790(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_0_PaperDollEventMulticastDelegate__DelegateSignature(class UPaperDollSlot* PaperDollSlot);
		void ExecuteUbergraph_BP_Base_RangedWeaponItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
