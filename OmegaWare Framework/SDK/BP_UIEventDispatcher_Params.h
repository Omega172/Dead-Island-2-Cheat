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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_UIEventDispatcher.BP_UIEventDispatcher_C.OnOpenVendorMenu__DelegateSignature
	 */
	struct UBP_UIEventDispatcher_C_OnOpenVendorMenu__DelegateSignature_Params
	{
	public:
		TArray<class AItemActor*>                                  VendorItems;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class ABP_Base_DebugVendor_C*                              VendorActor;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UIEventDispatcher.BP_UIEventDispatcher_C.BP_OnLocalCharacterKilled__DelegateSignature
	 */
	struct UBP_UIEventDispatcher_C_BP_OnLocalCharacterKilled__DelegateSignature_Params
	{
	public:
		class ADIPlayerCharacter*                                  PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
