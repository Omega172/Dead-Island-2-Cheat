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
	 * Enum MissionSystem.EMissionState
	 */
	enum class EMissionState : uint8_t
	{
		Waiting  = 0,
		Started  = 1,
		Complete = 2,
		Failed   = 3,
		MAX      = 4
	};

	/**
	 * Enum MissionSystem.EObjectiveState
	 */
	enum class EObjectiveState : uint8_t
	{
		Waiting  = 0,
		Started  = 1,
		Complete = 2,
		Failed   = 3,
		Stopped  = 4,
		Count    = 5,
		MAX      = 6
	};

	/**
	 * Enum MissionSystem.EObjectiveAbandonmentType
	 */
	enum class EObjectiveAbandonmentType : uint8_t
	{
		None     = 0,
		SoftLock = 1,
		HardLock = 2,
		MAX      = 3
	};

	/**
	 * Enum MissionSystem.EFailureResponseWorld
	 */
	enum class EFailureResponseWorld : uint8_t
	{
		None      = 0,
		SoftReset = 1,
		Rollback  = 2,
		MAX       = 3
	};

	/**
	 * Enum MissionSystem.EFailureResponseMission
	 */
	enum class EFailureResponseMission : uint8_t
	{
		None     = 0,
		Rollback = 1,
		MAX      = 2
	};

	/**
	 * Enum MissionSystem.EFailureResponsePlayer
	 */
	enum class EFailureResponsePlayer : uint8_t
	{
		None     = 0,
		Teleport = 1,
		Respawn  = 2,
		MAX      = 3
	};

	/**
	 * Enum MissionSystem.ELinkDirection
	 */
	enum class ELinkDirection : uint8_t
	{
		EPD_Input  = 0,
		EPD_Output = 1,
		EPD_MAX    = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MissionSystem.MissionNodeComment
	 * Size -> 0x0018
	 */
	struct FMissionNodeComment
	{
	public:
		class FString                                              Comment;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PosX;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PosY;                                                    // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MissionSystem.NodeLinksArray
	 * Size -> 0x0018
	 */
	struct FNodeLinksArray
	{
	public:
		ELinkDirection                                             Direction;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7OOM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObjectiveFlowNode*>                          Nodes;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MissionSystem.ObjectiveHardFailResponses
	 * Size -> 0x0008
	 */
	struct FObjectiveHardFailResponses
	{
	public:
		EFailureResponseMission                                    MissionResponse;                                         // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5O40[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EFailureResponseWorld                                      WorldResponse;                                           // 0x0004(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WTQP[0x3];                                   // 0x0005(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct MissionSystem.ObjectiveAbandonmentResponse
	 * Size -> 0x0004
	 */
	struct FObjectiveAbandonmentResponse
	{
	public:
		EObjectiveAbandonmentType                                  AbandonmentType;                                         // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1U8[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct MissionSystem.ObjectiveFailureResponseSettings
	 * Size -> 0x000C
	 */
	struct FObjectiveFailureResponseSettings
	{
	public:
		struct FObjectiveHardFailResponses                         PlayersNeedRespawnResponses;                             // 0x0000(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FObjectiveAbandonmentResponse                       AbandonmentResponse;                                     // 0x0008(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MissionSystem.DebugSkipPath
	 * Size -> 0x0018
	 */
	struct FDebugSkipPath
	{
	public:
		class UDebugSkipPathShortcut*                              Shortcut;                                                // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UObjectiveData*>                              Path;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MissionSystem.DebugSkipPathContainer
	 * Size -> 0x0050
	 */
	struct FDebugSkipPathContainer
	{
	public:
		TMap<class FString, struct FDebugSkipPath>                 DebugSkipPaths;                                          // 0x0000(0x0050) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MissionSystem.MissionTelemetryEvent
	 * Size -> 0x0030 (FullSize[0x0040] - InheritedSize[0x0010])
	 */
	struct FMissionTelemetryEvent : public FDSOnline_FTelemetryEvent
	{
	public:
		class FText                                                DisplayName;                                             // 0x0010(0x0018) NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMissionState                                              State;                                                   // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0J8P[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MissionSystem.ObjectiveTelemetryEvent
	 * Size -> 0x0030 (FullSize[0x0040] - InheritedSize[0x0010])
	 */
	struct FObjectiveTelemetryEvent : public FDSOnline_FTelemetryEvent
	{
	public:
		class FText                                                DisplayName;                                             // 0x0010(0x0018) NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EObjectiveState                                            State;                                                   // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1L9F[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
