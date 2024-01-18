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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Autoplay.AutoplayPlaybackGoal
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UAutoplayPlaybackGoal : public UObject
	{
	public:
		unsigned char                                              UnknownData_OPCX[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AttackTargetGoal
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UAttackTargetGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_4YHY[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayRecordedEvent
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAutoplayRecordedEvent : public UObject
	{
	public:
		unsigned char                                              UnknownData_BROR[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayAttackTargetEvent
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UAutoplayAttackTargetEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayAttackTargetEventSerializableData          Data;                                                    // 0x0030(0x0018) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_43VI[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayBeginCrouchEvent
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAutoplayBeginCrouchEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayBeginCrouchEventSerializableData           Data;                                                    // 0x0030(0x000C) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XTCW[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		void ConstructAndSubmit_FromBlueprint(class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayChallengeEvent
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UAutoplayChallengeEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayChallengeEventSerializableData             Data;                                                    // 0x0030(0x0018) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayCvarEvent
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAutoplayCvarEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayCvarEventSerializableData                  Data;                                                    // 0x0030(0x0010) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayDeathAndRespawnEvent
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAutoplayDeathAndRespawnEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayDeathAndRespawnEventSerializableData       Data;                                                    // 0x0030(0x000C) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q74W[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayDisplacementTracker
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UAutoplayDisplacementTracker : public UObject
	{
	public:
		unsigned char                                              UnknownData_MO4B[0x40];                                  // 0x0028(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayEndCrouchEvent
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAutoplayEndCrouchEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayEndCrouchEventSerializableData             Data;                                                    // 0x0030(0x000C) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FIWK[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		void ConstructAndSubmit_FromBlueprint(class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayEventClientInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAutoplayEventClientInterface : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayEventEvaluator
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UAutoplayEventEvaluator : public UAutoplayEventClientInterface
	{
	public:
		unsigned char                                              UnknownData_EI7K[0x70];                                  // 0x0028(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayEventRecorder
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAutoplayEventRecorder : public UAutoplayEventClientInterface
	{
	public:
		unsigned char                                              UnknownData_V4Y6[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayFollowHostEvent
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UAutoplayFollowHostEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayFollowHostEventSerializableData            Data;                                                    // 0x0030(0x0001) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9B6M[0x17];                                  // 0x0031(0x0017) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayGoalEvaluator
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UAutoplayGoalEvaluator : public UObject
	{
	public:
		unsigned char                                              UnknownData_MTHG[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayIdleEvent
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAutoplayIdleEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayIdleEventSerializableData                  Data;                                                    // 0x0030(0x0010) NoDestructor, NativeAccessSpecifierPrivate

	public:
		void ConstructAndSubmit_FromBlueprint(class ACharacter* PlayerCharacter, float IdleTime);
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayIncludeScriptEvent
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAutoplayIncludeScriptEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayIncludeScriptEventSerializableData         Data;                                                    // 0x0030(0x0010) NativeAccessSpecifierPrivate

	public:
		void ConstructAndSubmit_FromBlueprint(class FString* ScriptToInclude);
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayInputTranslator
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UAutoplayInputTranslator : public UObject
	{
	public:
		unsigned char                                              UnknownData_2Y0P[0x40];                                  // 0x0028(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayInteractPressedEvent
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UAutoplayInteractPressedEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayInteractPressedEventSerializableData       Data;                                                    // 0x0030(0x0040) NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void ConstructAndSubmit_FromBlueprint(class ACharacter* PlayerCharacter, class AActor* InteractActor, const struct FVector& InteractLoc, const class FName& InputActionName);
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayJumpEvent
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UAutoplayJumpEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayJumpEventSerializableData                  Data;                                                    // 0x0030(0x0018) NoDestructor, NativeAccessSpecifierPrivate

	public:
		void ConstructAndSubmit_FromBlueprint(class ACharacter* PlayerCharacter, const struct FRotator& ViewRotation);
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayKeyInputEvent
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UAutoplayKeyInputEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayKeyInputEventSerializableData              Data;                                                    // 0x0030(0x0024) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ANF8[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayKeyInputEventTwo
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UAutoplayKeyInputEventTwo : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayKeyInputEventTwoSerializableData           Data;                                                    // 0x0030(0x0030) NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayKickEvent
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UAutoplayKickEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayKickEventSerializableData                  Data;                                                    // 0x0030(0x0018) NoDestructor, NativeAccessSpecifierPrivate

	public:
		void ConstructAndSubmit_FromBlueprint(class ACharacter* PlayerCharacter, const struct FRotator& ViewRotation);
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayLedgeGrabbedEvent
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UAutoplayLedgeGrabbedEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayLedgeGrabbedEventSerializableData          Data;                                                    // 0x0030(0x0024) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IEI3[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		void ConstructAndSubmitWithJumpData_FromBlueprint(class ACharacter* PlayerCharacter, const struct FVector& LedgeAnchorLoc, const struct FVector& JumpLocation, const struct FRotator& ViewRotation);
		void ConstructAndSubmit_FromBlueprint(class ACharacter* PlayerCharacter, const struct FVector& LedgeAnchorLoc);
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayManager
	 * Size -> 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
	 */
	class UAutoplayManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_JPAB[0x80];                                  // 0x0028(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAutoplayEventRecorder*                              EventRecorder;                                           // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAutoplayEventEvaluator*                             EventEvaluator;                                          // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAutoplayGoalEvaluator*                              GoalEvaluator;                                           // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAutoplayInputTranslator*                            InputTranslator;                                         // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAutoplayDisplacementTracker*                        DisplacementTracker;                                     // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KCD5[0x58];                                  // 0x00D0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAutoplayReport*                                     Report;                                                  // 0x0128(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3OQZ[0x10];                                  // 0x0130(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAutoplayManager* Get();
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayNavWaypointDroppedEvent
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAutoplayNavWaypointDroppedEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayNavWaypointDroppedEventSerializableData    Data;                                                    // 0x0030(0x000C) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YCGE[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		void ConstructAndSubmit_FromBlueprint(class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayNewObjectiveEvent
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UAutoplayNewObjectiveEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayNewObjectiveEventSerializableData          Data;                                                    // 0x0030(0x0010) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6N4P[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayReport
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UAutoplayReport : public UObject
	{
	public:
		unsigned char                                              UnknownData_494S[0x78];                                  // 0x0028(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayScreenshotEvent
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UAutoplayScreenshotEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayScreenshotEventSerializableData            Data;                                                    // 0x0030(0x0028) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayTransitionCinematicEvent
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAutoplayTransitionCinematicEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayTransitionCinematicEventSerializableData   Data;                                                    // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1QAK[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayTransitionEvent
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAutoplayTransitionEvent : public UAutoplayInteractPressedEvent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayWaitForClientDisconnectEvent
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAutoplayWaitForClientDisconnectEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayWaitForClientDisconnectEventSerializableData Data;                                                    // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8DQX[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		void ConstructAndSubmit_FromBlueprint(float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayWaitForPlayersEvent
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAutoplayWaitForPlayersEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayWaitForPlayersEventSerializableData        Data;                                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate

	public:
		void ConstructAndSubmit_FromBlueprint(int32_t RequiredNumberOfPlayers, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.AutoplayWaypointDroppedEvent
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAutoplayWaypointDroppedEvent : public UAutoplayRecordedEvent
	{
	public:
		struct FAutoplayWaypointDroppedEventSerializableData       Data;                                                    // 0x0030(0x000C) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SMBY[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		void ConstructAndSubmit_FromBlueprint(class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.BeginCrouchGoal
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UBeginCrouchGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_MO4K[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.CheckChallengeGoal
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UCheckChallengeGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_TFF4[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.ClientAttackGoal
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UClientAttackGoal : public UAttackTargetGoal
	{
	public:
		unsigned char                                              UnknownData_RLG1[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.CombatDodgeBlockGoal
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UCombatDodgeBlockGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_OGF3[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.CombatDropkickGoal
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UCombatDropkickGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_QQY0[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.CombatQuickThrowGoal
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UCombatQuickThrowGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_HSHL[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.CombatStandardAttackGoal
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UCombatStandardAttackGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_65TP[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.CombatSwitchWeaponGoal
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UCombatSwitchWeaponGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_AXQ8[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.CvarGoal
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UCvarGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_4QQJ[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.EndCrouchGoal
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UEndCrouchGoal : public UAutoplayPlaybackGoal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.FaceDirectionGoal
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UFaceDirectionGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_5ZNI[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.FindHostGoal
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UFindHostGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_8ASU[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.JumpGoal
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UJumpGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_CJIH[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.KeyPressInteractionGoal
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UKeyPressInteractionGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_GM8S[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.KeyPressInteractionGoalTwo
	 * Size -> 0x0030 (FullSize[0x0078] - InheritedSize[0x0048])
	 */
	class UKeyPressInteractionGoalTwo : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_KBOS[0x30];                                  // 0x0048(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.KickGoal
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UKickGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_IVCU[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.LedgeGrabGoal
	 * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
	 */
	class ULedgeGrabGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_8AU3[0x28];                                  // 0x0048(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.MoveForwardGoal
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UMoveForwardGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_SGTQ[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.PlayerMovementTrackerGoal
	 * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
	 */
	class UPlayerMovementTrackerGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_JSB5[0x28];                                  // 0x0048(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.MoveToLocationGoal
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	class UMoveToLocationGoal : public UPlayerMovementTrackerGoal
	{
	public:
		unsigned char                                              UnknownData_E54W[0x18];                                  // 0x0070(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.NavigateToHostGoal
	 * Size -> 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
	 */
	class UNavigateToHostGoal : public UPlayerMovementTrackerGoal
	{
	public:
		unsigned char                                              UnknownData_OC22[0x58];                                  // 0x0070(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.NavigateToLocationGoal
	 * Size -> 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
	 */
	class UNavigateToLocationGoal : public UPlayerMovementTrackerGoal
	{
	public:
		unsigned char                                              UnknownData_FTHA[0x38];                                  // 0x0070(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.NavigateToTargetActorGoal
	 * Size -> 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
	 */
	class UNavigateToTargetActorGoal : public UPlayerMovementTrackerGoal
	{
	public:
		unsigned char                                              UnknownData_GJF6[0x58];                                  // 0x0070(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.PressInteractionGoal
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UPressInteractionGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_AZ12[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.RequestGoalFromObjectiveProxyGoal
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class URequestGoalFromObjectiveProxyGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_BXSI[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.ScreenshotGoal
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UScreenshotGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_90T4[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.StraightLineMoveGoal
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UStraightLineMoveGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_7L3U[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.TransitionWaitForLoadGoal
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UTransitionWaitForLoadGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_EHJW[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnReadyToEnterWorld();
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.WaitForClientDisconnectGoal
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UWaitForClientDisconnectGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_049J[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.WaitForFatalityGoal
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UWaitForFatalityGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_C2PX[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.WaitForPlayersGoal
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UWaitForPlayersGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_4NW0[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Autoplay.WaitGoal
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UWaitGoal : public UAutoplayPlaybackGoal
	{
	public:
		unsigned char                                              UnknownData_SPL5[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
