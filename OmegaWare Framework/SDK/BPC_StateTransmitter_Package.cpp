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
	 * 		Name   -> Function BPC_StateTransmitter.BPC_StateTransmitter_C.OnServerActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETransmittableStatus                               StatusType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_StateTransmitter_C::OnServerActivated(ETransmittableStatus StatusType, float Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StateTransmitter.BPC_StateTransmitter_C.OnServerActivated");
		
		UBPC_StateTransmitter_C_OnServerActivated_Params params {};
		params.StatusType = StatusType;
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_StateTransmitter.BPC_StateTransmitter_C.OnServerDeactivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETransmittableStatus                               StatusType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_StateTransmitter_C::OnServerDeactivated(ETransmittableStatus StatusType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StateTransmitter.BPC_StateTransmitter_C.OnServerDeactivated");
		
		UBPC_StateTransmitter_C_OnServerDeactivated_Params params {};
		params.StatusType = StatusType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_StateTransmitter.BPC_StateTransmitter_C.ExecuteUbergraph_BPC_StateTransmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_StateTransmitter_C::ExecuteUbergraph_BPC_StateTransmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StateTransmitter.BPC_StateTransmitter_C.ExecuteUbergraph_BPC_StateTransmitter");
		
		UBPC_StateTransmitter_C_ExecuteUbergraph_BPC_StateTransmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_StateTransmitter.BPC_StateTransmitter_C.ServerDeactivated__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBPC_StateTransmitter_C::ServerDeactivated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StateTransmitter.BPC_StateTransmitter_C.ServerDeactivated__DelegateSignature");
		
		UBPC_StateTransmitter_C_ServerDeactivated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_StateTransmitter.BPC_StateTransmitter_C.ServerActivated__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBPC_StateTransmitter_C::ServerActivated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StateTransmitter.BPC_StateTransmitter_C.ServerActivated__DelegateSignature");
		
		UBPC_StateTransmitter_C_ServerActivated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_StateTransmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_StateTransmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_StateTransmitter.BPC_StateTransmitter_C");
		return ptr;
	}

}


