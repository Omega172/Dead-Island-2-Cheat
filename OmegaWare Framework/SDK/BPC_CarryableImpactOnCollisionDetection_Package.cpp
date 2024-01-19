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
	 * 		Name   -> Function BPC_CarryableImpactOnCollisionDetection.BPC_CarryableImpactOnCollisionDetection_C.SetupImpactData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESizeCategory                                      Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_CarryableImpactOnCollisionDetection_C::SetupImpactData(ESizeCategory Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_CarryableImpactOnCollisionDetection.BPC_CarryableImpactOnCollisionDetection_C.SetupImpactData");
		
		UBPC_CarryableImpactOnCollisionDetection_C_SetupImpactData_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_CarryableImpactOnCollisionDetection.BPC_CarryableImpactOnCollisionDetection_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_CarryableImpactOnCollisionDetection_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_CarryableImpactOnCollisionDetection.BPC_CarryableImpactOnCollisionDetection_C.ReceiveBeginPlay");
		
		UBPC_CarryableImpactOnCollisionDetection_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_CarryableImpactOnCollisionDetection.BPC_CarryableImpactOnCollisionDetection_C.ExecuteUbergraph_BPC_CarryableImpactOnCollisionDetection
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_CarryableImpactOnCollisionDetection_C::ExecuteUbergraph_BPC_CarryableImpactOnCollisionDetection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_CarryableImpactOnCollisionDetection.BPC_CarryableImpactOnCollisionDetection_C.ExecuteUbergraph_BPC_CarryableImpactOnCollisionDetection");
		
		UBPC_CarryableImpactOnCollisionDetection_C_ExecuteUbergraph_BPC_CarryableImpactOnCollisionDetection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_CarryableImpactOnCollisionDetection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_CarryableImpactOnCollisionDetection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_CarryableImpactOnCollisionDetection.BPC_CarryableImpactOnCollisionDetection_C");
		return ptr;
	}

}


