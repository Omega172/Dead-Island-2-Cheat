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
	 * 		Name   -> PredefinedFunction USpatialObjectCoordinator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpatialObjectCoordinator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.SpatialObjectCoordinator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction U2DGridSpatialObjectCoordinator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* U2DGridSpatialObjectCoordinator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.2DGridSpatialObjectCoordinator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveCellCalculator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveCellCalculator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.ActiveCellCalculator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDistanceFromNearestCameraActiveCellCalculator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDistanceFromNearestCameraActiveCellCalculator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.DistanceFromNearestCameraActiveCellCalculator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAmortizedUpdateManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmortizedUpdateManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.AmortizedUpdateManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaxCountEnforcementHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaxCountEnforcementHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.MaxCountEnforcementHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDestroyObjectsMaxCountEnforcementHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDestroyObjectsMaxCountEnforcementHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.DestroyObjectsMaxCountEnforcementHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadBalancing.ObjectCountCoordinator.OnManagedObjectBudgetUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULoadBalancedFeature*                        Feature                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PreviousCount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UObjectCountCoordinator::OnManagedObjectBudgetUpdated(class ULoadBalancedFeature* Feature, int32_t PreviousCount, int32_t NewCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadBalancing.ObjectCountCoordinator.OnManagedObjectBudgetUpdated");
		
		UObjectCountCoordinator_OnManagedObjectBudgetUpdated_Params params {};
		params.Feature = Feature;
		params.PreviousCount = PreviousCount;
		params.NewCount = NewCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectCountCoordinator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectCountCoordinator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.ObjectCountCoordinator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFIFOObjectCountCoordinator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFIFOObjectCountCoordinator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.FIFOObjectCountCoordinator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadBalancedFeature.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadBalancedFeature::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.LoadBalancedFeature");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadBalancing.LoadBalancingManager.UnregisterLoadBalancingFeature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULoadBalancedFeature*                        Feature                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALoadBalancingManager::UnregisterLoadBalancingFeature(class ULoadBalancedFeature* Feature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadBalancing.LoadBalancingManager.UnregisterLoadBalancingFeature");
		
		ALoadBalancingManager_UnregisterLoadBalancingFeature_Params params {};
		params.Feature = Feature;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadBalancing.LoadBalancingManager.RegisterLoadBalancingFeature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULoadBalancedFeature*                        Feature                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALoadBalancingManager::RegisterLoadBalancingFeature(class ULoadBalancedFeature* Feature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadBalancing.LoadBalancingManager.RegisterLoadBalancingFeature");
		
		ALoadBalancingManager_RegisterLoadBalancingFeature_Params params {};
		params.Feature = Feature;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALoadBalancingManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALoadBalancingManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.LoadBalancingManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectBehaviourComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectBehaviourComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.ObjectBehaviourComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadBalancing.ObjectBehaviourManager.OnManagedObjectBudgetUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULoadBalancedFeature*                        Feature                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PreviousCount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AObjectBehaviourManager::OnManagedObjectBudgetUpdated(class ULoadBalancedFeature* Feature, int32_t PreviousCount, int32_t NewCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadBalancing.ObjectBehaviourManager.OnManagedObjectBudgetUpdated");
		
		AObjectBehaviourManager_OnManagedObjectBudgetUpdated_Params params {};
		params.Feature = Feature;
		params.PreviousCount = PreviousCount;
		params.NewCount = NewCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AObjectBehaviourManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AObjectBehaviourManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.ObjectBehaviourManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadBalancing.ObjectBudgetManager.OnManagedObjectBudgetUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULoadBalancedFeature*                        Feature                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PreviousCount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AObjectBudgetManager::OnManagedObjectBudgetUpdated(class ULoadBalancedFeature* Feature, int32_t PreviousCount, int32_t NewCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadBalancing.ObjectBudgetManager.OnManagedObjectBudgetUpdated");
		
		AObjectBudgetManager_OnManagedObjectBudgetUpdated_Params params {};
		params.Feature = Feature;
		params.PreviousCount = PreviousCount;
		params.NewCount = NewCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AObjectBudgetManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AObjectBudgetManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.ObjectBudgetManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPriorityOrderedObjectCountCoordinator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPriorityOrderedObjectCountCoordinator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.PriorityOrderedObjectCountCoordinator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadBalancing.ObjectScoreGenerator.GenerateScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBudgetedObjectInfo                         ObjectInfo                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Viewport                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UObjectScoreGenerator::GenerateScore(const struct FBudgetedObjectInfo& ObjectInfo, struct FTransform* Viewport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadBalancing.ObjectScoreGenerator.GenerateScore");
		
		UObjectScoreGenerator_GenerateScore_Params params {};
		params.ObjectInfo = ObjectInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Viewport != nullptr)
			*Viewport = params.Viewport;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectScoreGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectScoreGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.ObjectScoreGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDistanceToClosestCameraScoreGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDistanceToClosestCameraScoreGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.DistanceToClosestCameraScoreGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScalableCountLoadBalancedFeature.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScalableCountLoadBalancedFeature::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadBalancing.ScalableCountLoadBalancedFeature");
		return ptr;
	}

}


