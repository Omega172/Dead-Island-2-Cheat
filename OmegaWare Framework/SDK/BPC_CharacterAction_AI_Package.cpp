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
	 * 		Name   -> Function BPC_CharacterAction_AI.BPC_CharacterAction_AI_C.RegisterDefaultActions
	 * 		Flags  -> ()
	 */
	void UBPC_CharacterAction_AI_C::RegisterDefaultActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_CharacterAction_AI.BPC_CharacterAction_AI_C.RegisterDefaultActions");
		
		UBPC_CharacterAction_AI_C_RegisterDefaultActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_CharacterAction_AI.BPC_CharacterAction_AI_C.ExecuteUbergraph_BPC_CharacterAction_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_CharacterAction_AI_C::ExecuteUbergraph_BPC_CharacterAction_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_CharacterAction_AI.BPC_CharacterAction_AI_C.ExecuteUbergraph_BPC_CharacterAction_AI");
		
		UBPC_CharacterAction_AI_C_ExecuteUbergraph_BPC_CharacterAction_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_CharacterAction_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_CharacterAction_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_CharacterAction_AI.BPC_CharacterAction_AI_C");
		return ptr;
	}

}


