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
	 * 		Name   -> Function BP_Slobber_Firestorm.BP_Slobber_Firestorm_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Slobber_Firestorm_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slobber_Firestorm.BP_Slobber_Firestorm_C.ReceiveBeginPlay");
		
		ABP_Slobber_Firestorm_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Slobber_Firestorm.BP_Slobber_Firestorm_C.ExecuteUbergraph_BP_Slobber_Firestorm
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slobber_Firestorm_C::ExecuteUbergraph_BP_Slobber_Firestorm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slobber_Firestorm.BP_Slobber_Firestorm_C.ExecuteUbergraph_BP_Slobber_Firestorm");
		
		ABP_Slobber_Firestorm_C_ExecuteUbergraph_BP_Slobber_Firestorm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Slobber_Firestorm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Slobber_Firestorm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Slobber_Firestorm.BP_Slobber_Firestorm_C");
		return ptr;
	}

}


