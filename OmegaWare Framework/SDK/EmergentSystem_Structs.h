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
	 * Enum EmergentSystem.EActivityEndedReason
	 */
	enum class EActivityEndedReason : uint8_t
	{
		ActivityCompleted = 0,
		ActivityFailed    = 1,
		ActivityAborted   = 2,
		MAX               = 3
	};

	/**
	 * Enum EmergentSystem.EActivityState
	 */
	enum class EActivityState : uint8_t
	{
		Cooldown  = 0,
		Idle      = 1,
		Running   = 2,
		Unusuable = 3,
		MAX       = 4
	};

	/**
	 * Enum EmergentSystem.EActivityType
	 */
	enum class EActivityType : uint8_t
	{
		Ambient         = 0,
		Entry           = 1,
		Exit            = 2,
		ScriptTriggered = 3,
		MAX             = 4
	};

	/**
	 * Enum EmergentSystem.EMovingToStartPointState
	 */
	enum class EMovingToStartPointState : uint8_t
	{
		NotMoving     = 0,
		Moving        = 1,
		Arrived       = 2,
		AtDestination = 3,
		Failed        = 4,
		MAX           = 5
	};

	/**
	 * Enum EmergentSystem.EAgentIntroType
	 */
	enum class EAgentIntroType : uint8_t
	{
		Full     = 0,
		NoTravel = 1,
		None     = 2,
		MAX      = 3
	};

	/**
	 * Enum EmergentSystem.EAreaShapeSelection
	 */
	enum class EAreaShapeSelection : uint8_t
	{
		Closest  = 0,
		Random   = 1,
		Furthest = 2,
		MAX      = 3
	};

	/**
	 * Enum EmergentSystem.EAgentReleasedReason
	 */
	enum class EAgentReleasedReason : uint8_t
	{
		FailedToReachStartPoint = 0,
		CouldntTakeControl      = 1,
		Completed               = 2,
		Aborted                 = 3,
		MAX                     = 4
	};

	/**
	 * Enum EmergentSystem.EAgentFailedToDespawnReason
	 */
	enum class EAgentFailedToDespawnReason : uint8_t
	{
		FailedMoveCommand = 0,
		WentIntoCombat    = 1,
		Died              = 2,
		MAX               = 3
	};

	/**
	 * Enum EmergentSystem.EAgentRequestInterruptionReasons
	 */
	enum class EAgentRequestInterruptionReasons : uint8_t
	{
		None      = 0,
		Temporary = 1,
		MAX       = 2
	};

	/**
	 * Enum EmergentSystem.EParticipantPriority
	 */
	enum class EParticipantPriority : uint8_t
	{
		Zero            = 0,
		Low             = 1,
		Medium          = 2,
		High            = 3,
		VeryHigh        = 4,
		VitalPopulation = 5,
		Vital           = 6,
		MAX             = 7
	};

	/**
	 * Enum EmergentSystem.EEmergentMovementSpeed
	 */
	enum class EEmergentMovementSpeed : uint8_t
	{
		Default = 0,
		Fast    = 1,
		Slow    = 2,
		Stop    = 3,
		MAX     = 4
	};

	/**
	 * Enum EmergentSystem.ETeleportOptions
	 */
	enum class ETeleportOptions : uint8_t
	{
		NeverTeleport            = 0,
		TeleportIfCannotNavigate = 1,
		TeleportIfMovementFails  = 2,
		AlwaysTeleport           = 3,
		MAX                      = 4
	};

	/**
	 * Enum EmergentSystem.EParticipantState
	 */
	enum class EParticipantState : uint8_t
	{
		NotInActivity        = 0,
		AssignedToActivity   = 1,
		TraversingToActivity = 2,
		PerformingActivity   = 3,
		LeavingActivity      = 4,
		MAX                  = 5
	};

	/**
	 * Enum EmergentSystem.EParticipantEvent
	 */
	enum class EParticipantEvent : uint8_t
	{
		Assigned    = 0,
		OnTheWay    = 1,
		Received    = 2,
		Interrupted = 3,
		Released    = 4,
		Unassigned  = 5,
		MAX         = 6
	};

	/**
	 * Enum EmergentSystem.ESpawnConstraintTypes
	 */
	enum class ESpawnConstraintTypes : uint8_t
	{
		AreaBasedTypeConstraints            = 0,
		GlobalTypeConstraints               = 1,
		PopulationCountLimits               = 2,
		PopulationTypeConstraints           = 3,
		PopulationTypeMismatchPreventsSpawn = 4,
		MAX                                 = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct EmergentSystem.ActivityParameters
	 * Size -> 0x0070
	 */
	struct FActivityParameters
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Cooldown[0x10];                                          // 0x0010(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		float                                                      AdvertisingRange;                                        // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JIF1[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActivityConstraints*                                ActivityConstraints;                                     // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKnowledgeBaseExpression                            ActivityRequirements;                                    // 0x0030(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOngoingActivityRequirements;                            // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEndActivityWhenAllParticipantsAreReleased;              // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_65RY[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmergentSystem.SpawnConstraints
	 * Size -> 0x0050
	 */
	struct FSpawnConstraints
	{
	public:
		unsigned char                                              OptOuts[0x50];                                           // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct EmergentSystem.EmergentGroupObjectCommonBaseInfo
	 * Size -> 0x0070
	 */
	struct FEmergentGroupObjectCommonBaseInfo
	{
	public:
		struct FKnowledgeBaseExpression                            RandomSelectionWeightingExpression;                      // 0x0000(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKnowledgeBaseExpression                            EnableExpression;                                        // 0x0038(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EmergentSystem.BaseEmergentGroupChild
	 * Size -> 0x0078
	 */
	struct FBaseEmergentGroupChild
	{
	public:
		unsigned char                                              UnknownData_LZ10[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEmergentGroupObjectCommonBaseInfo                  BaseInfo;                                                // 0x0008(0x0070) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EmergentSystem.EmergentSpawnableGroupChild
	 * Size -> 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
	 */
	struct FEmergentSpawnableGroupChild : public FBaseEmergentGroupChild
	{
	public:
		struct FSoftObjectPath                                     GroupObject;                                             // 0x0078(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EmergentSystem.BaseEmergentGroupObjectData
	 * Size -> 0x0078
	 */
	struct FBaseEmergentGroupObjectData
	{
	public:
		unsigned char                                              UnknownData_XA9D[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEmergentGroupObjectCommonBaseInfo                  BaseInfo;                                                // 0x0008(0x0070) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EmergentSystem.EmergentSpawnableGroupData
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	struct FEmergentSpawnableGroupData : public FBaseEmergentGroupObjectData
	{
	public:
		class UClass*                                              ActorType;                                               // 0x0078(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_69SU[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmergentSystem.ParticipantLaunchParameters
	 * Size -> 0x0018
	 */
	struct FParticipantLaunchParameters
	{
	public:
		class UAgentBehaviourDefinition*                           BehaviourDefinition;                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAgentBehaviourDefinition*                           TravelBehaviourDefinition;                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAgentIntroType                                            IntroType;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UUVZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmergentSystem.ParticipantTravelParams
	 * Size -> 0x0014
	 */
	struct FParticipantTravelParams
	{
	public:
		bool                                                       bSkipTravelToStartPoint;                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeleportOptions                                           TeleportOptions;                                         // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2F4N[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ArrivalDistanceThreshold;                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlignToDirection;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FOCP[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ArrivalDirectionThreshold;                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bContinueMovingAfterArrival;                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_549D[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmergentSystem.ParticipantDefinition
	 * Size -> 0x0168
	 */
	struct FParticipantDefinition
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EParticipantPriority                                       Priority;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnHidden;                                            // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNUV[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            AgentRequirements;                                       // 0x0010(0x0038) Edit, BlueprintVisible, DisableEditOnTemplate, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOngoingEnablingRequirements;                            // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOngoingAgentRequirements;                               // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCAD[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Cooldown[0x10];                                          // 0x0050(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		class UEmergentSpawnableGroupObject*                       SpawnableGroup;                                          // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideArchetype;                                      // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DMI[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SpawnableArchetype;                                      // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEmergentSpawnableGroupObject*                       TreatAsGroup;                                            // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FParticipantLaunchParameters                        DefaultLaunchParameters;                                 // 0x0080(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FParticipantTravelParams                            TravelParams;                                            // 0x0098(0x0014) Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HXYP[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSpawnConstraints                                   ParticipantSpawnConstraints;                             // 0x00B0(0x0050) Edit, NativeAccessSpecifierPublic
		class UBaseAgentSource*                                    AgentSource;                                             // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameEvent*                                          ParticipantSpawnedGameEvent;                             // 0x0108(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0110(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Facing;                                                  // 0x011C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             NavPosition;                                             // 0x0128(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JW7[0x34];                                  // 0x0134(0x0034) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmergentSystem.PopulousEntry
	 * Size -> 0x0038
	 */
	struct FPopulousEntry
	{
	public:
		class UEmergentSpawnableGroupObject*                       AgentGroup;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPopulationCountController*                          PopulationController;                                    // 0x0008(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EParticipantPriority                                       Priority;                                                // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UPA8[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ULifetimePopulationConstraint*>               LifetimeConstraints;                                     // 0x0018(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3WI[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmergentSystem.PopulationState
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FPopulationState : public FConditionalListElement
	{
	public:
		TArray<struct FPopulousEntry>                              PopulationList;                                          // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EmergentSystem.EmergentTestGroupChild
	 * Size -> 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
	 */
	struct FEmergentTestGroupChild : public FBaseEmergentGroupChild
	{
	public:
		struct FSoftObjectPath                                     GroupObject;                                             // 0x0078(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EmergentSystem.EmergentTestGroupData
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	struct FEmergentTestGroupData : public FBaseEmergentGroupObjectData
	{
	public:
		uint32_t                                                   TestId;                                                  // 0x0078(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UPSJ[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmergentSystem.ActivityDefinition
	 * Size -> 0x0018
	 */
	struct FActivityDefinition
	{
	public:
		unsigned char                                              UnknownData_LNMF[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmergentSystem.CooldownContext
	 * Size -> 0x0018
	 */
	struct FCooldownContext
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWorld*                                              World;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EmergentSystem.EmergentDirectorDefinition
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FEmergentDirectorDefinition : public FManagerDefinition
	{	};

	/**
	 * ScriptStruct EmergentSystem.EmergentGroupInfo
	 * Size -> 0x0010
	 */
	struct FEmergentGroupInfo
	{
	public:
		struct FDirectoryPath                                      AssetFolder;                                             // 0x0000(0x0010) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EmergentSystem.SpawnableGroupHandle
	 * Size -> 0x0008
	 */
	struct FSpawnableGroupHandle
	{
	public:
		unsigned char                                              UnknownData_XZOT[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmergentSystem.EmergentAgentTelemetryEvent
	 * Size -> 0x0040 (FullSize[0x0050] - InheritedSize[0x0010])
	 */
	struct FEmergentAgentTelemetryEvent : public FDSOnline_FTelemetryEvent
	{
	public:
		uint32_t                                                   AgentID;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2HIR[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTelemetryActorID                                   ActorID;                                                 // 0x0018(0x0020) NativeAccessSpecifierPublic
		struct FVector                                             WorldPos;                                                // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SinkName;                                                // 0x0044(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CMM9[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmergentSystem.EmergentAgentSpawnResultTelemetryEvent
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	struct FEmergentAgentSpawnResultTelemetryEvent : public FEmergentAgentTelemetryEvent
	{
	public:
		uint32_t                                                   AgentRequestID;                                          // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuccess;                                                // 0x005C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FRE5[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmergentSystem.EmergentAgentSpawnRequestTelemetryEvent
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FEmergentAgentSpawnRequestTelemetryEvent : public FEmergentAgentTelemetryEvent
	{
	public:
		int32_t                                                    AgentRequestID;                                          // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EmergentSystem.ExitSceneRequestParams
	 * Size -> 0x0018
	 */
	struct FExitSceneRequestParams
	{
	public:
		class AActor*                                              Agent;                                                   // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      AgentDespawn;                                            // 0x0008(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EmergentSystem.ParticipantMoveToLocation
	 * Size -> 0x000C
	 */
	struct FParticipantMoveToLocation
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EmergentSystem.PopulationDensityEntryRow
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FPopulationDensityEntryRow : public FTableRowBase
	{
	public:
		float                                                      AgentsPerHectare;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HYS7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmergentSystem.SpawnInPlaceAgentSourceParams
	 * Size -> 0x0010
	 */
	struct FSpawnInPlaceAgentSourceParams
	{
	public:
		unsigned char                                              UnknownData_0OUU[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
