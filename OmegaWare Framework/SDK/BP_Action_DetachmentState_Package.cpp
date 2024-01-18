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
	 * 		Name   -> Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.DSLogProcessingDetachmentEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        DetachmentEventName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_DetachmentState_C::DSLogProcessingDetachmentEvents(const class FName& DetachmentEventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.DSLogProcessingDetachmentEvents");
		
		UBP_Action_DetachmentState_C_DSLogProcessingDetachmentEvents_Params params {};
		params.DetachmentEventName = DetachmentEventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.DSLogDetachmentEvents
	 * 		Flags  -> ()
	 */
	void UBP_Action_DetachmentState_C::DSLogDetachmentEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.DSLogDetachmentEvents");
		
		UBP_Action_DetachmentState_C_DSLogDetachmentEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.AddDSLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LogText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EDSLogVerbosity                                    Verbosity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_DetachmentState_C::AddDSLog(const class FString& LogText, EDSLogVerbosity Verbosity, bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.AddDSLog");
		
		UBP_Action_DetachmentState_C_AddDSLog_Params params {};
		params.LogText = LogText;
		params.Verbosity = Verbosity;
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.GatherPrerequisites
	 * 		Flags  -> ()
	 */
	bool UBP_Action_DetachmentState_C::GatherPrerequisites()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.GatherPrerequisites");
		
		UBP_Action_DetachmentState_C_GatherPrerequisites_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.SetupLogger
	 * 		Flags  -> ()
	 */
	void UBP_Action_DetachmentState_C::SetupLogger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.SetupLogger");
		
		UBP_Action_DetachmentState_C_SetupLogger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_DetachmentState_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.OnBegin");
		
		UBP_Action_DetachmentState_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.ExecuteUbergraph_BP_Action_DetachmentState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_DetachmentState_C::ExecuteUbergraph_BP_Action_DetachmentState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_DetachmentState.BP_Action_DetachmentState_C.ExecuteUbergraph_BP_Action_DetachmentState");
		
		UBP_Action_DetachmentState_C_ExecuteUbergraph_BP_Action_DetachmentState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_DetachmentState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_DetachmentState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_DetachmentState.BP_Action_DetachmentState_C");
		return ptr;
	}

}


