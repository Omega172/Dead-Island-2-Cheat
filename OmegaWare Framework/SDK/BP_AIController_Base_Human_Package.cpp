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
	 * 		Name   -> Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.EnableCombat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_AIController_Base_Human_C::EnableCombat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.EnableCombat");
		
		ABP_AIController_Base_Human_C_EnableCombat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.DisableCombat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_AIController_Base_Human_C::DisableCombat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.DisableCombat");
		
		ABP_AIController_Base_Human_C_DisableCombat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.ReceiveUnPossess
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       UnpossessedPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_Base_Human_C::ReceiveUnPossess(class APawn* UnpossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.ReceiveUnPossess");
		
		ABP_AIController_Base_Human_C_ReceiveUnPossess_Params params {};
		params.UnpossessedPawn = UnpossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_AIController_Base_Human_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.ReceiveBeginPlay");
		
		ABP_AIController_Base_Human_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.ReceivePossess
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_Base_Human_C::ReceivePossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.ReceivePossess");
		
		ABP_AIController_Base_Human_C_ReceivePossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.ExecuteUbergraph_BP_AIController_Base_Human
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIController_Base_Human_C::ExecuteUbergraph_BP_AIController_Base_Human(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.ExecuteUbergraph_BP_AIController_Base_Human");
		
		ABP_AIController_Base_Human_C_ExecuteUbergraph_BP_AIController_Base_Human_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AIController_Base_Human_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AIController_Base_Human_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AIController_Base_Human.BP_AIController_Base_Human_C");
		return ptr;
	}

}


