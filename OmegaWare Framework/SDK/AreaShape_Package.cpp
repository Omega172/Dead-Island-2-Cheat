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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAreaShapeActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAreaShapeActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AreaShape.AreaShapeActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A8ECA0
	 * 		Name   -> Function AreaShape.AreaShapeComponent.UpdateAreaBounds
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAreaShapeComponent::UpdateAreaBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AreaShape.AreaShapeComponent.UpdateAreaBounds");
		
		UAreaShapeComponent_UpdateAreaBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A8EC20
	 * 		Name   -> Function AreaShape.AreaShapeComponent.SetSphereProperties
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InRadius                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAreaShapeComponent::SetSphereProperties(float InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AreaShape.AreaShapeComponent.SetSphereProperties");
		
		UAreaShapeComponent_SetSphereProperties_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A8EBA0
	 * 		Name   -> Function AreaShape.AreaShapeComponent.SetShapeType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EAreaShapeType                                     InType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAreaShapeComponent::SetShapeType(EAreaShapeType InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AreaShape.AreaShapeComponent.SetShapeType");
		
		UAreaShapeComponent_SetShapeType_Params params {};
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A8EAA0
	 * 		Name   -> Function AreaShape.AreaShapeComponent.SetShapeProperties
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVector2D>                           InPoints                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              InHeight                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAreaShapeComponent::SetShapeProperties(TArray<struct FVector2D> InPoints, float InHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AreaShape.AreaShapeComponent.SetShapeProperties");
		
		UAreaShapeComponent_SetShapeProperties_Params params {};
		params.InPoints = InPoints;
		params.InHeight = InHeight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A8E9E0
	 * 		Name   -> Function AreaShape.AreaShapeComponent.SetCylinderProperties
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InHeight                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRadius                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAreaShapeComponent::SetCylinderProperties(float InHeight, float InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AreaShape.AreaShapeComponent.SetCylinderProperties");
		
		UAreaShapeComponent_SetCylinderProperties_Params params {};
		params.InHeight = InHeight;
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A8E8D0
	 * 		Name   -> Function AreaShape.AreaShapeComponent.SetBoxProperties
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InHeight                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InWidth                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InLength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAreaShapeComponent::SetBoxProperties(float InHeight, float InWidth, float InLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AreaShape.AreaShapeComponent.SetBoxProperties");
		
		UAreaShapeComponent_SetBoxProperties_Params params {};
		params.InHeight = InHeight;
		params.InWidth = InWidth;
		params.InLength = InLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A8E830
	 * 		Name   -> Function AreaShape.AreaShapeComponent.IsPointWithinAreaLocal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAreaShapeComponent::IsPointWithinAreaLocal(const struct FVector& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AreaShape.AreaShapeComponent.IsPointWithinAreaLocal");
		
		UAreaShapeComponent_IsPointWithinAreaLocal_Params params {};
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A8E6F0
	 * 		Name   -> Function AreaShape.AreaShapeComponent.IsPointWithinArea2D
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAreaShapeComponent::IsPointWithinArea2D(const struct FVector& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AreaShape.AreaShapeComponent.IsPointWithinArea2D");
		
		UAreaShapeComponent_IsPointWithinArea2D_Params params {};
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A8E790
	 * 		Name   -> Function AreaShape.AreaShapeComponent.IsPointWithinArea
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAreaShapeComponent::IsPointWithinArea(const struct FVector& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AreaShape.AreaShapeComponent.IsPointWithinArea");
		
		UAreaShapeComponent_IsPointWithinArea_Params params {};
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A8E5B0
	 * 		Name   -> Function AreaShape.AreaShapeComponent.IsBoxWithinArea2D
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FBox                                        Box                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAreaShapeComponent::IsBoxWithinArea2D(const struct FBox& Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AreaShape.AreaShapeComponent.IsBoxWithinArea2D");
		
		UAreaShapeComponent_IsBoxWithinArea2D_Params params {};
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A8E650
	 * 		Name   -> Function AreaShape.AreaShapeComponent.IsBoxWithinArea
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FBox                                        Box                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAreaShapeComponent::IsBoxWithinArea(const struct FBox& Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AreaShape.AreaShapeComponent.IsBoxWithinArea");
		
		UAreaShapeComponent_IsBoxWithinArea_Params params {};
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A8E590
	 * 		Name   -> Function AreaShape.AreaShapeComponent.CenterOnShape
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAreaShapeComponent::CenterOnShape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AreaShape.AreaShapeComponent.CenterOnShape");
		
		UAreaShapeComponent_CenterOnShape_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAreaShapeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAreaShapeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AreaShape.AreaShapeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAreaShapeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAreaShapeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AreaShape.AreaShapeSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCollidableAreaShapeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollidableAreaShapeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AreaShape.CollidableAreaShapeComponent");
		return ptr;
	}

}


