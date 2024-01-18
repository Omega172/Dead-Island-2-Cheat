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
	 * 		Name   -> Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.InitialiseVariables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      FailureReason                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Strafe_AI_C::InitialiseVariables(bool* Success, class FString* FailureReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.InitialiseVariables");
		
		UBP_Action_Strafe_AI_C_InitialiseVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (FailureReason != nullptr)
			*FailureReason = params.FailureReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.OnBeginEarly
	 * 		Flags  -> ()
	 */
	bool UBP_Action_Strafe_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.OnBeginEarly");
		
		UBP_Action_Strafe_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Strafe_AI_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.OnBegin");
		
		UBP_Action_Strafe_AI_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.OnBlocked
	 * 		Flags  -> ()
	 */
	void UBP_Action_Strafe_AI_C::OnBlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.OnBlocked");
		
		UBP_Action_Strafe_AI_C_OnBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.DetermineIfBlockedStateChange
	 * 		Flags  -> ()
	 */
	void UBP_Action_Strafe_AI_C::DetermineIfBlockedStateChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.DetermineIfBlockedStateChange");
		
		UBP_Action_Strafe_AI_C_DetermineIfBlockedStateChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.OnMaxBlockDurationElapsed
	 * 		Flags  -> ()
	 */
	void UBP_Action_Strafe_AI_C::OnMaxBlockDurationElapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.OnMaxBlockDurationElapsed");
		
		UBP_Action_Strafe_AI_C_OnMaxBlockDurationElapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Strafe_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.OnEnd");
		
		UBP_Action_Strafe_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.CancelActionIfPeakedCardChanged
	 * 		Flags  -> ()
	 */
	void UBP_Action_Strafe_AI_C::CancelActionIfPeakedCardChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.CancelActionIfPeakedCardChanged");
		
		UBP_Action_Strafe_AI_C_CancelActionIfPeakedCardChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.ExecuteUbergraph_BP_Action_Strafe_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Strafe_AI_C::ExecuteUbergraph_BP_Action_Strafe_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Strafe_AI.BP_Action_Strafe_AI_C.ExecuteUbergraph_BP_Action_Strafe_AI");
		
		UBP_Action_Strafe_AI_C_ExecuteUbergraph_BP_Action_Strafe_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Strafe_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Strafe_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Strafe_AI.BP_Action_Strafe_AI_C");
		return ptr;
	}

}


