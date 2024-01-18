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
	 * 		Name   -> Function BPC_AnimationSlave_AI.BPC_AnimationSlave_AI_C.SyncStateExpressionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_AnimationSlave_AI_C::SyncStateExpressionChanged(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AnimationSlave_AI.BPC_AnimationSlave_AI_C.SyncStateExpressionChanged");
		
		UBPC_AnimationSlave_AI_C_SyncStateExpressionChanged_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AnimationSlave_AI.BPC_AnimationSlave_AI_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_AnimationSlave_AI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AnimationSlave_AI.BPC_AnimationSlave_AI_C.ReceiveBeginPlay");
		
		UBPC_AnimationSlave_AI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AnimationSlave_AI.BPC_AnimationSlave_AI_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AnimationSlave_AI_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AnimationSlave_AI.BPC_AnimationSlave_AI_C.ReceiveEndPlay");
		
		UBPC_AnimationSlave_AI_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AnimationSlave_AI.BPC_AnimationSlave_AI_C.OnDelayOver
	 * 		Flags  -> ()
	 */
	void UBPC_AnimationSlave_AI_C::OnDelayOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AnimationSlave_AI.BPC_AnimationSlave_AI_C.OnDelayOver");
		
		UBPC_AnimationSlave_AI_C_OnDelayOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AnimationSlave_AI.BPC_AnimationSlave_AI_C.ExecuteUbergraph_BPC_AnimationSlave_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AnimationSlave_AI_C::ExecuteUbergraph_BPC_AnimationSlave_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AnimationSlave_AI.BPC_AnimationSlave_AI_C.ExecuteUbergraph_BPC_AnimationSlave_AI");
		
		UBPC_AnimationSlave_AI_C_ExecuteUbergraph_BPC_AnimationSlave_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_AnimationSlave_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_AnimationSlave_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_AnimationSlave_AI.BPC_AnimationSlave_AI_C");
		return ptr;
	}

}


