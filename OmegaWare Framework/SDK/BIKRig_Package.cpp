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
	 * 		Name   -> PredefinedFunction UBIKRig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBIKRig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BIKRig.BIKRig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USolverSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USolverSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BIKRig.SolverSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BIKRig.BIKRigJointConstraint.GetBoneName
	 * 		Flags  -> ()
	 */
	class FName UBIKRigJointConstraint::GetBoneName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BIKRig.BIKRigJointConstraint.GetBoneName");
		
		UBIKRigJointConstraint_GetBoneName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBIKRigJointConstraint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBIKRigJointConstraint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BIKRig.BIKRigJointConstraint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBIKRigBallJoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBIKRigBallJoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BIKRig.BIKRigBallJoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BIKRig.BIKRigBlueprintFunctions.SetBIKRigGoals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBIKRigNodeInput                            BIKParams                                                  (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		TArray<class UBIKRigGoalObject*>                   Goals                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FBIKRigNodeInput UBIKRigBlueprintFunctions::SetBIKRigGoals(struct FBIKRigNodeInput* BIKParams, TArray<class UBIKRigGoalObject*>* Goals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BIKRig.BIKRigBlueprintFunctions.SetBIKRigGoals");
		
		UBIKRigBlueprintFunctions_SetBIKRigGoals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BIKParams != nullptr)
			*BIKParams = params.BIKParams;
		if (Goals != nullptr)
			*Goals = params.Goals;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BIKRig.BIKRigBlueprintFunctions.GetLocalMovementVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     MovementInput                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UBIKRigBlueprintFunctions::GetLocalMovementVector(class AActor* Owner, const struct FVector& MovementInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BIKRig.BIKRigBlueprintFunctions.GetLocalMovementVector");
		
		UBIKRigBlueprintFunctions_GetLocalMovementVector_Params params {};
		params.Owner = Owner;
		params.MovementInput = MovementInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BIKRig.BIKRigBlueprintFunctions.FindBIKRigSolverComponentAndGoals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBIKRigNodeInput UBIKRigBlueprintFunctions::FindBIKRigSolverComponentAndGoals(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BIKRig.BIKRigBlueprintFunctions.FindBIKRigSolverComponentAndGoals");
		
		UBIKRigBlueprintFunctions_FindBIKRigSolverComponentAndGoals_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BIKRig.BIKRigBlueprintFunctions.FindBIKRigSolverComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBIKRigNodeInput UBIKRigBlueprintFunctions::FindBIKRigSolverComponent(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BIKRig.BIKRigBlueprintFunctions.FindBIKRigSolverComponent");
		
		UBIKRigBlueprintFunctions_FindBIKRigSolverComponent_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BIKRig.BIKRigBlueprintFunctions.DuplicateBIKRigGoalTemplate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBIKRigTargetTransformGoalObject*            TemplateObject                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBIKRigTargetTransformGoalObject* UBIKRigBlueprintFunctions::DuplicateBIKRigGoalTemplate(class UObject* Owner, class UBIKRigTargetTransformGoalObject* TemplateObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BIKRig.BIKRigBlueprintFunctions.DuplicateBIKRigGoalTemplate");
		
		UBIKRigBlueprintFunctions_DuplicateBIKRigGoalTemplate_Params params {};
		params.Owner = Owner;
		params.TemplateObject = TemplateObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BIKRig.BIKRigBlueprintFunctions.ConfigureGoalsForFootPlacement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UBIKRigGoalObject*>                   Goals                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              TargetAlpha                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBIKRigBlueprintFunctions::ConfigureGoalsForFootPlacement(TArray<class UBIKRigGoalObject*>* Goals, float TargetAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BIKRig.BIKRigBlueprintFunctions.ConfigureGoalsForFootPlacement");
		
		UBIKRigBlueprintFunctions_ConfigureGoalsForFootPlacement_Params params {};
		params.TargetAlpha = TargetAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Goals != nullptr)
			*Goals = params.Goals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BIKRig.BIKRigBlueprintFunctions.ClearBIKRigGoals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBIKRigNodeInput                            BIKParams                                                  (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FBIKRigNodeInput UBIKRigBlueprintFunctions::ClearBIKRigGoals(struct FBIKRigNodeInput* BIKParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BIKRig.BIKRigBlueprintFunctions.ClearBIKRigGoals");
		
		UBIKRigBlueprintFunctions_ClearBIKRigGoals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BIKParams != nullptr)
			*BIKParams = params.BIKParams;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBIKRigBlueprintFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBIKRigBlueprintFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BIKRig.BIKRigBlueprintFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBIKRigGoalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBIKRigGoalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BIKRig.BIKRigGoalComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBIKRigGoalObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBIKRigGoalObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BIKRig.BIKRigGoalObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBIKRigHingeJoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBIKRigHingeJoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BIKRig.BIKRigHingeJoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BIKRig.BIKRigJointBody.GetBoneName
	 * 		Flags  -> ()
	 */
	class FName UBIKRigJointBody::GetBoneName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BIKRig.BIKRigJointBody.GetBoneName");
		
		UBIKRigJointBody_GetBoneName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BIKRig.BIKRigJointBody.GetBodyLocalTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UBIKRigJointBody::GetBodyLocalTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BIKRig.BIKRigJointBody.GetBodyLocalTransform");
		
		UBIKRigJointBody_GetBodyLocalTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBIKRigJointBody.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBIKRigJointBody::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BIKRig.BIKRigJointBody");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBIKRigLookAtGoalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBIKRigLookAtGoalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BIKRig.BIKRigLookAtGoalComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BIKRig.BIKRigSolverComponent.ResetSolvedPose
	 * 		Flags  -> ()
	 */
	void UBIKRigSolverComponent::ResetSolvedPose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BIKRig.BIKRigSolverComponent.ResetSolvedPose");
		
		UBIKRigSolverComponent_ResetSolvedPose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBIKRigSolverComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBIKRigSolverComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BIKRig.BIKRigSolverComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBIKRigTargetTransformGoalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBIKRigTargetTransformGoalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BIKRig.BIKRigTargetTransformGoalComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BIKRig.BIKRigTargetTransformGoalObject.SetupForFootPlacement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewTargetAlpha                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBIKRigTargetTransformGoalObject::SetupForFootPlacement(float NewTargetAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BIKRig.BIKRigTargetTransformGoalObject.SetupForFootPlacement");
		
		UBIKRigTargetTransformGoalObject_SetupForFootPlacement_Params params {};
		params.NewTargetAlpha = NewTargetAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BIKRig.BIKRigTargetTransformGoalObject.SetupForFlinch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              TranslationAlpha                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RotationAlpha                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBIKRigTargetTransformGoalObject::SetupForFlinch(const struct FVector& NewLocation, const struct FRotator& NewRotation, float TranslationAlpha, float RotationAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BIKRig.BIKRigTargetTransformGoalObject.SetupForFlinch");
		
		UBIKRigTargetTransformGoalObject_SetupForFlinch_Params params {};
		params.NewLocation = NewLocation;
		params.NewRotation = NewRotation;
		params.TranslationAlpha = TranslationAlpha;
		params.RotationAlpha = RotationAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BIKRig.BIKRigTargetTransformGoalObject.SetLocationAndRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBIKRigTargetTransformGoalObject::SetLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BIKRig.BIKRigTargetTransformGoalObject.SetLocationAndRotation");
		
		UBIKRigTargetTransformGoalObject_SetLocationAndRotation_Params params {};
		params.NewLocation = NewLocation;
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBIKRigTargetTransformGoalObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBIKRigTargetTransformGoalObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BIKRig.BIKRigTargetTransformGoalObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFullBodyIKOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFullBodyIKOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BIKRig.FullBodyIKOptions");
		return ptr;
	}

}


