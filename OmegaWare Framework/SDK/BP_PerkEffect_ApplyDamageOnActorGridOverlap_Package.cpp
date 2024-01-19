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
	 * 		Name   -> Function BP_PerkEffect_ApplyDamageOnActorGridOverlap.BP_PerkEffect_ApplyDamageOnActorGridOverlap_C.OnActorGridCollisionOverlap
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_ApplyDamageOnActorGridOverlap_C::OnActorGridCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ApplyDamageOnActorGridOverlap.BP_PerkEffect_ApplyDamageOnActorGridOverlap_C.OnActorGridCollisionOverlap");
		
		UBP_PerkEffect_ApplyDamageOnActorGridOverlap_C_OnActorGridCollisionOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ApplyDamageOnActorGridOverlap.BP_PerkEffect_ApplyDamageOnActorGridOverlap_C.OnStart
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_ApplyDamageOnActorGridOverlap_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ApplyDamageOnActorGridOverlap.BP_PerkEffect_ApplyDamageOnActorGridOverlap_C.OnStart");
		
		UBP_PerkEffect_ApplyDamageOnActorGridOverlap_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ApplyDamageOnActorGridOverlap.BP_PerkEffect_ApplyDamageOnActorGridOverlap_C.OnEnd
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectEndParams                        Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_ApplyDamageOnActorGridOverlap_C::OnEnd(const struct FPerkEffectEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ApplyDamageOnActorGridOverlap.BP_PerkEffect_ApplyDamageOnActorGridOverlap_C.OnEnd");
		
		UBP_PerkEffect_ApplyDamageOnActorGridOverlap_C_OnEnd_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ApplyDamageOnActorGridOverlap.BP_PerkEffect_ApplyDamageOnActorGridOverlap_C.ExecuteUbergraph_BP_PerkEffect_ApplyDamageOnActorGridOverlap
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_ApplyDamageOnActorGridOverlap_C::ExecuteUbergraph_BP_PerkEffect_ApplyDamageOnActorGridOverlap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ApplyDamageOnActorGridOverlap.BP_PerkEffect_ApplyDamageOnActorGridOverlap_C.ExecuteUbergraph_BP_PerkEffect_ApplyDamageOnActorGridOverlap");
		
		UBP_PerkEffect_ApplyDamageOnActorGridOverlap_C_ExecuteUbergraph_BP_PerkEffect_ApplyDamageOnActorGridOverlap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_ApplyDamageOnActorGridOverlap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_ApplyDamageOnActorGridOverlap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_ApplyDamageOnActorGridOverlap.BP_PerkEffect_ApplyDamageOnActorGridOverlap_C");
		return ptr;
	}

}


