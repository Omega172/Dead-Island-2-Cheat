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
	 * 		Name   -> Function BP_ProjectileResponse_StopSimulating.BP_ProjectileResponse_StopSimulating_C.ReceiveOnTriggered
	 * 		Flags  -> ()
	 */
	void UBP_ProjectileResponse_StopSimulating_C::ReceiveOnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileResponse_StopSimulating.BP_ProjectileResponse_StopSimulating_C.ReceiveOnTriggered");
		
		UBP_ProjectileResponse_StopSimulating_C_ReceiveOnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProjectileResponse_StopSimulating.BP_ProjectileResponse_StopSimulating_C.ExecuteUbergraph_BP_ProjectileResponse_StopSimulating
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProjectileResponse_StopSimulating_C::ExecuteUbergraph_BP_ProjectileResponse_StopSimulating(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileResponse_StopSimulating.BP_ProjectileResponse_StopSimulating_C.ExecuteUbergraph_BP_ProjectileResponse_StopSimulating");
		
		UBP_ProjectileResponse_StopSimulating_C_ExecuteUbergraph_BP_ProjectileResponse_StopSimulating_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ProjectileResponse_StopSimulating_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ProjectileResponse_StopSimulating_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileResponse_StopSimulating.BP_ProjectileResponse_StopSimulating_C");
		return ptr;
	}

}


