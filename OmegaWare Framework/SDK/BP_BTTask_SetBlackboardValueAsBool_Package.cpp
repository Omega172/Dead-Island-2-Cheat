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
	 * 		Name   -> Function BP_BTTask_SetBlackboardValueAsBool.BP_BTTask_SetBlackboardValueAsBool_C.ReceiveExecute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BTTask_SetBlackboardValueAsBool_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BTTask_SetBlackboardValueAsBool.BP_BTTask_SetBlackboardValueAsBool_C.ReceiveExecute");
		
		UBP_BTTask_SetBlackboardValueAsBool_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BTTask_SetBlackboardValueAsBool.BP_BTTask_SetBlackboardValueAsBool_C.ExecuteUbergraph_BP_BTTask_SetBlackboardValueAsBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BTTask_SetBlackboardValueAsBool_C::ExecuteUbergraph_BP_BTTask_SetBlackboardValueAsBool(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BTTask_SetBlackboardValueAsBool.BP_BTTask_SetBlackboardValueAsBool_C.ExecuteUbergraph_BP_BTTask_SetBlackboardValueAsBool");
		
		UBP_BTTask_SetBlackboardValueAsBool_C_ExecuteUbergraph_BP_BTTask_SetBlackboardValueAsBool_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BTTask_SetBlackboardValueAsBool_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BTTask_SetBlackboardValueAsBool_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTTask_SetBlackboardValueAsBool.BP_BTTask_SetBlackboardValueAsBool_C");
		return ptr;
	}

}


