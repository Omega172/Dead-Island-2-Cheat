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
	 * 		Name   -> Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.ResetState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ETransmittableStatus                               StateType                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_StateTransmitter_AI_C::ResetState(ETransmittableStatus StateType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.ResetState");
		
		UBPC_StateTransmitter_AI_C_ResetState_Params params {};
		params.StateType = StateType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.SetState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ETransmittableStatus                               StateType                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStateTransmitterConfig*                     Relay                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_StateTransmitter_AI_C::SetState(ETransmittableStatus StateType, class UStateTransmitterConfig* Relay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.SetState");
		
		UBPC_StateTransmitter_AI_C_SetState_Params params {};
		params.StateType = StateType;
		params.Relay = Relay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.OnServerActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		ETransmittableStatus                               StatusType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_StateTransmitter_AI_C::OnServerActivated(ETransmittableStatus StatusType, float Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.OnServerActivated");
		
		UBPC_StateTransmitter_AI_C_OnServerActivated_Params params {};
		params.StatusType = StatusType;
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.OnServerDeactivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		ETransmittableStatus                               StatusType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_StateTransmitter_AI_C::OnServerDeactivated(ETransmittableStatus StatusType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.OnServerDeactivated");
		
		UBPC_StateTransmitter_AI_C_OnServerDeactivated_Params params {};
		params.StatusType = StatusType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_StateTransmitter_AI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.ReceiveBeginPlay");
		
		UBPC_StateTransmitter_AI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.ExecuteUbergraph_BPC_StateTransmitter_AI
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_StateTransmitter_AI_C::ExecuteUbergraph_BPC_StateTransmitter_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C.ExecuteUbergraph_BPC_StateTransmitter_AI");
		
		UBPC_StateTransmitter_AI_C_ExecuteUbergraph_BPC_StateTransmitter_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_StateTransmitter_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_StateTransmitter_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C");
		return ptr;
	}

}


