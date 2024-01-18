﻿/**
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
	 * 		Name   -> Function ABP_Rifle.ABP_Rifle_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Rifle_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Rifle.ABP_Rifle_C.AnimGraph");
		
		UABP_Rifle_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Rifle.ABP_Rifle_C.ExecuteUbergraph_ABP_Rifle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Rifle_C::ExecuteUbergraph_ABP_Rifle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Rifle.ABP_Rifle_C.ExecuteUbergraph_ABP_Rifle");
		
		UABP_Rifle_C_ExecuteUbergraph_ABP_Rifle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Rifle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Rifle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Rifle.ABP_Rifle_C");
		return ptr;
	}

}


