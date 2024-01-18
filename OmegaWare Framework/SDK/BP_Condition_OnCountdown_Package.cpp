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
	 * 		Name   -> Function BP_Condition_OnCountdown.BP_Condition_OnCountdown_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Condition_OnCountdown_C::OnEnd(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Condition_OnCountdown.BP_Condition_OnCountdown_C.OnEnd");
		
		UBP_Condition_OnCountdown_C_OnEnd_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Condition_OnCountdown.BP_Condition_OnCountdown_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Condition_OnCountdown_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Condition_OnCountdown.BP_Condition_OnCountdown_C.OnBegin");
		
		UBP_Condition_OnCountdown_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Condition_OnCountdown.BP_Condition_OnCountdown_C.TimerFinished
	 * 		Flags  -> ()
	 */
	void UBP_Condition_OnCountdown_C::TimerFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Condition_OnCountdown.BP_Condition_OnCountdown_C.TimerFinished");
		
		UBP_Condition_OnCountdown_C_TimerFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Condition_OnCountdown.BP_Condition_OnCountdown_C.ExecuteUbergraph_BP_Condition_OnCountdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Condition_OnCountdown_C::ExecuteUbergraph_BP_Condition_OnCountdown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Condition_OnCountdown.BP_Condition_OnCountdown_C.ExecuteUbergraph_BP_Condition_OnCountdown");
		
		UBP_Condition_OnCountdown_C_ExecuteUbergraph_BP_Condition_OnCountdown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Condition_OnCountdown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Condition_OnCountdown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Condition_OnCountdown.BP_Condition_OnCountdown_C");
		return ptr;
	}

}


