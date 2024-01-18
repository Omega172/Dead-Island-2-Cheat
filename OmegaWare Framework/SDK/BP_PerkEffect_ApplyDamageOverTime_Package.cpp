﻿/**
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
	 * 		Name   -> Function BP_PerkEffect_ApplyDamageOverTime.BP_PerkEffect_ApplyDamageOverTime_C.ApplyDamage
	 * 		Flags  -> ()
	 */
	void UBP_PerkEffect_ApplyDamageOverTime_C::ApplyDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ApplyDamageOverTime.BP_PerkEffect_ApplyDamageOverTime_C.ApplyDamage");
		
		UBP_PerkEffect_ApplyDamageOverTime_C_ApplyDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_ApplyDamageOverTime.BP_PerkEffect_ApplyDamageOverTime_C.OnStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_ApplyDamageOverTime_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ApplyDamageOverTime.BP_PerkEffect_ApplyDamageOverTime_C.OnStart");
		
		UBP_PerkEffect_ApplyDamageOverTime_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_ApplyDamageOverTime.BP_PerkEffect_ApplyDamageOverTime_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectEndParams                        Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_ApplyDamageOverTime_C::OnEnd(const struct FPerkEffectEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ApplyDamageOverTime.BP_PerkEffect_ApplyDamageOverTime_C.OnEnd");
		
		UBP_PerkEffect_ApplyDamageOverTime_C_OnEnd_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_ApplyDamageOverTime.BP_PerkEffect_ApplyDamageOverTime_C.ExecuteUbergraph_BP_PerkEffect_ApplyDamageOverTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_ApplyDamageOverTime_C::ExecuteUbergraph_BP_PerkEffect_ApplyDamageOverTime(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ApplyDamageOverTime.BP_PerkEffect_ApplyDamageOverTime_C.ExecuteUbergraph_BP_PerkEffect_ApplyDamageOverTime");
		
		UBP_PerkEffect_ApplyDamageOverTime_C_ExecuteUbergraph_BP_PerkEffect_ApplyDamageOverTime_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_ApplyDamageOverTime_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_ApplyDamageOverTime_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_ApplyDamageOverTime.BP_PerkEffect_ApplyDamageOverTime_C");
		return ptr;
	}

}


