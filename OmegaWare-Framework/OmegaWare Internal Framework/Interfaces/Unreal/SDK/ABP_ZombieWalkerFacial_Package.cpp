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
	 * 		Name   -> Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_ZombieWalkerFacial_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.AnimGraph");
		
		UABP_ZombieWalkerFacial_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_TransitionResult_4895FB2F4D5E0E583CDCD889B0A95400
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalkerFacial_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_TransitionResult_4895FB2F4D5E0E583CDCD889B0A95400()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_TransitionResult_4895FB2F4D5E0E583CDCD889B0A95400");
		
		UABP_ZombieWalkerFacial_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_TransitionResult_4895FB2F4D5E0E583CDCD889B0A95400_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_TransitionResult_4B79841643CC56B4CE5DD7998EF66067
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalkerFacial_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_TransitionResult_4B79841643CC56B4CE5DD7998EF66067()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_TransitionResult_4B79841643CC56B4CE5DD7998EF66067");
		
		UABP_ZombieWalkerFacial_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_TransitionResult_4B79841643CC56B4CE5DD7998EF66067_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetBlendSpacePlayer_5CDE5A244B1FA0CA93D2E39481813B13
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalkerFacial_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetBlendSpacePlayer_5CDE5A244B1FA0CA93D2E39481813B13()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetBlendSpacePlayer_5CDE5A244B1FA0CA93D2E39481813B13");
		
		UABP_ZombieWalkerFacial_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetBlendSpacePlayer_5CDE5A244B1FA0CA93D2E39481813B13_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetSequencePlayer_F2DDCEC7427D9519B3C448B045437E32
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalkerFacial_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetSequencePlayer_F2DDCEC7427D9519B3C448B045437E32()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetSequencePlayer_F2DDCEC7427D9519B3C448B045437E32");
		
		UABP_ZombieWalkerFacial_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetSequencePlayer_F2DDCEC7427D9519B3C448B045437E32_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetBlendSpacePlayer_CC45F0E940DCB534C6B07790EBA319F9
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalkerFacial_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetBlendSpacePlayer_CC45F0E940DCB534C6B07790EBA319F9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetBlendSpacePlayer_CC45F0E940DCB534C6B07790EBA319F9");
		
		UABP_ZombieWalkerFacial_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetBlendSpacePlayer_CC45F0E940DCB534C6B07790EBA319F9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetSequencePlayer_F0BAD9FC4DA7809F5FFADE871E0B9107
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalkerFacial_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetSequencePlayer_F0BAD9FC4DA7809F5FFADE871E0B9107()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetSequencePlayer_F0BAD9FC4DA7809F5FFADE871E0B9107");
		
		UABP_ZombieWalkerFacial_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalkerFacial_AnimGraphNode_AnimSetSequencePlayer_F0BAD9FC4DA7809F5FFADE871E0B9107_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_ZombieWalkerFacial_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.BlueprintUpdateAnimation");
		
		UABP_ZombieWalkerFacial_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.ExecuteUbergraph_ABP_ZombieWalkerFacial
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_ZombieWalkerFacial_C::ExecuteUbergraph_ABP_ZombieWalkerFacial(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C.ExecuteUbergraph_ABP_ZombieWalkerFacial");
		
		UABP_ZombieWalkerFacial_C_ExecuteUbergraph_ABP_ZombieWalkerFacial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_ZombieWalkerFacial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_ZombieWalkerFacial_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_ZombieWalkerFacial.ABP_ZombieWalkerFacial_C");
		return ptr;
	}

}


