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
	 * 		Name   -> Function BPC_Base_Stability_AI.BPC_Base_Stability_AI_C.OnKnockdown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_Stability_AI_C::OnKnockdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_Stability_AI.BPC_Base_Stability_AI_C.OnKnockdown");
		
		UBPC_Base_Stability_AI_C_OnKnockdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_Stability_AI.BPC_Base_Stability_AI_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_Base_Stability_AI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_Stability_AI.BPC_Base_Stability_AI_C.ReceiveBeginPlay");
		
		UBPC_Base_Stability_AI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_Stability_AI.BPC_Base_Stability_AI_C.OnKnockdownExpressionUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Base_Stability_AI_C::OnKnockdownExpressionUpdated(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_Stability_AI.BPC_Base_Stability_AI_C.OnKnockdownExpressionUpdated");
		
		UBPC_Base_Stability_AI_C_OnKnockdownExpressionUpdated_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_Stability_AI.BPC_Base_Stability_AI_C.ExecuteUbergraph_BPC_Base_Stability_AI
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_Stability_AI_C::ExecuteUbergraph_BPC_Base_Stability_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_Stability_AI.BPC_Base_Stability_AI_C.ExecuteUbergraph_BPC_Base_Stability_AI");
		
		UBPC_Base_Stability_AI_C_ExecuteUbergraph_BPC_Base_Stability_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Base_Stability_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Base_Stability_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Base_Stability_AI.BPC_Base_Stability_AI_C");
		return ptr;
	}

}


