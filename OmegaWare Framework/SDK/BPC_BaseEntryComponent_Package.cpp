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
	 * 		Name   -> Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Log Debug Message With Participant
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDSLogVerbosity                                    LogVerbosity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BaseEntryComponent_C::LogDebugMessageWithParticipant(const class FString& Message, class UParticipantSlotComponent* ParticipantSlot, EDSLogVerbosity LogVerbosity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Log Debug Message With Participant");
		
		UBPC_BaseEntryComponent_C_LogDebugMessageWithParticipant_Params params {};
		params.Message = Message;
		params.ParticipantSlot = ParticipantSlot;
		params.LogVerbosity = LogVerbosity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Log Debug Message
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EDSLogVerbosity                                    LogVerbosity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BaseEntryComponent_C::LogDebugMessage(const class FString& Message, EDSLogVerbosity LogVerbosity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Log Debug Message");
		
		UBPC_BaseEntryComponent_C_LogDebugMessage_Params params {};
		params.Message = Message;
		params.LogVerbosity = LogVerbosity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Setup component Activity Data
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BaseEntryComponent_C::SetupcomponentActivityData(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Setup component Activity Data");
		
		UBPC_BaseEntryComponent_C_SetupcomponentActivityData_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Clean Component State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BaseEntryComponent_C::CleanComponentState(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Clean Component State");
		
		UBPC_BaseEntryComponent_C_CleanComponentState_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Perform Component Activity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BaseEntryComponent_C::PerformComponentActivity(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Perform Component Activity");
		
		UBPC_BaseEntryComponent_C_PerformComponentActivity_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Prepare to Perform Component Activity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BaseEntryComponent_C::PreparetoPerformComponentActivity(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Prepare to Perform Component Activity");
		
		UBPC_BaseEntryComponent_C_PreparetoPerformComponentActivity_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_BaseEntryComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.ReceiveBeginPlay");
		
		UBPC_BaseEntryComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.On Owner Participant Will Arrive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BaseEntryComponent_C::OnOwnerParticipantWillArrive(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.On Owner Participant Will Arrive");
		
		UBPC_BaseEntryComponent_C_OnOwnerParticipantWillArrive_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.On Should Perform Component Activity
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BaseEntryComponent_C::OnShouldPerformComponentActivity(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.On Should Perform Component Activity");
		
		UBPC_BaseEntryComponent_C_OnShouldPerformComponentActivity_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.On Component Activity Complete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BaseEntryComponent_C::OnComponentActivityComplete(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.On Component Activity Complete");
		
		UBPC_BaseEntryComponent_C_OnComponentActivityComplete_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.On Owner Participant Received
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BaseEntryComponent_C::OnOwnerParticipantReceived(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.On Owner Participant Received");
		
		UBPC_BaseEntryComponent_C_OnOwnerParticipantReceived_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.OnZombieWillBeReleased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BaseEntryComponent_C::OnZombieWillBeReleased(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.OnZombieWillBeReleased");
		
		UBPC_BaseEntryComponent_C_OnZombieWillBeReleased_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.ExecuteUbergraph_BPC_BaseEntryComponent
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BaseEntryComponent_C::ExecuteUbergraph_BPC_BaseEntryComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.ExecuteUbergraph_BPC_BaseEntryComponent");
		
		UBPC_BaseEntryComponent_C_ExecuteUbergraph_BPC_BaseEntryComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Perform Pre-Animation trigger Logic__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_BaseEntryComponent_C::PerformPreAnimationtriggerLogic__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Perform Pre-Animation trigger Logic__DelegateSignature");
		
		UBPC_BaseEntryComponent_C_PerformPreAnimationtriggerLogic__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Perform Pre-Animation Setup Logic__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_BaseEntryComponent_C::PerformPreAnimationSetupLogic__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Perform Pre-Animation Setup Logic__DelegateSignature");
		
		UBPC_BaseEntryComponent_C_PerformPreAnimationSetupLogic__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_BaseEntryComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_BaseEntryComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_BaseEntryComponent.BPC_BaseEntryComponent_C");
		return ptr;
	}

}


