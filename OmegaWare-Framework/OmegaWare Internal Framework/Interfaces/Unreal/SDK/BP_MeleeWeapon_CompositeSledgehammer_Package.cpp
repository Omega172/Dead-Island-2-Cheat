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
	 * 		Name   -> Function BP_MeleeWeapon_CompositeSledgehammer.BP_MeleeWeapon_CompositeSledgehammer_C.SetOwningActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeleeWeapon_CompositeSledgehammer_C::SetOwningActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_CompositeSledgehammer.BP_MeleeWeapon_CompositeSledgehammer_C.SetOwningActor");
		
		ABP_MeleeWeapon_CompositeSledgehammer_C_SetOwningActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_CompositeSledgehammer.BP_MeleeWeapon_CompositeSledgehammer_C.ExecuteUbergraph_BP_MeleeWeapon_CompositeSledgehammer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeleeWeapon_CompositeSledgehammer_C::ExecuteUbergraph_BP_MeleeWeapon_CompositeSledgehammer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_CompositeSledgehammer.BP_MeleeWeapon_CompositeSledgehammer_C.ExecuteUbergraph_BP_MeleeWeapon_CompositeSledgehammer");
		
		ABP_MeleeWeapon_CompositeSledgehammer_C_ExecuteUbergraph_BP_MeleeWeapon_CompositeSledgehammer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeleeWeapon_CompositeSledgehammer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeleeWeapon_CompositeSledgehammer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeleeWeapon_CompositeSledgehammer.BP_MeleeWeapon_CompositeSledgehammer_C");
		return ptr;
	}

}


