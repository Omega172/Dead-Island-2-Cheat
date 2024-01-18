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
	 * 		Name   -> Function BP_Action_Base_AreaMovement_AI.BP_Action_Base_AreaMovement_AI_C.CastAndStoreParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     BaseParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_Base_AreaMovement_AI_C::CastAndStoreParams(class UCustomActionParamsBase* BaseParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_AreaMovement_AI.BP_Action_Base_AreaMovement_AI_C.CastAndStoreParams");
		
		UBP_Action_Base_AreaMovement_AI_C_CastAndStoreParams_Params params {};
		params.BaseParams = BaseParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_AreaMovement_AI.BP_Action_Base_AreaMovement_AI_C.GetParamData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              GridSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpaceBetweenPoints                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinimumPathDistance                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_AreaMovement_AI_C::GetParamData(float* GridSize, float* SpaceBetweenPoints, float* MinimumPathDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_AreaMovement_AI.BP_Action_Base_AreaMovement_AI_C.GetParamData");
		
		UBP_Action_Base_AreaMovement_AI_C_GetParamData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GridSize != nullptr)
			*GridSize = params.GridSize;
		if (SpaceBetweenPoints != nullptr)
			*SpaceBetweenPoints = params.SpaceBetweenPoints;
		if (MinimumPathDistance != nullptr)
			*MinimumPathDistance = params.MinimumPathDistance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_AreaMovement_AI.BP_Action_Base_AreaMovement_AI_C.CalculateParamsForGridArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AreaRadius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GridSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpaceBetweenPoints                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinimumPathDistance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CalculatedHalfGridSize                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CalculatedSpaceBetweenPoints                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CalculatedMinimumPathDistance                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_AreaMovement_AI_C::CalculateParamsForGridArea(float AreaRadius, float GridSize, float SpaceBetweenPoints, float MinimumPathDistance, float* CalculatedHalfGridSize, float* CalculatedSpaceBetweenPoints, float* CalculatedMinimumPathDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_AreaMovement_AI.BP_Action_Base_AreaMovement_AI_C.CalculateParamsForGridArea");
		
		UBP_Action_Base_AreaMovement_AI_C_CalculateParamsForGridArea_Params params {};
		params.AreaRadius = AreaRadius;
		params.GridSize = GridSize;
		params.SpaceBetweenPoints = SpaceBetweenPoints;
		params.MinimumPathDistance = MinimumPathDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CalculatedHalfGridSize != nullptr)
			*CalculatedHalfGridSize = params.CalculatedHalfGridSize;
		if (CalculatedSpaceBetweenPoints != nullptr)
			*CalculatedSpaceBetweenPoints = params.CalculatedSpaceBetweenPoints;
		if (CalculatedMinimumPathDistance != nullptr)
			*CalculatedMinimumPathDistance = params.CalculatedMinimumPathDistance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_AreaMovement_AI.BP_Action_Base_AreaMovement_AI_C.GetAreaRadius
	 * 		Flags  -> ()
	 */
	float UBP_Action_Base_AreaMovement_AI_C::GetAreaRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_AreaMovement_AI.BP_Action_Base_AreaMovement_AI_C.GetAreaRadius");
		
		UBP_Action_Base_AreaMovement_AI_C_GetAreaRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_AreaMovement_AI.BP_Action_Base_AreaMovement_AI_C.SetDryRunQueryParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           ActiveQuery                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_AreaMovement_AI_C::SetDryRunQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_AreaMovement_AI.BP_Action_Base_AreaMovement_AI_C.SetDryRunQueryParams");
		
		UBP_Action_Base_AreaMovement_AI_C_SetDryRunQueryParams_Params params {};
		params.ActiveQuery = ActiveQuery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_AreaMovement_AI.BP_Action_Base_AreaMovement_AI_C.SetQueryParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           ActiveQuery                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_AreaMovement_AI_C::SetQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_AreaMovement_AI.BP_Action_Base_AreaMovement_AI_C.SetQueryParams");
		
		UBP_Action_Base_AreaMovement_AI_C_SetQueryParams_Params params {};
		params.ActiveQuery = ActiveQuery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Base_AreaMovement_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Base_AreaMovement_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Base_AreaMovement_AI.BP_Action_Base_AreaMovement_AI_C");
		return ptr;
	}

}


