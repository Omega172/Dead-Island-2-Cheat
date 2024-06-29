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
	 * 		Name   -> Function BP_ActionParams_AnimSet_AI.BP_ActionParams_AnimSet_AI_C.ExecuteUbergraph_BP_ActionParams_AnimSet_AI
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ActionParams_AnimSet_AI_C::ExecuteUbergraph_BP_ActionParams_AnimSet_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActionParams_AnimSet_AI.BP_ActionParams_AnimSet_AI_C.ExecuteUbergraph_BP_ActionParams_AnimSet_AI");
		
		UBP_ActionParams_AnimSet_AI_C_ExecuteUbergraph_BP_ActionParams_AnimSet_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ActionParams_AnimSet_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ActionParams_AnimSet_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActionParams_AnimSet_AI.BP_ActionParams_AnimSet_AI_C");
		return ptr;
	}

}


