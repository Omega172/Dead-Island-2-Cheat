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
	 * 		RVA    -> 0x00DB0870
	 * 		Name   -> Function DSWater.DSWaterBodyComponent.SetLinkedAreaComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAreaShapeComponent*                         CompIn                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSWaterBodyComponent::SetLinkedAreaComponent(class UAreaShapeComponent* CompIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSWater.DSWaterBodyComponent.SetLinkedAreaComponent");
		
		UDSWaterBodyComponent_SetLinkedAreaComponent_Params params {};
		params.CompIn = CompIn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DB0730
	 * 		Name   -> Function DSWater.DSWaterBodyComponent.OnEndOverlap
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSWaterBodyComponent::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSWater.DSWaterBodyComponent.OnEndOverlap");
		
		UDSWaterBodyComponent_OnEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DB0530
	 * 		Name   -> Function DSWater.DSWaterBodyComponent.OnBeginOverlap
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UDSWaterBodyComponent::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSWater.DSWaterBodyComponent.OnBeginOverlap");
		
		UDSWaterBodyComponent_OnBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DB04D0
	 * 		Name   -> Function DSWater.DSWaterBodyComponent.GetLinkedAreaComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UAreaShapeComponent* UDSWaterBodyComponent::GetLinkedAreaComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSWater.DSWaterBodyComponent.GetLinkedAreaComponent");
		
		UDSWaterBodyComponent_GetLinkedAreaComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSWaterBodyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSWaterBodyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSWater.DSWaterBodyComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DB08F0
	 * 		Name   -> Function DSWater.DSWaterBuoyancyComponent.SetSimulatingPrimitive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         PrimComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSWaterBuoyancyComponent::SetSimulatingPrimitive(class UPrimitiveComponent* PrimComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSWater.DSWaterBuoyancyComponent.SetSimulatingPrimitive");
		
		UDSWaterBuoyancyComponent_SetSimulatingPrimitive_Params params {};
		params.PrimComp = PrimComp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DB04B0
	 * 		Name   -> Function DSWater.DSWaterBuoyancyComponent.GetImmersedDepth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UDSWaterBuoyancyComponent::GetImmersedDepth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSWater.DSWaterBuoyancyComponent.GetImmersedDepth");
		
		UDSWaterBuoyancyComponent_GetImmersedDepth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSWaterBuoyancyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSWaterBuoyancyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSWater.DSWaterBuoyancyComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSWaterBuoyancyManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSWaterBuoyancyManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSWater.DSWaterBuoyancyManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSWaterSubsystemSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSWaterSubsystemSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSWater.DSWaterSubsystemSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DB0500
	 * 		Name   -> Function DSWater.DSWaterSubsystem.IsUnderwaterPostProcessEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDSWaterSubsystem::IsUnderwaterPostProcessEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSWater.DSWaterSubsystem.IsUnderwaterPostProcessEnabled");
		
		UDSWaterSubsystem_IsUnderwaterPostProcessEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DB0490
	 * 		Name   -> Function DSWater.DSWaterSubsystem.GetCameraUnderwaterDepth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UDSWaterSubsystem::GetCameraUnderwaterDepth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSWater.DSWaterSubsystem.GetCameraUnderwaterDepth");
		
		UDSWaterSubsystem_GetCameraUnderwaterDepth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DB0370
	 * 		Name   -> Function DSWater.DSWaterSubsystem.ApplyForceAtLocation
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SizePercent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSWaterSubsystem::ApplyForceAtLocation(float Strength, float SizePercent, const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSWater.DSWaterSubsystem.ApplyForceAtLocation");
		
		UDSWaterSubsystem_ApplyForceAtLocation_Params params {};
		params.Strength = Strength;
		params.SizePercent = SizePercent;
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSWaterSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSWaterSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSWater.DSWaterSubsystem");
		return ptr;
	}

}


