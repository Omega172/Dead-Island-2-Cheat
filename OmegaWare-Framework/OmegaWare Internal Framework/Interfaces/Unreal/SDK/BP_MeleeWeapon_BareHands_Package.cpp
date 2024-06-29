/**
 * Name: Dead_Island_2
 * Version: Cracked
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_BareHands.BP_MeleeWeapon_BareHands_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MeleeWeapon_BareHands_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_BareHands.BP_MeleeWeapon_BareHands_C.ReceiveBeginPlay");
		
		ABP_MeleeWeapon_BareHands_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_BareHands.BP_MeleeWeapon_BareHands_C.ExecuteUbergraph_BP_MeleeWeapon_BareHands
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeleeWeapon_BareHands_C::ExecuteUbergraph_BP_MeleeWeapon_BareHands(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_BareHands.BP_MeleeWeapon_BareHands_C.ExecuteUbergraph_BP_MeleeWeapon_BareHands");
		
		ABP_MeleeWeapon_BareHands_C_ExecuteUbergraph_BP_MeleeWeapon_BareHands_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeleeWeapon_BareHands_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeleeWeapon_BareHands_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeleeWeapon_BareHands.BP_MeleeWeapon_BareHands_C");
		return ptr;
	}

}


