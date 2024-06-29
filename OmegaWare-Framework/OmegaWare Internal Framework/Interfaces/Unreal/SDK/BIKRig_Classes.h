#pragma once

/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class BIKRig.BIKRig
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UBIKRig : public UObject
	{
	public:
		class USkeletalMesh*                                       SkeletalMesh;                                            // 0x0028(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeleton*                                           Skeleton;                                                // 0x0030(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UBIKRigJointConstraint*>                      JointConstraints;                                        // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UBIKRigJointBody*>                            JointBodies;                                             // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            MeshToSkeletonBoneMapping;                               // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PXJZ[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BIKRig.SolverSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USolverSettings : public UObject
	{
	public:
		int32_t                                                    NumberOfSubsteps;                                        // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IterationsPerSubstep;                                    // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseDirectSolve;                                          // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseCustomTimeStep;                                       // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PK62[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CustomTimeStep;                                          // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BIKRig.BIKRigJointConstraint
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UBIKRigJointConstraint : public UObject
	{
	public:
		int32_t                                                    JointIndex;                                              // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                BoneName;                                                // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VU2Q[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		class FName GetBoneName();
		static UClass* StaticClass();
	};

	/**
	 * Class BIKRig.BIKRigBallJoint
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UBIKRigBallJoint : public UBIKRigJointConstraint
	{
	public:
		struct FVector                                             TwistAxis;                                               // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLimitSwing;                                             // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0FC9[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            ConeRotation;                                            // 0x0048(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		float                                                      SwingLimit1;                                             // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SwingLimit2;                                             // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLimitTwist;                                             // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9XKP[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TwistMin;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TwistMax;                                                // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       AllowTranslation;                                        // 0x0068(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       TranslateX;                                              // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       TranslateY;                                              // 0x006A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       TranslateZ;                                              // 0x006B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             TranslationStiffnessScale;                               // 0x006C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OrientationStiffnessScale;                               // 0x0078(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XGS5[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BIKRig.BIKRigBlueprintFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBIKRigBlueprintFunctions : public UBlueprintFunctionLibrary
	{
	public:
		struct FBIKRigNodeInput STATIC_SetBIKRigGoals(struct FBIKRigNodeInput* BIKParams, TArray<class UBIKRigGoalObject*>* Goals);
		struct FVector STATIC_GetLocalMovementVector(class AActor* Owner, const struct FVector& MovementInput);
		struct FBIKRigNodeInput STATIC_FindBIKRigSolverComponentAndGoals(class AActor* Actor);
		struct FBIKRigNodeInput STATIC_FindBIKRigSolverComponent(class AActor* Actor);
		class UBIKRigTargetTransformGoalObject* STATIC_DuplicateBIKRigGoalTemplate(class UObject* Owner, class UBIKRigTargetTransformGoalObject* TemplateObject);
		void STATIC_ConfigureGoalsForFootPlacement(TArray<class UBIKRigGoalObject*>* Goals, float TargetAlpha);
		struct FBIKRigNodeInput STATIC_ClearBIKRigGoals(struct FBIKRigNodeInput* BIKParams);
		static UClass* StaticClass();
	};

	/**
	 * Class BIKRig.BIKRigGoalComponent
	 * Size -> 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
	 */
	class UBIKRigGoalComponent : public USceneComponent
	{
	public:
		class UBIKRig*                                             Rig;                                                     // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BIKRig.BIKRigGoalObject
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UBIKRigGoalObject : public UObject
	{
	public:
		class UBIKRig*                                             Rig;                                                     // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BIKRig.BIKRigHingeJoint
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UBIKRigHingeJoint : public UBIKRigJointConstraint
	{
	public:
		struct FVector                                             HingeAxis;                                               // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLimitRotation;                                          // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FY7M[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TwistMin;                                                // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TwistMax;                                                // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       TranslateX;                                              // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       TranslateY;                                              // 0x0051(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       TranslateZ;                                              // 0x0052(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EVIG[0x1];                                   // 0x0053(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TranslationStiffnessScale;                               // 0x0054(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrientationStiffnessScaleAlongJointAxis;                 // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U2LM[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BIKRig.BIKRigJointBody
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UBIKRigJointBody : public UObject
	{
	public:
		struct FVector                                             Center;                                                  // 0x0028(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Extents;                                                 // 0x0034(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Density;                                                 // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Orientation;                                             // 0x0044(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TargetPoseRotationStiffness;                             // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetPoseTranslationStiffness;                          // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationStiffnessScale;                                  // 0x0058(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TranslationStiffnessScale;                               // 0x005C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    JointIndex;                                              // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                BoneName;                                                // 0x0064(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z0JE[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		class FName GetBoneName();
		struct FTransform GetBodyLocalTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class BIKRig.BIKRigLookAtGoalComponent
	 * Size -> 0x0028 (FullSize[0x02C0] - InheritedSize[0x0298])
	 */
	class UBIKRigLookAtGoalComponent : public UBIKRigGoalComponent
	{
	public:
		struct FBIKRigBoneReference                                LookBone;                                                // 0x0298(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LocalLookDirection;                                      // 0x02A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MLN8[0x14];                                  // 0x02AC(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BIKRig.BIKRigSolverComponent
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UBIKRigSolverComponent : public UActorComponent
	{
	public:
		class UBIKRig*                                             Rig;                                                     // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetSolvedPose;                                        // 0x00F0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UT87[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)

	public:
		void ResetSolvedPose();
		static UClass* StaticClass();
	};

	/**
	 * Class BIKRig.BIKRigTargetTransformGoalComponent
	 * Size -> 0x00A8 (FullSize[0x0340] - InheritedSize[0x0298])
	 */
	class UBIKRigTargetTransformGoalComponent : public UBIKRigGoalComponent
	{
	public:
		unsigned char                                              UnknownData_QXLD[0x4];                                   // 0x0298(0x0004) Fix Super Size
		float                                                      TargetAlpha;                                             // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseActiveFadeOut;                                       // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VZP6[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBIKRigBoneReference                                EffectorBone;                                            // 0x02A4(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBIKRigBoneReference                                MinJointToModify;                                        // 0x02AC(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBIKRigBoneReference                                MaxJointToModify;                                        // 0x02B4(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bConstrainTranslation;                                   // 0x02BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConstrainOrientation;                                   // 0x02BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncreaseStability;                                      // 0x02BE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FGZR[0x1];                                   // 0x02BF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TranslationStiffness;                                    // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrientationStiffness;                                    // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TranslationMaxError;                                     // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TranslationStiffnessFadeRatio;                           // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrientationMaxError;                                     // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrientationStiffnessFadeRatio;                           // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBoneStrengthScale>                          BoneStrengthScale;                                       // 0x02D8(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V9DM[0x58];                                  // 0x02E8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BIKRig.BIKRigTargetTransformGoalObject
	 * Size -> 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
	 */
	class UBIKRigTargetTransformGoalObject : public UBIKRigGoalObject
	{
	public:
		bool                                                       TranslationIsOffsetFromEffector;                         // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OrientationIsOffsetFromEffector;                         // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BNZ9[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Location;                                                // 0x0034(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0040(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TargetAlpha;                                             // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseActiveFadeOut;                                       // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KOTH[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBIKRigBoneReference                                EffectorBone;                                            // 0x0054(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBIKRigBoneReference                                MinJointToModify;                                        // 0x005C(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBIKRigBoneReference                                MaxJointToModify;                                        // 0x0064(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bConstrainTranslation;                                   // 0x006C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConstrainOrientation;                                   // 0x006D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncreaseStability;                                      // 0x006E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1IOF[0x1];                                   // 0x006F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TranslationStiffness;                                    // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrientationStiffness;                                    // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TranslationMaxError;                                     // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TranslationStiffnessFadeRatio;                           // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrientationMaxError;                                     // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrientationStiffnessFadeRatio;                           // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBoneStrengthScale>                          BoneStrengthScale;                                       // 0x0088(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWAG[0x58];                                  // 0x0098(0x0058) MISSED OFFSET (PADDING)

	public:
		void SetupForFootPlacement(float NewTargetAlpha);
		void SetupForFlinch(const struct FVector& NewLocation, const struct FRotator& NewRotation, float TranslationAlpha, float RotationAlpha);
		void SetLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
		static UClass* StaticClass();
	};

	/**
	 * Class BIKRig.FullBodyIKOptions
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UFullBodyIKOptions : public UObject
	{
	public:
		bool                                                       DontPromptForActivationKey;                              // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FBRU[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ActivationKey;                                           // 0x0030(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
