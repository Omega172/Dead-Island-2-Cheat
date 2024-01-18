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
	 * Class AudioPlugin.AmbientAudioAreaData
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class UAmbientAudioAreaData : public UGameAreaData
	{
	public:
		struct FAmbientAudioAreaDefinition                         Definition;                                              // 0x00A8(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.AmbientAudioActor
	 * Size -> 0x0020 (FullSize[0x02D0] - InheritedSize[0x02B0])
	 */
	class AAmbientAudioActor : public AAkLateReverbActor
	{
	public:
		class UGameAreaComponent*                                  GameAreaComponent;                                       // 0x02B0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAreaShapeComponent*                                 AreaShapeComponent;                                      // 0x02B8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6XWC[0x8];                                   // 0x02C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkLateReverbComponent*                              LateReverbComponent;                                     // 0x02C8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.AmbientAudioManager
	 * Size -> 0x00C8 (FullSize[0x0410] - InheritedSize[0x0348])
	 */
	class AAmbientAudioManager : public AGameAreaManager
	{
	public:
		TMap<int8_t, struct FAmbientAudioGroupPlayingData>         InsideGroupPlayingDatas;                                 // 0x0348(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<int8_t, struct FInsideWithinRangeAmbientAudioAreaResults> InsideNearbyAmbientAudioAreaResults;                     // 0x0398(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FAmbientAudioPlayingData>                    NearbyPlayingDatas;                                      // 0x03E8(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FWithinRangeAmbientAudioAreaResult>          NearbyAmbientAudioAreaResults;                           // 0x03F8(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AF9L[0x8];                                   // 0x0408(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.AnimNotify_LocalisedAudio
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UAnimNotify_LocalisedAudio : public UAnimNotify
	{
	public:
		class ULocalisedAudioDataAsset*                            LocalisedAudioDataAsset;                                 // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocalisedAudioChooser                              LocalisedAudio;                                          // 0x0040(0x0008) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AttachName;                                              // 0x0048(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.AnimNotifyState_LocalisedAudio
	 * Size -> 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_LocalisedAudio : public UAnimNotifyState
	{
	public:
		class ULocalisedAudioDataAsset*                            LocalisedAudioDataAsset;                                 // 0x0030(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocalisedAudioChooser                              LocalisedAudio;                                          // 0x0038(0x0008) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AttachName;                                              // 0x0040(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RJQ2[0xA0];                                  // 0x0048(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.AudioFactNameSwitchGroupNamePair
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UAudioFactNameSwitchGroupNamePair : public UDataAsset
	{
	public:
		class FString                                              ObjectKey;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0040(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SwitchGroupName;                                         // 0x004C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TKB[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DefaultSwitchState;                                      // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFactIsBoolean;                                          // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTKR[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TrueSwitchState;                                         // 0x006C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FalseSwitchState;                                        // 0x0074(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ABS[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.AudioSwitchGroupNameSwitchStatePair
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAudioSwitchGroupNameSwitchStatePair : public UDataAsset
	{
	public:
		class FName                                                SwitchGroupName;                                         // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SwitchState;                                             // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPushSwitchStateToKnowledgeBase;                         // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HFFF[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseFactKey                               FactKeyToPush;                                           // 0x0044(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.AudioFactNameRTPCNamePair
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UAudioFactNameRTPCNamePair : public UDataAsset
	{
	public:
		class FString                                              ObjectKey;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0040(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RTPCName;                                                // 0x004C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RTPCValueDeltaRequiredToUpdate;                          // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.AudioFootstepLocalPlayerDistanceUpdatePositionDeltaAsset
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAudioFootstepLocalPlayerDistanceUpdatePositionDeltaAsset : public UDataAsset
	{
	public:
		TArray<struct FLocalPlayerDistanceUpdatePositionDeltaPair> LocalPlayerDistancePositionDeltaPairArray;               // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.MusicThemeDefinition
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UMusicThemeDefinition : public UDataAsset
	{
	public:
		struct FMusicThemeDefinitionData                           Data;                                                    // 0x0030(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.MusicThemeSelectorDataAsset
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UMusicThemeSelectorDataAsset : public UDataAsset
	{
	public:
		TArray<struct FMusicThemeStateDefinition>                  ThemeStateDefinitions;                                   // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.AudioPhysicsMaterialToSwitchStateAsset
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UAudioPhysicsMaterialToSwitchStateAsset : public UDataAsset
	{
	public:
		TMap<EPhysicalSurface, class FName>                        PhysicsMaterialToSwitchStateMap;                         // 0x0030(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.AudioManager
	 * Size -> 0x01B0 (FullSize[0x0460] - InheritedSize[0x02B0])
	 */
	class AAudioManager : public AInfo
	{
	public:
		unsigned char                                              UnknownData_41FA[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       PauseGameAudioEvent;                                     // 0x02B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       UnpauseGameAudioEvent;                                   // 0x02C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAkAudioEvent*>                               EventsToAutoPlayArray;                                   // 0x02C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       MusicEventToPlay;                                        // 0x02D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAudioPhysicsMaterialToSwitchStateAsset*             PhysicsMaterialToSwitchStateAsset;                       // 0x02E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioPhysicsMaterialToObstructionData*            PhysicsMaterialToObstructionData;                        // 0x02E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAudioSwitchGroupNameSwitchStateSimplePair>  EditorDSAkEventSwitchArray;                              // 0x02F0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<class FString, class UAkAudioEvent*>                  EditorBreathingEventsMap;                                // 0x0300(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FString>                                      SwitchesWatchArray;                                      // 0x0350(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FString>                                      RTPCsWatchArray;                                         // 0x0360(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<class UAkAudioEvent*, struct FAudioEventDebugData>    AudioEventDebugDatas;                                    // 0x0370(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NKZ7[0xA0];                                  // 0x03C0(0x00A0) MISSED OFFSET (PADDING)

	public:
		class AAudioManager* GetAudioManager(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.AudioManagerDebugDataStore
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioManagerDebugDataStore : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.AudioNetworkingManager
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class AAudioNetworkingManager : public AInfo
	{
	public:
		class UCharacterActionComponent*                           ActionComponent;                                         // 0x02B0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.AudioPluginSettings
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UAudioPluginSettings : public UObject
	{
	public:
		struct FSoftClassPath                                      LocalisedAudioManagerClass;                              // 0x0028(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      DialogueManagerClass;                                    // 0x0040(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      MusicManagerClass;                                       // 0x0058(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.AudioUtilities
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioUtilities : public UBlueprintFunctionLibrary
	{
	public:
		int32_t TriggerDialogueNearbyPosition(const struct FDialogueTriggerChooser& DialogueTrigger, const struct FVector& Position, class UObject* WorldContextObject, const struct FTriggerNearbyConfigData& TriggerNearbyConfigData, const struct FDialogueSessionConfigData& SessionConfigData, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const class FScriptDelegate& OnEventDelegate, int32_t OnEventFlags, float DelaySeconds);
		int32_t TriggerDialogueNearbyDialogueComponent(const struct FDialogueTriggerChooser& DialogueTrigger, class UDialogueComponent* InstigatingDialogueComponent, const struct FTriggerNearbyConfigData& TriggerNearbyConfigData, const struct FDialogueSessionConfigData& SessionConfigData, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const class FScriptDelegate& OnEventDelegate, int32_t OnEventFlags, float DelaySeconds);
		int32_t TriggerDialogueConversation(const struct FDialogueTriggerChooser& DialogueTrigger, class UDialogueComponent* DialogueComponent, const struct FDialogueSessionConfigData& SessionConfigData, TArray<struct FDialogueSessionParticipantData> ParticipantDatas, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const struct FTriggerDialogueParams& TriggerParams, const class FScriptDelegate& OnEventDelegate, int32_t OnEventFlags);
		int32_t TriggerDialogueAssetNearbyPosition(class UConversationDialogueTriggerDataAsset* DialogueTriggerDataAsset, const struct FVector& Position, class UObject* WorldContextObject, const struct FTriggerNearbyConfigData& TriggerNearbyConfigData, const struct FDialogueSessionConfigData& SessionConfigData, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const class FScriptDelegate& OnEventDelegate, int32_t OnEventFlags, float DelaySeconds);
		int32_t TriggerDialogueAssetNearbyDialogueComponent(class UConversationDialogueTriggerDataAsset* DialogueTriggerDataAsset, class UDialogueComponent* InstigatingDialogueComponent, const struct FTriggerNearbyConfigData& TriggerNearbyConfigData, const struct FDialogueSessionConfigData& SessionConfigData, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const class FScriptDelegate& OnEventDelegate, int32_t OnEventFlags, float DelaySeconds);
		int32_t TriggerDialogueAssetConversation(class UConversationDialogueTriggerDataAsset* DialogueTriggerDataAsset, class UDialogueComponent* DialogueComponent, const struct FDialogueSessionConfigData& SessionConfigData, TArray<struct FDialogueSessionParticipantData> ParticipantDatas, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const struct FTriggerDialogueParams& TriggerParams, const class FScriptDelegate& OnEventDelegate, int32_t OnEventFlags);
		void StopDialogueSession(class UObject* WorldContextObject, int32_t SessionId);
		bool RemoveRuntimeEventHandler(class UObject* WorldContextObject, int32_t RuntimeEventHandlerId, const class FString& Description);
		void RemoveAllDialogueOnEventDelegates(class UObject* WorldContextObject, int32_t SessionId, class UObject* UserObject);
		int32_t PostMultipleLocalisedDialogue(class UObject* WorldContextObject, TArray<struct FDialoguePathWithOverride> DialoguePathWithOverrideArray, class AActor* Actor, class UAkAudioEvent* AudioEvent, bool bStopWhenAttachedToDestroyed);
		int32_t PostLocalisedDialogueWithFaceFXToComponent(class UObject* WorldContextObject, const struct FDialogueFilePath& FilePathWrapper, class UAkComponent* AkComponent, class UFaceFXComponent* FaceFXComponent, bool* bOutIsPlayingWithFaceFX, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed);
		int32_t PostLocalisedDialogueWithFaceFX(class UObject* WorldContextObject, const struct FDialogueFilePath& FilePathWrapper, class AActor* Actor, bool* bOutIsPlayingWithFaceFX, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed);
		int32_t PostLocalisedDialogueToComponent(class UObject* WorldContextObject, const struct FDialogueFilePath& FilePathWrapper, class UAkComponent* AkComponent, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed);
		int32_t PostLocalisedDialogueIntoDialogueSystem(const struct FDialogueFilePath& FilePathWrapper, class UDialogueComponent* DialogueComponent, EDialoguePriority DialoguePriority, const struct FTriggerDialogueParams& TriggerParams, const class FScriptDelegate& OnEventDelegate, int32_t OnEventFlags);
		int32_t PostLocalisedDialogue(class UObject* WorldContextObject, const struct FDialogueFilePath& FilePathWrapper, class AActor* Actor, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed);
		TArray<class UDialogueComponent*> GetRegisteredDialogueComponentsWithOwnerClass(class UObject* WorldContextObject, class UClass* OwnerClass, const struct FVector& NearPosition);
		bool GetLineTextForDialoguePath(class UObject* WorldContextObject, const struct FDialogueFilePath& FilePathWrapper, class FString* OutLineText);
		int32_t FindDialogueSessionIdWithRequirementsDataAsset(class UObject* WorldContextObject, class UConversationDialogueTriggerDataAsset* RequiredDialogueTriggerDataAsset, TArray<class UClass*> OptionalRequiredOwnerClasses, TArray<class UDialogueComponent*> OptionalRequiredDialogueComponents, TArray<struct FDialogueKey> OptionalRequiredParticipantNames, int32_t FindFlags, bool bAddDataAssetInLevelParticipantClasses, bool bAddDataAssetParticipantNames);
		int32_t FindDialogueSessionIdWithRequirementsChooser(class UObject* WorldContextObject, const struct FDialogueTriggerChooser& RequiredDialogueTrigger, TArray<class UClass*> OptionalRequiredOwnerClasses, TArray<class UDialogueComponent*> OptionalRequiredDialogueComponents, TArray<struct FDialogueKey> OptionalRequiredParticipantNames, int32_t FindFlags);
		int32_t AddRuntimeEventHandler(class UObject* WorldContextObject, const class FScriptDelegate& OnRuntimeEventDynamic, const class FString& Description);
		bool AddDialogueOnEventDelegate(class UObject* WorldContextObject, const class FScriptDelegate& OnEventDelegate, int32_t SessionId);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.ContactAudioActor
	 * Size -> 0x0018 (FullSize[0x02C8] - InheritedSize[0x02B0])
	 */
	class AContactAudioActor : public AActor
	{
	public:
		class UGameAreaComponent*                                  GameAreaComponent;                                       // 0x02B0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAreaShapeComponent*                                 AreaShapeComponent;                                      // 0x02B8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L3VZ[0x8];                                   // 0x02C0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.ContactAudioAreaData
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class UContactAudioAreaData : public UGameAreaData
	{
	public:
		struct FContactAudioAreaDefinition                         Definition;                                              // 0x00A8(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.ContactAudioManager
	 * Size -> 0x0050 (FullSize[0x0398] - InheritedSize[0x0348])
	 */
	class AContactAudioManager : public AGameAreaManager
	{
	public:
		unsigned char                                              UnknownData_AWGA[0x50];                                  // 0x0348(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.DialogueComponent
	 * Size -> 0x0310 (FullSize[0x03F8] - InheritedSize[0x00E8])
	 */
	class UDialogueComponent : public UActorComponent
	{
	public:
		TArray<class UAudioFactNameSwitchGroupNamePair*>           AudioFactsAndSwitchGroups;                               // 0x00E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UAudioFactNameRTPCNamePair*>                  AudioFactsAndRTPCs;                                      // 0x00F8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UAnimationLayerGroup*                                FaceFXLayerGroup;                                        // 0x0108(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FaceFXLayerGroupRequestReason;                           // 0x0110(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDialogueKey                                        VoiceName;                                               // 0x0118(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5Q1Z[0x1C];                                  // 0x0124(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNPCAudioMessagingType*                              OverrideRadioNPCAudioMessagingType;                      // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2X1E[0x20];                                  // 0x0148(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EDialogueComponentType                                     Type;                                                    // 0x0168(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VB2C[0x3];                                   // 0x0169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AttachName;                                              // 0x016C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FRotator                                            LocalRotation;                                           // 0x0174(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		int32_t                                                    RepVoiceNameKeyId;                                       // 0x0180(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6GND[0x274];                                 // 0x0184(0x0274) MISSED OFFSET (PADDING)

	public:
		int32_t TriggerDialogue(const struct FDialogueTriggerChooser& DialogueTrigger, const struct FTriggerDialogueParams& TriggerParams, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const class FScriptDelegate& OnEventDelegate, int32_t OnEventFlags);
		void SetVoiceName(const struct FDialogueKey& InVoiceName);
		void ServerForcedDialogueTriggerExecution(int32_t VoiceNameKeyId, int32_t InstigatingPlayerId, uint32_t BaseVoiceSetNameId, uint32_t TriggerNameId, const struct FTriggerDialogueParamsInternal& TriggerParams, uint32_t ForceGlobalRuleIndex, TArray<struct FUserParamsObjectWrapper> ForcePerformActionDatas, EDialoguePriority DynamicPriority);
		bool RemoveRuntimeEventHandler(int32_t RuntimeEventHandlerId, const class FString& Description);
		void RemovePriorityChangedDelegate(const class FScriptDelegate& Delegate);
		void OnRep_VoiceName();
		void OnFaceFXRawPlaybackStarted(class USkeletalMeshComponent* SkeletalMeshComponent, const class FName& AnimId);
		void OnFaceFXPlaybackStopped(class USkeletalMeshComponent* SkeletalMeshComponent, const class FName& AnimId);
		void NetMulticastTriggerDialogueWithComponents(TArray<class UDialogueComponent*> Components, class UConversationDialogueTriggerDataAsset* DataAsset, const struct FDialogueSessionConfigData& ConfigData, const struct FVector& NearPosition, const struct FTriggerDialogueParamsInternal& TriggerParams, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues);
		void NetMulticastForcedDialogueTriggerExecution(int32_t VoiceNameKeyId, int32_t InstigatingPlayerId, uint32_t BaseVoiceSetNameId, uint32_t TriggerNameId, const struct FTriggerDialogueParamsInternal& TriggerParams, uint32_t ForceGlobalRuleIndex, TArray<struct FUserParamsObjectWrapper> ForcePerformActionDatas, EDialoguePriority DynamicPriority);
		void ClientTriggerDialogueWithComponents(TArray<class UDialogueComponent*> Components, class UConversationDialogueTriggerDataAsset* DataAsset, const struct FDialogueSessionConfigData& ConfigData, const struct FVector& NearPosition, const struct FTriggerDialogueParamsInternal& TriggerParams, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues);
		void AddPriorityChangedDelegate(const class FScriptDelegate& Delegate);
		int32_t AddDynamicRuntimeEventHandler(const class FScriptDelegate& OnRuntimeEventDynamic, const class FString& Description);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.DialogueFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDialogueFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		int32_t TriggerDialogueWithoutComponents(class UObject* WorldContextObject, class UConversationDialogueTriggerDataAsset* DataAsset, const struct FDialogueSessionConfigData& ConfigData, const struct FVector& NearPosition, const struct FTriggerDialogueParams& TriggerParams, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const class FScriptDelegate& OnEventDelegate);
		int32_t TriggerDialogueWithComponents(class UObject* WorldContextObject, TArray<class UDialogueComponent*> Components, class UConversationDialogueTriggerDataAsset* DataAsset, const struct FDialogueSessionConfigData& ConfigData, const struct FVector& NearPosition, const struct FTriggerDialogueParams& TriggerParams, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const class FScriptDelegate& OnEventDelegate);
		int32_t TriggerDialogueWithActors(class UObject* WorldContextObject, TArray<class AActor*> Actors, class UConversationDialogueTriggerDataAsset* DataAsset, const struct FDialogueSessionConfigData& ConfigData, const struct FVector& NearPosition, const struct FTriggerDialogueParams& TriggerParams, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues);
		void RemoveBlockBreathingReason(class UObject* WorldContextObject, struct FGuid* Reason);
		bool IsDialogueKeyInParticipantDatas(const struct FDialogueKey& DialogueKey, TArray<struct FDialogueSessionParticipantData>* ParticipantDatas);
		bool IsAllDialogueBlocked(class UObject* WorldContextObject);
		struct FDialogueKey GetRadioParticipantVoiceName(const struct FRadioParticipantData& RadioParticipantData, class UDialogueComponent* DialogueComponent);
		class UDialogueComponent* GetDialogueComponentFromParticipantName(const struct FDialogueKey& DialogueKey, TArray<struct FDialogueSessionParticipantData> ParticipantDatas);
		bool AllRequiredParticipantsExistForDialogueWithoutComponents(class UObject* WorldContextObject, class UConversationDialogueTriggerDataAsset* DataAsset, const struct FVector& NearPosition);
		bool AllRequiredParticipantsExistForDialogueWithComponents(class UObject* WorldContextObject, TArray<class UDialogueComponent*> Components, class UConversationDialogueTriggerDataAsset* DataAsset, const struct FVector& NearPosition);
		int32_t AddInLevelParticipantsToParticipantDatas(class UObject* WorldContextObject, class UConversationDialogueTriggerDataAsset* DialogueTrigger, TArray<struct FDialogueSessionParticipantData>* ParticipantDatas, const struct FVector& NearPosition);
		int32_t AddDialogueComponentsToParticipantDatas(TArray<class UDialogueComponent*> DialogueComponents, class UConversationDialogueTriggerDataAsset* DialogueTrigger, TArray<struct FDialogueSessionParticipantData>* ParticipantDatas);
		struct FGuid AddBlockBreathingReason(class UObject* WorldContextObject, const class FName& Reason, bool bUnique);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.DialogueManager
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UDialogueManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_S19L[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		bool RemoveRuntimeEventHandler(int32_t RuntimeEventHandlerId, const class FString& Description);
		void BlueprintInit();
		int32_t AddDynamicRuntimeEventHandler(const class FScriptDelegate& OnRuntimeEventDynamic, const class FString& Description);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.DialogueNetworkingManager
	 * Size -> 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
	 */
	class ADialogueNetworkingManager : public AInfo
	{
	public:
		void NetMulticastTriggerDialogueWithComponents(TArray<class UDialogueComponent*> Components, class UConversationDialogueTriggerDataAsset* DataAsset, const struct FDialogueSessionConfigData& ConfigData, const struct FVector& NearPosition, const struct FTriggerDialogueParamsInternal& TriggerParams, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.PlayCommunicationDialoguePerformActionCustomParams
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPlayCommunicationDialoguePerformActionCustomParams : public UCustomParamsBase
	{
	public:
		int32_t                                                    LineVariationIndex;                                      // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZPX9[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.PlayLocalisedAudioDialoguePerformActionCustomParams
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPlayLocalisedAudioDialoguePerformActionCustomParams : public UCustomParamsBase
	{
	public:
		class FString                                              LocalisedAudioPath;                                      // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.TestDialoguePerformActionCustomParams
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UTestDialoguePerformActionCustomParams : public UCustomParamsBase
	{
	public:
		bool                                                       bMyBool;                                                 // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TCS3[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MyString;                                                // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MyFloat;                                                 // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M09B[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.BaseDialogueTriggerDataAsset
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UBaseDialogueTriggerDataAsset : public UDataAsset
	{
	public:
		struct FDialogueTriggerChooser                             DialogueTrigger;                                         // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.DialogueTriggerDataAsset
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UDialogueTriggerDataAsset : public UBaseDialogueTriggerDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.ConversationDialogueTriggerDataAsset
	 * Size -> 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
	 */
	class UConversationDialogueTriggerDataAsset : public UBaseDialogueTriggerDataAsset
	{
	public:
		struct FDialogueKey                                        InstigatorParticipantName;                               // 0x0048(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FDialogueKey                                        RadioAttachToParticipantName;                            // 0x0054(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FRadioParticipantData>                       RadioParticipants;                                       // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FInLevelParticipantData>                     InLevelParticipants;                                     // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bImportantBlockingDialogue;                              // 0x0080(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDialogueSessionConfigData                          SessionConfigData;                                       // 0x0081(0x0006) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DAFT[0x1];                                   // 0x0087(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.LocalisedAudioDataAsset
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class ULocalisedAudioDataAsset : public UDataAsset
	{
	public:
		struct FLocalisedAudioChooser                              LocalisedAudio;                                          // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.DialogueSystemNodes
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDialogueSystemNodes : public UBlueprintFunctionLibrary
	{
	public:
		bool EqualEqual_DialogueKey(const struct FDialogueKey& KeyA, const struct FDialogueKey& KeyB);
		struct FDialogueKey Conv_StringToDialogueKey(const class FString& inString);
		struct FDialogueKey Conv_NameToDialogueKey(const class FName& InName);
		class FString Conv_DialoguetKeyToString(const struct FDialogueKey& InDialogueKey);
		class FName Conv_DialogueKeyToName(const struct FDialogueKey& InDialogueKey);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.DummyDialogueActor
	 * Size -> 0x0020 (FullSize[0x02D0] - InheritedSize[0x02B0])
	 */
	class ADummyDialogueActor : public AActor
	{
	public:
		class UDialogueComponent*                                  DialogueComponent;                                       // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkComponent*                                        AkComponent;                                             // 0x02B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDialogueKey                                        VoiceName;                                               // 0x02C0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ONYU[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.LocalisedAudioManager
	 * Size -> 0x01F8 (FullSize[0x0220] - InheritedSize[0x0028])
	 */
	class ULocalisedAudioManager : public UObject
	{
	public:
		class UStringTable*                                        SubtitleCharacterNamesStringTable;                       // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStringTable*                                        SubtitleVoiceNamesStringTable;                           // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QU5P[0xF8];                                  // 0x0038(0x00F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UAkAudioEvent*>                  LoadedDialogueAudioEventsMap;                            // 0x0130(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PNMC[0xA0];                                  // 0x0180(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.MusicComponent
	 * Size -> 0x0200 (FullSize[0x02E8] - InheritedSize[0x00E8])
	 */
	class UMusicComponent : public UActorComponent
	{
	public:
		struct FPlayerIntensityConfig                              ActivePlayerIntensityConfig;                             // 0x00E8(0x00C8) BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CU47[0xC0];                                  // 0x01B0(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FResolvedMusicThemeState                            PlayingMusicTheme;                                       // 0x0270(0x0018) Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		struct FResolvedMusicThemeState                            ClientResolvedMusicTheme;                                // 0x0288(0x0018) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DLTF[0x48];                                  // 0x02A0(0x0048) MISSED OFFSET (PADDING)

	public:
		void OnRep_MusicTheme();
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.MusicManager
	 * Size -> 0x01F8 (FullSize[0x0220] - InheritedSize[0x0028])
	 */
	class UMusicManager : public UObject
	{
	public:
		class UAkAudioEvent*                                       MusicEventToPlay;                                        // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMusicThemeSelectorDataAsset*                        DefaultThemeSelector;                                    // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayerIntensityDataAsset*                           DefaultIntensityConfig;                                  // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CombatStateSwitchName;                                   // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CombatStateTimer;                                        // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DTOA[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAudioStateFactMap>                          AudioStateFactMap;                                       // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DN48[0x138];                                 // 0x0060(0x0138) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URequirementsContainer*                              DisableReasons;                                          // 0x0198(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FResolvedMusicThemeState                            CurrentlySentResolvedMusicThemeState;                    // 0x01A0(0x0018) Transient, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KX80[0x68];                                  // 0x01B8(0x0068) MISSED OFFSET (PADDING)

	public:
		void PushPlayerIntensityConfig(class UMusicComponent* Component, int32_t Priority, class UPlayerIntensityDataAsset* DataAsset, bool bForResetMusicData);
		void PushMusicThemeDefinition(class UMusicComponent* Component, int32_t Priority, class UMusicThemeSelectorDataAsset* MusicTheme, const class FString& RequestDescription);
		void PopPlayerIntensityConfig(class UMusicComponent* Component, int32_t Priority, class UPlayerIntensityDataAsset* DataAsset);
		void PopMusicThemeDefinition(class UMusicComponent* Component, int32_t Priority, class UMusicThemeSelectorDataAsset* MusicTheme);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.PlayerIntensityDataAsset
	 * Size -> 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
	 */
	class UPlayerIntensityDataAsset : public UDataAsset
	{
	public:
		struct FPlayerIntensityConfig                              Config;                                                  // 0x0030(0x00C8) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.NPCAudioMessagingType
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UNPCAudioMessagingType : public UDataAsset
	{
	public:
		class FText                                                TypeName;                                                // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FString                                              IconFrameLabel;                                          // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.ScopedDialogueKBFactPersistentDataCollection
	 * Size -> 0x0058 (FullSize[0x00A0] - InheritedSize[0x0048])
	 */
	class UScopedDialogueKBFactPersistentDataCollection : public UPersistentDataCollectionBase
	{
	public:
		unsigned char                                              UnknownData_OJWY[0x58];                                  // 0x0048(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioPlugin.SoundPropagator
	 * Size -> 0x0020 (FullSize[0x02D0] - InheritedSize[0x02B0])
	 */
	class ASoundPropagator : public AActor
	{
	public:
		bool                                                       bShowTraceBack;                                          // 0x02B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowWaves;                                              // 0x02B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowEmitters;                                           // 0x02B2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowPolygons;                                           // 0x02B3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowListener;                                           // 0x02B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowDiffractionPoints;                                  // 0x02B5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowDiffractionDetection;                               // 0x02B6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BPEN[0x1];                                   // 0x02B7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ShowMinBounces;                                          // 0x02B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ShowMaxBounces;                                          // 0x02BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ShowNumEmitters;                                         // 0x02C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RY13[0xC];                                   // 0x02C4(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
