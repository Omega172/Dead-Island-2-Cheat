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
	 * 		Name   -> Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnTransformationRequestCancelled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnCancelledParams           Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_MutatorTransformation_C::OnTransformationRequestCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnTransformationRequestCancelled");
		
		UBP_PerkEffect_MutatorTransformation_C_OnTransformationRequestCancelled_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnActionResolved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnResolvedParams            Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_MutatorTransformation_C::OnActionResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnActionResolved");
		
		UBP_PerkEffect_MutatorTransformation_C_OnActionResolved_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.UnbindOnTransformationRequestFailed
	 * 		Flags  -> ()
	 */
	void UBP_PerkEffect_MutatorTransformation_C::UnbindOnTransformationRequestFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.UnbindOnTransformationRequestFailed");
		
		UBP_PerkEffect_MutatorTransformation_C_UnbindOnTransformationRequestFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.RequestTransformAction
	 * 		Flags  -> ()
	 */
	void UBP_PerkEffect_MutatorTransformation_C::RequestTransformAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.RequestTransformAction");
		
		UBP_PerkEffect_MutatorTransformation_C_RequestTransformAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnTransformWarmUpConditionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PerkEffect_MutatorTransformation_C::OnTransformWarmUpConditionChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnTransformWarmUpConditionChanged");
		
		UBP_PerkEffect_MutatorTransformation_C_OnTransformWarmUpConditionChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_MutatorTransformation_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnStart");
		
		UBP_PerkEffect_MutatorTransformation_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectEndParams                        Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_MutatorTransformation_C::OnEnd(const struct FPerkEffectEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnEnd");
		
		UBP_PerkEffect_MutatorTransformation_C_OnEnd_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnInstantTransformConditionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PerkEffect_MutatorTransformation_C::OnInstantTransformConditionChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnInstantTransformConditionChanged");
		
		UBP_PerkEffect_MutatorTransformation_C_OnInstantTransformConditionChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnActionFailedToBegin
	 * 		Flags  -> ()
	 */
	void UBP_PerkEffect_MutatorTransformation_C::OnActionFailedToBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnActionFailedToBegin");
		
		UBP_PerkEffect_MutatorTransformation_C_OnActionFailedToBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.ExecuteUbergraph_BP_PerkEffect_MutatorTransformation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_MutatorTransformation_C::ExecuteUbergraph_BP_PerkEffect_MutatorTransformation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.ExecuteUbergraph_BP_PerkEffect_MutatorTransformation");
		
		UBP_PerkEffect_MutatorTransformation_C_ExecuteUbergraph_BP_PerkEffect_MutatorTransformation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_MutatorTransformation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_MutatorTransformation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C");
		return ptr;
	}

}


