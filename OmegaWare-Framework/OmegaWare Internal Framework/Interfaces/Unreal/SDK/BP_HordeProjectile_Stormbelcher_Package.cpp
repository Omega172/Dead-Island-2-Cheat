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
	 * 		Name   -> Function BP_HordeProjectile_Stormbelcher.BP_HordeProjectile_Stormbelcher_C.GrowSize__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_HordeProjectile_Stormbelcher_C::GrowSize__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HordeProjectile_Stormbelcher.BP_HordeProjectile_Stormbelcher_C.GrowSize__FinishedFunc");
		
		ABP_HordeProjectile_Stormbelcher_C_GrowSize__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_HordeProjectile_Stormbelcher.BP_HordeProjectile_Stormbelcher_C.GrowSize__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_HordeProjectile_Stormbelcher_C::GrowSize__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HordeProjectile_Stormbelcher.BP_HordeProjectile_Stormbelcher_C.GrowSize__UpdateFunc");
		
		ABP_HordeProjectile_Stormbelcher_C_GrowSize__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_HordeProjectile_Stormbelcher.BP_HordeProjectile_Stormbelcher_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HordeProjectile_Stormbelcher_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HordeProjectile_Stormbelcher.BP_HordeProjectile_Stormbelcher_C.ReceiveBeginPlay");
		
		ABP_HordeProjectile_Stormbelcher_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_HordeProjectile_Stormbelcher.BP_HordeProjectile_Stormbelcher_C.ExecuteUbergraph_BP_HordeProjectile_Stormbelcher
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HordeProjectile_Stormbelcher_C::ExecuteUbergraph_BP_HordeProjectile_Stormbelcher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HordeProjectile_Stormbelcher.BP_HordeProjectile_Stormbelcher_C.ExecuteUbergraph_BP_HordeProjectile_Stormbelcher");
		
		ABP_HordeProjectile_Stormbelcher_C_ExecuteUbergraph_BP_HordeProjectile_Stormbelcher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HordeProjectile_Stormbelcher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HordeProjectile_Stormbelcher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeProjectile_Stormbelcher.BP_HordeProjectile_Stormbelcher_C");
		return ptr;
	}

}


