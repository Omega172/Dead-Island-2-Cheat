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
	 * 		Name   -> Function BPC_BreathingAudio_AI.BPC_BreathingAudio_AI_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_BreathingAudio_AI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreathingAudio_AI.BPC_BreathingAudio_AI_C.ReceiveBeginPlay");
		
		UBPC_BreathingAudio_AI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BreathingAudio_AI.BPC_BreathingAudio_AI_C.Combat State Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECosmeticCombatState                               NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BreathingAudio_AI_C::CombatStateChanged(ECosmeticCombatState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreathingAudio_AI.BPC_BreathingAudio_AI_C.Combat State Changed");
		
		UBPC_BreathingAudio_AI_C_CombatStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_BreathingAudio_AI.BPC_BreathingAudio_AI_C.ExecuteUbergraph_BPC_BreathingAudio_AI
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BreathingAudio_AI_C::ExecuteUbergraph_BPC_BreathingAudio_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreathingAudio_AI.BPC_BreathingAudio_AI_C.ExecuteUbergraph_BPC_BreathingAudio_AI");
		
		UBPC_BreathingAudio_AI_C_ExecuteUbergraph_BPC_BreathingAudio_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_BreathingAudio_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_BreathingAudio_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_BreathingAudio_AI.BPC_BreathingAudio_AI_C");
		return ptr;
	}

}


