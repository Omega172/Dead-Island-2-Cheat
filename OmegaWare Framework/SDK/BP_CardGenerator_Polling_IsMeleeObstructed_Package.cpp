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
	 * 		Name   -> Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.GetTraceRadius
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		ECharacterLocationType                             LocationType                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CardGenerator_Polling_IsMeleeObstructed_C::GetTraceRadius(ECharacterLocationType LocationType, float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.GetTraceRadius");
		
		UBP_CardGenerator_Polling_IsMeleeObstructed_C_GetTraceRadius_Params params {};
		params.LocationType = LocationType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.GetWorldLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		ECharacterLocationType                             LocationType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UBP_CardGenerator_Polling_IsMeleeObstructed_C::GetWorldLocation(ECharacterLocationType LocationType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.GetWorldLocation");
		
		UBP_CardGenerator_Polling_IsMeleeObstructed_C_GetWorldLocation_Params params {};
		params.LocationType = LocationType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.GetBlueprintDescription
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UBP_CardGenerator_Polling_IsMeleeObstructed_C::GetBlueprintDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.GetBlueprintDescription");
		
		UBP_CardGenerator_Polling_IsMeleeObstructed_C_GetBlueprintDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.ShouldReturnCard_BP
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_CardGenerator_Polling_IsMeleeObstructed_C::ShouldReturnCard_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.ShouldReturnCard_BP");
		
		UBP_CardGenerator_Polling_IsMeleeObstructed_C_ShouldReturnCard_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.OnInitialise
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_CardGenerator_Polling_IsMeleeObstructed_C::OnInitialise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.OnInitialise");
		
		UBP_CardGenerator_Polling_IsMeleeObstructed_C_OnInitialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.OnCombatTargetChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCombatTargetComponent*                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CardGenerator_Polling_IsMeleeObstructed_C::OnCombatTargetChanged(class UCombatTargetComponent* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.OnCombatTargetChanged");
		
		UBP_CardGenerator_Polling_IsMeleeObstructed_C_OnCombatTargetChanged_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.IsCloseEnoughToTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_CardGenerator_Polling_IsMeleeObstructed_C::IsCloseEnoughToTarget(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.IsCloseEnoughToTarget");
		
		UBP_CardGenerator_Polling_IsMeleeObstructed_C_IsCloseEnoughToTarget_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.OnUninitialise
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_CardGenerator_Polling_IsMeleeObstructed_C::OnUninitialise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.OnUninitialise");
		
		UBP_CardGenerator_Polling_IsMeleeObstructed_C_OnUninitialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.ExecuteUbergraph_BP_CardGenerator_Polling_IsMeleeObstructed
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CardGenerator_Polling_IsMeleeObstructed_C::ExecuteUbergraph_BP_CardGenerator_Polling_IsMeleeObstructed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.ExecuteUbergraph_BP_CardGenerator_Polling_IsMeleeObstructed");
		
		UBP_CardGenerator_Polling_IsMeleeObstructed_C_ExecuteUbergraph_BP_CardGenerator_Polling_IsMeleeObstructed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CardGenerator_Polling_IsMeleeObstructed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CardGenerator_Polling_IsMeleeObstructed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C");
		return ptr;
	}

}


