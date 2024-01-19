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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DSWater.DSUnderwaterPostProcessSettings
	 * Size -> 0x07B0
	 */
	struct FDSUnderwaterPostProcessSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NTAQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Priority;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendRadius;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendWeight;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPostProcessSettings                                PostProcessSettings;                                     // 0x0010(0x07A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSWater.DSWaterBuoyancyParams
	 * Size -> 0x000C
	 */
	struct FDSWaterBuoyancyParams
	{
	public:
		float                                                      BuoyancyScale;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LinearDrag;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NonLinearDrag;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSWater.DSWaterBuoyancyBox
	 * Size -> 0x002C
	 */
	struct FDSWaterBuoyancyBox
	{
	public:
		class FName                                                BoneNameOrComp;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Centre;                                                  // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0014(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Extents;                                                 // 0x0020(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSWater.DSBuoyancyData
	 * Size -> 0x0030
	 */
	struct FDSBuoyancyData
	{
	public:
		struct FDSWaterBuoyancyParams                              Params;                                                  // 0x0000(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAutoCalculateBuoyancyScaleFromMaterials;                // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UKX8[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDSWaterBuoyancyBox>                         BoxPrimitives;                                           // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      WaterFindHeightExpand;                                   // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Trim;                                                    // 0x0024(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSWater.DSWaterBuoyancyPhysicalSurface
	 * Size -> 0x000C
	 */
	struct FDSWaterBuoyancyPhysicalSurface
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BuoyancyDenistyScale;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSWater.DSWaterBuoyancySettings
	 * Size -> 0x0058
	 */
	struct FDSWaterBuoyancySettings
	{
	public:
		float                                                      RippleMoveSpeedInvSpring;                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RippleRequiredMoveDamper;                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RippleEmitTimer;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RippleAngularVelMultiplier;                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ViewSleepDistance;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ViewDistanceWake;                                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDSWaterBuoyancyPhysicalSurface>             Surfaces;                                                // 0x0018(0x0010) Edit, EditFixedSize, ZeroConstructor, NoClear, NativeAccessSpecifierPublic
		float                                                      MinSplashAtSpeed;                                        // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSplashAtSpeed;                                        // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TinySplashName;                                          // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SmallSplashName;                                         // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MediumSplashName;                                        // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LargeSplashName;                                         // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapsuleWalkingRippleScale;                               // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3R11[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSWater.DSWaterSimTarget
	 * Size -> 0x0010
	 */
	struct FDSWaterSimTarget
	{
	public:
		unsigned char                                              UnknownData_1BYR[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSWater.BuoyancyTaskInfo
	 * Size -> 0x0060
	 */
	struct FBuoyancyTaskInfo
	{
	public:
		unsigned char                                              UnknownData_5EJ8[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSWater.DSWaterImmersedObject
	 * Size -> 0x0070
	 */
	struct FDSWaterImmersedObject
	{
	public:
		unsigned char                                              UnknownData_NUWV[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSWater.DSWaterImmersedComponent
	 * Size -> 0x0070
	 */
	struct FDSWaterImmersedComponent
	{
	public:
		unsigned char                                              UnknownData_1T6Y[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSWater.DSWaterBuoyancyPrimitive
	 * Size -> 0x0098
	 */
	struct FDSWaterBuoyancyPrimitive
	{
	public:
		unsigned char                                              UnknownData_VXML[0x98];                                  // 0x0000(0x0098) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSWater.DSWaterSplashEffectRequest
	 * Size -> 0x0038
	 */
	struct FDSWaterSplashEffectRequest
	{
	public:
		class FName                                                VariationName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Pos;                                                     // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1PLS[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   WaterPhysicsMaterial;                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
