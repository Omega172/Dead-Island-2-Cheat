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
	 * 		Name   -> Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.OnInterruptionConditionsMet
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DamageRequirementMet                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               StabilityDamageMet                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_AnimSet_AI_C::OnInterruptionConditionsMet(bool DamageRequirementMet, bool StabilityDamageMet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.OnInterruptionConditionsMet");
		
		UBP_Action_AnimSet_AI_C_OnInterruptionConditionsMet_Params params {};
		params.DamageRequirementMet = DamageRequirementMet;
		params.StabilityDamageMet = StabilityDamageMet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.Add Modifiers
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FModifierAndValue>                   Modifiers                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Action_AnimSet_AI_C::AddModifiers(TArray<struct FModifierAndValue> Modifiers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.Add Modifiers");
		
		UBP_Action_AnimSet_AI_C_AddModifiers_Params params {};
		params.Modifiers = Modifiers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.RequestMontageToStop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMontageEndEvent                                   MontageEndEvent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_AnimSet_AI_C::RequestMontageToStop(EMontageEndEvent MontageEndEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.RequestMontageToStop");
		
		UBP_Action_AnimSet_AI_C_RequestMontageToStop_Params params {};
		params.MontageEndEvent = MontageEndEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.InitialiseVariables
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_AnimSet_AI_C::InitialiseVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.InitialiseVariables");
		
		UBP_Action_AnimSet_AI_C_InitialiseVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.Post Resolve
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_AnimSet_AI_C::PostResolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.Post Resolve");
		
		UBP_Action_AnimSet_AI_C_PostResolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.Pre Resolve
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_AnimSet_AI_C::PreResolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.Pre Resolve");
		
		UBP_Action_AnimSet_AI_C_PreResolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.OnBeginEarly
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_AnimSet_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.OnBeginEarly");
		
		UBP_Action_AnimSet_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.GetBlendOutTime
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BlendOutTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_AnimSet_AI_C::GetBlendOutTime(bool* Success, float* BlendOutTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.GetBlendOutTime");
		
		UBP_Action_AnimSet_AI_C_GetBlendOutTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (BlendOutTime != nullptr)
			*BlendOutTime = params.BlendOutTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.OnEnd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_AnimSet_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.OnEnd");
		
		UBP_Action_AnimSet_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.OnBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_AnimSet_AI_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.OnBegin");
		
		UBP_Action_AnimSet_AI_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.OnConstruct
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     InitParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_AnimSet_AI_C::OnConstruct(class UCustomActionParamsBase* InitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.OnConstruct");
		
		UBP_Action_AnimSet_AI_C_OnConstruct_Params params {};
		params.InitParams = InitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.ExecuteUbergraph_BP_Action_AnimSet_AI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_AnimSet_AI_C::ExecuteUbergraph_BP_Action_AnimSet_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C.ExecuteUbergraph_BP_Action_AnimSet_AI");
		
		UBP_Action_AnimSet_AI_C_ExecuteUbergraph_BP_Action_AnimSet_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_AnimSet_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_AnimSet_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C");
		return ptr;
	}

}


