#pragma once

/**
 * Name: Dead_Island_2
 * Version: Cracked
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BIKRig.BIKRigJointConstraint.GetBoneName
	 */
	struct UBIKRigJointConstraint_GetBoneName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BIKRig.BIKRigBlueprintFunctions.SetBIKRigGoals
	 */
	struct UBIKRigBlueprintFunctions_SetBIKRigGoals_Params
	{
	public:
		struct FBIKRigNodeInput                                    BIKParams;                                               // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		TArray<class UBIKRigGoalObject*>                           Goals;                                                   // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FBIKRigNodeInput                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BIKRig.BIKRigBlueprintFunctions.GetLocalMovementVector
	 */
	struct UBIKRigBlueprintFunctions_GetLocalMovementVector_Params
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             MovementInput;                                           // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BIKRig.BIKRigBlueprintFunctions.FindBIKRigSolverComponentAndGoals
	 */
	struct UBIKRigBlueprintFunctions_FindBIKRigSolverComponentAndGoals_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBIKRigNodeInput                                    ReturnValue;                                             // 0x0008(0x0038)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BIKRig.BIKRigBlueprintFunctions.FindBIKRigSolverComponent
	 */
	struct UBIKRigBlueprintFunctions_FindBIKRigSolverComponent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBIKRigNodeInput                                    ReturnValue;                                             // 0x0008(0x0038)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BIKRig.BIKRigBlueprintFunctions.DuplicateBIKRigGoalTemplate
	 */
	struct UBIKRigBlueprintFunctions_DuplicateBIKRigGoalTemplate_Params
	{
	public:
		class UObject*                                             Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UBIKRigTargetTransformGoalObject*                    TemplateObject;                                          // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UBIKRigTargetTransformGoalObject*                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BIKRig.BIKRigBlueprintFunctions.ConfigureGoalsForFootPlacement
	 */
	struct UBIKRigBlueprintFunctions_ConfigureGoalsForFootPlacement_Params
	{
	public:
		TArray<class UBIKRigGoalObject*>                           Goals;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      TargetAlpha;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BIKRig.BIKRigBlueprintFunctions.ClearBIKRigGoals
	 */
	struct UBIKRigBlueprintFunctions_ClearBIKRigGoals_Params
	{
	public:
		struct FBIKRigNodeInput                                    BIKParams;                                               // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FBIKRigNodeInput                                    ReturnValue;                                             // 0x0038(0x0038)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BIKRig.BIKRigJointBody.GetBoneName
	 */
	struct UBIKRigJointBody_GetBoneName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BIKRig.BIKRigJointBody.GetBodyLocalTransform
	 */
	struct UBIKRigJointBody_GetBodyLocalTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BIKRig.BIKRigSolverComponent.ResetSolvedPose
	 */
	struct UBIKRigSolverComponent_ResetSolvedPose_Params
	{	};

	/**
	 * Function BIKRig.BIKRigTargetTransformGoalObject.SetupForFootPlacement
	 */
	struct UBIKRigTargetTransformGoalObject_SetupForFootPlacement_Params
	{
	public:
		float                                                      NewTargetAlpha;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BIKRig.BIKRigTargetTransformGoalObject.SetupForFlinch
	 */
	struct UBIKRigTargetTransformGoalObject_SetupForFlinch_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            NewRotation;                                             // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      TranslationAlpha;                                        // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RotationAlpha;                                           // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BIKRig.BIKRigTargetTransformGoalObject.SetLocationAndRotation
	 */
	struct UBIKRigTargetTransformGoalObject_SetLocationAndRotation_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            NewRotation;                                             // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
