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
	 * 		Name   -> Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.CastAndStoreParams
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     BaseParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_Distraction_Movement_AI_C::CastAndStoreParams(class UCustomActionParamsBase* BaseParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.CastAndStoreParams");
		
		UBP_Action_Distraction_Movement_AI_C_CastAndStoreParams_Params params {};
		params.BaseParams = BaseParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.RemoveMovement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_Movement_AI_C::RemoveMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.RemoveMovement");
		
		UBP_Action_Distraction_Movement_AI_C_RemoveMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.ProjectLocationToNavmesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ProjectedLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_Movement_AI_C::ProjectLocationToNavmesh(const struct FVector& Location, struct FVector* ProjectedLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.ProjectLocationToNavmesh");
		
		UBP_Action_Distraction_Movement_AI_C_ProjectLocationToNavmesh_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProjectedLocation != nullptr)
			*ProjectedLocation = params.ProjectedLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.SetDryRunQueryParams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           ActiveQuery                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_Movement_AI_C::SetDryRunQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.SetDryRunQueryParams");
		
		UBP_Action_Distraction_Movement_AI_C_SetDryRunQueryParams_Params params {};
		params.ActiveQuery = ActiveQuery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.GetTargetLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_Movement_AI_C::GetTargetLocation(struct FVector* TargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.GetTargetLocation");
		
		UBP_Action_Distraction_Movement_AI_C_GetTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetLocation != nullptr)
			*TargetLocation = params.TargetLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.GetTargetActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_Movement_AI_C::GetTargetActor(class AActor** TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.GetTargetActor");
		
		UBP_Action_Distraction_Movement_AI_C_GetTargetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetActor != nullptr)
			*TargetActor = params.TargetActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.SetQueryParams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           ActiveQuery                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_Movement_AI_C::SetQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.SetQueryParams");
		
		UBP_Action_Distraction_Movement_AI_C_SetQueryParams_Params params {};
		params.ActiveQuery = ActiveQuery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.AddMovement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_Movement_AI_C::AddMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.AddMovement");
		
		UBP_Action_Distraction_Movement_AI_C_AddMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.SetQueryData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Distraction_Movement_AI_C::SetQueryData(const struct FVector& Location, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.SetQueryData");
		
		UBP_Action_Distraction_Movement_AI_C_SetQueryData_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.OnBeginEarly
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_Distraction_Movement_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C.OnBeginEarly");
		
		UBP_Action_Distraction_Movement_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Distraction_Movement_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Distraction_Movement_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C");
		return ptr;
	}

}


