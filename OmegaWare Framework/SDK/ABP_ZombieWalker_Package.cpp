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
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_ZombieWalker_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.AnimGraph");
		
		UABP_ZombieWalker_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.GetLocomotionTransitionOverride
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELocomotionState                                   OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ELocomotionState                                   NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bTransition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverridden                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_ZombieWalker_C::GetLocomotionTransitionOverride(ELocomotionState OldState, ELocomotionState NewState, bool* bTransition, bool* bOverridden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.GetLocomotionTransitionOverride");
		
		UABP_ZombieWalker_C_GetLocomotionTransitionOverride_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bTransition != nullptr)
			*bTransition = params.bTransition;
		if (bOverridden != nullptr)
			*bOverridden = params.bOverridden;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_2ECD65C04DC72896DB3858942796C7D8
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_2ECD65C04DC72896DB3858942796C7D8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_2ECD65C04DC72896DB3858942796C7D8");
		
		UABP_ZombieWalker_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_2ECD65C04DC72896DB3858942796C7D8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_34D475A1448FBCDFF0DEBA82906F4B84
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_34D475A1448FBCDFF0DEBA82906F4B84()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_34D475A1448FBCDFF0DEBA82906F4B84");
		
		UABP_ZombieWalker_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_34D475A1448FBCDFF0DEBA82906F4B84_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_LinkedAnimGraph_36BA661D4284D50ACDE1E1B0381C5327
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_LinkedAnimGraph_36BA661D4284D50ACDE1E1B0381C5327()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_LinkedAnimGraph_36BA661D4284D50ACDE1E1B0381C5327");
		
		UABP_ZombieWalker_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_LinkedAnimGraph_36BA661D4284D50ACDE1E1B0381C5327_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetSequencePlayer_9232E14145B7FC7AD65F0B9833EA2C6E
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetSequencePlayer_9232E14145B7FC7AD65F0B9833EA2C6E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetSequencePlayer_9232E14145B7FC7AD65F0B9833EA2C6E");
		
		UABP_ZombieWalker_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetSequencePlayer_9232E14145B7FC7AD65F0B9833EA2C6E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_BlendListByBool_1ABE12964F72558C7BC58A9FBB20266C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_BlendListByBool_1ABE12964F72558C7BC58A9FBB20266C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_BlendListByBool_1ABE12964F72558C7BC58A9FBB20266C");
		
		UABP_ZombieWalker_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_BlendListByBool_1ABE12964F72558C7BC58A9FBB20266C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_E81E06DB435BB167D1A2F1A6C19C181B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_E81E06DB435BB167D1A2F1A6C19C181B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_E81E06DB435BB167D1A2F1A6C19C181B");
		
		UABP_ZombieWalker_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_E81E06DB435BB167D1A2F1A6C19C181B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_TransitionResult_1762574C4CA12E8B04235BB5BAF2F023
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_TransitionResult_1762574C4CA12E8B04235BB5BAF2F023()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_TransitionResult_1762574C4CA12E8B04235BB5BAF2F023");
		
		UABP_ZombieWalker_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_TransitionResult_1762574C4CA12E8B04235BB5BAF2F023_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_139388184E4B90828FF7C79A5E6D8B91
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_139388184E4B90828FF7C79A5E6D8B91()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_139388184E4B90828FF7C79A5E6D8B91");
		
		UABP_ZombieWalker_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_139388184E4B90828FF7C79A5E6D8B91_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_383BEA4D4E0FD15DA89E69AB318AE4A3
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_383BEA4D4E0FD15DA89E69AB318AE4A3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_383BEA4D4E0FD15DA89E69AB318AE4A3");
		
		UABP_ZombieWalker_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_AnimSetBlendSpacePlayer_383BEA4D4E0FD15DA89E69AB318AE4A3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_TransitionResult_5E3FD07048B88BEF325159866FBC9B81
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_TransitionResult_5E3FD07048B88BEF325159866FBC9B81()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_TransitionResult_5E3FD07048B88BEF325159866FBC9B81");
		
		UABP_ZombieWalker_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_TransitionResult_5E3FD07048B88BEF325159866FBC9B81_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_BlendSpacePlayer_57B8563F4331065F58901593A9110C21
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_BlendSpacePlayer_57B8563F4331065F58901593A9110C21()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_BlendSpacePlayer_57B8563F4331065F58901593A9110C21");
		
		UABP_ZombieWalker_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_BlendSpacePlayer_57B8563F4331065F58901593A9110C21_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_SequenceEvaluator_50992E5B49F39FD2811763A6982451D7
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_SequenceEvaluator_50992E5B49F39FD2811763A6982451D7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_SequenceEvaluator_50992E5B49F39FD2811763A6982451D7");
		
		UABP_ZombieWalker_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_SequenceEvaluator_50992E5B49F39FD2811763A6982451D7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_ApplyAdditive_4021464543B5647FEFE607AF928A0620
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_ApplyAdditive_4021464543B5647FEFE607AF928A0620()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_ApplyAdditive_4021464543B5647FEFE607AF928A0620");
		
		UABP_ZombieWalker_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_ApplyAdditive_4021464543B5647FEFE607AF928A0620_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.AnimNotify_LevitateRandom
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::AnimNotify_LevitateRandom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.AnimNotify_LevitateRandom");
		
		UABP_ZombieWalker_C_AnimNotify_LevitateRandom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.BlueprintInitializeAnimation");
		
		UABP_ZombieWalker_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.EnableAirborne
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                BeginMontage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSkipIntoAnimation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_ZombieWalker_C::EnableAirborne(bool bEnable, class UAnimMontage* BeginMontage, bool bSkipIntoAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.EnableAirborne");
		
		UABP_ZombieWalker_C_EnableAirborne_Params params {};
		params.bEnable = bEnable;
		params.BeginMontage = BeginMontage;
		params.bSkipIntoAnimation = bSkipIntoAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.AnimNotify_Landing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::AnimNotify_Landing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.AnimNotify_Landing");
		
		UABP_ZombieWalker_C_AnimNotify_Landing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.AlphaLayerChange
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LayerName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_ZombieWalker_C::AlphaLayerChange(const class FName& LayerName, float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.AlphaLayerChange");
		
		UABP_ZombieWalker_C_AlphaLayerChange_Params params {};
		params.LayerName = LayerName;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.CycleBreakEnable
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::CycleBreakEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.CycleBreakEnable");
		
		UABP_ZombieWalker_C_CycleBreakEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_SequenceEvaluator_7F502D0D443E66DD8B5FCDA18EA84C22
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_SequenceEvaluator_7F502D0D443E66DD8B5FCDA18EA84C22()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_SequenceEvaluator_7F502D0D443E66DD8B5FCDA18EA84C22");
		
		UABP_ZombieWalker_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_SequenceEvaluator_7F502D0D443E66DD8B5FCDA18EA84C22_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.TickAirborne
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_ZombieWalker_C::TickAirborne(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.TickAirborne");
		
		UABP_ZombieWalker_C_TickAirborne_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_ApplyAdditive_51C26F024095E79995F0D0A0D2B40D4A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UABP_ZombieWalker_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_ApplyAdditive_51C26F024095E79995F0D0A0D2B40D4A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_ApplyAdditive_51C26F024095E79995F0D0A0D2B40D4A");
		
		UABP_ZombieWalker_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZombieWalker_AnimGraphNode_ApplyAdditive_51C26F024095E79995F0D0A0D2B40D4A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function ABP_ZombieWalker.ABP_ZombieWalker_C.ExecuteUbergraph_ABP_ZombieWalker
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_ZombieWalker_C::ExecuteUbergraph_ABP_ZombieWalker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ZombieWalker.ABP_ZombieWalker_C.ExecuteUbergraph_ABP_ZombieWalker");
		
		UABP_ZombieWalker_C_ExecuteUbergraph_ABP_ZombieWalker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_ZombieWalker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_ZombieWalker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_ZombieWalker.ABP_ZombieWalker_C");
		return ptr;
	}

}


