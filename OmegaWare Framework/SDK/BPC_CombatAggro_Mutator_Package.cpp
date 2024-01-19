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
	 * 		Name   -> Function BPC_CombatAggro_Mutator.BPC_CombatAggro_Mutator_C.ExecuteUbergraph_BPC_CombatAggro_Mutator
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_CombatAggro_Mutator_C::ExecuteUbergraph_BPC_CombatAggro_Mutator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_CombatAggro_Mutator.BPC_CombatAggro_Mutator_C.ExecuteUbergraph_BPC_CombatAggro_Mutator");
		
		UBPC_CombatAggro_Mutator_C_ExecuteUbergraph_BPC_CombatAggro_Mutator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_CombatAggro_Mutator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_CombatAggro_Mutator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_CombatAggro_Mutator.BPC_CombatAggro_Mutator_C");
		return ptr;
	}

}


