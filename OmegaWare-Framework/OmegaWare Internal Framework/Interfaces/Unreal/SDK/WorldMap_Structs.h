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
	 * Enum WorldMap.EWorldMapState
	 */
	enum class EWorldMapState : uint8_t
	{
		Unloaded = 0,
		Building = 1,
		Ready    = 2,
		Active   = 3,
		MAX      = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WorldMap.WorldMapInstanceDatabaseEntry
	 * Size -> 0x0040
	 */
	struct FWorldMapInstanceDatabaseEntry
	{
	public:
		unsigned char                                              Mesh[0x28];                                              // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FTransform>                                  Transforms;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class FName                                                FogOfWarId;                                              // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
