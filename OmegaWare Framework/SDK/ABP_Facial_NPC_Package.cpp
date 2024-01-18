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
	 * 		Name   -> Function ABP_Facial_NPC.ABP_Facial_NPC_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Facial_NPC_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Facial_NPC.ABP_Facial_NPC_C.AnimGraph");
		
		UABP_Facial_NPC_C_AnimGraph_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Facial_NPC.ABP_Facial_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Facial_NPC_AnimGraphNode_Fabrik_A734A7FD418D7F33CD24BDB821CBA869
	 * 		Flags  -> ()
	 */
	void UABP_Facial_NPC_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Facial_NPC_AnimGraphNode_Fabrik_A734A7FD418D7F33CD24BDB821CBA869()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Facial_NPC.ABP_Facial_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Facial_NPC_AnimGraphNode_Fabrik_A734A7FD418D7F33CD24BDB821CBA869");
		
		UABP_Facial_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Facial_NPC_AnimGraphNode_Fabrik_A734A7FD418D7F33CD24BDB821CBA869_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Facial_NPC.ABP_Facial_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Facial_NPC_AnimGraphNode_Fabrik_6BD586FA4FC5AC2619FE86BF0A4D4F07
	 * 		Flags  -> ()
	 */
	void UABP_Facial_NPC_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Facial_NPC_AnimGraphNode_Fabrik_6BD586FA4FC5AC2619FE86BF0A4D4F07()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Facial_NPC.ABP_Facial_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Facial_NPC_AnimGraphNode_Fabrik_6BD586FA4FC5AC2619FE86BF0A4D4F07");
		
		UABP_Facial_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Facial_NPC_AnimGraphNode_Fabrik_6BD586FA4FC5AC2619FE86BF0A4D4F07_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Facial_NPC.ABP_Facial_NPC_C.ExecuteUbergraph_ABP_Facial_NPC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Facial_NPC_C::ExecuteUbergraph_ABP_Facial_NPC(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Facial_NPC.ABP_Facial_NPC_C.ExecuteUbergraph_ABP_Facial_NPC");
		
		UABP_Facial_NPC_C_ExecuteUbergraph_ABP_Facial_NPC_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Facial_NPC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Facial_NPC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Facial_NPC.ABP_Facial_NPC_C");
		return ptr;
	}

}


