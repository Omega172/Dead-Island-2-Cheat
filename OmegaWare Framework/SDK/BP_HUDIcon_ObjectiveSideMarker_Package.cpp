﻿/**
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
	 * 		Name   -> Function BP_HUDIcon_ObjectiveSideMarker.BP_HUDIcon_ObjectiveSideMarker_C.OnPostObjectiveDataInitialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_HUDIcon_ObjectiveSideMarker_C::OnPostObjectiveDataInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUDIcon_ObjectiveSideMarker.BP_HUDIcon_ObjectiveSideMarker_C.OnPostObjectiveDataInitialize");
		
		UBP_HUDIcon_ObjectiveSideMarker_C_OnPostObjectiveDataInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_HUDIcon_ObjectiveSideMarker.BP_HUDIcon_ObjectiveSideMarker_C.HoveringOverBegin
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_HUDIcon_ObjectiveSideMarker_C::HoveringOverBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUDIcon_ObjectiveSideMarker.BP_HUDIcon_ObjectiveSideMarker_C.HoveringOverBegin");
		
		UBP_HUDIcon_ObjectiveSideMarker_C_HoveringOverBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_HUDIcon_ObjectiveSideMarker.BP_HUDIcon_ObjectiveSideMarker_C.HoveringOverEnd
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_HUDIcon_ObjectiveSideMarker_C::HoveringOverEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUDIcon_ObjectiveSideMarker.BP_HUDIcon_ObjectiveSideMarker_C.HoveringOverEnd");
		
		UBP_HUDIcon_ObjectiveSideMarker_C_HoveringOverEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_HUDIcon_ObjectiveSideMarker.BP_HUDIcon_ObjectiveSideMarker_C.LongHover
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HUDIcon_ObjectiveSideMarker_C::LongHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUDIcon_ObjectiveSideMarker.BP_HUDIcon_ObjectiveSideMarker_C.LongHover");
		
		UBP_HUDIcon_ObjectiveSideMarker_C_LongHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_HUDIcon_ObjectiveSideMarker.BP_HUDIcon_ObjectiveSideMarker_C.ExecuteUbergraph_BP_HUDIcon_ObjectiveSideMarker
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUDIcon_ObjectiveSideMarker_C::ExecuteUbergraph_BP_HUDIcon_ObjectiveSideMarker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUDIcon_ObjectiveSideMarker.BP_HUDIcon_ObjectiveSideMarker_C.ExecuteUbergraph_BP_HUDIcon_ObjectiveSideMarker");
		
		UBP_HUDIcon_ObjectiveSideMarker_C_ExecuteUbergraph_BP_HUDIcon_ObjectiveSideMarker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_HUDIcon_ObjectiveSideMarker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HUDIcon_ObjectiveSideMarker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HUDIcon_ObjectiveSideMarker.BP_HUDIcon_ObjectiveSideMarker_C");
		return ptr;
	}

}


