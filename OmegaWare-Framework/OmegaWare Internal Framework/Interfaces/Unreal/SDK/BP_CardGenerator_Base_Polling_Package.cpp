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
	 * 		Name   -> Function BP_CardGenerator_Base_Polling.BP_CardGenerator_Base_Polling_C.OnInitialise
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_CardGenerator_Base_Polling_C::OnInitialise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Base_Polling.BP_CardGenerator_Base_Polling_C.OnInitialise");
		
		UBP_CardGenerator_Base_Polling_C_OnInitialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Base_Polling.BP_CardGenerator_Base_Polling_C.ExecuteUbergraph_BP_CardGenerator_Base_Polling
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CardGenerator_Base_Polling_C::ExecuteUbergraph_BP_CardGenerator_Base_Polling(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Base_Polling.BP_CardGenerator_Base_Polling_C.ExecuteUbergraph_BP_CardGenerator_Base_Polling");
		
		UBP_CardGenerator_Base_Polling_C_ExecuteUbergraph_BP_CardGenerator_Base_Polling_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CardGenerator_Base_Polling_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CardGenerator_Base_Polling_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CardGenerator_Base_Polling.BP_CardGenerator_Base_Polling_C");
		return ptr;
	}

}


