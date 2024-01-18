﻿/**
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
	 * 		Name   -> Function BP_EQSContext_Base_GetVectorFact.BP_EQSContext_Base_GetVectorFact_C.ProvideLocationsSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     QuerierObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      QuerierActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FVector>                             ResultingLocationSet                                       (Parm, OutParm)
	 */
	void UBP_EQSContext_Base_GetVectorFact_C::ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EQSContext_Base_GetVectorFact.BP_EQSContext_Base_GetVectorFact_C.ProvideLocationsSet");
		
		UBP_EQSContext_Base_GetVectorFact_C_ProvideLocationsSet_Params params {};
		params.QuerierObject = QuerierObject;
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingLocationSet != nullptr)
			*ResultingLocationSet = params.ResultingLocationSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_EQSContext_Base_GetVectorFact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_EQSContext_Base_GetVectorFact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EQSContext_Base_GetVectorFact.BP_EQSContext_Base_GetVectorFact_C");
		return ptr;
	}

}


