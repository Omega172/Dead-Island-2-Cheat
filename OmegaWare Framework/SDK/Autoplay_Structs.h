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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Autoplay.AutoplayEventSerializableDataBase
	 * Size -> 0x0000
	 */
	struct FAutoplayEventSerializableDataBase
	{	};

	/**
	 * ScriptStruct Autoplay.AutoplayAttackTargetEventSerializableData
	 * Size -> 0x0018
	 */
	struct FAutoplayAttackTargetEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		class FName                                                TargetName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SearchAreaOrigin;                                        // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SearchAreaRadius;                                        // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayBeginCrouchEventSerializableData
	 * Size -> 0x000C
	 */
	struct FAutoplayBeginCrouchEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		struct FVector                                             CrouchPosition;                                          // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayChallengeEventSerializableData
	 * Size -> 0x0018
	 */
	struct FAutoplayChallengeEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		class FString                                              Challenge;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Tier;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExpectedOutcome;                                        // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0KQT[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Autoplay.AutoplayCvarEventSerializableData
	 * Size -> 0x0010
	 */
	struct FAutoplayCvarEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayDeathAndRespawnEventSerializableData
	 * Size -> 0x000C
	 */
	struct FAutoplayDeathAndRespawnEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayEndCrouchEventSerializableData
	 * Size -> 0x000C
	 */
	struct FAutoplayEndCrouchEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		struct FVector                                             CrouchPosition;                                          // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayFollowHostEventSerializableData
	 * Size -> 0x0001
	 */
	struct FAutoplayFollowHostEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		bool                                                       bAttackTargets;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayIdleEventSerializableData
	 * Size -> 0x0010
	 */
	struct FAutoplayIdleEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayIncludeScriptEventSerializableData
	 * Size -> 0x0010
	 */
	struct FAutoplayIncludeScriptEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		class FString                                              ScriptPath;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayInteractPressedEventSerializableData
	 * Size -> 0x0040
	 */
	struct FAutoplayInteractPressedEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		class FName                                                InputActionName;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                InteractActorName;                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractActorOriginalLoc;                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlayerPosInInteractActorSpace;                           // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractPosInInteractActorSpace;                         // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            PlayerViewRotation;                                      // 0x0034(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayJumpEventSerializableData
	 * Size -> 0x0018
	 */
	struct FAutoplayJumpEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		struct FRotator                                            ViewRotation;                                            // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             JumpLocation;                                            // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayKeyInputEventSerializableData
	 * Size -> 0x0024
	 */
	struct FAutoplayKeyInputEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		struct FRotator                                            ViewRotation;                                            // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActionName;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PressTime;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayKeyInputEventTwoSerializableData
	 * Size -> 0x0030
	 */
	struct FAutoplayKeyInputEventTwoSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		struct FRotator                                            ViewRotation;                                            // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActionNameOne;                                           // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActionNameTwo;                                           // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PressTime;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayTime;                                               // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayKickEventSerializableData
	 * Size -> 0x0018
	 */
	struct FAutoplayKickEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		struct FRotator                                            ViewRotation;                                            // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             KickLocation;                                            // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayLedgeGrabbedEventSerializableData
	 * Size -> 0x0024
	 */
	struct FAutoplayLedgeGrabbedEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		struct FVector                                             LedgeAnchorLoc;                                          // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            ViewRotation;                                            // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             JumpLocation;                                            // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayNavWaypointDroppedEventSerializableData
	 * Size -> 0x000C
	 */
	struct FAutoplayNavWaypointDroppedEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		struct FVector                                             NavWaypointPos;                                          // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayNewObjectiveEventSerializableData
	 * Size -> 0x0010
	 */
	struct FAutoplayNewObjectiveEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		class FString                                              ObjectiveDataPath;                                       // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayScreenshotEventSerializableData
	 * Size -> 0x0028
	 */
	struct FAutoplayScreenshotEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		struct FRotator                                            ViewRotation;                                            // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayTransitionCinematicEventSerializableData
	 * Size -> 0x0001
	 */
	struct FAutoplayTransitionCinematicEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		unsigned char                                              UnknownData_7UZW[0x1];                                   // 0x0000(0x0001) Fix Super Size
	};

	/**
	 * ScriptStruct Autoplay.AutoplayWaitForClientDisconnectEventSerializableData
	 * Size -> 0x0004
	 */
	struct FAutoplayWaitForClientDisconnectEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		float                                                      Timeout;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayWaitForPlayersEventSerializableData
	 * Size -> 0x0008
	 */
	struct FAutoplayWaitForPlayersEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		int32_t                                                    RequiredNumberOfPlayers;                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Timeout;                                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayWaypointDroppedEventSerializableData
	 * Size -> 0x000C
	 */
	struct FAutoplayWaypointDroppedEventSerializableData : public FAutoplayEventSerializableDataBase
	{
	public:
		struct FVector                                             WaypointPos;                                             // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayReportEvent
	 * Size -> 0x0020
	 */
	struct FAutoplayReportEvent
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayReportMessageEntry
	 * Size -> 0x0020
	 */
	struct FAutoplayReportMessageEntry
	{
	public:
		struct FAutoplayReportEvent                                Event;                                                   // 0x0000(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Autoplay.AutoplayReportData
	 * Size -> 0x0030
	 */
	struct FAutoplayReportData
	{
	public:
		class FString                                              TestName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Errors;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Warnings;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Success;                                                 // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Finished;                                                // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WSNE[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumAttemptedCheatGoalCompletions;                        // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAutoplayReportMessageEntry>                 Entries;                                                 // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
