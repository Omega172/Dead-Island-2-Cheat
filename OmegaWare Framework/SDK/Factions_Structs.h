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
	 * Enum Factions.EFactionReaction
	 */
	enum class EFactionReaction : uint8_t
	{
		Invalid  = 0,
		Unset    = 1,
		Friendly = 2,
		Neutral  = 3,
		Hostile  = 4,
		MAX      = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Factions.AgentToFactionMapping
	 * Size -> 0x0010
	 */
	struct FAgentToFactionMapping
	{
	public:
		class UFaction*                                            ToFaction;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFactionReaction                                           Reaction;                                                // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O4EM[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Factions.AgentToAgentMapping
	 * Size -> 0x000C
	 */
	struct FAgentToAgentMapping
	{
	public:
		TWeakObjectPtr<class UFactionAgentComponent>               ToAgent;                                                 // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFactionReaction                                           Reaction;                                                // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SP03[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Factions.FactionReaction
	 * Size -> 0x0018
	 */
	struct FFactionReaction
	{
	public:
		class UFaction*                                            FromFaction;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFaction*                                            ToFaction;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFactionReaction                                           Reaction;                                                // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KY0Z[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Factions.MultidirectionalFactionReaction
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMultidirectionalFactionReaction : public FTableRowBase
	{
	public:
		struct FFactionReaction                                    Reaction;                                                // 0x0008(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bBidirectional;                                          // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K19U[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
