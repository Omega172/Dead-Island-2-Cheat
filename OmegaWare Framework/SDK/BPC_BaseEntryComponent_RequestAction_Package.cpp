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
	 * 		Name   -> Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.On Participant Interrupted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BaseEntryComponent_RequestAction_C::OnParticipantInterrupted(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.On Participant Interrupted");
		
		UBPC_BaseEntryComponent_RequestAction_C_OnParticipantInterrupted_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.End Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_BaseEntryComponent_RequestAction_C::EndAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.End Action");
		
		UBPC_BaseEntryComponent_RequestAction_C_EndAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.Request Action
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BaseEntryComponent_RequestAction_C::RequestAction(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.Request Action");
		
		UBPC_BaseEntryComponent_RequestAction_C_RequestAction_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.OnActionEnd
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBPC_BaseEntryComponent_RequestAction_C::OnActionEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.OnActionEnd");
		
		UBPC_BaseEntryComponent_RequestAction_C_OnActionEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.OnActionResolved
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestID                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnResolvedParams            Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBPC_BaseEntryComponent_RequestAction_C::OnActionResolved(const struct FGuid& RequestID, const struct FCharacterActionOnResolvedParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.OnActionResolved");
		
		UBPC_BaseEntryComponent_RequestAction_C_OnActionResolved_Params params {};
		params.RequestID = RequestID;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.Clean Component State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BaseEntryComponent_RequestAction_C::CleanComponentState(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.Clean Component State");
		
		UBPC_BaseEntryComponent_RequestAction_C_CleanComponentState_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.ExecuteUbergraph_BPC_BaseEntryComponent_RequestAction
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BaseEntryComponent_RequestAction_C::ExecuteUbergraph_BPC_BaseEntryComponent_RequestAction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.ExecuteUbergraph_BPC_BaseEntryComponent_RequestAction");
		
		UBPC_BaseEntryComponent_RequestAction_C_ExecuteUbergraph_BPC_BaseEntryComponent_RequestAction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_BaseEntryComponent_RequestAction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_BaseEntryComponent_RequestAction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C");
		return ptr;
	}

}


