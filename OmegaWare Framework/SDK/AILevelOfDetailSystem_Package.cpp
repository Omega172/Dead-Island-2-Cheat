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
	 * 		Name   -> PredefinedFunction UAILevelOfDetailCategoryDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILevelOfDetailCategoryDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AILevelOfDetailSystem.AILevelOfDetailCategoryDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AILevelOfDetailSystem.AILevelOfDetailComponent.UnlockLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAILevelOfDetailCategoryDefinition*          CategoryDefinition                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAILevelOfDetailComponent::UnlockLevel(class UAILevelOfDetailCategoryDefinition* CategoryDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AILevelOfDetailSystem.AILevelOfDetailComponent.UnlockLevel");
		
		UAILevelOfDetailComponent_UnlockLevel_Params params {};
		params.CategoryDefinition = CategoryDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AILevelOfDetailSystem.AILevelOfDetailComponent.LockToLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAILevelOfDetailCategoryDefinition*          CategoryDefinition                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAILevelOfDetailComponent::LockToLevel(class UAILevelOfDetailCategoryDefinition* CategoryDefinition, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AILevelOfDetailSystem.AILevelOfDetailComponent.LockToLevel");
		
		UAILevelOfDetailComponent_LockToLevel_Params params {};
		params.CategoryDefinition = CategoryDefinition;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AILevelOfDetailSystem.AILevelOfDetailComponent.LockLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAILevelOfDetailCategoryDefinition*          CategoryDefinition                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAILevelOfDetailComponent::LockLevel(class UAILevelOfDetailCategoryDefinition* CategoryDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AILevelOfDetailSystem.AILevelOfDetailComponent.LockLevel");
		
		UAILevelOfDetailComponent_LockLevel_Params params {};
		params.CategoryDefinition = CategoryDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AILevelOfDetailSystem.AILevelOfDetailComponent.GetController
	 * 		Flags  -> ()
	 */
	class AController* UAILevelOfDetailComponent::GetController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AILevelOfDetailSystem.AILevelOfDetailComponent.GetController");
		
		UAILevelOfDetailComponent_GetController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AILevelOfDetailSystem.AILevelOfDetailComponent.GetCharacter
	 * 		Flags  -> ()
	 */
	class ACharacter* UAILevelOfDetailComponent::GetCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AILevelOfDetailSystem.AILevelOfDetailComponent.GetCharacter");
		
		UAILevelOfDetailComponent_GetCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILevelOfDetailComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILevelOfDetailComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AILevelOfDetailSystem.AILevelOfDetailComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILevelOfDetailFeature.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILevelOfDetailFeature::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AILevelOfDetailSystem.AILevelOfDetailFeature");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AILevelOfDetailSystem.AILevelOfDetailFeature_BP.InitializeComparisonName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ResultComparisonName                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAILevelOfDetailFeature_BP::InitializeComparisonName(class FString* ResultComparisonName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AILevelOfDetailSystem.AILevelOfDetailFeature_BP.InitializeComparisonName");
		
		UAILevelOfDetailFeature_BP_InitializeComparisonName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultComparisonName != nullptr)
			*ResultComparisonName = params.ResultComparisonName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AILevelOfDetailSystem.AILevelOfDetailFeature_BP.EnableFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAILevelOfDetailComponent*                   Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAILevelOfDetailError                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAILevelOfDetailFeature_BP::EnableFor(class UAILevelOfDetailComponent* Component, EAILevelOfDetailError* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AILevelOfDetailSystem.AILevelOfDetailFeature_BP.EnableFor");
		
		UAILevelOfDetailFeature_BP_EnableFor_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AILevelOfDetailSystem.AILevelOfDetailFeature_BP.DisableFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAILevelOfDetailComponent*                   Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAILevelOfDetailError                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAILevelOfDetailFeature_BP::DisableFor(class UAILevelOfDetailComponent* Component, EAILevelOfDetailError* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AILevelOfDetailSystem.AILevelOfDetailFeature_BP.DisableFor");
		
		UAILevelOfDetailFeature_BP_DisableFor_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILevelOfDetailFeature_BP.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILevelOfDetailFeature_BP::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AILevelOfDetailSystem.AILevelOfDetailFeature_BP");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILevelOfDetailFeature_GroundMovementMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILevelOfDetailFeature_GroundMovementMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AILevelOfDetailSystem.AILevelOfDetailFeature_GroundMovementMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILevelOfDetailFeature_SetComponentActivation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILevelOfDetailFeature_SetComponentActivation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AILevelOfDetailSystem.AILevelOfDetailFeature_SetComponentActivation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAILevelOfDetailManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAILevelOfDetailManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AILevelOfDetailSystem.AILevelOfDetailManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILevelOfDetailScoringCriteriaDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILevelOfDetailScoringCriteriaDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AILevelOfDetailSystem.AILevelOfDetailScoringCriteriaDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILevelOfDetailScoringCriteriaDefinition_DistanceToLocalPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILevelOfDetailScoringCriteriaDefinition_DistanceToLocalPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AILevelOfDetailSystem.AILevelOfDetailScoringCriteriaDefinition_DistanceToLocalPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILevelOfDetailScoringCriteriaDefinition_DistanceToNearestPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILevelOfDetailScoringCriteriaDefinition_DistanceToNearestPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AILevelOfDetailSystem.AILevelOfDetailScoringCriteriaDefinition_DistanceToNearestPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILevelOfDetailScoringCriteriaDefinition_KnowledgeBasePriority.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILevelOfDetailScoringCriteriaDefinition_KnowledgeBasePriority::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AILevelOfDetailSystem.AILevelOfDetailScoringCriteriaDefinition_KnowledgeBasePriority");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILevelOfDetailScoringCriteriaDefinition_ViewAngleOfLocalPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILevelOfDetailScoringCriteriaDefinition_ViewAngleOfLocalPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AILevelOfDetailSystem.AILevelOfDetailScoringCriteriaDefinition_ViewAngleOfLocalPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ScopedLockLevelOfDetail.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ScopedLockLevelOfDetail::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AILevelOfDetailSystem.BTDecorator_ScopedLockLevelOfDetail");
		return ptr;
	}

}


