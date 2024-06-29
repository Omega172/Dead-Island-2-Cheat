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
	 * 		Name   -> Function BP_ModularEffect_RegisterForDespawn.BP_ModularEffect_RegisterForDespawn_C.PerformEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UModularEffectParams*                        ModularEffectParams                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ModularEffect_RegisterForDespawn_C::PerformEffect(class AActor* Actor, class UModularEffectParams* ModularEffectParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularEffect_RegisterForDespawn.BP_ModularEffect_RegisterForDespawn_C.PerformEffect");
		
		UBP_ModularEffect_RegisterForDespawn_C_PerformEffect_Params params {};
		params.Actor = Actor;
		params.ModularEffectParams = ModularEffectParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_ModularEffect_RegisterForDespawn.BP_ModularEffect_RegisterForDespawn_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ModularEffect_RegisterForDespawn_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularEffect_RegisterForDespawn.BP_ModularEffect_RegisterForDespawn_C.OnBegin");
		
		UBP_ModularEffect_RegisterForDespawn_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_ModularEffect_RegisterForDespawn.BP_ModularEffect_RegisterForDespawn_C.ExecuteUbergraph_BP_ModularEffect_RegisterForDespawn
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ModularEffect_RegisterForDespawn_C::ExecuteUbergraph_BP_ModularEffect_RegisterForDespawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularEffect_RegisterForDespawn.BP_ModularEffect_RegisterForDespawn_C.ExecuteUbergraph_BP_ModularEffect_RegisterForDespawn");
		
		UBP_ModularEffect_RegisterForDespawn_C_ExecuteUbergraph_BP_ModularEffect_RegisterForDespawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ModularEffect_RegisterForDespawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ModularEffect_RegisterForDespawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ModularEffect_RegisterForDespawn.BP_ModularEffect_RegisterForDespawn_C");
		return ptr;
	}

}


