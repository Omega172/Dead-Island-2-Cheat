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
	 * 		Name   -> Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.GetLookAtTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FoundLookAtTarget                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             GetLookAtComponent                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     GetLookatLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_LookAt_AI_C::GetLookAtTarget(bool* FoundLookAtTarget, class USceneComponent** GetLookAtComponent, struct FVector* GetLookatLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.GetLookAtTarget");
		
		UBP_Action_Distraction_LookAt_AI_C_GetLookAtTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundLookAtTarget != nullptr)
			*FoundLookAtTarget = params.FoundLookAtTarget;
		if (GetLookAtComponent != nullptr)
			*GetLookAtComponent = params.GetLookAtComponent;
		if (GetLookatLocation != nullptr)
			*GetLookatLocation = params.GetLookatLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.RemoveLookAtRequest
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_LookAt_AI_C::RemoveLookAtRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.RemoveLookAtRequest");
		
		UBP_Action_Distraction_LookAt_AI_C_RemoveLookAtRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.AddLookAtRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnSuccess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Distraction_LookAt_AI_C::AddLookAtRequest(bool* ReturnSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.AddLookAtRequest");
		
		UBP_Action_Distraction_LookAt_AI_C_AddLookAtRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnSuccess != nullptr)
			*ReturnSuccess = params.ReturnSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.RemoveTImer
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_LookAt_AI_C::RemoveTImer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.RemoveTImer");
		
		UBP_Action_Distraction_LookAt_AI_C_RemoveTImer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.AddTimer
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_LookAt_AI_C::AddTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.AddTimer");
		
		UBP_Action_Distraction_LookAt_AI_C_AddTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.OnBeginEarly
	 * 		Flags  -> ()
	 */
	bool UBP_Action_Distraction_LookAt_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.OnBeginEarly");
		
		UBP_Action_Distraction_LookAt_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Distraction_LookAt_AI_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.OnBegin");
		
		UBP_Action_Distraction_LookAt_AI_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Distraction_LookAt_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.OnEnd");
		
		UBP_Action_Distraction_LookAt_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.OnTimerFinished
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_LookAt_AI_C::OnTimerFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.OnTimerFinished");
		
		UBP_Action_Distraction_LookAt_AI_C_OnTimerFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.ExecuteUbergraph_BP_Action_Distraction_LookAt_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_LookAt_AI_C::ExecuteUbergraph_BP_Action_Distraction_LookAt_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.ExecuteUbergraph_BP_Action_Distraction_LookAt_AI");
		
		UBP_Action_Distraction_LookAt_AI_C_ExecuteUbergraph_BP_Action_Distraction_LookAt_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Distraction_LookAt_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Distraction_LookAt_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C");
		return ptr;
	}

}


