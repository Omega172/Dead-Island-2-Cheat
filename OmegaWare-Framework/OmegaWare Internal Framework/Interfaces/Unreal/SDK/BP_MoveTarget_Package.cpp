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
	 * 		Name   -> Function BP_MoveTarget.BP_MoveTarget_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_MoveTarget_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MoveTarget.BP_MoveTarget_C.ReceiveBeginPlay");
		
		ABP_MoveTarget_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_MoveTarget.BP_MoveTarget_C.ExecuteUbergraph_BP_MoveTarget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MoveTarget_C::ExecuteUbergraph_BP_MoveTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MoveTarget.BP_MoveTarget_C.ExecuteUbergraph_BP_MoveTarget");
		
		ABP_MoveTarget_C_ExecuteUbergraph_BP_MoveTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MoveTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MoveTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MoveTarget.BP_MoveTarget_C");
		return ptr;
	}

}


