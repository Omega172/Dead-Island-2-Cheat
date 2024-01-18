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
	 * 		Name   -> Function ABP_PutrefiedProjectile.ABP_PutrefiedProjectile_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_PutrefiedProjectile_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PutrefiedProjectile.ABP_PutrefiedProjectile_C.AnimGraph");
		
		UABP_PutrefiedProjectile_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PutrefiedProjectile.ABP_PutrefiedProjectile_C.SetIntensityState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPutrefiedProjectileState                          Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_PutrefiedProjectile_C::SetIntensityState(EPutrefiedProjectileState Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PutrefiedProjectile.ABP_PutrefiedProjectile_C.SetIntensityState");
		
		UABP_PutrefiedProjectile_C_SetIntensityState_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PutrefiedProjectile.ABP_PutrefiedProjectile_C.ExecuteUbergraph_ABP_PutrefiedProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_PutrefiedProjectile_C::ExecuteUbergraph_ABP_PutrefiedProjectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PutrefiedProjectile.ABP_PutrefiedProjectile_C.ExecuteUbergraph_ABP_PutrefiedProjectile");
		
		UABP_PutrefiedProjectile_C_ExecuteUbergraph_ABP_PutrefiedProjectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_PutrefiedProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_PutrefiedProjectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PutrefiedProjectile.ABP_PutrefiedProjectile_C");
		return ptr;
	}

}


