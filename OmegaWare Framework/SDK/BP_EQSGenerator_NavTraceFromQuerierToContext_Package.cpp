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
	 * 		Name   -> Function BP_EQSGenerator_NavTraceFromQuerierToContext.BP_EQSGenerator_NavTraceFromQuerierToContext_C.ProjectPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     PointToProject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADIAIController*                             Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ProjectedLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_EQSGenerator_NavTraceFromQuerierToContext_C::ProjectPoint(const struct FVector& PointToProject, class ADIAIController* Controller, struct FVector* ProjectedLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EQSGenerator_NavTraceFromQuerierToContext.BP_EQSGenerator_NavTraceFromQuerierToContext_C.ProjectPoint");
		
		UBP_EQSGenerator_NavTraceFromQuerierToContext_C_ProjectPoint_Params params {};
		params.PointToProject = PointToProject;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProjectedLocation != nullptr)
			*ProjectedLocation = params.ProjectedLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EQSGenerator_NavTraceFromQuerierToContext.BP_EQSGenerator_NavTraceFromQuerierToContext_C.DoItemGeneration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             ContextLocations                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_EQSGenerator_NavTraceFromQuerierToContext_C::DoItemGeneration(TArray<struct FVector> ContextLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EQSGenerator_NavTraceFromQuerierToContext.BP_EQSGenerator_NavTraceFromQuerierToContext_C.DoItemGeneration");
		
		UBP_EQSGenerator_NavTraceFromQuerierToContext_C_DoItemGeneration_Params params {};
		params.ContextLocations = ContextLocations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_EQSGenerator_NavTraceFromQuerierToContext_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_EQSGenerator_NavTraceFromQuerierToContext_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EQSGenerator_NavTraceFromQuerierToContext.BP_EQSGenerator_NavTraceFromQuerierToContext_C");
		return ptr;
	}

}


