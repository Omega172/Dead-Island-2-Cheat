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
	 * 		Name   -> Function BP_PerkEffect_GiveHealthBasedOnDamage.BP_PerkEffect_GiveHealthBasedOnDamage_C.Apply Health Regeneration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageDealt                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_GiveHealthBasedOnDamage_C::ApplyHealthRegeneration(float DamageDealt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_GiveHealthBasedOnDamage.BP_PerkEffect_GiveHealthBasedOnDamage_C.Apply Health Regeneration");
		
		UBP_PerkEffect_GiveHealthBasedOnDamage_C_ApplyHealthRegeneration_Params params {};
		params.DamageDealt = DamageDealt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_GiveHealthBasedOnDamage.BP_PerkEffect_GiveHealthBasedOnDamage_C.OnStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_GiveHealthBasedOnDamage_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_GiveHealthBasedOnDamage.BP_PerkEffect_GiveHealthBasedOnDamage_C.OnStart");
		
		UBP_PerkEffect_GiveHealthBasedOnDamage_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_GiveHealthBasedOnDamage.BP_PerkEffect_GiveHealthBasedOnDamage_C.ExecuteUbergraph_BP_PerkEffect_GiveHealthBasedOnDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_GiveHealthBasedOnDamage_C::ExecuteUbergraph_BP_PerkEffect_GiveHealthBasedOnDamage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_GiveHealthBasedOnDamage.BP_PerkEffect_GiveHealthBasedOnDamage_C.ExecuteUbergraph_BP_PerkEffect_GiveHealthBasedOnDamage");
		
		UBP_PerkEffect_GiveHealthBasedOnDamage_C_ExecuteUbergraph_BP_PerkEffect_GiveHealthBasedOnDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_GiveHealthBasedOnDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_GiveHealthBasedOnDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_GiveHealthBasedOnDamage.BP_PerkEffect_GiveHealthBasedOnDamage_C");
		return ptr;
	}

}


