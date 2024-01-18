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
	 * 		Name   -> Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.LogRemoveRequest
	 * 		Flags  -> ()
	 */
	void UBP_Base_StatusEffectInstance_C::LogRemoveRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.LogRemoveRequest");
		
		UBP_Base_StatusEffectInstance_C_LogRemoveRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.LogDoubleRemoveError
	 * 		Flags  -> ()
	 */
	void UBP_Base_StatusEffectInstance_C::LogDoubleRemoveError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.LogDoubleRemoveError");
		
		UBP_Base_StatusEffectInstance_C_LogDoubleRemoveError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.RemoveInstanceFromComponent
	 * 		Flags  -> ()
	 */
	void UBP_Base_StatusEffectInstance_C::RemoveInstanceFromComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.RemoveInstanceFromComponent");
		
		UBP_Base_StatusEffectInstance_C_RemoveInstanceFromComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.SetupActionListeners
	 * 		Flags  -> ()
	 */
	void UBP_Base_StatusEffectInstance_C::SetupActionListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.SetupActionListeners");
		
		UBP_Base_StatusEffectInstance_C_SetupActionListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.ResolveInstanceFromAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCharacterActionRequestHelper*               ActionHelper                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectComponent*                      StatusEffectComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffectInstance_C::ResolveInstanceFromAction(class UCharacterActionRequestHelper* ActionHelper, class UStatusEffectComponent* StatusEffectComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.ResolveInstanceFromAction");
		
		UBP_Base_StatusEffectInstance_C_ResolveInstanceFromAction_Params params {};
		params.ActionHelper = ActionHelper;
		params.StatusEffectComponent = StatusEffectComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.OnStatusEffectActionResolved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnResolvedParams            Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Base_StatusEffectInstance_C::OnStatusEffectActionResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.OnStatusEffectActionResolved");
		
		UBP_Base_StatusEffectInstance_C_OnStatusEffectActionResolved_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.OnStatusEffectActionEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Base_StatusEffectInstance_C::OnStatusEffectActionEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.OnStatusEffectActionEnd");
		
		UBP_Base_StatusEffectInstance_C_OnStatusEffectActionEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.OnStatusEffectActionCancelled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnCancelledParams           Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Base_StatusEffectInstance_C::OnStatusEffectActionCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.OnStatusEffectActionCancelled");
		
		UBP_Base_StatusEffectInstance_C_OnStatusEffectActionCancelled_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.CreateDSLogger
	 * 		Flags  -> ()
	 */
	void UBP_Base_StatusEffectInstance_C::CreateDSLogger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.CreateDSLogger");
		
		UBP_Base_StatusEffectInstance_C_CreateDSLogger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.ExecuteUbergraph_BP_Base_StatusEffectInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_StatusEffectInstance_C::ExecuteUbergraph_BP_Base_StatusEffectInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.ExecuteUbergraph_BP_Base_StatusEffectInstance");
		
		UBP_Base_StatusEffectInstance_C_ExecuteUbergraph_BP_Base_StatusEffectInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Base_StatusEffectInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Base_StatusEffectInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C");
		return ptr;
	}

}


