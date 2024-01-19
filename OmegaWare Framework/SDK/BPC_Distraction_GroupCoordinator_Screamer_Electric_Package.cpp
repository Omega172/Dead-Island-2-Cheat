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
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator_Screamer_Electric.BPC_Distraction_GroupCoordinator_Screamer_Electric_C.GlobalQueryParams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           ActiveQuery                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_Screamer_Electric_C::GlobalQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator_Screamer_Electric.BPC_Distraction_GroupCoordinator_Screamer_Electric_C.GlobalQueryParams");
		
		UBPC_Distraction_GroupCoordinator_Screamer_Electric_C_GlobalQueryParams_Params params {};
		params.ActiveQuery = ActiveQuery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator_Screamer_Electric.BPC_Distraction_GroupCoordinator_Screamer_Electric_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_Distraction_GroupCoordinator_Screamer_Electric_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator_Screamer_Electric.BPC_Distraction_GroupCoordinator_Screamer_Electric_C.ReceiveBeginPlay");
		
		UBPC_Distraction_GroupCoordinator_Screamer_Electric_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator_Screamer_Electric.BPC_Distraction_GroupCoordinator_Screamer_Electric_C.ExecuteUbergraph_BPC_Distraction_GroupCoordinator_Screamer_Electric
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_Screamer_Electric_C::ExecuteUbergraph_BPC_Distraction_GroupCoordinator_Screamer_Electric(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator_Screamer_Electric.BPC_Distraction_GroupCoordinator_Screamer_Electric_C.ExecuteUbergraph_BPC_Distraction_GroupCoordinator_Screamer_Electric");
		
		UBPC_Distraction_GroupCoordinator_Screamer_Electric_C_ExecuteUbergraph_BPC_Distraction_GroupCoordinator_Screamer_Electric_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Distraction_GroupCoordinator_Screamer_Electric_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Distraction_GroupCoordinator_Screamer_Electric_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Distraction_GroupCoordinator_Screamer_Electric.BPC_Distraction_GroupCoordinator_Screamer_Electric_C");
		return ptr;
	}

}


