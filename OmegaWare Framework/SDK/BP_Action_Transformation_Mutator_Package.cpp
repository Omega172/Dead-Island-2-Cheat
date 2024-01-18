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
	 * 		Name   -> Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.AddAggressiveStatusEffect
	 * 		Flags  -> ()
	 */
	void UBP_Action_Transformation_Mutator_C::AddAggressiveStatusEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.AddAggressiveStatusEffect");
		
		UBP_Action_Transformation_Mutator_C_AddAggressiveStatusEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.RemoveStopActionsFactWithDelay
	 * 		Flags  -> ()
	 */
	void UBP_Action_Transformation_Mutator_C::RemoveStopActionsFactWithDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.RemoveStopActionsFactWithDelay");
		
		UBP_Action_Transformation_Mutator_C_RemoveStopActionsFactWithDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.AddStopActionsFact
	 * 		Flags  -> ()
	 */
	void UBP_Action_Transformation_Mutator_C::AddStopActionsFact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.AddStopActionsFact");
		
		UBP_Action_Transformation_Mutator_C_AddStopActionsFact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.ResetDeckContext
	 * 		Flags  -> ()
	 */
	void UBP_Action_Transformation_Mutator_C::ResetDeckContext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.ResetDeckContext");
		
		UBP_Action_Transformation_Mutator_C_ResetDeckContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Transformation_Mutator_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.OnBegin");
		
		UBP_Action_Transformation_Mutator_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Transformation_Mutator_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.OnEnd");
		
		UBP_Action_Transformation_Mutator_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.TriggerTransformationPulse
	 * 		Flags  -> ()
	 */
	void UBP_Action_Transformation_Mutator_C::TriggerTransformationPulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.TriggerTransformationPulse");
		
		UBP_Action_Transformation_Mutator_C_TriggerTransformationPulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.ApplyPerkFromPool
	 * 		Flags  -> ()
	 */
	void UBP_Action_Transformation_Mutator_C::ApplyPerkFromPool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.ApplyPerkFromPool");
		
		UBP_Action_Transformation_Mutator_C_ApplyPerkFromPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.ApplyInvulnerability
	 * 		Flags  -> ()
	 */
	void UBP_Action_Transformation_Mutator_C::ApplyInvulnerability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.ApplyInvulnerability");
		
		UBP_Action_Transformation_Mutator_C_ApplyInvulnerability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.RemoveInvulnerability
	 * 		Flags  -> ()
	 */
	void UBP_Action_Transformation_Mutator_C::RemoveInvulnerability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.RemoveInvulnerability");
		
		UBP_Action_Transformation_Mutator_C_RemoveInvulnerability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.OnConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     InitParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Transformation_Mutator_C::OnConstruct(class UCustomActionParamsBase* InitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.OnConstruct");
		
		UBP_Action_Transformation_Mutator_C_OnConstruct_Params params {};
		params.InitParams = InitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.ExecuteUbergraph_BP_Action_Transformation_Mutator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Transformation_Mutator_C::ExecuteUbergraph_BP_Action_Transformation_Mutator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.ExecuteUbergraph_BP_Action_Transformation_Mutator");
		
		UBP_Action_Transformation_Mutator_C_ExecuteUbergraph_BP_Action_Transformation_Mutator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Transformation_Mutator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Transformation_Mutator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C");
		return ptr;
	}

}


