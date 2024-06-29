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
	 * 		Name   -> Function BP_PerkEffect_SpawnCosmeticEffectAtHitLocation.BP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C.OnStart
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_SpawnCosmeticEffectAtHitLocation.BP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C.OnStart");
		
		UBP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_SpawnCosmeticEffectAtHitLocation.BP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C.OnEnd
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectEndParams                        Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C::OnEnd(const struct FPerkEffectEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_SpawnCosmeticEffectAtHitLocation.BP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C.OnEnd");
		
		UBP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C_OnEnd_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_SpawnCosmeticEffectAtHitLocation.BP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C.OnPointImpact
	 * 		Flags  -> (Net, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPointImpactEventResult                     ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UBP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C::OnPointImpact(class AActor* Actor, const struct FPointImpactEventResult& ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_SpawnCosmeticEffectAtHitLocation.BP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C.OnPointImpact");
		
		UBP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C_OnPointImpact_Params params {};
		params.Actor = Actor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_SpawnCosmeticEffectAtHitLocation.BP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C.ExecuteUbergraph_BP_PerkEffect_SpawnCosmeticEffectAtHitLocation
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C::ExecuteUbergraph_BP_PerkEffect_SpawnCosmeticEffectAtHitLocation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_SpawnCosmeticEffectAtHitLocation.BP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C.ExecuteUbergraph_BP_PerkEffect_SpawnCosmeticEffectAtHitLocation");
		
		UBP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C_ExecuteUbergraph_BP_PerkEffect_SpawnCosmeticEffectAtHitLocation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_SpawnCosmeticEffectAtHitLocation.BP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C");
		return ptr;
	}

}


