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
	 * Enum LevelStreaming.EEnabledState
	 */
	enum class EEnabledState : uint8_t
	{
		Enabled  = 0,
		Paused   = 1,
		Disabled = 2,
		MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LevelStreaming.StreamingLevel
	 * Size -> 0x0028
	 */
	struct FStreamingLevel
	{
	public:
		unsigned char                                              Asset[0x28];                                             // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct LevelStreaming.StreamingData
	 * Size -> 0x0098
	 */
	struct FStreamingData
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FKnowledgeBaseExpression                            LoadCondition;                                           // 0x0018(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKnowledgeBaseExpression                            ShowCondition;                                           // 0x0050(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStreamingLevel>                             Levels;                                                  // 0x0088(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LevelStreaming.LevelStreamingReplicatedState
	 * Size -> 0x0008
	 */
	struct FLevelStreamingReplicatedState
	{
	public:
		unsigned char                                              UnknownData_MOOO[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLoad;                                                   // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShow;                                                   // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EHGS[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
