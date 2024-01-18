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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ProceduralAnimationNodes.ETwistAxis
	 */
	enum class ETwistAxis : uint8_t
	{
		XAxis = 0,
		YAxis = 1,
		ZAxis = 2,
		MAX   = 3
	};

	/**
	 * Enum ProceduralAnimationNodes.EConeReaderOutput
	 */
	enum class EConeReaderOutput : uint8_t
	{
		OutX         = 0,
		OutNegX      = 1,
		OutY         = 2,
		OutNegY      = 3,
		OutTwist     = 4,
		OutNegTwist  = 5,
		SimpleOutput = 6,
		Count        = 7,
		None         = 8,
		MAX          = 9
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ProceduralAnimationNodes.RigidBodyAnimNodeData
	 * Size -> 0x0020
	 */
	struct FRigidBodyAnimNodeData
	{
	public:
		class UPhysicsAsset*                                       PhysicsAsset;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseOnlyPhysicsRotations;                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S7TH[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OverrideWorldGravity;                                    // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideWorldGravity;                                   // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z0XY[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProceduralAnimationNodes.PoseBlenderInput
	 * Size -> 0x0010
	 */
	struct FPoseBlenderInput
	{
	public:
		class FName                                                ConeName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConeIndex;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConeReaderOutput                                          ConeOutput;                                              // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4D00[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProceduralAnimationNodes.PoseBlenderPose
	 * Size -> 0x0060
	 */
	struct FPoseBlenderPose
	{
	public:
		class FName                                                PoseName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPoseBlenderInput>                           Inputs;                                                  // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CN00[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMatrix                                             Matrix;                                                  // 0x0020(0x0040) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProceduralAnimationNodes.FabrikCustomSettings
	 * Size -> 0x0020
	 */
	struct FFabrikCustomSettings
	{
	public:
		EBoneControlSpace                                          EffectorTransformSpace;                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TD6L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                EffectorTargetName;                                      // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEffectorTargetUseSocket;                                // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PCTT[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TipBoneName;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RootBoneName;                                            // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProceduralAnimationNodes.AnimNode_DataDrivenFabrik
	 * Size -> 0x01C8 (FullSize[0x0290] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_DataDrivenFabrik : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_JADO[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          EffectorTransform;                                       // 0x00D0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		EBoneRotationSource                                        EffectorRotationSource;                                  // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HYOJ[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Precision;                                               // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxIterations;                                           // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFabrikCustomSettings                               SettingsData;                                            // 0x010C(0x0020) Edit, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AXR2[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoneSocketTarget>                           CachedBoneSocketTargets;                                 // 0x0130(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FBoneReference>                              CachedBoneReferences;                                    // 0x0140(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bEnableDebugDraw;                                        // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A5DR[0xF];                                   // 0x0151(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   FallbackEffectorTarget;                                  // 0x0160(0x0060) NoDestructor, NativeAccessSpecifierPrivate
		struct FBoneReference                                      FallbackTipBone;                                         // 0x01C0(0x0010) NoDestructor, NativeAccessSpecifierPrivate
		struct FBoneReference                                      FallbackRootBone;                                        // 0x01D0(0x0010) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C1CU[0xB0];                                  // 0x01E0(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProceduralAnimationNodes.AnimNode_RigidBodyAnim
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_RigidBodyAnim : public FAnimNode_SkeletalControlBase
	{
	public:
		TArray<struct FAnimNode_RigidBody>                         Simulations;                                             // 0x00C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProceduralAnimationNodes.AnimNode_SmartBoneDriver
	 * Size -> 0x0088 (FullSize[0x0150] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_SmartBoneDriver : public FAnimNode_SkeletalControlHelper
	{
	public:
		class USmartBoneDriverAsset*                               ModifierData;                                            // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UPQ5[0x80];                                  // 0x00D0(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProceduralAnimationNodes.AnimNode_VectorBoneDrivenController
	 * Size -> 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_VectorBoneDrivenController : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x00C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		EComponentType                                             SourceComponent;                                         // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D44S[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        DrivingCurve;                                            // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Multiplier;                                              // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRange;                                               // 0x00EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TT3R[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RangeMin;                                                // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RangeMax;                                                // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMin;                                             // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMax;                                             // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDrivenDestinationMode                                     DestinationMode;                                         // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVMN[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParameterName;                                           // 0x0104(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      TargetBone;                                              // 0x010C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		EComponentType                                             TargetComponent;                                         // 0x011C(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6T32[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAffectTargetTranslationX : 1;                           // 0x0120(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetTranslationY : 1;                           // 0x0120(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetTranslationZ : 1;                           // 0x0120(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetRotationX : 1;                              // 0x0120(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetRotationY : 1;                              // 0x0120(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetRotationZ : 1;                              // 0x0120(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetScaleX : 1;                                 // 0x0120(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetScaleY : 1;                                 // 0x0120(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetScaleZ : 1;                                 // 0x0121(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_92F7[0x2];                                   // 0x0122(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EDrivenBoneModificationMode                                ModificationMode;                                        // 0x0124(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4MI8[0x3];                                   // 0x0125(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
