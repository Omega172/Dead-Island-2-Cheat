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
	 * 		Name   -> Function BP_MeleeWeapon_Sledgehammer.BP_MeleeWeapon_Sledgehammer_C.SetOwningActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeleeWeapon_Sledgehammer_C::SetOwningActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_Sledgehammer.BP_MeleeWeapon_Sledgehammer_C.SetOwningActor");
		
		ABP_MeleeWeapon_Sledgehammer_C_SetOwningActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_Sledgehammer.BP_MeleeWeapon_Sledgehammer_C.ExecuteUbergraph_BP_MeleeWeapon_Sledgehammer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeleeWeapon_Sledgehammer_C::ExecuteUbergraph_BP_MeleeWeapon_Sledgehammer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_Sledgehammer.BP_MeleeWeapon_Sledgehammer_C.ExecuteUbergraph_BP_MeleeWeapon_Sledgehammer");
		
		ABP_MeleeWeapon_Sledgehammer_C_ExecuteUbergraph_BP_MeleeWeapon_Sledgehammer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeleeWeapon_Sledgehammer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeleeWeapon_Sledgehammer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeleeWeapon_Sledgehammer.BP_MeleeWeapon_Sledgehammer_C");
		return ptr;
	}

}


