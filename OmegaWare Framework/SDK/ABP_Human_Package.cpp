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
	 * 		Name   -> Function ABP_Human.ABP_Human_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Human_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Human.ABP_Human_C.AnimGraph");
		
		UABP_Human_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_Human.ABP_Human_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_07D2435846AD5D64140B0AB3F687F7F8
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_Human_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_07D2435846AD5D64140B0AB3F687F7F8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Human.ABP_Human_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_07D2435846AD5D64140B0AB3F687F7F8");
		
		UABP_Human_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_07D2435846AD5D64140B0AB3F687F7F8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_Human.ABP_Human_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_E9E3C6964209FEB160ECF8B25C8C6534
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_Human_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_E9E3C6964209FEB160ECF8B25C8C6534()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Human.ABP_Human_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_E9E3C6964209FEB160ECF8B25C8C6534");
		
		UABP_Human_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_E9E3C6964209FEB160ECF8B25C8C6534_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_Human.ABP_Human_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_51B99D084C1778C852A311858AAD6FC0
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_Human_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_51B99D084C1778C852A311858AAD6FC0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Human.ABP_Human_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_51B99D084C1778C852A311858AAD6FC0");
		
		UABP_Human_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_51B99D084C1778C852A311858AAD6FC0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_Human.ABP_Human_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_LayeredBoneBlend_9DDAA45546A23EB1F401E38BA36AE401
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_Human_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_LayeredBoneBlend_9DDAA45546A23EB1F401E38BA36AE401()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Human.ABP_Human_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_LayeredBoneBlend_9DDAA45546A23EB1F401E38BA36AE401");
		
		UABP_Human_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_LayeredBoneBlend_9DDAA45546A23EB1F401E38BA36AE401_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_Human.ABP_Human_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_232AB8EB481718768336E2AD6C4B3253
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_Human_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_232AB8EB481718768336E2AD6C4B3253()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Human.ABP_Human_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_232AB8EB481718768336E2AD6C4B3253");
		
		UABP_Human_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetSequencePlayer_232AB8EB481718768336E2AD6C4B3253_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_Human.ABP_Human_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_LayeredBoneBlend_C0B26A8D4D4EA8F389F41EB68ECF7F47
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_Human_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_LayeredBoneBlend_C0B26A8D4D4EA8F389F41EB68ECF7F47()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Human.ABP_Human_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_LayeredBoneBlend_C0B26A8D4D4EA8F389F41EB68ECF7F47");
		
		UABP_Human_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_LayeredBoneBlend_C0B26A8D4D4EA8F389F41EB68ECF7F47_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_Human.ABP_Human_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetBlendSpacePlayer_F19B5FE246D4BA8505B9B58E9E4EE4F9
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_Human_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetBlendSpacePlayer_F19B5FE246D4BA8505B9B58E9E4EE4F9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Human.ABP_Human_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetBlendSpacePlayer_F19B5FE246D4BA8505B9B58E9E4EE4F9");
		
		UABP_Human_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human_AnimGraphNode_AnimSetBlendSpacePlayer_F19B5FE246D4BA8505B9B58E9E4EE4F9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_Human.ABP_Human_C.AlphaLayerChange
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LayerName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Human_C::AlphaLayerChange(const class FName& LayerName, float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Human.ABP_Human_C.AlphaLayerChange");
		
		UABP_Human_C_AlphaLayerChange_Params params {};
		params.LayerName = LayerName;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_Human.ABP_Human_C.ExecuteUbergraph_ABP_Human
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Human_C::ExecuteUbergraph_ABP_Human(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Human.ABP_Human_C.ExecuteUbergraph_ABP_Human");
		
		UABP_Human_C_ExecuteUbergraph_ABP_Human_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Human_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Human_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Human.ABP_Human_C");
		return ptr;
	}

}


