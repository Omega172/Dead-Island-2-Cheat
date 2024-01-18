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
	 * 		Name   -> Function BPC_Lockdown.BPC_Lockdown_C.GetLockdownState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLockdownState                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Lockdown_C::GetLockdownState(bool* bLockdownState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Lockdown.BPC_Lockdown_C.GetLockdownState");
		
		UBPC_Lockdown_C_GetLockdownState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLockdownState != nullptr)
			*bLockdownState = params.bLockdownState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Lockdown.BPC_Lockdown_C.UpdateLockdownState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewLockdownState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Lockdown_C::UpdateLockdownState(bool bNewLockdownState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Lockdown.BPC_Lockdown_C.UpdateLockdownState");
		
		UBPC_Lockdown_C_UpdateLockdownState_Params params {};
		params.bNewLockdownState = bNewLockdownState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Lockdown.BPC_Lockdown_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_Lockdown_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Lockdown.BPC_Lockdown_C.ReceiveBeginPlay");
		
		UBPC_Lockdown_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Lockdown.BPC_Lockdown_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Lockdown_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Lockdown.BPC_Lockdown_C.ReceiveEndPlay");
		
		UBPC_Lockdown_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Lockdown.BPC_Lockdown_C.ExecuteUbergraph_BPC_Lockdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Lockdown_C::ExecuteUbergraph_BPC_Lockdown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Lockdown.BPC_Lockdown_C.ExecuteUbergraph_BPC_Lockdown");
		
		UBPC_Lockdown_C_ExecuteUbergraph_BPC_Lockdown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Lockdown.BPC_Lockdown_C.OnLockdownStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewLockdownState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Lockdown_C::OnLockdownStateChanged__DelegateSignature(bool bNewLockdownState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Lockdown.BPC_Lockdown_C.OnLockdownStateChanged__DelegateSignature");
		
		UBPC_Lockdown_C_OnLockdownStateChanged__DelegateSignature_Params params {};
		params.bNewLockdownState = bNewLockdownState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Lockdown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Lockdown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Lockdown.BPC_Lockdown_C");
		return ptr;
	}

}


