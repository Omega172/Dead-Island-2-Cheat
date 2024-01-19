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
	 * 		Name   -> Function BP_DIDialogueManager.BP_DIDialogueManager_C.HandleNamedEventReturn2
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDialogueKey                                EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		EDialogueRuntimeEventType                          EventType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDialogueComponent*                          DialogueComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDialogueRuntimeEventHandlerResponse               Response                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DIDialogueManager_C::HandleNamedEventReturn2(const struct FDialogueKey& EventName, EDialogueRuntimeEventType EventType, class UDialogueComponent* DialogueComponent, EDialogueRuntimeEventHandlerResponse* Response)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DIDialogueManager.BP_DIDialogueManager_C.HandleNamedEventReturn2");
		
		UBP_DIDialogueManager_C_HandleNamedEventReturn2_Params params {};
		params.EventName = EventName;
		params.EventType = EventType;
		params.DialogueComponent = DialogueComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Response != nullptr)
			*Response = params.Response;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_DIDialogueManager.BP_DIDialogueManager_C.HandleNamedEventTwoRefParamToReturn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDialogueKey                                EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UDialogueComponent*                          DialogueComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDialogueKey                                BaseVoiceSetName                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FDialogueKey                                TriggerName                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            SessionId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ExecutionId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      Response2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DIDialogueManager_C::HandleNamedEventTwoRefParamToReturn(const struct FDialogueKey& EventName, class UDialogueComponent* DialogueComponent, const struct FDialogueKey& BaseVoiceSetName, const struct FDialogueKey& TriggerName, int32_t SessionId, int32_t ExecutionId, unsigned char* Response, unsigned char* Response2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DIDialogueManager.BP_DIDialogueManager_C.HandleNamedEventTwoRefParamToReturn");
		
		UBP_DIDialogueManager_C_HandleNamedEventTwoRefParamToReturn_Params params {};
		params.EventName = EventName;
		params.DialogueComponent = DialogueComponent;
		params.BaseVoiceSetName = BaseVoiceSetName;
		params.TriggerName = TriggerName;
		params.SessionId = SessionId;
		params.ExecutionId = ExecutionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Response != nullptr)
			*Response = params.Response;
		if (Response2 != nullptr)
			*Response2 = params.Response2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_DIDialogueManager.BP_DIDialogueManager_C.HandleNamedEventReturnTwoResponses
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDialogueKey                                EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UDialogueComponent*                          DialogueComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDialogueKey                                BaseVoiceSetName                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FDialogueKey                                TriggerName                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            SessionId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ExecutionId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      Response                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      Response2                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DIDialogueManager_C::HandleNamedEventReturnTwoResponses(const struct FDialogueKey& EventName, class UDialogueComponent* DialogueComponent, const struct FDialogueKey& BaseVoiceSetName, const struct FDialogueKey& TriggerName, int32_t SessionId, int32_t ExecutionId, unsigned char* Response, unsigned char* Response2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DIDialogueManager.BP_DIDialogueManager_C.HandleNamedEventReturnTwoResponses");
		
		UBP_DIDialogueManager_C_HandleNamedEventReturnTwoResponses_Params params {};
		params.EventName = EventName;
		params.DialogueComponent = DialogueComponent;
		params.BaseVoiceSetName = BaseVoiceSetName;
		params.TriggerName = TriggerName;
		params.SessionId = SessionId;
		params.ExecutionId = ExecutionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Response != nullptr)
			*Response = params.Response;
		if (Response2 != nullptr)
			*Response2 = params.Response2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_DIDialogueManager.BP_DIDialogueManager_C.HandleNamedEventRefParamToReturn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDialogueKey                                EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UDialogueComponent*                          DialogueComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDialogueKey                                BaseVoiceSetName                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FDialogueKey                                TriggerName                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            SessionId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ExecutionId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DIDialogueManager_C::HandleNamedEventRefParamToReturn(const struct FDialogueKey& EventName, class UDialogueComponent* DialogueComponent, const struct FDialogueKey& BaseVoiceSetName, const struct FDialogueKey& TriggerName, int32_t SessionId, int32_t ExecutionId, unsigned char* Response)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DIDialogueManager.BP_DIDialogueManager_C.HandleNamedEventRefParamToReturn");
		
		UBP_DIDialogueManager_C_HandleNamedEventRefParamToReturn_Params params {};
		params.EventName = EventName;
		params.DialogueComponent = DialogueComponent;
		params.BaseVoiceSetName = BaseVoiceSetName;
		params.TriggerName = TriggerName;
		params.SessionId = SessionId;
		params.ExecutionId = ExecutionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Response != nullptr)
			*Response = params.Response;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_DIDialogueManager.BP_DIDialogueManager_C.HandleNamedEventReturn1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDialogueKey                                EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		EDialogueRuntimeEventType                          EventType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDialogueComponent*                          DialogueComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDialogueRuntimeEventHandlerResponse               Response                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DIDialogueManager_C::HandleNamedEventReturn1(const struct FDialogueKey& EventName, EDialogueRuntimeEventType EventType, class UDialogueComponent* DialogueComponent, EDialogueRuntimeEventHandlerResponse* Response)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DIDialogueManager.BP_DIDialogueManager_C.HandleNamedEventReturn1");
		
		UBP_DIDialogueManager_C_HandleNamedEventReturn1_Params params {};
		params.EventName = EventName;
		params.EventType = EventType;
		params.DialogueComponent = DialogueComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Response != nullptr)
			*Response = params.Response;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_DIDialogueManager.BP_DIDialogueManager_C.BlueprintInit
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_DIDialogueManager_C::BlueprintInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DIDialogueManager.BP_DIDialogueManager_C.BlueprintInit");
		
		UBP_DIDialogueManager_C_BlueprintInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_DIDialogueManager.BP_DIDialogueManager_C.ExecuteUbergraph_BP_DIDialogueManager
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DIDialogueManager_C::ExecuteUbergraph_BP_DIDialogueManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DIDialogueManager.BP_DIDialogueManager_C.ExecuteUbergraph_BP_DIDialogueManager");
		
		UBP_DIDialogueManager_C_ExecuteUbergraph_BP_DIDialogueManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DIDialogueManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DIDialogueManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DIDialogueManager.BP_DIDialogueManager_C");
		return ptr;
	}

}


