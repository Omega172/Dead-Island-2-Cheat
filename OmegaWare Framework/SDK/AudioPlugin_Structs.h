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
	 * Enum AudioPlugin.EDialogueEvent
	 */
	enum class EDialogueEvent : uint8_t
	{
		NewExecution          = 0,
		ExecutionFailed       = 1,
		NewPerformAction      = 2,
		ExecutionEndedSuccess = 3,
		ExecutionEndedFailed  = 4,
		SessionFailed         = 5,
		SessionEnded          = 6,
		MAX                   = 7
	};

	/**
	 * Enum AudioPlugin.EDialogueRuntimeEventHandlerResponse
	 */
	enum class EDialogueRuntimeEventHandlerResponse : uint8_t
	{
		Unhandled          = 0,
		HandledNotConsumed = 1,
		HandledAndConsumed = 2,
		MAX                = 3
	};

	/**
	 * Enum AudioPlugin.EDialogueRuntimeEventType
	 */
	enum class EDialogueRuntimeEventType : uint8_t
	{
		Uninitialised   = 0,
		Event           = 1,
		EventStateBegin = 2,
		EventStateEnd   = 3,
		MAX             = 4
	};

	/**
	 * Enum AudioPlugin.EDialoguePriority
	 */
	enum class EDialoguePriority : uint8_t
	{
		inactive               = 0,
		dynamicUsingContext    = 1,
		localBreathing         = 2,
		localExert             = 3,
		globalExert            = 4,
		localRoar              = 5,
		globalRoar             = 6,
		localHitReact          = 7,
		globalHitReact         = 8,
		localDialogueVeryLow   = 9,
		globalDialogueVeryLow  = 10,
		localDialogueLow       = 11,
		globalDialogueLow      = 12,
		localDialogue          = 13,
		globalDialogue         = 14,
		localDialogueHigh      = 15,
		globalDialogueHigh     = 16,
		localDialogueVeryHigh  = 17,
		globalDialogueVeryHigh = 18,
		localDialogueCritical  = 19,
		globalDialogueCritical = 20,
		localCinematic         = 21,
		globalCinematic        = 22,
		localDeath             = 23,
		globalDeath            = 24,
		count                  = 25,
		MAX                    = 26
	};

	/**
	 * Enum AudioPlugin.EGenderRTPCQueryType
	 */
	enum class EGenderRTPCQueryType : uint8_t
	{
		None                         = 0,
		AnimationGender              = 1,
		FemaleFact                   = 2,
		AnimationGenderAndFemaleFact = 3,
		MAX                          = 4
	};

	/**
	 * Enum AudioPlugin.EDialogueComponentType
	 */
	enum class EDialogueComponentType : uint8_t
	{
		Normal = 0,
		Radio  = 1,
		MAX    = 2
	};

	/**
	 * Enum AudioPlugin.EPostDialogueFlags
	 */
	enum class EPostDialogueFlags : uint8_t
	{
		DyingDialogue = 0,
		MAX           = 1
	};

	/**
	 * Enum AudioPlugin.ECommunicationHistoryState
	 */
	enum class ECommunicationHistoryState : uint8_t
	{
		Uninitialised       = 0,
		Started             = 1,
		Interrupted         = 2,
		Finished            = 3,
		StartedRawAudio     = 4,
		InterruptedRawAudio = 5,
		FinishedRawAudio    = 6,
		MAX                 = 7
	};

	/**
	 * Enum AudioPlugin.ETriggerHistoryState
	 */
	enum class ETriggerHistoryState : uint8_t
	{
		Uninitialised                        = 0,
		Succeeded                            = 1,
		StartedParticipatingInAnotherSession = 2,
		SetAsActiveInSession                 = 3,
		SetAsActiveInSessionUponSpeaking     = 4,
		Failed                               = 5,
		ActionFailedToTrigger                = 6,
		MAX                                  = 7
	};

	/**
	 * Enum AudioPlugin.EDialogueGender
	 */
	enum class EDialogueGender : uint8_t
	{
		Unassigned = 0,
		Male       = 1,
		Female     = 2,
		MAX        = 3
	};

	/**
	 * Enum AudioPlugin.EDialogueSessionFindFlags
	 */
	enum class EDialogueSessionFindFlags : uint8_t
	{
		MustMatchFirstExecution                   = 0,
		MatchDialogueComponentsInParticipantDatas = 1,
		MAX                                       = 2
	};

	/**
	 * Enum AudioPlugin.ETriggerDialogueConversationNetworkingType
	 */
	enum class ETriggerDialogueConversationNetworkingType : uint8_t
	{
		ExecutesLocalOnly                    = 0,
		ExecutesLocallyOnServerAndAllClients = 1,
		ExecutesLocallyOnOwningClient        = 2,
		ExecutesLocallyOnServerOnly          = 3,
		MAX                                  = 4
	};

	/**
	 * Enum AudioPlugin.ETriggerRetryFrequencyType
	 */
	enum class ETriggerRetryFrequencyType : uint8_t
	{
		Urgent  = 0,
		Quick   = 1,
		Default = 2,
		Slow    = 3,
		MAX     = 4
	};

	/**
	 * Enum AudioPlugin.EDialogueSessionNetType
	 */
	enum class EDialogueSessionNetType : uint8_t
	{
		LocallyTriggered             = 0,
		ForcedSentToServerFromClient = 1,
		ForcedMulticastFromServer    = 2,
		MAX                          = 3
	};

	/**
	 * Enum AudioPlugin.EDialogueRuntimeEventDataType
	 */
	enum class EDialogueRuntimeEventDataType : uint8_t
	{
		Uninitialised = 0,
		Dynamic       = 1,
		NonDynamic    = 2,
		MAX           = 3
	};

	/**
	 * Enum AudioPlugin.EDialogueType
	 */
	enum class EDialogueType : uint8_t
	{
		uninitialised = 0,
		normal        = 1,
		vocalisation  = 2,
		mixed         = 3,
		MAX           = 4
	};

	/**
	 * Enum AudioPlugin.EDialogueTriggerMode
	 */
	enum class EDialogueTriggerMode : uint8_t
	{
		unknown              = 0,
		shuffleRulesSelector = 1,
		MAX                  = 2
	};

	/**
	 * Enum AudioPlugin.EDialogueEventFlags
	 */
	enum class EDialogueEventFlags : uint8_t
	{
		NewExecution          = 0,
		ExecutionFailed       = 1,
		NewPerformAction      = 2,
		ExecutionEndedSuccess = 3,
		ExecutionEndedFailed  = 4,
		SessionFailed         = 5,
		SessionEnded          = 6,
		AllEvents             = 7,
		MAX                   = 8
	};

	/**
	 * Enum AudioPlugin.EDialogueRuntimeEventStateScope
	 */
	enum class EDialogueRuntimeEventStateScope : uint8_t
	{
		Uninitialised = 0,
		RuleScope     = 1,
		SessionScope  = 2,
		MAX           = 3
	};

	/**
	 * Enum AudioPlugin.EDialogueRuntimeEventTargetType
	 */
	enum class EDialogueRuntimeEventTargetType : uint8_t
	{
		Self             = 0,
		AllParticipants  = 1,
		ParticipantNames = 2,
		MAX              = 3
	};

	/**
	 * Enum AudioPlugin.EDialogueFireRuntimeEventActionBehaviourType
	 */
	enum class EDialogueFireRuntimeEventActionBehaviourType : uint8_t
	{
		FireRuntimeEvent                 = 0,
		OverrideSayingDialogueState      = 1,
		OverrideListeningToDialogueState = 2,
		MAX                              = 3
	};

	/**
	 * Enum AudioPlugin.EDialogueTranslatedState
	 */
	enum class EDialogueTranslatedState : uint8_t
	{
		uninitialised = 0,
		translated    = 1,
		notTranslated = 2,
		MAX           = 3
	};

	/**
	 * Enum AudioPlugin.EFindLineDataResult
	 */
	enum class EFindLineDataResult : uint8_t
	{
		uninitialised                                        = 0,
		matchedExactLineData                                 = 1,
		matchedExactLineDataTranslatedRefersToFemalePlayer   = 2,
		matchedAlternatePlayer                               = 3,
		matchedAlternatePlayerTranslatedRefersToFemalePlayer = 4,
		matchedAlternateRefersToFemalePlayer                 = 5,
		matchedAlternatePlayerRefersToFemalePlayer           = 6,
		failedAlternatePlayer                                = 7,
		MAX                                                  = 8
	};

	/**
	 * Enum AudioPlugin.EMusicCombatState
	 */
	enum class EMusicCombatState : uint8_t
	{
		NONE    = 0,
		Default = 1,
		Won     = 2,
		MAX     = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AudioPlugin.AmbientAudioAreaDefinition
	 * Size -> 0x0020
	 */
	struct FAmbientAudioAreaDefinition
	{
	public:
		class UAkAudioEvent*                                       Event;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     GroupId;                                                 // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     EnvironmentValue;                                        // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSKN[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OuterAttenuationDistance;                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InsideAttenuationDistance;                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Absorption;                                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOutsideAudioPlayedIn2D;                                 // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOutsideNearbyAudioCanPlayOnFloorAndCeiling;             // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInsideNearbyAudioCanPlayOnFloorAndCeiling;              // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MB5K[0x5];                                   // 0x001B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioPlugin.AmbientAudioPlayingData
	 * Size -> 0x0030
	 */
	struct FAmbientAudioPlayingData
	{
	public:
		unsigned char                                              UnknownData_1WC9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameAreaComponent*                                  GameAreaComponent;                                       // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkComponent*                                        AkComponent;                                             // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1DUH[0x18];                                  // 0x0018(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioPlugin.AmbientAudioGroupPlayingData
	 * Size -> 0x0050
	 */
	struct FAmbientAudioGroupPlayingData
	{
	public:
		struct FAmbientAudioPlayingData                            InsidePlayingData;                                       // 0x0000(0x0030) NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FAmbientAudioPlayingData>                    OutsidePlayingDatas;                                     // 0x0030(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FAmbientAudioPlayingData>                    InsideGroupNearbyPlayingDatas;                           // 0x0040(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.WithinRangeAmbientAudioAreaResult
	 * Size -> 0x0088
	 */
	struct FWithinRangeAmbientAudioAreaResult
	{
	public:
		unsigned char                                              UnknownData_3FED[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameAreaComponent*                                  GameAreaComponent;                                       // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U13P[0x70];                                  // 0x0018(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioPlugin.InsideWithinRangeAmbientAudioAreaResult
	 * Size -> 0x0088
	 */
	struct FInsideWithinRangeAmbientAudioAreaResult
	{
	public:
		struct FWithinRangeAmbientAudioAreaResult                  Result;                                                  // 0x0000(0x0088) ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.InsideWithinRangeAmbientAudioAreaResults
	 * Size -> 0x0010
	 */
	struct FInsideWithinRangeAmbientAudioAreaResults
	{
	public:
		TArray<struct FInsideWithinRangeAmbientAudioAreaResult>    Results;                                                 // 0x0000(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.LocalisedAudioChooser
	 * Size -> 0x0008
	 */
	struct FLocalisedAudioChooser
	{
	public:
		class FName                                                LocalisedAudio;                                          // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct AudioPlugin.LocalPlayerDistanceUpdatePositionDeltaPair
	 * Size -> 0x0008
	 */
	struct FLocalPlayerDistanceUpdatePositionDeltaPair
	{
	public:
		float                                                      MaxPlayerDistance;                                       // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPositionDelta;                                        // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.MusicThemeDefinitionData
	 * Size -> 0x0010
	 */
	struct FMusicThemeDefinitionData
	{
	public:
		TArray<struct FAudioSwitchGroupNameSwitchStateSimplePair>  SwitchDefinitions;                                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.MusicThemeStateDefinition
	 * Size -> 0x0058
	 */
	struct FMusicThemeStateDefinition
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKnowledgeBaseExpression                            KBExpression;                                            // 0x0008(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMusicThemeDefinition*                               ThemeDefinition;                                         // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMusicThemeDefinitionData                           Data;                                                    // 0x0048(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.AudioEventDebugData
	 * Size -> 0x0028
	 */
	struct FAudioEventDebugData
	{
	public:
		bool                                                       bDebugAllPostingsOfTheEvent;                             // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GKHM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      RequiredSwitches;                                        // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FString>                                      RequiredRTPCs;                                           // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.ContactAudioAreaDefinition
	 * Size -> 0x0018
	 */
	struct FContactAudioAreaDefinition
	{
	public:
		class UAkAudioEvent*                                       EnterAreaEvent;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       InsideAreaEvent;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       ExitAreaEvent;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.DialogueKey
	 * Size -> 0x000C
	 */
	struct FDialogueKey
	{
	public:
		class FName                                                NameStorage;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GJZ8[0x4];                                   // 0x0008(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioPlugin.DialogueTriggerChooser
	 * Size -> 0x0018
	 */
	struct FDialogueTriggerChooser
	{
	public:
		struct FDialogueKey                                        BaseVoiceSet;                                            // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FDialogueKey                                        Trigger;                                                 // 0x000C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.RadioParticipantData
	 * Size -> 0x0050
	 */
	struct FRadioParticipantData
	{
	public:
		struct FDialogueKey                                        ParticipantName;                                         // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWLZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 Character;                                               // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class FText                                                OverrideUIDisplayName;                                   // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UNPCAudioMessagingType*                              OverrideNPCAudioMessagingType;                           // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDialogueKey                                        VoiceName;                                               // 0x0040(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsActive;                                               // 0x004C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ON0[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioPlugin.InLevelParticipantData
	 * Size -> 0x0068
	 */
	struct FInLevelParticipantData
	{
	public:
		struct FDialogueKey                                        ParticipantName;                                         // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_URIU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CharacterClass[0x28];                                    // 0x0010(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              ActorClass[0x28];                                        // 0x0038(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       bIsActive;                                               // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeferFindingNearestTillFirstUse;                        // 0x0061(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R5F9[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioPlugin.DialogueSessionConfigData
	 * Size -> 0x0006
	 */
	struct FDialogueSessionConfigData
	{
	public:
		bool                                                       bTriggersRequireExclusiveParticipation;                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTriggersTestActiveExecutionPrioritiesForAllParticipants; // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowInterruptionByTriggerWithSamePriority;             // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableListeningToDialogueRuntimeEventStatesForAllParticipants; // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceAllParticipantsToInactive;                         // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1R4V[0x1];                                   // 0x0005(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioPlugin.EnemyIntensityInfluence
	 * Size -> 0x001C
	 */
	struct FEnemyIntensityInfluence
	{
	public:
		float                                                      MaximumIntensityForEnemy;                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IntensityPerEnemyNearby;                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnemySpotIntensityBump;                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NonEngagedMaximumIntensity;                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EngagedMinimumIntensity;                                 // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnemyEngagedBump;                                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IntensityPerEnemyEngaged;                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.PlayerIntensityConfig
	 * Size -> 0x00C8
	 */
	struct FPlayerIntensityConfig
	{
	public:
		class FName                                                IntensitySwitchGroupName;                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                IntensityPrefix;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumIntensity;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumIntensity;                                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerIntensityDecay;                                    // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerIntensityMinimumTime;                              // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKnowledgeBaseExpression                            ForceMaxIntensityExpression;                             // 0x0020(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GatherRange;                                             // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEnemyIntensityInfluence                            DefaultEnemyInfluence;                                   // 0x005C(0x001C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              EnemyTypeIntensity[0x50];                                // 0x0078(0x0050) UNKNOWN PROPERTY: MapProperty
	};

	/**
	 * ScriptStruct AudioPlugin.ResolvedMusicThemeState
	 * Size -> 0x0018
	 */
	struct FResolvedMusicThemeState
	{
	public:
		class UMusicThemeSelectorDataAsset*                        MusicThemeDataAsset;                                     // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MusicThemeDataIndex;                                     // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LPCB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerIntensityDataAsset*                           PlayerIntensityDataAsset;                                // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.AudioStateFactMap
	 * Size -> 0x0020
	 */
	struct FAudioStateFactMap
	{
	public:
		TArray<class UAudioStateDefinition*>                       AudioStateDefinitions;                                   // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FKnowledgeBaseFactKey                               FactToPush;                                              // 0x0010(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JWIL[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioPlugin.ListenerToEmitterGameAreaComponentData
	 * Size -> 0x0018
	 */
	struct FListenerToEmitterGameAreaComponentData
	{
	public:
		class UGameAreaComponent*                                  GameAreaComponent;                                       // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_84F1[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioPlugin.AudioSwitchDefinition
	 * Size -> 0x0010
	 */
	struct FAudioSwitchDefinition
	{
	public:
		class FName                                                SwitchGroupName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SwitchState;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.AudioNetworkingManagerDefinition
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAudioNetworkingManagerDefinition : public FManagerDefinition
	{	};

	/**
	 * ScriptStruct AudioPlugin.AKAudioEventUtil
	 * Size -> 0x0040
	 */
	struct FAKAudioEventUtil
	{
	public:
		struct FAkPostEventExtraParams                             PostEventExtraParams;                                    // 0x0000(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SNMP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       Event;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EventName;                                               // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     ParentSceneComponent;                                    // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopWhenOwnerDestroyed;                                 // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttached;                                               // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZFE0[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAuxBus*                                           EarlyReflectionBus;                                      // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.DialogueFilePath
	 * Size -> 0x0010
	 */
	struct FDialogueFilePath
	{
	public:
		class FString                                              DialogueFilePath;                                        // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.InsideContactAudioAreaData
	 * Size -> 0x0010
	 */
	struct FInsideContactAudioAreaData
	{
	public:
		unsigned char                                              UnknownData_3GC7[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioPlugin.DialogueNetworkingManagerDefinition
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FDialogueNetworkingManagerDefinition : public FManagerDefinition
	{	};

	/**
	 * ScriptStruct AudioPlugin.TriggerDialogueParamsBase
	 * Size -> 0x0010
	 */
	struct FTriggerDialogueParamsBase
	{
	public:
		float                                                      TriggerDelay;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RetryDuration;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETriggerRetryFrequencyType                                 RetryFrequencyType;                                      // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldQueuedTriggerPriorityBlockOtherTriggers;          // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETriggerDialogueConversationNetworkingType                 NetworkingType;                                          // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterruptAnyLowerPriorityActiveExecutionsInSameSessionsAsInstigator; // 0x000B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterruptAnyLowerPriorityActiveExecutionsInSameSessionsAsAnyParticipants; // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImportantBlockingDialogue;                              // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AAWV[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioPlugin.TriggerDialogueAdditionalActorDataInternal
	 * Size -> 0x0020
	 */
	struct FTriggerDialogueAdditionalActorDataInternal
	{
	public:
		struct FDialogueKey                                        ExpressionContextName;                                   // 0x0000(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZBLY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UKnowledgeBaseComponent>              KnowledgeBaseComponent;                                  // 0x0018(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.TriggerDialogueParamsInternal
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FTriggerDialogueParamsInternal : public FTriggerDialogueParamsBase
	{
	public:
		TArray<struct FTriggerDialogueAdditionalActorDataInternal> AdditionalActorDatas;                                    // 0x0010(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.TriggerDialogueAdditionalActorData
	 * Size -> 0x0060
	 */
	struct FTriggerDialogueAdditionalActorData
	{
	public:
		struct FDialogueKey                                        ExpressionContextName;                                   // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_69TV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDSActorPicker                                      ActorPicker;                                             // 0x0010(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.TriggerDialogueParams
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FTriggerDialogueParams : public FTriggerDialogueParamsBase
	{
	public:
		TArray<struct FTriggerDialogueAdditionalActorData>         AdditionalActorDatas;                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.InstigatorData
	 * Size -> 0x000C
	 */
	struct FInstigatorData
	{
	public:
		struct FDialogueKey                                        ParticipantName;                                         // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.TriggerNearbyConfigData
	 * Size -> 0x0030
	 */
	struct FTriggerNearbyConfigData
	{
	public:
		float                                                      MaxDistance;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TriggerCount;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        FactionNames;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4P0Y[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOnlyConsiderParticipants;                               // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyConsiderNonParticipants;                            // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJSL[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioPlugin.DialogueSessionParticipantData
	 * Size -> 0x0028
	 */
	struct FDialogueSessionParticipantData
	{
	public:
		struct FDialogueKey                                        Name;                                                    // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H81S[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDialogueComponent*                                  DialogueComponent;                                       // 0x0010(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DeferredSearchClass;                                     // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeferredSearchMustBeLocallyOwned;                       // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsActive;                                               // 0x0021(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_23AN[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioPlugin.DialoguePathWithOverride
	 * Size -> 0x0020
	 */
	struct FDialoguePathWithOverride
	{
	public:
		class FString                                              DialoguePath;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OverrideExternalSourceName;                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.MusicComponentDataCache
	 * Size -> 0x0020
	 */
	struct FMusicComponentDataCache
	{
	public:
		unsigned char                                              UnknownData_P62V[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKnowledgeBaseExpressionCache*                       KBExpressionCache;                                       // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioPlugin.PlayerIntensityState
	 * Size -> 0x0060
	 */
	struct FPlayerIntensityState
	{
	public:
		unsigned char                                              UnknownData_ROER[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
