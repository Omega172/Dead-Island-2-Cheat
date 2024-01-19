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
	 * 		Name   -> Function ABP_PlayerCharacter_AimOffset.ABP_PlayerCharacter_AimOffset_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_PlayerCharacter_AimOffset_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerCharacter_AimOffset.ABP_PlayerCharacter_AimOffset_C.AnimGraph");
		
		UABP_PlayerCharacter_AimOffset_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function ABP_PlayerCharacter_AimOffset.ABP_PlayerCharacter_AimOffset_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacter_AimOffset_AnimGraphNode_FPCameraRotation_93D41A0B45CC84EDF282928B6019EB86
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_PlayerCharacter_AimOffset_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacter_AimOffset_AnimGraphNode_FPCameraRotation_93D41A0B45CC84EDF282928B6019EB86()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerCharacter_AimOffset.ABP_PlayerCharacter_AimOffset_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacter_AimOffset_AnimGraphNode_FPCameraRotation_93D41A0B45CC84EDF282928B6019EB86");
		
		UABP_PlayerCharacter_AimOffset_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacter_AimOffset_AnimGraphNode_FPCameraRotation_93D41A0B45CC84EDF282928B6019EB86_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_PlayerCharacter_AimOffset.ABP_PlayerCharacter_AimOffset_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_PlayerCharacter_AimOffset_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerCharacter_AimOffset.ABP_PlayerCharacter_AimOffset_C.BlueprintUpdateAnimation");
		
		UABP_PlayerCharacter_AimOffset_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_PlayerCharacter_AimOffset.ABP_PlayerCharacter_AimOffset_C.ExecuteUbergraph_ABP_PlayerCharacter_AimOffset
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_PlayerCharacter_AimOffset_C::ExecuteUbergraph_ABP_PlayerCharacter_AimOffset(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerCharacter_AimOffset.ABP_PlayerCharacter_AimOffset_C.ExecuteUbergraph_ABP_PlayerCharacter_AimOffset");
		
		UABP_PlayerCharacter_AimOffset_C_ExecuteUbergraph_ABP_PlayerCharacter_AimOffset_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_PlayerCharacter_AimOffset_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_PlayerCharacter_AimOffset_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PlayerCharacter_AimOffset.ABP_PlayerCharacter_AimOffset_C");
		return ptr;
	}

}


