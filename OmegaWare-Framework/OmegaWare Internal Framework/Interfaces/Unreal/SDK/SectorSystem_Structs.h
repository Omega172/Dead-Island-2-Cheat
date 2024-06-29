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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SectorSystem.EEdgeDirection
	 */
	enum class EEdgeDirection : uint8_t
	{
		Bidirectional = 0,
		AToB          = 1,
		BToA          = 2,
		MAX           = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SectorSystem.PathfindingResultWrapper
	 * Size -> 0x0018
	 */
	struct FPathfindingResultWrapper
	{
	public:
		unsigned char                                              UnknownData_PRG2[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TWeakObjectPtr<class USectorGatewayComponent>>      Path;                                                    // 0x0008(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SectorSystem.ConditionalSectorGatewayWeightMultiplier
	 * Size -> 0x0068
	 */
	struct FConditionalSectorGatewayWeightMultiplier
	{
	public:
		struct FScopedKnowledgeBaseExpressionListener              EnableExpressionListener;                                // 0x0000(0x0060) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bIgnoreSectorGateway;                                    // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_80ZB[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ConditionalWeightMultiplier;                             // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct SectorSystem.SectorNameRow
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FSectorNameRow : public FTableRowBase
	{
	public:
		class FText                                                DisplayName;                                             // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SectorSystem.SectorGroupRow
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FSectorGroupRow : public FTableRowBase
	{
	public:
		class FString                                              SectorGroupName;                                         // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
