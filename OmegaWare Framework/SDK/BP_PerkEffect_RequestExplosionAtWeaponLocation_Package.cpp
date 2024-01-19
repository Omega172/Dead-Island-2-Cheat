/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.GetExplosionArchetype
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UExplosionActionArchetype*                   ExplosionArchetype                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_RequestExplosionAtWeaponLocation_C::GetExplosionArchetype(class UExplosionActionArchetype** ExplosionArchetype)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.GetExplosionArchetype");
		
		UBP_PerkEffect_RequestExplosionAtWeaponLocation_C_GetExplosionArchetype_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExplosionArchetype != nullptr)
			*ExplosionArchetype = params.ExplosionArchetype;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.GetVectorToSpawnExplosion
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector UBP_PerkEffect_RequestExplosionAtWeaponLocation_C::GetVectorToSpawnExplosion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.GetVectorToSpawnExplosion");
		
		UBP_PerkEffect_RequestExplosionAtWeaponLocation_C_GetVectorToSpawnExplosion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.RequestExplosion
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PerkEffect_RequestExplosionAtWeaponLocation_C::RequestExplosion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.RequestExplosion");
		
		UBP_PerkEffect_RequestExplosionAtWeaponLocation_C_RequestExplosion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.OnStart
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_RequestExplosionAtWeaponLocation_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.OnStart");
		
		UBP_PerkEffect_RequestExplosionAtWeaponLocation_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.OnEnd
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectEndParams                        Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_RequestExplosionAtWeaponLocation_C::OnEnd(const struct FPerkEffectEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.OnEnd");
		
		UBP_PerkEffect_RequestExplosionAtWeaponLocation_C_OnEnd_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.ExecuteUbergraph_BP_PerkEffect_RequestExplosionAtWeaponLocation
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_RequestExplosionAtWeaponLocation_C::ExecuteUbergraph_BP_PerkEffect_RequestExplosionAtWeaponLocation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.ExecuteUbergraph_BP_PerkEffect_RequestExplosionAtWeaponLocation");
		
		UBP_PerkEffect_RequestExplosionAtWeaponLocation_C_ExecuteUbergraph_BP_PerkEffect_RequestExplosionAtWeaponLocation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_RequestExplosionAtWeaponLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_RequestExplosionAtWeaponLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C");
		return ptr;
	}

}


