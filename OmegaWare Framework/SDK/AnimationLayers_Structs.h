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
	 * Enum AnimationLayers.EAnimLayerRequestType
	 */
	enum class EAnimLayerRequestType : uint8_t
	{
		Enable           = 0,
		Disable          = 1,
		SpecificProvider = 2,
		MAX              = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AnimationLayers.LayerState
	 * Size -> 0x0100
	 */
	struct FLayerState
	{
	public:
		float                                                      LayerWeight;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8K0D[0x94];                                  // 0x0004(0x0094) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGuid, class ULayerWeightProvider*>            Providers;                                               // 0x0098(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EGSM[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationLayers.LayerGroupRequest
	 * Size -> 0x0050
	 */
	struct FLayerGroupRequest
	{
	public:
		TMap<class UAnimationLayer*, struct FGuid>                 LayerRequestIDs;                                         // 0x0000(0x0050) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationLayers.AnimNode_SetPropertiesFromLayerWeights
	 * Size -> 0x00B8 (FullSize[0x00C8] - InheritedSize[0x0010])
	 */
	struct FAnimNode_SetPropertiesFromLayerWeights : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Input;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TMap<class UAnimationLayer*, class FName>                  LayerPropertyNames;                                      // 0x0020(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_802D[0x58];                                  // 0x0070(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationLayers.AnimationLayerWeight
	 * Size -> 0x0004
	 */
	struct FAnimationLayerWeight
	{
	public:
		float                                                      Alpha;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationLayers.AnimNode_TwoWayBlendLayerWeight
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_TwoWayBlendLayerWeight : public FAnimNode_TwoWayBlend
	{
	public:
		class UAnimationLayer*                                     LayerDefinition;                                         // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebugAlpha;                                       // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_PTD6[0xF];                                   // 0x00D1(0x000F) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
