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
	 * Enum DSFramework.EMoveTargetEvent
	 */
	enum class EMoveTargetEvent : uint8_t
	{
		Added         = 0,
		Removed       = 1,
		Prioritised   = 2,
		Deprioritised = 3,
		MoveSucceeded = 4,
		MoveFailed    = 5,
		MAX           = 6
	};

	/**
	 * Enum DSFramework.ECharacterActionEndedReason
	 */
	enum class ECharacterActionEndedReason : uint8_t
	{
		Succeeded   = 0,
		Failed      = 1,
		Cancelled   = 2,
		Interrupted = 3,
		MAX         = 4
	};

	/**
	 * Enum DSFramework.ECharacterActionResolution
	 */
	enum class ECharacterActionResolution : uint8_t
	{
		Error            = 0,
		Denied           = 1,
		Queued           = 2,
		QueuedRequestEnd = 3,
		Uncontested      = 4,
		Interrupt        = 5,
		AskBlueprint     = 6,
		Num              = 7,
		MAX              = 8
	};

	/**
	 * Enum DSFramework.EMovementModeActiveRequestChangedReason
	 */
	enum class EMovementModeActiveRequestChangedReason : uint8_t
	{
		Activated  = 0,
		Superseded = 1,
		MAX        = 2
	};

	/**
	 * Enum DSFramework.EPerspective
	 */
	enum class EPerspective : uint8_t
	{
		Uninitialized = 0,
		FirstPerson   = 1,
		ThirdPerson   = 2,
		MAX           = 3
	};

	/**
	 * Enum DSFramework.EDSCharacterUpdatedComponentMovedReason
	 */
	enum class EDSCharacterUpdatedComponentMovedReason : uint8_t
	{
		CrouchToggle = 0,
		MAX          = 1
	};

	/**
	 * Enum DSFramework.ENotificationRule
	 */
	enum class ENotificationRule : uint8_t
	{
		OnChallengeStarted  = 0,
		OnThreshold         = 1,
		OnValueReached      = 2,
		OnLast              = 3,
		OnTierComplete      = 4,
		OnChallengeComplete = 5,
		MAX                 = 6
	};

	/**
	 * Enum DSFramework.EControlSchemeType
	 */
	enum class EControlSchemeType : uint8_t
	{
		Undefined     = 0,
		KeyboardMouse = 1,
		Gamepad       = 2,
		Max           = 3
	};

	/**
	 * Enum DSFramework.EItemOverflowPolicy
	 */
	enum class EItemOverflowPolicy : uint8_t
	{
		AddNothing   = 0,
		AddUpToLimit = 1,
		MAX          = 2
	};

	/**
	 * Enum DSFramework.EItemInstancingPolicy
	 */
	enum class EItemInstancingPolicy : uint8_t
	{
		NotInstanced = 0,
		Instanced    = 1,
		MAX          = 2
	};

	/**
	 * Enum DSFramework.EItemRarity
	 */
	enum class EItemRarity : uint8_t
	{
		None      = 0,
		Common    = 1,
		Uncommon  = 2,
		Rare      = 3,
		Superior  = 4,
		Legendary = 5,
		Count     = 6,
		MAX       = 7
	};

	/**
	 * Enum DSFramework.ELootTier
	 */
	enum class ELootTier : uint8_t
	{
		ImportantDrop      = 0,
		RegularDrop        = 1,
		AnimatedLootObject = 2,
		DirectInteractItem = 3,
		MAX                = 4
	};

	/**
	 * Enum DSFramework.EAchievementUpdateType
	 */
	enum class EAchievementUpdateType : uint8_t
	{
		IncrementValue  = 0,
		ForceValue      = 1,
		IncreaseValueTo = 2,
		MAX             = 3
	};

	/**
	 * Enum DSFramework.EArbitratedRequestStatus
	 */
	enum class EArbitratedRequestStatus : uint8_t
	{
		Inactive          = 0,
		ActiveRequested   = 1,
		Active            = 2,
		InactiveRequested = 3,
		MAX               = 4
	};

	/**
	 * Enum DSFramework.EAsyncLoadPriority
	 */
	enum class EAsyncLoadPriority : uint8_t
	{
		Hidden     = 0,
		Background = 1,
		Foreground = 2,
		Immediate  = 3,
		MAX        = 4
	};

	/**
	 * Enum DSFramework.EDetachmentReason
	 */
	enum class EDetachmentReason : uint8_t
	{
		ParentDestroyed = 0,
		Detached        = 1,
		MAX             = 2
	};

	/**
	 * Enum DSFramework.EChallengeBindType
	 */
	enum class EChallengeBindType : uint8_t
	{
		AccountBound   = 0,
		CharacterBound = 1,
		MAX            = 2
	};

	/**
	 * Enum DSFramework.ECharacterActionHelperReferenceType
	 */
	enum class ECharacterActionHelperReferenceType : uint8_t
	{
		Always      = 0,
		WhileQueued = 1,
		MAX         = 2
	};

	/**
	 * Enum DSFramework.ERequestStatus
	 */
	enum class ERequestStatus : uint8_t
	{
		None      = 0,
		Requested = 1,
		Begun     = 2,
		Ending    = 3,
		MAX       = 4
	};

	/**
	 * Enum DSFramework.ELocalActionInterruptResolution
	 */
	enum class ELocalActionInterruptResolution : uint8_t
	{
		Denied      = 0,
		Uncontested = 1,
		MAX         = 2
	};

	/**
	 * Enum DSFramework.EActionRequestResolutionType
	 */
	enum class EActionRequestResolutionType : uint8_t
	{
		Resolve     = 0,
		Passthrough = 1,
		COUNT       = 2,
		MAX         = 3
	};

	/**
	 * Enum DSFramework.EActionNetworkType
	 */
	enum class EActionNetworkType : uint8_t
	{
		None       = 0,
		Replicates = 1,
		Multicast  = 2,
		MAX        = 3
	};

	/**
	 * Enum DSFramework.ECharacterActionRequestInitiator
	 */
	enum class ECharacterActionRequestInitiator : uint8_t
	{
		Local        = 0,
		Server       = 1,
		Client       = 2,
		NotAuthority = 3,
		MAX          = 4
	};

	/**
	 * Enum DSFramework.EActionState
	 */
	enum class EActionState : uint8_t
	{
		Requested   = 0,
		Active      = 1,
		Succeeded   = 2,
		Failed      = 3,
		Interrupted = 4,
		Cancelled   = 5,
		Garbage     = 6,
		MAX         = 7
	};

	/**
	 * Enum DSFramework.ECharacterActionRequestPolicy
	 */
	enum class ECharacterActionRequestPolicy : uint8_t
	{
		ActionAuthority = 0,
		ServerAuthority = 1,
		Anyone          = 2,
		MAX             = 3
	};

	/**
	 * Enum DSFramework.ECharacterActionEndReason
	 */
	enum class ECharacterActionEndReason : uint8_t
	{
		Success      = 0,
		Failure      = 1,
		Cancellation = 2,
		MAX          = 3
	};

	/**
	 * Enum DSFramework.ERotationModeRelativeType
	 */
	enum class ERotationModeRelativeType : uint8_t
	{
		Below    = 0,
		Above    = 1,
		NumTypes = 2,
		MAX      = 3
	};

	/**
	 * Enum DSFramework.ERotationType
	 */
	enum class ERotationType : uint8_t
	{
		NullType = 0,
		Legs     = 1,
		Torso    = 2,
		Head     = 3,
		Capsule  = 4,
		NumTypes = 5,
		MAX      = 6
	};

	/**
	 * Enum DSFramework.EControllerLayoutBumperModifier
	 */
	enum class EControllerLayoutBumperModifier : uint8_t
	{
		Default                = 0,
		SwapBumpers            = 1,
		SwapTriggers           = 2,
		SwapBumpersAndTriggers = 3,
		Max                    = 4
	};

	/**
	 * Enum DSFramework.EControllerLayoutStickModifier
	 */
	enum class EControllerLayoutStickModifier : uint8_t
	{
		Default        = 0,
		Southpaw       = 1,
		Legacy         = 2,
		LegacySouthpaw = 3,
		Max            = 4
	};

	/**
	 * Enum DSFramework.EDemoFilterType
	 */
	enum class EDemoFilterType : uint8_t
	{
		Whitelist = 0,
		Blacklist = 1,
		MAX       = 2
	};

	/**
	 * Enum DSFramework.EDespawnManagerDebugQueuingMode
	 */
	enum class EDespawnManagerDebugQueuingMode : uint8_t
	{
		Enabled  = 0,
		Forced   = 1,
		Disabled = 2,
		Count    = 3,
		MAX      = 4
	};

	/**
	 * Enum DSFramework.EDespawnPriority
	 */
	enum class EDespawnPriority : uint8_t
	{
		Low    = 0,
		Medium = 1,
		High   = 2,
		MAX    = 3
	};

	/**
	 * Enum DSFramework.EMoveTargetState
	 */
	enum class EMoveTargetState : uint8_t
	{
		Pending   = 0,
		Succeeded = 1,
		Failed    = 2,
		MAX       = 3
	};

	/**
	 * Enum DSFramework.ELocalControlResult
	 */
	enum class ELocalControlResult : uint8_t
	{
		OK       = 0,
		NotLocal = 1,
		Undef    = 2,
		MAX      = 3
	};

	/**
	 * Enum DSFramework.EOkInvalidResult
	 */
	enum class EOkInvalidResult : uint8_t
	{
		OK      = 0,
		Invalid = 1,
		MAX     = 2
	};

	/**
	 * Enum DSFramework.ECharacterLocationType
	 */
	enum class ECharacterLocationType : uint8_t
	{
		Root           = 0,
		Centre         = 1,
		Contact        = 2,
		Feet           = 3,
		Top            = 4,
		Eyes           = 5,
		RootMesh       = 6,
		CentreStanding = 7,
		NumTypes       = 8,
		NullType       = 9,
		MAX            = 10
	};

	/**
	 * Enum DSFramework.EDSCharacterGroundedState
	 */
	enum class EDSCharacterGroundedState : uint8_t
	{
		Grounded = 0,
		Airborne = 1,
		MAX      = 2
	};

	/**
	 * Enum DSFramework.EExtraVelocityChannel
	 */
	enum class EExtraVelocityChannel : uint8_t
	{
		AirFlow      = 0,
		PlayerAction = 1,
		PushAction   = 2,
		Count        = 3,
		MAX          = 4
	};

	/**
	 * Enum DSFramework.EGFxActionIconFlags
	 */
	enum class EGFxActionIconFlags : uint8_t
	{
		None                  = 0,
		HideIfGamepad         = 1,
		HideIfMouseKeyboard   = 2,
		ShowActiveHoldUpdates = 3,
		MAX                   = 4
	};

	/**
	 * Enum DSFramework.EGFxTextfieldFlags
	 */
	enum class EGFxTextfieldFlags : uint8_t
	{
		None                         = 0,
		UseHTML                      = 1,
		RetainFormatOnSet            = 2,
		AutoSizeShrink               = 3,
		CheckTextWidth               = 4,
		CheckTextHeight              = 5,
		AllowCheckToAutoSizeShrink   = 6,
		UseAdvancedTextPreprocessing = 7,
		Default                      = 8,
		MAX                          = 9
	};

	/**
	 * Enum DSFramework.EHideableState
	 */
	enum class EHideableState : uint8_t
	{
		Visible                = 0,
		TransitioningToVisible = 1,
		TransitioningToHidden  = 2,
		Hidden                 = 3,
		MAX                    = 4
	};

	/**
	 * Enum DSFramework.EHideableTransitionType
	 */
	enum class EHideableTransitionType : uint8_t
	{
		Instant = 0,
		Gradual = 1,
		MAX     = 2
	};

	/**
	 * Enum DSFramework.EItemVisualDetail
	 */
	enum class EItemVisualDetail : uint8_t
	{
		Low  = 0,
		High = 1,
		MAX  = 2
	};

	/**
	 * Enum DSFramework.EItemStatBarDisplayType
	 */
	enum class EItemStatBarDisplayType : uint8_t
	{
		NoBar            = 0,
		ShowCompareBar   = 1,
		ShowBarNoCompare = 2,
		MAX              = 3
	};

	/**
	 * Enum DSFramework.EItemStatCompareRule
	 */
	enum class EItemStatCompareRule : uint8_t
	{
		None   = 0,
		Linear = 1,
		Scalar = 2,
		MAX    = 3
	};

	/**
	 * Enum DSFramework.ESizeCategory
	 */
	enum class ESizeCategory : uint8_t
	{
		Small   = 0,
		Medium  = 1,
		Large   = 2,
		Weighty = 3,
		MAX     = 4
	};

	/**
	 * Enum DSFramework.EHoldCategory
	 */
	enum class EHoldCategory : uint8_t
	{
		OneHanded = 0,
		TwoHanded = 1,
		DualWield = 2,
		Carry     = 3,
		MAX       = 4
	};

	/**
	 * Enum DSFramework.ELookAtRotateMode
	 */
	enum class ELookAtRotateMode : uint8_t
	{
		RotateView = 0,
		RotateBody = 1,
		MAX        = 2
	};

	/**
	 * Enum DSFramework.EMovementSpeedOverride
	 */
	enum class EMovementSpeedOverride : uint8_t
	{
		None = 0,
		Fast = 1,
		Slow = 2,
		MAX  = 3
	};

	/**
	 * Enum DSFramework.EMoveTargetBasisBehaviourMode
	 */
	enum class EMoveTargetBasisBehaviourMode : uint8_t
	{
		None      = 0,
		Following = 1,
		Leading   = 2,
		MAX       = 3
	};

	/**
	 * Enum DSFramework.EOptionallyRangedValueType
	 */
	enum class EOptionallyRangedValueType : uint8_t
	{
		ExactValue = 0,
		Range      = 1,
		MAX        = 2
	};

	/**
	 * Enum DSFramework.EOptionsEntryInstanceType
	 */
	enum class EOptionsEntryInstanceType : uint8_t
	{
		Group  = 0,
		Option = 1,
		MAX    = 2
	};

	/**
	 * Enum DSFramework.EOptionStorageType
	 */
	enum class EOptionStorageType : uint8_t
	{
		PersistentData = 0,
		IniFile        = 1,
		MAX            = 2
	};

	/**
	 * Enum DSFramework.EOptionMatchmakingPreference
	 */
	enum class EOptionMatchmakingPreference : uint8_t
	{
		All         = 0,
		Performance = 1,
		MAX         = 2
	};

	/**
	 * Enum DSFramework.EOptionGameType
	 */
	enum class EOptionGameType : uint8_t
	{
		Local       = 0,
		HostPublic  = 1,
		HostPrivate = 2,
		HostFriends = 3,
		MAX         = 4
	};

	/**
	 * Enum DSFramework.EOptionChangedReason
	 */
	enum class EOptionChangedReason : uint8_t
	{
		UserChange        = 0,
		PersistenceChange = 1,
		CodeChange        = 2,
		DebugChange       = 3,
		MAX               = 4
	};

	/**
	 * Enum DSFramework.EDisplayType
	 */
	enum class EDisplayType : uint8_t
	{
		Slider   = 0,
		Spinner  = 1,
		Dropdown = 2,
		Checkbox = 3,
		Radio    = 4,
		MAX      = 5
	};

	/**
	 * Enum DSFramework.EOptionsEntryType
	 */
	enum class EOptionsEntryType : uint8_t
	{
		Group       = 0,
		Integer     = 1,
		Float       = 2,
		Boolean     = 3,
		String      = 4,
		Enum        = 5,
		PresetGroup = 6,
		MAX         = 7
	};

	/**
	 * Enum DSFramework.EPaperDollSlotState
	 */
	enum class EPaperDollSlotState : uint8_t
	{
		Default               = 0,
		ItemAssignmentPending = 1,
		ItemRemovalPending    = 2,
		MAX                   = 3
	};

	/**
	 * Enum DSFramework.EPlatformSpecificTextPickerPlatforms
	 */
	enum class EPlatformSpecificTextPickerPlatforms : uint8_t
	{
		All         = 0,
		PC          = 1,
		XboxOneBase = 2,
		XboxOneX    = 3,
		XboxOneS    = 4,
		XboxOne     = 5,
		XboxSX      = 6,
		PS4Base     = 7,
		PS4Pro      = 8,
		PS4         = 9,
		PS5         = 10,
		Stadia      = 11,
		Xbox        = 12,
		Playstation = 13,
		Gen8        = 14,
		Gen8Base    = 15,
		Gen8Plus    = 16,
		Consoles    = 17,
		MAX         = 18
	};

	/**
	 * Enum DSFramework.EScalingMethod
	 */
	enum class EScalingMethod : uint8_t
	{
		Linear = 0,
		Curve  = 1,
		MAX    = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DSFramework.DirectCommandPathObjects
	 * Size -> 0x0010
	 */
	struct FDirectCommandPathObjects
	{
	public:
		TArray<class UGFxDisplayObject*>                           Objects;                                                 // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.ItemArchetypeData
	 * Size -> 0x00C8
	 */
	struct FItemArchetypeData
	{
	public:
		class UClass*                                              ItemType;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              InstanceDataType;                                        // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ItemFactory;                                             // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemInstancingPolicy                                      InstancingPolicy;                                        // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemOverflowPolicy                                        OverflowPolicy;                                          // 0x0019(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMEL[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInventoryCategory*                                  Category;                                                // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackSize;                                               // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCount;                                              // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InstanceCount;                                           // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CashValue;                                               // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDroppable;                                            // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X82P[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Actor;                                                   // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       ItemSkeletalMesh;                                        // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         DefaultPickupItemStaticMesh;                             // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideInCounters;                                         // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YKQT[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                UiName;                                                  // 0x0060(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     UIIconImage;                                             // 0x0078(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          UIIconTexture;                                           // 0x0090(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UIIconLabel;                                             // 0x0098(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                UIDescription;                                           // 0x00A8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FName                                                UISubCategory;                                           // 0x00C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.CollisionSlowDownSettings
	 * Size -> 0x0020
	 */
	struct FCollisionSlowDownSettings
	{
	public:
		float                                                      MaxImpulse;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1DCE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         SlowDownCurve;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RawImpulseDamp;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SmoothedImpulseDownFilter;                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SmoothedImpulseUpFilter;                                 // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CL7D[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.DespawnManagerSettings
	 * Size -> 0x00C8
	 */
	struct FDespawnManagerSettings
	{
	public:
		float                                                      OffScreenShortRangeMinTime;                              // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffScreenDespawnRange;                                   // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OnScreenDespawnRange;                                    // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OnScreenDespawnScreenPercentage;                         // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DissolveTime;                                            // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoadBalanceMaxPendingDespawnRequests;                   // 0x0014(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MPHA[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, int32_t>                                 MaxLimitedDespawnsOfCategory;                            // 0x0018(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<class FName, int32_t>                                 MinPendingDespawnsOfCategory;                            // 0x0068(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFRJ[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.PendingRemovalEntry
	 * Size -> 0x0038
	 */
	struct FPendingRemovalEntry
	{
	public:
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBaseDespawnCallback*                                DespawnCallback;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HFT[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.DespawnData
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	struct FDespawnData : public FPendingRemovalEntry
	{
	public:
		unsigned char                                              UnknownData_38W5[0x60];                                  // 0x0038(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.DelayedRemovalEntry
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	struct FDelayedRemovalEntry : public FPendingRemovalEntry
	{
	public:
		unsigned char                                              UnknownData_76YW[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.PlatformSpecificTextPicker
	 * Size -> 0x0050
	 */
	struct FPlatformSpecificTextPicker
	{
	public:
		TMap<EPlatformSpecificTextPickerPlatforms, class FText>    PlatformText;                                            // 0x0000(0x0050) Edit, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DSFramework.FiniteOptionString
	 * Size -> 0x0088
	 */
	struct FFiniteOptionString
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		struct FPlatformSpecificTextPicker                         DisplayNamePlatformOverrides;                            // 0x0018(0x0050) Edit, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0068(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UFiniteOptionMetaData*>                       MetaData;                                                // 0x0078(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.InventoryCategorySlot
	 * Size -> 0x001C (FullSize[0x0028] - InheritedSize[0x000C])
	 */
	struct FInventoryCategorySlot : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_TVJ4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemActor*                                          Item;                                                    // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AItemActor*                                          OldItem;                                                 // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WIGI[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.InventoryCategorySlots
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	struct FInventoryCategorySlots : public FFastArraySerializer
	{
	public:
		TArray<struct FInventoryCategorySlot>                      Slots;                                                   // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UInventoryCategoryContainer*                         Owner;                                                   // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.InventoryActorInfo
	 * Size -> 0x0020
	 */
	struct FInventoryActorInfo
	{
	public:
		TWeakObjectPtr<class AActor>                               Owner;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UInventoryComponent>                  InventoryComponent;                                      // 0x0008(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UCharacterActionComponent>            ActionComponent;                                         // 0x0010(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPaperDollComponent>                  PaperDollComponent;                                      // 0x0018(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.AssignedItem
	 * Size -> 0x0014
	 */
	struct FAssignedItem
	{
	public:
		struct FGuid                                               PersistentId;                                            // 0x0000(0x0010) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0010(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.TierData
	 * Size -> 0x0038
	 */
	struct FTierData
	{
	public:
		int32_t                                                    TierThreshold;                                           // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_REE7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameEventState*                                     GameEventState;                                          // 0x0008(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UBaseChallengeResponse*>                      ChallengeResponses;                                      // 0x0010(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FText                                                UIPersistentStatText;                                    // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.NotificationRule
	 * Size -> 0x0018
	 */
	struct FNotificationRule
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FE3L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBaseChallengeResponse*>                      Responses;                                               // 0x0008(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.ChallengeCollection
	 * Size -> 0x0010
	 */
	struct FChallengeCollection
	{
	public:
		TArray<class UBaseChallengeRuntimeObject*>                 Challenges;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.DynamicAttachmentRules
	 * Size -> 0x0028
	 */
	struct FDynamicAttachmentRules
	{
	public:
		unsigned char                                              UnknownData_EF08[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InitialAttachPoint;                                      // 0x0008(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachSocketName;                                        // 0x0014(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                IdentityName;                                            // 0x001C(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttachedComponentPersists;                              // 0x0024(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDestroyOwningActor;                                     // 0x0025(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1GX7[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.CharacterActionNetworkRequestItem
	 * Size -> 0x002C (FullSize[0x0038] - InheritedSize[0x000C])
	 */
	struct FCharacterActionNetworkRequestItem : public FFastArraySerializerItem
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x000C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ActionNameHash;                                          // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUserParamsObjectWrapper                            InitParams;                                              // 0x0020(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FUserParamsObjectWrapper                            StateParams;                                             // 0x0028(0x0008) NoDestructor, NativeAccessSpecifierPublic
		float                                                      AuthorityStartTime;                                      // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GP2O[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.CharacterActionNetworkRequestArray
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	struct FCharacterActionNetworkRequestArray : public FFastArraySerializer
	{
	public:
		TArray<struct FCharacterActionNetworkRequestItem>          Data;                                                    // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UCharacterActionComponent*                           Owner;                                                   // 0x0118(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.StateParamsRepInfo
	 * Size -> 0x0014
	 */
	struct FStateParamsRepInfo
	{
	public:
		struct FGuid                                               ActionId;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ServerLastUpdatedTime;                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.ReplicatedStateParams
	 * Size -> 0x0020
	 */
	struct FReplicatedStateParams
	{
	public:
		struct FStateParamsRepInfo                                 ReplicationInfo;                                         // 0x0000(0x0014) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_28Y5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUserParamsObjectWrapper                            StateParams;                                             // 0x0018(0x0008) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.ActionDefinitionEntry
	 * Size -> 0x0018
	 */
	struct FActionDefinitionEntry
	{
	public:
		class FString                                              ArrayElementTitleText;                                   // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UActionDefinition*                                   Definition;                                              // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.SceneContextQueryResult
	 * Size -> 0x0020
	 */
	struct FSceneContextQueryResult
	{
	public:
		class USceneContextComponent*                              LinkedContext;                                           // 0x0000(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraDistance;                                          // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScreenSpaceRadiusInPixels;                               // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScreenCentreDistance;                                    // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleToContext;                                          // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForwardAngle;                                            // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWithinForwardAngle;                                     // 0x001C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverlapping;                                            // 0x001D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6MIO[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.AnimNotifyAttachmentInfo
	 * Size -> 0x0010
	 */
	struct FAnimNotifyAttachmentInfo
	{
	public:
		class USceneComponent*                                     AttachedComponent;                                       // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAttachment*                                         Attachment;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.ChainableAction
	 * Size -> 0x0020
	 */
	struct FChainableAction
	{
	public:
		bool                                                       bSpecifyByActionDefinition;                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JB2Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ActionType;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UActionDefinition*                                   ActionDefinition;                                        // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterActionResolution                                 Resolution;                                              // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L2L4[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.StateSlomoRequest
	 * Size -> 0x001C
	 */
	struct FStateSlomoRequest
	{
	public:
		float                                                      TimeDilation;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceOfTriggering;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAffectedByThrottling;                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAppliesToAll;                                           // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2MPA[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Group;                                                   // 0x0014(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.BreezeWindSettings
	 * Size -> 0x0018
	 */
	struct FBreezeWindSettings
	{
	public:
		float                                                      MinSpeed;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeed;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedChangeFreq;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConeAngle;                                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConeFreqHorizontal;                                      // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConeFreqVertical;                                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.BreezeGustSettings
	 * Size -> 0x0018
	 */
	struct FBreezeGustSettings
	{
	public:
		float                                                      MinGustSpeed;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxGustSpeed;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinGustDuration;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxGustDuration;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinTimeBetweenGusts;                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTimeBetweenGusts;                                     // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.ActiveChallengeCollection
	 * Size -> 0x0010
	 */
	struct FActiveChallengeCollection
	{
	public:
		TArray<class FName>                                        Challenges;                                              // 0x0000(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.ActionResolutionEntry
	 * Size -> 0x0001
	 */
	struct FActionResolutionEntry
	{
	public:
		ECharacterActionResolution                                 Resolution;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.SlomoRequest
	 * Size -> 0x0020
	 */
	struct FSlomoRequest
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeDilation;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceOfTriggering;                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAffectedByThrottling;                                 // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAppliesToAll;                                           // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9B4Z[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Group;                                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.CustomParamsStackRequest
	 * Size -> 0x0020
	 */
	struct FCustomParamsStackRequest
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCustomParamsStackItem*                              Params;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_46U3[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.DespawnConditions
	 * Size -> 0x0030
	 */
	struct FDespawnConditions
	{
	public:
		float                                                      OffScreenDespawnDistance;                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OnScreenDespawnDistance;                                 // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeUntilCanDelete;                                      // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeleteTimeVariation;                                     // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDespawnPriority                                           Priority;                                                // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLimitedType;                                          // 0x0011(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_82PA[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LimitedCategoryName;                                     // 0x0014(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U7SK[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AdditionalComments;                                      // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.DespawnWeight
	 * Size -> 0x0004
	 */
	struct FDespawnWeight
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.DSCharacterMovementPushConfig
	 * Size -> 0x0010
	 */
	struct FDSCharacterMovementPushConfig
	{
	public:
		float                                                      PushMass;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPushingSpeed;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedRateChange;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LateralSpeedRateChange;                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.DSCharacterMovementPairwisePushConfig
	 * Size -> 0x0020
	 */
	struct FDSCharacterMovementPairwisePushConfig
	{
	public:
		class FName                                                ThisState;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OtherState;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDSCharacterMovementPushConfig                      Config;                                                  // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.DSCharacterMovementFactToState
	 * Size -> 0x0088
	 */
	struct FDSCharacterMovementFactToState
	{
	public:
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0000(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StateName;                                               // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DB27[0x48];                                  // 0x0040(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.FiniteOptionBool
	 * Size -> 0x0080
	 */
	struct FFiniteOptionBool
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		struct FPlatformSpecificTextPicker                         DisplayNamePlatformOverrides;                            // 0x0018(0x0050) Edit, NativeAccessSpecifierPublic
		bool                                                       Value;                                                   // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YNC[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UFiniteOptionMetaData*>                       MetaData;                                                // 0x0070(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.FiniteOptionInt
	 * Size -> 0x0080
	 */
	struct FFiniteOptionInt
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		struct FPlatformSpecificTextPicker                         DisplayNamePlatformOverrides;                            // 0x0018(0x0050) Edit, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AORL[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UFiniteOptionMetaData*>                       MetaData;                                                // 0x0070(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.FiniteOptionFloat
	 * Size -> 0x0080
	 */
	struct FFiniteOptionFloat
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		struct FPlatformSpecificTextPicker                         DisplayNamePlatformOverrides;                            // 0x0018(0x0050) Edit, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_89ZU[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UFiniteOptionMetaData*>                       MetaData;                                                // 0x0070(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.NonInstancedActors
	 * Size -> 0x0010
	 */
	struct FNonInstancedActors
	{
	public:
		TArray<class AItemActor*>                                  Actors;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.ItemStatContributorData
	 * Size -> 0x0040
	 */
	struct FItemStatContributorData
	{
	public:
		class FName                                                Identifier;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                UiName;                                                  // 0x0008(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FLinearColor                                        Colour;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        NegativeColour;                                          // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.ItemStatDisplayRules
	 * Size -> 0x0040
	 */
	struct FItemStatDisplayRules
	{
	public:
		class FText                                                Label;                                                   // 0x0000(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FString                                              IconString;                                              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CompareMetric;                                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemStatCompareRule                                       CompareRule;                                             // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemStatBarDisplayType                                    BarDisplayType;                                          // 0x002D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IT18[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BarMaxValue;                                             // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DotsMinValue;                                            // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DotsMaxValue;                                            // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LSUN[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.ItemStatGroupList
	 * Size -> 0x0010
	 */
	struct FItemStatGroupList
	{
	public:
		TArray<class FName>                                        OrderedStatNames;                                        // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.ItemRarityData
	 * Size -> 0x0020
	 */
	struct FItemRarityData
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UUIColourRowHandleWrapper*                           ColourHandle;                                            // 0x0018(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.MoveTargetBasisBehaviour
	 * Size -> 0x0008
	 */
	struct FMoveTargetBasisBehaviour
	{
	public:
		EMoveTargetBasisBehaviourMode                              Mode;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6RYN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDistanceToFace;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.MoveTargetParams
	 * Size -> 0x0018
	 */
	struct FMoveTargetParams
	{
	public:
		float                                                      AcceptanceRadius;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AcceptanceAngle;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePathFinding;                                         // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowPartialPaths;                                      // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMovementSpeedOverride                                     MovementSpeedOverride;                                   // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CD42[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxPathfindFailTime;                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMoveTargetBasisBehaviour                           BasisBehaviour;                                          // 0x0010(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.PresetOption
	 * Size -> 0x00A0
	 */
	struct FPresetOption
	{
	public:
		class FString                                              TargetOptionPath;                                        // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameBalanceableDataTypeOfData                             OptionType;                                              // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EXSN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameBalanceableInt                                 IntValue;                                                // 0x0018(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGameBalanceableFloat                               FloatValue;                                              // 0x0038(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGameBalanceableString                              StringValue;                                             // 0x0058(0x0028) Edit, NativeAccessSpecifierPublic
		struct FGameBalanceableBool                                BoolValue;                                               // 0x0080(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.PresetOptionsGroup
	 * Size -> 0x0038
	 */
	struct FPresetOptionsGroup
	{
	public:
		class FString                                              PresetGroupLabel;                                        // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                PresetGroupDisplayText;                                  // 0x0010(0x0018) Edit, NativeAccessSpecifierPublic
		TArray<struct FPresetOption>                               PresetOptions;                                           // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.PaperDollSlotSetupData
	 * Size -> 0x0010
	 */
	struct FPaperDollSlotSetupData
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInputMapperAction*                                  InputAction;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.SlotGroupSetupData
	 * Size -> 0x0028
	 */
	struct FSlotGroupSetupData
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SlotGroupType;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SlotType;                                                // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPaperDollSlotSetupData>                     SlotsSetup;                                              // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.InternalPauserImplementation
	 * Size -> 0x0018
	 */
	struct FInternalPauserImplementation
	{
	public:
		unsigned char                                              UnknownData_XWY1[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URequirementsContainer*                              PauseRequirements;                                       // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.GroupingConfig
	 * Size -> 0x0008
	 */
	struct FGroupingConfig
	{
	public:
		float                                                      CooldownTime;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TUN1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.CharacterActionOnResolvedParams
	 * Size -> 0x0010
	 */
	struct FCharacterActionOnResolvedParams
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterActionResolution                                 Resolution;                                              // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AAHA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.CharacterActionOnCancelledParams
	 * Size -> 0x0008
	 */
	struct FCharacterActionOnCancelledParams
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.CharacterActionOnBeginParams
	 * Size -> 0x0010
	 */
	struct FCharacterActionOnBeginParams
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NetworkTime;                                             // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B5DI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.CharacterActionOnEndParams
	 * Size -> 0x0028
	 */
	struct FCharacterActionOnEndParams
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterActionEndedReason                                Reason;                                                  // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1RF0[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               InterruptingId;                                          // 0x000C(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                InterruptingName;                                        // 0x001C(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SGBK[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.CharacterActionOnCustomSignalParams
	 * Size -> 0x0010
	 */
	struct FCharacterActionOnCustomSignalParams
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SignalName;                                              // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.TelemetryActorID
	 * Size -> 0x0020
	 */
	struct FTelemetryActorID
	{
	public:
		class FString                                              Archetype;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Name;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DSFramework.BaseRangeBasedScalar
	 * Size -> 0x0020
	 */
	struct FBaseRangeBasedScalar
	{
	public:
		unsigned char                                              UnknownData_JLLM[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EScalingMethod                                             ScalingMethod;                                           // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WIY[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScaleMultiplierAppliedAtStartRange;                      // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleMultiplierAppliedAtEndRange;                        // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5KU1[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         StartToEndRangeScalingCurve;                             // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.RangeBasedScalar
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FRangeBasedScalar : public FBaseRangeBasedScalar
	{
	public:
		float                                                      ScalarStartRange;                                        // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ScalarEndRange;                                          // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DSFramework.DSCharacterSplineFollowNetData
	 * Size -> 0x0018
	 */
	struct FDSCharacterSplineFollowNetData
	{
	public:
		struct FVector                                             SplinePos;                                               // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NJS7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USplineComponent*                                    SplineRawPtr;                                            // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.ModularRotationModeBase
	 * Size -> 0x0008
	 */
	struct FModularRotationModeBase
	{
	public:
		unsigned char                                              UnknownData_ALFJ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.AchievementsManagerDefinition
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAchievementsManagerDefinition : public FManagerDefinition
	{	};

	/**
	 * ScriptStruct DSFramework.GameplayEventData_UpdateAchievement
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FGameplayEventData_UpdateAchievement : public FGameplayEventData
	{
	public:
		class FString                                              AchievementID;                                           // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAchievementUpdateType                                     AchievementUpdateType;                                   // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z3CF[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.ClientChallengeProgress
	 * Size -> 0x000C
	 */
	struct FClientChallengeProgress
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UnlockedTier;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.ChallengeDataEntry
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FChallengeDataEntry : public FTableRowBase
	{
	public:
		class UBaseChallengeDataAsset*                             ChallengeDataAsset;                                      // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.NotificationData
	 * Size -> 0x000C
	 */
	struct FNotificationData
	{
	public:
		unsigned char                                              UnknownData_3TP7[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.ChallengeResponsePayload
	 * Size -> 0x0020
	 */
	struct FChallengeResponsePayload
	{
	public:
		unsigned char                                              UnknownData_1EQ0[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.CharacterActionComponentPrePhysicsTickFunction
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FCharacterActionComponentPrePhysicsTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_5E0U[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.AllocateActionParams
	 * Size -> 0x0010
	 */
	struct FAllocateActionParams
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             Outer;                                                   // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.CharacterActionTelemetryEvent
	 * Size -> 0x0038 (FullSize[0x0048] - InheritedSize[0x0010])
	 */
	struct FCharacterActionTelemetryEvent : public FDSOnline_FTelemetryEvent
	{
	public:
		class FName                                                ActionName;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTelemetryActorID                                   Actor;                                                   // 0x0018(0x0020) NativeAccessSpecifierPublic
		struct FVector                                             ActorLocation;                                           // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJJW[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.CharacterActionEndTelemetryEvent
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FCharacterActionEndTelemetryEvent : public FCharacterActionTelemetryEvent
	{
	public:
		float                                                      ActiveTime;                                              // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MFDG[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.CharacterActionBeginTelemetryEvent
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	struct FCharacterActionBeginTelemetryEvent : public FCharacterActionTelemetryEvent
	{	};

	/**
	 * ScriptStruct DSFramework.CharacterActionRequestParams
	 * Size -> 0x0020
	 */
	struct FCharacterActionRequestParams
	{
	public:
		class UActionDefinition*                                   Definition;                                              // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K10D[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UCustomActionParamsBase>              InitParams;                                              // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxQueueTime;                                            // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DQO7[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.CharacterActionEntry
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FCharacterActionEntry : public FTableRowBase
	{
	public:
		class FName                                                ActionName;                                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActionCategory;                                          // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActionClass;                                             // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ReplicatedDataType;                                      // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.CharacterActionResolveParams
	 * Size -> 0x0038
	 */
	struct FCharacterActionResolveParams
	{
	public:
		struct FGuid                                               CurrentId;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               IncomingId;                                              // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                IncomingName;                                            // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                IncomingCategory;                                        // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              IncomingClass;                                           // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.ModularRotationModeStack
	 * Size -> 0x0010
	 */
	struct FModularRotationModeStack
	{
	public:
		unsigned char                                              UnknownData_Y94Z[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.CharacterNamesRow
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FCharacterNamesRow : public FTableRowBase
	{
	public:
		class FText                                                UiName;                                                  // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FName                                                VoiceName;                                               // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.ControllerLayout
	 * Size -> 0x0008
	 */
	struct FControllerLayout
	{
	public:
		unsigned char                                              UnknownData_0DKH[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.UIColourEntryRow
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FUIColourEntryRow : public FTableRowBase
	{
	public:
		struct FLinearColor                                        Colour;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.GameplayEventData_ExclusiveVisibilityLostEvent
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FGameplayEventData_ExclusiveVisibilityLostEvent : public FGameplayEventData
	{
	public:
		unsigned char                                              UnknownData_TNA4[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.DespawnInfo
	 * Size -> 0x0038
	 */
	struct FDespawnInfo
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EI5O[0x30];                                  // 0x0008(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.CapsuleCustomCollisionParams
	 * Size -> 0x0060
	 */
	struct FCapsuleCustomCollisionParams
	{
	public:
		class FName                                                BaseCollisionProfile;                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCollisionEnabled;                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionEnabled                                          CollisionEnabledOverride;                                // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideObjectType;                                     // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          CollisionObjectTypeOverride;                             // 0x000B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JWUQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ECollisionChannel, ECollisionResponse>                CollisionResponseOverrides;                              // 0x0010(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.DSCharacterMovementSolverResultVelocityAdded
	 * Size -> 0x0018
	 */
	struct FDSCharacterMovementSolverResultVelocityAdded
	{
	public:
		struct FVector                                             PushVel;                                                 // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_POOQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDSCharacterMovementComponent*                       Comp;                                                    // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.DSCharacterMovementSolverResult
	 * Size -> 0x0020
	 */
	struct FDSCharacterMovementSolverResult
	{
	public:
		struct FVector                                             PushVel;                                                 // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPushVelUpdated;                                         // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VKLY[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDSCharacterMovementSolverResultVelocityAdded> Added;                                                   // 0x0010(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.DSCharacterSplineFollowData
	 * Size -> 0x0014
	 */
	struct FDSCharacterSplineFollowData
	{
	public:
		struct FVector                                             SplinePos;                                               // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USplineComponent>                     SplinePtr;                                               // 0x000C(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.DSVectorSpringState
	 * Size -> 0x0018
	 */
	struct FDSVectorSpringState
	{
	public:
		struct FVector                                             Pos;                                                     // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.DSFloatSpringState
	 * Size -> 0x0008
	 */
	struct FDSFloatSpringState
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Velocity;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.DSSignificanceManagerTickFunction
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FDSSignificanceManagerTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_T9N2[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.BaseGameAchievementTelemetryEvent
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FBaseGameAchievementTelemetryEvent : public FDSOnline_FTelemetryEvent
	{
	public:
		class FString                                              AchievementID;                                           // 0x0010(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    AwardValue;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FAQS[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.GameAchievementAwardedTelemetryEvent
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	struct FGameAchievementAwardedTelemetryEvent : public FBaseGameAchievementTelemetryEvent
	{	};

	/**
	 * ScriptStruct DSFramework.GameAchievementProgressUpdateTelemetryEvent
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FGameAchievementProgressUpdateTelemetryEvent : public FBaseGameAchievementTelemetryEvent
	{
	public:
		int32_t                                                    IncreasedBy;                                             // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NewValue;                                                // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct DSFramework.GameAchievementRow
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FGameAchievementRow : public FTableRowBase
	{
	public:
		class FString                                              AchievementID;                                           // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                AchievementName;                                         // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                AchievementDescription;                                  // 0x0030(0x0018) Edit, NativeAccessSpecifierPublic
		int32_t                                                    AwardHitCount;                                           // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FAVV[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.HomeArea
	 * Size -> 0x0018
	 */
	struct FHomeArea
	{
	public:
		class UShapeComponent*                                     Shape;                                                   // 0x0000(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.ClientInventoryUpdatedItem
	 * Size -> 0x0018
	 */
	struct FClientInventoryUpdatedItem
	{
	public:
		class UItemArchetype*                                      ItemArchetype;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AItemActor*                                          Item;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Delta;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.ItemCreationParams
	 * Size -> 0x0018
	 */
	struct FItemCreationParams
	{
	public:
		class UItemArchetype*                                      ItemArchetype;                                           // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UItemInstanceData*                                   InstanceData;                                            // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             Outer;                                                   // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.ItemStat
	 * Size -> 0x0090
	 */
	struct FItemStat
	{
	public:
		class FText                                                ValueStr;                                                // 0x0000(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YCG1[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, float>                                   ValueContributors;                                       // 0x0020(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_85M4[0x20];                                  // 0x0070(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.GameplayEventData_OnChallengeMissionCompleted
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FGameplayEventData_OnChallengeMissionCompleted : public FGameplayEventData
	{
	public:
		int32_t                                                    MissionId;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J4R2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSFramework.MoveTarget
	 * Size -> 0x0070
	 */
	struct FMoveTarget
	{
	public:
		struct FVector                                             DirectionAtDestination;                                  // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMoveTargetParams                                   Params;                                                  // 0x000C(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0024(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             OffsetFromActor;                                         // 0x0038(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y7IQ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0048(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DSFramework.OptionallyRangedValue_Float
	 * Size -> 0x0010
	 */
	struct FOptionallyRangedValue_Float
	{
	public:
		EOptionallyRangedValueType                                 ValueType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YI96[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumValue;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumValue;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.SetOptionValueTelemetryEvent
	 * Size -> 0x0030 (FullSize[0x0040] - InheritedSize[0x0010])
	 */
	struct FSetOptionValueTelemetryEvent : public FDSOnline_FTelemetryEvent
	{
	public:
		class FString                                              OptionPath;                                              // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PreviousValue;                                           // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NewValue;                                                // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSFramework.SlomoHandle
	 * Size -> 0x0020
	 */
	struct FSlomoHandle
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SlomoFinished;                                           // 0x0010(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
