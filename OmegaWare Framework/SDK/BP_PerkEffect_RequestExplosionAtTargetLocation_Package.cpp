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
	 * 		Name   -> Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.GetLastDamageCauser
	 * 		Flags  -> ()
	 */
	class AActor* UBP_PerkEffect_RequestExplosionAtTargetLocation_C::GetLastDamageCauser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.GetLastDamageCauser");
		
		UBP_PerkEffect_RequestExplosionAtTargetLocation_C_GetLastDamageCauser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.GetInstigator
	 * 		Flags  -> ()
	 */
	struct FEventInstigator UBP_PerkEffect_RequestExplosionAtTargetLocation_C::GetInstigator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.GetInstigator");
		
		UBP_PerkEffect_RequestExplosionAtTargetLocation_C_GetInstigator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.GetRotatorToSpawnExplosion
	 * 		Flags  -> ()
	 */
	struct FRotator UBP_PerkEffect_RequestExplosionAtTargetLocation_C::GetRotatorToSpawnExplosion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.GetRotatorToSpawnExplosion");
		
		UBP_PerkEffect_RequestExplosionAtTargetLocation_C_GetRotatorToSpawnExplosion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.GetExplosionArchetype
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UExplosionActionArchetype*                   ExplosionArchetype                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_RequestExplosionAtTargetLocation_C::GetExplosionArchetype(class UExplosionActionArchetype** ExplosionArchetype)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.GetExplosionArchetype");
		
		UBP_PerkEffect_RequestExplosionAtTargetLocation_C_GetExplosionArchetype_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExplosionArchetype != nullptr)
			*ExplosionArchetype = params.ExplosionArchetype;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.GetVectorToSpawnExplosion
	 * 		Flags  -> ()
	 */
	struct FVector UBP_PerkEffect_RequestExplosionAtTargetLocation_C::GetVectorToSpawnExplosion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.GetVectorToSpawnExplosion");
		
		UBP_PerkEffect_RequestExplosionAtTargetLocation_C_GetVectorToSpawnExplosion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.RequestExplosion
	 * 		Flags  -> ()
	 */
	void UBP_PerkEffect_RequestExplosionAtTargetLocation_C::RequestExplosion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.RequestExplosion");
		
		UBP_PerkEffect_RequestExplosionAtTargetLocation_C_RequestExplosion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.OnStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_RequestExplosionAtTargetLocation_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.OnStart");
		
		UBP_PerkEffect_RequestExplosionAtTargetLocation_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectEndParams                        Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_RequestExplosionAtTargetLocation_C::OnEnd(const struct FPerkEffectEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.OnEnd");
		
		UBP_PerkEffect_RequestExplosionAtTargetLocation_C_OnEnd_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.ExecuteUbergraph_BP_PerkEffect_RequestExplosionAtTargetLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_RequestExplosionAtTargetLocation_C::ExecuteUbergraph_BP_PerkEffect_RequestExplosionAtTargetLocation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.ExecuteUbergraph_BP_PerkEffect_RequestExplosionAtTargetLocation");
		
		UBP_PerkEffect_RequestExplosionAtTargetLocation_C_ExecuteUbergraph_BP_PerkEffect_RequestExplosionAtTargetLocation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_RequestExplosionAtTargetLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_RequestExplosionAtTargetLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C");
		return ptr;
	}

}


