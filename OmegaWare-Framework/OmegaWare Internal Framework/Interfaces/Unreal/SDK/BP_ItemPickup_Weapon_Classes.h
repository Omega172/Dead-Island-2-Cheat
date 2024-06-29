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
	 * BlueprintGeneratedClass BP_ItemPickup_Weapon.BP_ItemPickup_Weapon_C
	 * Size -> 0x0017 (FullSize[0x0508] - InheritedSize[0x04F1])
	 */
	class ABP_ItemPickup_Weapon_C : public ABP_Base_ItemPickup_C
	{
	public:
		unsigned char                                              UnknownData_N7FH[0x7];                                   // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_WeaponAttachmentComponent_C*                    BPC_WeaponAttachmentComponent;                           // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void BndEvt__BPC_WeaponAttachmentComponent_K2Node_ComponentBoundEvent_0_AttachmentChangedDelegate__DelegateSignature();
		void ExecuteUbergraph_BP_ItemPickup_Weapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
