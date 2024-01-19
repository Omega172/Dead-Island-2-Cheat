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
	 * Enum StandinActor.EStandinType
	 */
	enum class EStandinType : uint8_t
	{
		Far  = 0,
		Near = 1,
		MAX  = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct StandinActor.ReplacementMeshSettings
	 * Size -> 0x0460
	 */
	struct FReplacementMeshSettings
	{
	public:
		EStandinType                                               ActorType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseActorMerging : 1;                                     // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFG4[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMeshMergingSettings                                MeshMergeSettings;                                       // 0x0008(0x01A0) NativeAccessSpecifierPublic
		struct FMeshProxySettings                                  Settings;                                                // 0x01A8(0x0190) Edit, NativeAccessSpecifierPublic
		struct FSimplygonAggregationSettings                       AggregationSettings;                                     // 0x0338(0x0128) Edit, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
