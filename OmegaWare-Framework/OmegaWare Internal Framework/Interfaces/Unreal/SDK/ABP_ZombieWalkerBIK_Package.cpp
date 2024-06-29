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
	 * 		Name   -> Function ABP_ZombieWalkerBIK.ABP_ZombieWalkerBIK_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_ZombieWalkerBIK_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalkerBIK.ABP_ZombieWalkerBIK_C.AnimGraph");
		
		UABP_ZombieWalkerBIK_C_AnimGraph_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalkerBIK.ABP_ZombieWalkerBIK_C.ExecuteUbergraph_ABP_ZombieWalkerBIK
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_ZombieWalkerBIK_C::ExecuteUbergraph_ABP_ZombieWalkerBIK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalkerBIK.ABP_ZombieWalkerBIK_C.ExecuteUbergraph_ABP_ZombieWalkerBIK");
		
		UABP_ZombieWalkerBIK_C_ExecuteUbergraph_ABP_ZombieWalkerBIK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_ZombieWalkerBIK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_ZombieWalkerBIK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_ZombieWalkerBIK.ABP_ZombieWalkerBIK_C");
		return ptr;
	}

}


