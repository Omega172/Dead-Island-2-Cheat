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
	 * 		Name   -> Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.OnEarlyEndMovement
	 * 		Flags  -> ()
	 */
	void UBP_Action_DistractionWander_AI_C::OnEarlyEndMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.OnEarlyEndMovement");
		
		UBP_Action_DistractionWander_AI_C_OnEarlyEndMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.SetQueryParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           ActiveQuery                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_DistractionWander_AI_C::SetQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.SetQueryParams");
		
		UBP_Action_DistractionWander_AI_C_SetQueryParams_Params params {};
		params.ActiveQuery = ActiveQuery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.TryRemoveDistractionWanderFact
	 * 		Flags  -> ()
	 */
	void UBP_Action_DistractionWander_AI_C::TryRemoveDistractionWanderFact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.TryRemoveDistractionWanderFact");
		
		UBP_Action_DistractionWander_AI_C_TryRemoveDistractionWanderFact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.AddDistractionWanderFact
	 * 		Flags  -> ()
	 */
	void UBP_Action_DistractionWander_AI_C::AddDistractionWanderFact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.AddDistractionWanderFact");
		
		UBP_Action_DistractionWander_AI_C_AddDistractionWanderFact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.RemoveMovement
	 * 		Flags  -> ()
	 */
	void UBP_Action_DistractionWander_AI_C::RemoveMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.RemoveMovement");
		
		UBP_Action_DistractionWander_AI_C_RemoveMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.TrySetDistractionWanderTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_DistractionWander_AI_C::TrySetDistractionWanderTarget(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.TrySetDistractionWanderTarget");
		
		UBP_Action_DistractionWander_AI_C_TrySetDistractionWanderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.AddMovement
	 * 		Flags  -> ()
	 */
	void UBP_Action_DistractionWander_AI_C::AddMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.AddMovement");
		
		UBP_Action_DistractionWander_AI_C_AddMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.OnBeginEarly
	 * 		Flags  -> ()
	 */
	bool UBP_Action_DistractionWander_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.OnBeginEarly");
		
		UBP_Action_DistractionWander_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.GetAreaRadius
	 * 		Flags  -> ()
	 */
	float UBP_Action_DistractionWander_AI_C::GetAreaRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.GetAreaRadius");
		
		UBP_Action_DistractionWander_AI_C_GetAreaRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_DistractionWander_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_DistractionWander_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C");
		return ptr;
	}

}


