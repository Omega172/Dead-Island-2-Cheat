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
	 * 		Name   -> Function BP_MeleeWeapon_Legendary_Warhammer.BP_MeleeWeapon_Legendary_Warhammer_C.AddWeaponCE
	 * 		Flags  -> ()
	 */
	void ABP_MeleeWeapon_Legendary_Warhammer_C::AddWeaponCE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_Legendary_Warhammer.BP_MeleeWeapon_Legendary_Warhammer_C.AddWeaponCE");
		
		ABP_MeleeWeapon_Legendary_Warhammer_C_AddWeaponCE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_Legendary_Warhammer.BP_MeleeWeapon_Legendary_Warhammer_C.DeferredBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MeleeWeapon_Legendary_Warhammer_C::DeferredBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_Legendary_Warhammer.BP_MeleeWeapon_Legendary_Warhammer_C.DeferredBeginPlay");
		
		ABP_MeleeWeapon_Legendary_Warhammer_C_DeferredBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_Legendary_Warhammer.BP_MeleeWeapon_Legendary_Warhammer_C.ActionEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActionType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterActionEndedReason                        Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeleeWeapon_Legendary_Warhammer_C::ActionEnded(const struct FGuid& RequestId, const class FName& ActionType, ECharacterActionEndedReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_Legendary_Warhammer.BP_MeleeWeapon_Legendary_Warhammer_C.ActionEnded");
		
		ABP_MeleeWeapon_Legendary_Warhammer_C_ActionEnded_Params params {};
		params.RequestId = RequestId;
		params.ActionType = ActionType;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_Legendary_Warhammer.BP_MeleeWeapon_Legendary_Warhammer_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeleeWeapon_Legendary_Warhammer_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_Legendary_Warhammer.BP_MeleeWeapon_Legendary_Warhammer_C.ReceiveEndPlay");
		
		ABP_MeleeWeapon_Legendary_Warhammer_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_Legendary_Warhammer.BP_MeleeWeapon_Legendary_Warhammer_C.EndEffects
	 * 		Flags  -> ()
	 */
	void ABP_MeleeWeapon_Legendary_Warhammer_C::EndEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_Legendary_Warhammer.BP_MeleeWeapon_Legendary_Warhammer_C.EndEffects");
		
		ABP_MeleeWeapon_Legendary_Warhammer_C_EndEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_Legendary_Warhammer.BP_MeleeWeapon_Legendary_Warhammer_C.ImpactInstigated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointImpactEventResult                     RecordedImpact                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void ABP_MeleeWeapon_Legendary_Warhammer_C::ImpactInstigated(const struct FPointImpactEventResult& RecordedImpact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_Legendary_Warhammer.BP_MeleeWeapon_Legendary_Warhammer_C.ImpactInstigated");
		
		ABP_MeleeWeapon_Legendary_Warhammer_C_ImpactInstigated_Params params {};
		params.RecordedImpact = RecordedImpact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MeleeWeapon_Legendary_Warhammer.BP_MeleeWeapon_Legendary_Warhammer_C.ExecuteUbergraph_BP_MeleeWeapon_Legendary_Warhammer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MeleeWeapon_Legendary_Warhammer_C::ExecuteUbergraph_BP_MeleeWeapon_Legendary_Warhammer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MeleeWeapon_Legendary_Warhammer.BP_MeleeWeapon_Legendary_Warhammer_C.ExecuteUbergraph_BP_MeleeWeapon_Legendary_Warhammer");
		
		ABP_MeleeWeapon_Legendary_Warhammer_C_ExecuteUbergraph_BP_MeleeWeapon_Legendary_Warhammer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MeleeWeapon_Legendary_Warhammer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeleeWeapon_Legendary_Warhammer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeleeWeapon_Legendary_Warhammer.BP_MeleeWeapon_Legendary_Warhammer_C");
		return ptr;
	}

}


