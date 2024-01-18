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
	 * 		Name   -> Function BP_Base_Weapon.BP_Base_Weapon_C.HandleExternalHits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FHitResult>                          Hits                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ABP_Base_Weapon_C::HandleExternalHits(TArray<struct FHitResult>* Hits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Weapon.BP_Base_Weapon_C.HandleExternalHits");
		
		ABP_Base_Weapon_C_HandleExternalHits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hits != nullptr)
			*Hits = params.Hits;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_Weapon.BP_Base_Weapon_C.AttackFinished
	 * 		Flags  -> ()
	 */
	void ABP_Base_Weapon_C::AttackFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Weapon.BP_Base_Weapon_C.AttackFinished");
		
		ABP_Base_Weapon_C_AttackFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_Weapon.BP_Base_Weapon_C.SetOwningActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Weapon_C::SetOwningActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Weapon.BP_Base_Weapon_C.SetOwningActor");
		
		ABP_Base_Weapon_C_SetOwningActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_Weapon.BP_Base_Weapon_C.Attack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsDualWield                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_Weapon_C::Attack(bool* bIsDualWield)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Weapon.BP_Base_Weapon_C.Attack");
		
		ABP_Base_Weapon_C_Attack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsDualWield != nullptr)
			*bIsDualWield = params.bIsDualWield;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_Weapon.BP_Base_Weapon_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Base_Weapon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Weapon.BP_Base_Weapon_C.UserConstructionScript");
		
		ABP_Base_Weapon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_Weapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_Weapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_Weapon.BP_Base_Weapon_C");
		return ptr;
	}

}


