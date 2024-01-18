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
	 * Enum AILevelOfDetailSystem.EAILevelOfDetailError
	 */
	enum class EAILevelOfDetailError : uint8_t
	{
		Success                    = 0,
		InvalidAgent               = 1,
		InvalidWorldState          = 2,
		UnsupportedFeature         = 3,
		UnsupportedScoringCriteria = 4,
		MAX                        = 5
	};

	/**
	 * Enum AILevelOfDetailSystem.EScoringCriteriaViewAngleMode
	 */
	enum class EScoringCriteriaViewAngleMode : uint8_t
	{
		ExplicitAngleRange = 0,
		FOVMultiplier      = 1,
		MAX                = 2
	};

	/**
	 * Enum AILevelOfDetailSystem.ECostOrBenefit
	 */
	enum class ECostOrBenefit : uint8_t
	{
		Cost    = 0,
		Benefit = 1,
		MAX     = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AILevelOfDetailSystem.AILevelOfDetailDefinition
	 * Size -> 0x0010
	 */
	struct FAILevelOfDetailDefinition
	{
	public:
		TArray<class UAILevelOfDetailFeature*>                     FeatureTemplates;                                        // 0x0000(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AILevelOfDetailSystem.AILevelOfDetailPreTickFunction
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FAILevelOfDetailPreTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_VGD7[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
