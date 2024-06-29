/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAmbientAudioAreaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmbientAudioAreaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.AmbientAudioAreaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAmbientAudioActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmbientAudioActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.AmbientAudioActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAmbientAudioManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmbientAudioManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.AmbientAudioManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_LocalisedAudio.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_LocalisedAudio::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.AnimNotify_LocalisedAudio");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_LocalisedAudio.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_LocalisedAudio::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.AnimNotifyState_LocalisedAudio");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioFactNameSwitchGroupNamePair.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioFactNameSwitchGroupNamePair::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.AudioFactNameSwitchGroupNamePair");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioSwitchGroupNameSwitchStatePair.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioSwitchGroupNameSwitchStatePair::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.AudioSwitchGroupNameSwitchStatePair");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioFactNameRTPCNamePair.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioFactNameRTPCNamePair::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.AudioFactNameRTPCNamePair");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioFootstepLocalPlayerDistanceUpdatePositionDeltaAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioFootstepLocalPlayerDistanceUpdatePositionDeltaAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.AudioFootstepLocalPlayerDistanceUpdatePositionDeltaAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMusicThemeDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMusicThemeDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.MusicThemeDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMusicThemeSelectorDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMusicThemeSelectorDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.MusicThemeSelectorDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPhysicsMaterialToSwitchStateAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPhysicsMaterialToSwitchStateAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.AudioPhysicsMaterialToSwitchStateAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB08E0
	 * 		Name   -> Function AudioPlugin.AudioManager.GetAudioManager
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AAudioManager* AAudioManager::STATIC_GetAudioManager(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioManager.GetAudioManager");
		
		AAudioManager_GetAudioManager_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAudioManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAudioManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.AudioManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioManagerDebugDataStore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioManagerDebugDataStore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.AudioManagerDebugDataStore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAudioNetworkingManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAudioNetworkingManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.AudioNetworkingManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPluginSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPluginSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.AudioPluginSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB2D40
	 * 		Name   -> Function AudioPlugin.AudioUtilities.TriggerDialogueNearbyPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FDialogueTriggerChooser                     DialogueTrigger                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTriggerNearbyConfigData                    TriggerNearbyConfigData                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FDialogueSessionConfigData                  SessionConfigData                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FKnowledgeBaseValueSelector>         ContextKnowledgeBaseValues                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnEventDelegate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OnEventFlags                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DelaySeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioUtilities::STATIC_TriggerDialogueNearbyPosition(const struct FDialogueTriggerChooser& DialogueTrigger, const struct FVector& Position, class UObject* WorldContextObject, const struct FTriggerNearbyConfigData& TriggerNearbyConfigData, const struct FDialogueSessionConfigData& SessionConfigData, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const class FScriptDelegate& OnEventDelegate, int32_t OnEventFlags, float DelaySeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.TriggerDialogueNearbyPosition");
		
		UAudioUtilities_TriggerDialogueNearbyPosition_Params params {};
		params.DialogueTrigger = DialogueTrigger;
		params.Position = Position;
		params.WorldContextObject = WorldContextObject;
		params.TriggerNearbyConfigData = TriggerNearbyConfigData;
		params.SessionConfigData = SessionConfigData;
		params.ContextKnowledgeBaseValues = ContextKnowledgeBaseValues;
		params.OnEventDelegate = OnEventDelegate;
		params.OnEventFlags = OnEventFlags;
		params.DelaySeconds = DelaySeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB29E0
	 * 		Name   -> Function AudioPlugin.AudioUtilities.TriggerDialogueNearbyDialogueComponent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDialogueTriggerChooser                     DialogueTrigger                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UDialogueComponent*                          InstigatingDialogueComponent                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTriggerNearbyConfigData                    TriggerNearbyConfigData                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FDialogueSessionConfigData                  SessionConfigData                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FKnowledgeBaseValueSelector>         ContextKnowledgeBaseValues                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnEventDelegate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OnEventFlags                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DelaySeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioUtilities::STATIC_TriggerDialogueNearbyDialogueComponent(const struct FDialogueTriggerChooser& DialogueTrigger, class UDialogueComponent* InstigatingDialogueComponent, const struct FTriggerNearbyConfigData& TriggerNearbyConfigData, const struct FDialogueSessionConfigData& SessionConfigData, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const class FScriptDelegate& OnEventDelegate, int32_t OnEventFlags, float DelaySeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.TriggerDialogueNearbyDialogueComponent");
		
		UAudioUtilities_TriggerDialogueNearbyDialogueComponent_Params params {};
		params.DialogueTrigger = DialogueTrigger;
		params.InstigatingDialogueComponent = InstigatingDialogueComponent;
		params.TriggerNearbyConfigData = TriggerNearbyConfigData;
		params.SessionConfigData = SessionConfigData;
		params.ContextKnowledgeBaseValues = ContextKnowledgeBaseValues;
		params.OnEventDelegate = OnEventDelegate;
		params.OnEventFlags = OnEventFlags;
		params.DelaySeconds = DelaySeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB2620
	 * 		Name   -> Function AudioPlugin.AudioUtilities.TriggerDialogueConversation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDialogueTriggerChooser                     DialogueTrigger                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UDialogueComponent*                          DialogueComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogueSessionConfigData                  SessionConfigData                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FDialogueSessionParticipantData>     ParticipantDatas                                           (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		TArray<struct FKnowledgeBaseValueSelector>         ContextKnowledgeBaseValues                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FTriggerDialogueParams                      TriggerParams                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnEventDelegate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OnEventFlags                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioUtilities::STATIC_TriggerDialogueConversation(const struct FDialogueTriggerChooser& DialogueTrigger, class UDialogueComponent* DialogueComponent, const struct FDialogueSessionConfigData& SessionConfigData, TArray<struct FDialogueSessionParticipantData> ParticipantDatas, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const struct FTriggerDialogueParams& TriggerParams, const class FScriptDelegate& OnEventDelegate, int32_t OnEventFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.TriggerDialogueConversation");
		
		UAudioUtilities_TriggerDialogueConversation_Params params {};
		params.DialogueTrigger = DialogueTrigger;
		params.DialogueComponent = DialogueComponent;
		params.SessionConfigData = SessionConfigData;
		params.ParticipantDatas = ParticipantDatas;
		params.ContextKnowledgeBaseValues = ContextKnowledgeBaseValues;
		params.TriggerParams = TriggerParams;
		params.OnEventDelegate = OnEventDelegate;
		params.OnEventFlags = OnEventFlags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB22A0
	 * 		Name   -> Function AudioPlugin.AudioUtilities.TriggerDialogueAssetNearbyPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UConversationDialogueTriggerDataAsset*       DialogueTriggerDataAsset                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTriggerNearbyConfigData                    TriggerNearbyConfigData                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FDialogueSessionConfigData                  SessionConfigData                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FKnowledgeBaseValueSelector>         ContextKnowledgeBaseValues                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnEventDelegate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OnEventFlags                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DelaySeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioUtilities::STATIC_TriggerDialogueAssetNearbyPosition(class UConversationDialogueTriggerDataAsset* DialogueTriggerDataAsset, const struct FVector& Position, class UObject* WorldContextObject, const struct FTriggerNearbyConfigData& TriggerNearbyConfigData, const struct FDialogueSessionConfigData& SessionConfigData, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const class FScriptDelegate& OnEventDelegate, int32_t OnEventFlags, float DelaySeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.TriggerDialogueAssetNearbyPosition");
		
		UAudioUtilities_TriggerDialogueAssetNearbyPosition_Params params {};
		params.DialogueTriggerDataAsset = DialogueTriggerDataAsset;
		params.Position = Position;
		params.WorldContextObject = WorldContextObject;
		params.TriggerNearbyConfigData = TriggerNearbyConfigData;
		params.SessionConfigData = SessionConfigData;
		params.ContextKnowledgeBaseValues = ContextKnowledgeBaseValues;
		params.OnEventDelegate = OnEventDelegate;
		params.OnEventFlags = OnEventFlags;
		params.DelaySeconds = DelaySeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB1F70
	 * 		Name   -> Function AudioPlugin.AudioUtilities.TriggerDialogueAssetNearbyDialogueComponent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UConversationDialogueTriggerDataAsset*       DialogueTriggerDataAsset                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDialogueComponent*                          InstigatingDialogueComponent                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTriggerNearbyConfigData                    TriggerNearbyConfigData                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FDialogueSessionConfigData                  SessionConfigData                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FKnowledgeBaseValueSelector>         ContextKnowledgeBaseValues                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnEventDelegate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OnEventFlags                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DelaySeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioUtilities::STATIC_TriggerDialogueAssetNearbyDialogueComponent(class UConversationDialogueTriggerDataAsset* DialogueTriggerDataAsset, class UDialogueComponent* InstigatingDialogueComponent, const struct FTriggerNearbyConfigData& TriggerNearbyConfigData, const struct FDialogueSessionConfigData& SessionConfigData, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const class FScriptDelegate& OnEventDelegate, int32_t OnEventFlags, float DelaySeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.TriggerDialogueAssetNearbyDialogueComponent");
		
		UAudioUtilities_TriggerDialogueAssetNearbyDialogueComponent_Params params {};
		params.DialogueTriggerDataAsset = DialogueTriggerDataAsset;
		params.InstigatingDialogueComponent = InstigatingDialogueComponent;
		params.TriggerNearbyConfigData = TriggerNearbyConfigData;
		params.SessionConfigData = SessionConfigData;
		params.ContextKnowledgeBaseValues = ContextKnowledgeBaseValues;
		params.OnEventDelegate = OnEventDelegate;
		params.OnEventFlags = OnEventFlags;
		params.DelaySeconds = DelaySeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB1BD0
	 * 		Name   -> Function AudioPlugin.AudioUtilities.TriggerDialogueAssetConversation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UConversationDialogueTriggerDataAsset*       DialogueTriggerDataAsset                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDialogueComponent*                          DialogueComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogueSessionConfigData                  SessionConfigData                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FDialogueSessionParticipantData>     ParticipantDatas                                           (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		TArray<struct FKnowledgeBaseValueSelector>         ContextKnowledgeBaseValues                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FTriggerDialogueParams                      TriggerParams                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnEventDelegate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OnEventFlags                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioUtilities::STATIC_TriggerDialogueAssetConversation(class UConversationDialogueTriggerDataAsset* DialogueTriggerDataAsset, class UDialogueComponent* DialogueComponent, const struct FDialogueSessionConfigData& SessionConfigData, TArray<struct FDialogueSessionParticipantData> ParticipantDatas, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const struct FTriggerDialogueParams& TriggerParams, const class FScriptDelegate& OnEventDelegate, int32_t OnEventFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.TriggerDialogueAssetConversation");
		
		UAudioUtilities_TriggerDialogueAssetConversation_Params params {};
		params.DialogueTriggerDataAsset = DialogueTriggerDataAsset;
		params.DialogueComponent = DialogueComponent;
		params.SessionConfigData = SessionConfigData;
		params.ParticipantDatas = ParticipantDatas;
		params.ContextKnowledgeBaseValues = ContextKnowledgeBaseValues;
		params.TriggerParams = TriggerParams;
		params.OnEventDelegate = OnEventDelegate;
		params.OnEventFlags = OnEventFlags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB1B20
	 * 		Name   -> Function AudioPlugin.AudioUtilities.StopDialogueSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SessionId                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioUtilities::STATIC_StopDialogueSession(class UObject* WorldContextObject, int32_t SessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.StopDialogueSession");
		
		UAudioUtilities_StopDialogueSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SessionId = SessionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB1A10
	 * 		Name   -> Function AudioPlugin.AudioUtilities.RemoveRuntimeEventHandler
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RuntimeEventHandlerId                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAudioUtilities::STATIC_RemoveRuntimeEventHandler(class UObject* WorldContextObject, int32_t RuntimeEventHandlerId, const class FString& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.RemoveRuntimeEventHandler");
		
		UAudioUtilities_RemoveRuntimeEventHandler_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.RuntimeEventHandlerId = RuntimeEventHandlerId;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB1920
	 * 		Name   -> Function AudioPlugin.AudioUtilities.RemoveAllDialogueOnEventDelegates
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SessionId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     UserObject                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioUtilities::STATIC_RemoveAllDialogueOnEventDelegates(class UObject* WorldContextObject, int32_t SessionId, class UObject* UserObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.RemoveAllDialogueOnEventDelegates");
		
		UAudioUtilities_RemoveAllDialogueOnEventDelegates_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SessionId = SessionId;
		params.UserObject = UserObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB1760
	 * 		Name   -> Function AudioPlugin.AudioUtilities.PostMultipleLocalisedDialogue
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FDialoguePathWithOverride>           DialoguePathWithOverrideArray                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkAudioEvent*                               AudioEvent                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioUtilities::STATIC_PostMultipleLocalisedDialogue(class UObject* WorldContextObject, TArray<struct FDialoguePathWithOverride> DialoguePathWithOverrideArray, class AActor* Actor, class UAkAudioEvent* AudioEvent, bool bStopWhenAttachedToDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.PostMultipleLocalisedDialogue");
		
		UAudioUtilities_PostMultipleLocalisedDialogue_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DialoguePathWithOverrideArray = DialoguePathWithOverrideArray;
		params.Actor = Actor;
		params.AudioEvent = AudioEvent;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB14D0
	 * 		Name   -> Function AudioPlugin.AudioUtilities.PostLocalisedDialogueWithFaceFXToComponent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogueFilePath                           FilePathWrapper                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UAkComponent*                                AkComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFaceFXComponent*                            FaceFXComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutIsPlayingWithFaceFX                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioUtilities::STATIC_PostLocalisedDialogueWithFaceFXToComponent(class UObject* WorldContextObject, const struct FDialogueFilePath& FilePathWrapper, class UAkComponent* AkComponent, class UFaceFXComponent* FaceFXComponent, bool* bOutIsPlayingWithFaceFX, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.PostLocalisedDialogueWithFaceFXToComponent");
		
		UAudioUtilities_PostLocalisedDialogueWithFaceFXToComponent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.FilePathWrapper = FilePathWrapper;
		params.AkComponent = AkComponent;
		params.FaceFXComponent = FaceFXComponent;
		params.CallbackMask = CallbackMask;
		params.PostEventCallback = PostEventCallback;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutIsPlayingWithFaceFX != nullptr)
			*bOutIsPlayingWithFaceFX = params.bOutIsPlayingWithFaceFX;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB1280
	 * 		Name   -> Function AudioPlugin.AudioUtilities.PostLocalisedDialogueWithFaceFX
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogueFilePath                           FilePathWrapper                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutIsPlayingWithFaceFX                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioUtilities::STATIC_PostLocalisedDialogueWithFaceFX(class UObject* WorldContextObject, const struct FDialogueFilePath& FilePathWrapper, class AActor* Actor, bool* bOutIsPlayingWithFaceFX, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.PostLocalisedDialogueWithFaceFX");
		
		UAudioUtilities_PostLocalisedDialogueWithFaceFX_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.FilePathWrapper = FilePathWrapper;
		params.Actor = Actor;
		params.CallbackMask = CallbackMask;
		params.PostEventCallback = PostEventCallback;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutIsPlayingWithFaceFX != nullptr)
			*bOutIsPlayingWithFaceFX = params.bOutIsPlayingWithFaceFX;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB1080
	 * 		Name   -> Function AudioPlugin.AudioUtilities.PostLocalisedDialogueToComponent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogueFilePath                           FilePathWrapper                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UAkComponent*                                AkComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioUtilities::STATIC_PostLocalisedDialogueToComponent(class UObject* WorldContextObject, const struct FDialogueFilePath& FilePathWrapper, class UAkComponent* AkComponent, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.PostLocalisedDialogueToComponent");
		
		UAudioUtilities_PostLocalisedDialogueToComponent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.FilePathWrapper = FilePathWrapper;
		params.AkComponent = AkComponent;
		params.CallbackMask = CallbackMask;
		params.PostEventCallback = PostEventCallback;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB0E10
	 * 		Name   -> Function AudioPlugin.AudioUtilities.PostLocalisedDialogueIntoDialogueSystem
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDialogueFilePath                           FilePathWrapper                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UDialogueComponent*                          DialogueComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDialoguePriority                                  DialoguePriority                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTriggerDialogueParams                      TriggerParams                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnEventDelegate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OnEventFlags                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioUtilities::STATIC_PostLocalisedDialogueIntoDialogueSystem(const struct FDialogueFilePath& FilePathWrapper, class UDialogueComponent* DialogueComponent, EDialoguePriority DialoguePriority, const struct FTriggerDialogueParams& TriggerParams, const class FScriptDelegate& OnEventDelegate, int32_t OnEventFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.PostLocalisedDialogueIntoDialogueSystem");
		
		UAudioUtilities_PostLocalisedDialogueIntoDialogueSystem_Params params {};
		params.FilePathWrapper = FilePathWrapper;
		params.DialogueComponent = DialogueComponent;
		params.DialoguePriority = DialoguePriority;
		params.TriggerParams = TriggerParams;
		params.OnEventDelegate = OnEventDelegate;
		params.OnEventFlags = OnEventFlags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB0C10
	 * 		Name   -> Function AudioPlugin.AudioUtilities.PostLocalisedDialogue
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogueFilePath                           FilePathWrapper                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioUtilities::STATIC_PostLocalisedDialogue(class UObject* WorldContextObject, const struct FDialogueFilePath& FilePathWrapper, class AActor* Actor, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.PostLocalisedDialogue");
		
		UAudioUtilities_PostLocalisedDialogue_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.FilePathWrapper = FilePathWrapper;
		params.Actor = Actor;
		params.CallbackMask = CallbackMask;
		params.PostEventCallback = PostEventCallback;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB0AC0
	 * 		Name   -> Function AudioPlugin.AudioUtilities.GetRegisteredDialogueComponentsWithOwnerClass
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      OwnerClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NearPosition                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UDialogueComponent*> UAudioUtilities::STATIC_GetRegisteredDialogueComponentsWithOwnerClass(class UObject* WorldContextObject, class UClass* OwnerClass, const struct FVector& NearPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.GetRegisteredDialogueComponentsWithOwnerClass");
		
		UAudioUtilities_GetRegisteredDialogueComponentsWithOwnerClass_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.OwnerClass = OwnerClass;
		params.NearPosition = NearPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB0960
	 * 		Name   -> Function AudioPlugin.AudioUtilities.GetLineTextForDialoguePath
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogueFilePath                           FilePathWrapper                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutLineText                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAudioUtilities::STATIC_GetLineTextForDialoguePath(class UObject* WorldContextObject, const struct FDialogueFilePath& FilePathWrapper, class FString* OutLineText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.GetLineTextForDialoguePath");
		
		UAudioUtilities_GetLineTextForDialoguePath_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.FilePathWrapper = FilePathWrapper;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLineText != nullptr)
			*OutLineText = params.OutLineText;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB0630
	 * 		Name   -> Function AudioPlugin.AudioUtilities.FindDialogueSessionIdWithRequirementsDataAsset
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UConversationDialogueTriggerDataAsset*       RequiredDialogueTriggerDataAsset                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UClass*>                              OptionalRequiredOwnerClasses                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class UDialogueComponent*>                  OptionalRequiredDialogueComponents                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		TArray<struct FDialogueKey>                        OptionalRequiredParticipantNames                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FindFlags                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddDataAssetInLevelParticipantClasses                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddDataAssetParticipantNames                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioUtilities::STATIC_FindDialogueSessionIdWithRequirementsDataAsset(class UObject* WorldContextObject, class UConversationDialogueTriggerDataAsset* RequiredDialogueTriggerDataAsset, TArray<class UClass*> OptionalRequiredOwnerClasses, TArray<class UDialogueComponent*> OptionalRequiredDialogueComponents, TArray<struct FDialogueKey> OptionalRequiredParticipantNames, int32_t FindFlags, bool bAddDataAssetInLevelParticipantClasses, bool bAddDataAssetParticipantNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.FindDialogueSessionIdWithRequirementsDataAsset");
		
		UAudioUtilities_FindDialogueSessionIdWithRequirementsDataAsset_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.RequiredDialogueTriggerDataAsset = RequiredDialogueTriggerDataAsset;
		params.OptionalRequiredOwnerClasses = OptionalRequiredOwnerClasses;
		params.OptionalRequiredDialogueComponents = OptionalRequiredDialogueComponents;
		params.OptionalRequiredParticipantNames = OptionalRequiredParticipantNames;
		params.FindFlags = FindFlags;
		params.bAddDataAssetInLevelParticipantClasses = bAddDataAssetInLevelParticipantClasses;
		params.bAddDataAssetParticipantNames = bAddDataAssetParticipantNames;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB03E0
	 * 		Name   -> Function AudioPlugin.AudioUtilities.FindDialogueSessionIdWithRequirementsChooser
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogueTriggerChooser                     RequiredDialogueTrigger                                    (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<class UClass*>                              OptionalRequiredOwnerClasses                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class UDialogueComponent*>                  OptionalRequiredDialogueComponents                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		TArray<struct FDialogueKey>                        OptionalRequiredParticipantNames                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FindFlags                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioUtilities::STATIC_FindDialogueSessionIdWithRequirementsChooser(class UObject* WorldContextObject, const struct FDialogueTriggerChooser& RequiredDialogueTrigger, TArray<class UClass*> OptionalRequiredOwnerClasses, TArray<class UDialogueComponent*> OptionalRequiredDialogueComponents, TArray<struct FDialogueKey> OptionalRequiredParticipantNames, int32_t FindFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.FindDialogueSessionIdWithRequirementsChooser");
		
		UAudioUtilities_FindDialogueSessionIdWithRequirementsChooser_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.RequiredDialogueTrigger = RequiredDialogueTrigger;
		params.OptionalRequiredOwnerClasses = OptionalRequiredOwnerClasses;
		params.OptionalRequiredDialogueComponents = OptionalRequiredDialogueComponents;
		params.OptionalRequiredParticipantNames = OptionalRequiredParticipantNames;
		params.FindFlags = FindFlags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB0290
	 * 		Name   -> Function AudioPlugin.AudioUtilities.AddRuntimeEventHandler
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnRuntimeEventDynamic                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAudioUtilities::STATIC_AddRuntimeEventHandler(class UObject* WorldContextObject, const class FScriptDelegate& OnRuntimeEventDynamic, const class FString& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.AddRuntimeEventHandler");
		
		UAudioUtilities_AddRuntimeEventHandler_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.OnRuntimeEventDynamic = OnRuntimeEventDynamic;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB0160
	 * 		Name   -> Function AudioPlugin.AudioUtilities.AddDialogueOnEventDelegate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnEventDelegate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SessionId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAudioUtilities::STATIC_AddDialogueOnEventDelegate(class UObject* WorldContextObject, const class FScriptDelegate& OnEventDelegate, int32_t SessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.AudioUtilities.AddDialogueOnEventDelegate");
		
		UAudioUtilities_AddDialogueOnEventDelegate_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.OnEventDelegate = OnEventDelegate;
		params.SessionId = SessionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.AudioUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AContactAudioActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AContactAudioActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.ContactAudioActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContactAudioAreaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContactAudioAreaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.ContactAudioAreaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AContactAudioManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AContactAudioManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.ContactAudioManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDamLocShardLoaderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamLocShardLoaderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.DamLocShardLoaderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDamLocShardsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamLocShardsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.DamLocShardsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDamLocShardManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamLocShardManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.DamLocShardManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB7C00
	 * 		Name   -> Function AudioPlugin.DialogueComponent.TriggerDialogue
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDialogueTriggerChooser                     DialogueTrigger                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTriggerDialogueParams                      TriggerParams                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FKnowledgeBaseValueSelector>         ContextKnowledgeBaseValues                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnEventDelegate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OnEventFlags                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UDialogueComponent::TriggerDialogue(const struct FDialogueTriggerChooser& DialogueTrigger, const struct FTriggerDialogueParams& TriggerParams, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const class FScriptDelegate& OnEventDelegate, int32_t OnEventFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueComponent.TriggerDialogue");
		
		UDialogueComponent_TriggerDialogue_Params params {};
		params.DialogueTrigger = DialogueTrigger;
		params.TriggerParams = TriggerParams;
		params.ContextKnowledgeBaseValues = ContextKnowledgeBaseValues;
		params.OnEventDelegate = OnEventDelegate;
		params.OnEventFlags = OnEventFlags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB7B60
	 * 		Name   -> Function AudioPlugin.DialogueComponent.SetVoiceName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDialogueKey                                InVoiceName                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDialogueComponent::SetVoiceName(const struct FDialogueKey& InVoiceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueComponent.SetVoiceName");
		
		UDialogueComponent_SetVoiceName_Params params {};
		params.InVoiceName = InVoiceName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB77D0
	 * 		Name   -> Function AudioPlugin.DialogueComponent.ServerForcedDialogueTriggerExecution
	 * 		Flags  -> (Net, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		int32_t                                            VoiceNameKeyId                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InstigatingPlayerId                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           BaseVoiceSetNameId                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           TriggerNameId                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTriggerDialogueParamsInternal              TriggerParams                                              (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           ForceGlobalRuleIndex                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUserParamsObjectWrapper>            ForcePerformActionDatas                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EDialoguePriority                                  DynamicPriority                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDialogueComponent::ServerForcedDialogueTriggerExecution(int32_t VoiceNameKeyId, int32_t InstigatingPlayerId, uint32_t BaseVoiceSetNameId, uint32_t TriggerNameId, const struct FTriggerDialogueParamsInternal& TriggerParams, uint32_t ForceGlobalRuleIndex, TArray<struct FUserParamsObjectWrapper> ForcePerformActionDatas, EDialoguePriority DynamicPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueComponent.ServerForcedDialogueTriggerExecution");
		
		UDialogueComponent_ServerForcedDialogueTriggerExecution_Params params {};
		params.VoiceNameKeyId = VoiceNameKeyId;
		params.InstigatingPlayerId = InstigatingPlayerId;
		params.BaseVoiceSetNameId = BaseVoiceSetNameId;
		params.TriggerNameId = TriggerNameId;
		params.TriggerParams = TriggerParams;
		params.ForceGlobalRuleIndex = ForceGlobalRuleIndex;
		params.ForcePerformActionDatas = ForcePerformActionDatas;
		params.DynamicPriority = DynamicPriority;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB7610
	 * 		Name   -> Function AudioPlugin.DialogueComponent.RemoveRuntimeEventHandler
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            RuntimeEventHandlerId                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDialogueComponent::RemoveRuntimeEventHandler(int32_t RuntimeEventHandlerId, const class FString& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueComponent.RemoveRuntimeEventHandler");
		
		UDialogueComponent_RemoveRuntimeEventHandler_Params params {};
		params.RuntimeEventHandlerId = RuntimeEventHandlerId;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB7570
	 * 		Name   -> Function AudioPlugin.DialogueComponent.RemovePriorityChangedDelegate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDialogueComponent::RemovePriorityChangedDelegate(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueComponent.RemovePriorityChangedDelegate");
		
		UDialogueComponent_RemovePriorityChangedDelegate_Params params {};
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB73B0
	 * 		Name   -> Function AudioPlugin.DialogueComponent.OnRep_VoiceName
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDialogueComponent::OnRep_VoiceName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueComponent.OnRep_VoiceName");
		
		UDialogueComponent_OnRep_VoiceName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB72E0
	 * 		Name   -> Function AudioPlugin.DialogueComponent.OnFaceFXRawPlaybackStarted
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AnimId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDialogueComponent::OnFaceFXRawPlaybackStarted(class USkeletalMeshComponent* SkeletalMeshComponent, const class FName& AnimId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueComponent.OnFaceFXRawPlaybackStarted");
		
		UDialogueComponent_OnFaceFXRawPlaybackStarted_Params params {};
		params.SkeletalMeshComponent = SkeletalMeshComponent;
		params.AnimId = AnimId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB7210
	 * 		Name   -> Function AudioPlugin.DialogueComponent.OnFaceFXPlaybackStopped
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AnimId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDialogueComponent::OnFaceFXPlaybackStopped(class USkeletalMeshComponent* SkeletalMeshComponent, const class FName& AnimId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueComponent.OnFaceFXPlaybackStopped");
		
		UDialogueComponent_OnFaceFXPlaybackStopped_Params params {};
		params.SkeletalMeshComponent = SkeletalMeshComponent;
		params.AnimId = AnimId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6CA0
	 * 		Name   -> Function AudioPlugin.DialogueComponent.NetMulticastForcedDialogueTriggerExecution
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		int32_t                                            VoiceNameKeyId                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InstigatingPlayerId                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           BaseVoiceSetNameId                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           TriggerNameId                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTriggerDialogueParamsInternal              TriggerParams                                              (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           ForceGlobalRuleIndex                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUserParamsObjectWrapper>            ForcePerformActionDatas                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EDialoguePriority                                  DynamicPriority                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDialogueComponent::NetMulticastForcedDialogueTriggerExecution(int32_t VoiceNameKeyId, int32_t InstigatingPlayerId, uint32_t BaseVoiceSetNameId, uint32_t TriggerNameId, const struct FTriggerDialogueParamsInternal& TriggerParams, uint32_t ForceGlobalRuleIndex, TArray<struct FUserParamsObjectWrapper> ForcePerformActionDatas, EDialoguePriority DynamicPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueComponent.NetMulticastForcedDialogueTriggerExecution");
		
		UDialogueComponent_NetMulticastForcedDialogueTriggerExecution_Params params {};
		params.VoiceNameKeyId = VoiceNameKeyId;
		params.InstigatingPlayerId = InstigatingPlayerId;
		params.BaseVoiceSetNameId = BaseVoiceSetNameId;
		params.TriggerNameId = TriggerNameId;
		params.TriggerParams = TriggerParams;
		params.ForceGlobalRuleIndex = ForceGlobalRuleIndex;
		params.ForcePerformActionDatas = ForcePerformActionDatas;
		params.DynamicPriority = DynamicPriority;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6640
	 * 		Name   -> Function AudioPlugin.DialogueComponent.ClientTriggerDialogueWithComponents
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
	 * Parameters:
	 * 		TArray<class UDialogueComponent*>                  Components                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UConversationDialogueTriggerDataAsset*       DataAsset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogueSessionConfigData                  ConfigData                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NearPosition                                               (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTriggerDialogueParamsInternal              TriggerParams                                              (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		TArray<struct FKnowledgeBaseValueSelector>         ContextKnowledgeBaseValues                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDialogueComponent::ClientTriggerDialogueWithComponents(TArray<class UDialogueComponent*> Components, class UConversationDialogueTriggerDataAsset* DataAsset, const struct FDialogueSessionConfigData& ConfigData, const struct FVector& NearPosition, const struct FTriggerDialogueParamsInternal& TriggerParams, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueComponent.ClientTriggerDialogueWithComponents");
		
		UDialogueComponent_ClientTriggerDialogueWithComponents_Params params {};
		params.Components = Components;
		params.DataAsset = DataAsset;
		params.ConfigData = ConfigData;
		params.NearPosition = NearPosition;
		params.TriggerParams = TriggerParams;
		params.ContextKnowledgeBaseValues = ContextKnowledgeBaseValues;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB62C0
	 * 		Name   -> Function AudioPlugin.DialogueComponent.AddPriorityChangedDelegate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDialogueComponent::AddPriorityChangedDelegate(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueComponent.AddPriorityChangedDelegate");
		
		UDialogueComponent_AddPriorityChangedDelegate_Params params {};
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB5EB0
	 * 		Name   -> Function AudioPlugin.DialogueComponent.AddDynamicRuntimeEventHandler
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnRuntimeEventDynamic                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UDialogueComponent::AddDynamicRuntimeEventHandler(const class FScriptDelegate& OnRuntimeEventDynamic, const class FString& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueComponent.AddDynamicRuntimeEventHandler");
		
		UDialogueComponent_AddDynamicRuntimeEventHandler_Params params {};
		params.OnRuntimeEventDynamic = OnRuntimeEventDynamic;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogueComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogueComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.DialogueComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB8540
	 * 		Name   -> Function AudioPlugin.DialogueFunctionLibrary.TriggerDialogueWithoutComponents
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UConversationDialogueTriggerDataAsset*       DataAsset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogueSessionConfigData                  ConfigData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NearPosition                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTriggerDialogueParams                      TriggerParams                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FKnowledgeBaseValueSelector>         ContextKnowledgeBaseValues                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnEventDelegate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UDialogueFunctionLibrary::STATIC_TriggerDialogueWithoutComponents(class UObject* WorldContextObject, class UConversationDialogueTriggerDataAsset* DataAsset, const struct FDialogueSessionConfigData& ConfigData, const struct FVector& NearPosition, const struct FTriggerDialogueParams& TriggerParams, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const class FScriptDelegate& OnEventDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueFunctionLibrary.TriggerDialogueWithoutComponents");
		
		UDialogueFunctionLibrary_TriggerDialogueWithoutComponents_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DataAsset = DataAsset;
		params.ConfigData = ConfigData;
		params.NearPosition = NearPosition;
		params.TriggerParams = TriggerParams;
		params.ContextKnowledgeBaseValues = ContextKnowledgeBaseValues;
		params.OnEventDelegate = OnEventDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB81C0
	 * 		Name   -> Function AudioPlugin.DialogueFunctionLibrary.TriggerDialogueWithComponents
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UDialogueComponent*>                  Components                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UConversationDialogueTriggerDataAsset*       DataAsset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogueSessionConfigData                  ConfigData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NearPosition                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTriggerDialogueParams                      TriggerParams                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FKnowledgeBaseValueSelector>         ContextKnowledgeBaseValues                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnEventDelegate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UDialogueFunctionLibrary::STATIC_TriggerDialogueWithComponents(class UObject* WorldContextObject, TArray<class UDialogueComponent*> Components, class UConversationDialogueTriggerDataAsset* DataAsset, const struct FDialogueSessionConfigData& ConfigData, const struct FVector& NearPosition, const struct FTriggerDialogueParams& TriggerParams, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues, const class FScriptDelegate& OnEventDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueFunctionLibrary.TriggerDialogueWithComponents");
		
		UDialogueFunctionLibrary_TriggerDialogueWithComponents_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Components = Components;
		params.DataAsset = DataAsset;
		params.ConfigData = ConfigData;
		params.NearPosition = NearPosition;
		params.TriggerParams = TriggerParams;
		params.ContextKnowledgeBaseValues = ContextKnowledgeBaseValues;
		params.OnEventDelegate = OnEventDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB7EB0
	 * 		Name   -> Function AudioPlugin.DialogueFunctionLibrary.TriggerDialogueWithActors
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              Actors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UConversationDialogueTriggerDataAsset*       DataAsset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogueSessionConfigData                  ConfigData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NearPosition                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTriggerDialogueParams                      TriggerParams                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FKnowledgeBaseValueSelector>         ContextKnowledgeBaseValues                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UDialogueFunctionLibrary::STATIC_TriggerDialogueWithActors(class UObject* WorldContextObject, TArray<class AActor*> Actors, class UConversationDialogueTriggerDataAsset* DataAsset, const struct FDialogueSessionConfigData& ConfigData, const struct FVector& NearPosition, const struct FTriggerDialogueParams& TriggerParams, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueFunctionLibrary.TriggerDialogueWithActors");
		
		UDialogueFunctionLibrary_TriggerDialogueWithActors_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Actors = Actors;
		params.DataAsset = DataAsset;
		params.ConfigData = ConfigData;
		params.NearPosition = NearPosition;
		params.TriggerParams = TriggerParams;
		params.ContextKnowledgeBaseValues = ContextKnowledgeBaseValues;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB74A0
	 * 		Name   -> Function AudioPlugin.DialogueFunctionLibrary.RemoveBlockAllDialogueReason
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       Reason                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDialogueFunctionLibrary::STATIC_RemoveBlockAllDialogueReason(class UObject* WorldContextObject, struct FGuid* Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueFunctionLibrary.RemoveBlockAllDialogueReason");
		
		UDialogueFunctionLibrary_RemoveBlockAllDialogueReason_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reason != nullptr)
			*Reason = params.Reason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6B90
	 * 		Name   -> Function AudioPlugin.DialogueFunctionLibrary.IsDialogueKeyInParticipantDatas
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDialogueKey                                DialogueKey                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FDialogueSessionParticipantData>     ParticipantDatas                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UDialogueFunctionLibrary::STATIC_IsDialogueKeyInParticipantDatas(const struct FDialogueKey& DialogueKey, TArray<struct FDialogueSessionParticipantData>* ParticipantDatas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueFunctionLibrary.IsDialogueKeyInParticipantDatas");
		
		UDialogueFunctionLibrary_IsDialogueKeyInParticipantDatas_Params params {};
		params.DialogueKey = DialogueKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParticipantDatas != nullptr)
			*ParticipantDatas = params.ParticipantDatas;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6B10
	 * 		Name   -> Function AudioPlugin.DialogueFunctionLibrary.IsAllDialogueBlocked
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDialogueFunctionLibrary::STATIC_IsAllDialogueBlocked(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueFunctionLibrary.IsAllDialogueBlocked");
		
		UDialogueFunctionLibrary_IsAllDialogueBlocked_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB69B0
	 * 		Name   -> Function AudioPlugin.DialogueFunctionLibrary.GetRadioParticipantVoiceName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FRadioParticipantData                       RadioParticipantData                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UDialogueComponent*                          DialogueComponent                                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDialogueKey UDialogueFunctionLibrary::STATIC_GetRadioParticipantVoiceName(const struct FRadioParticipantData& RadioParticipantData, class UDialogueComponent* DialogueComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueFunctionLibrary.GetRadioParticipantVoiceName");
		
		UDialogueFunctionLibrary_GetRadioParticipantVoiceName_Params params {};
		params.RadioParticipantData = RadioParticipantData;
		params.DialogueComponent = DialogueComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB68A0
	 * 		Name   -> Function AudioPlugin.DialogueFunctionLibrary.GetDialogueComponentFromParticipantName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDialogueKey                                DialogueKey                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FDialogueSessionParticipantData>     ParticipantDatas                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	class UDialogueComponent* UDialogueFunctionLibrary::STATIC_GetDialogueComponentFromParticipantName(const struct FDialogueKey& DialogueKey, TArray<struct FDialogueSessionParticipantData> ParticipantDatas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueFunctionLibrary.GetDialogueComponentFromParticipantName");
		
		UDialogueFunctionLibrary_GetDialogueComponentFromParticipantName_Params params {};
		params.DialogueKey = DialogueKey;
		params.ParticipantDatas = ParticipantDatas;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6530
	 * 		Name   -> Function AudioPlugin.DialogueFunctionLibrary.AllRequiredParticipantsExistForDialogueWithoutComponents
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UConversationDialogueTriggerDataAsset*       DataAsset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NearPosition                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDialogueFunctionLibrary::STATIC_AllRequiredParticipantsExistForDialogueWithoutComponents(class UObject* WorldContextObject, class UConversationDialogueTriggerDataAsset* DataAsset, const struct FVector& NearPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueFunctionLibrary.AllRequiredParticipantsExistForDialogueWithoutComponents");
		
		UDialogueFunctionLibrary_AllRequiredParticipantsExistForDialogueWithoutComponents_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DataAsset = DataAsset;
		params.NearPosition = NearPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6360
	 * 		Name   -> Function AudioPlugin.DialogueFunctionLibrary.AllRequiredParticipantsExistForDialogueWithComponents
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UDialogueComponent*>                  Components                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UConversationDialogueTriggerDataAsset*       DataAsset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NearPosition                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowMultipleParticipantsToUseSameDialogueComponent       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDialogueFunctionLibrary::STATIC_AllRequiredParticipantsExistForDialogueWithComponents(class UObject* WorldContextObject, TArray<class UDialogueComponent*> Components, class UConversationDialogueTriggerDataAsset* DataAsset, const struct FVector& NearPosition, bool bAllowMultipleParticipantsToUseSameDialogueComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueFunctionLibrary.AllRequiredParticipantsExistForDialogueWithComponents");
		
		UDialogueFunctionLibrary_AllRequiredParticipantsExistForDialogueWithComponents_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Components = Components;
		params.DataAsset = DataAsset;
		params.NearPosition = NearPosition;
		params.bAllowMultipleParticipantsToUseSameDialogueComponent = bAllowMultipleParticipantsToUseSameDialogueComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB60F0
	 * 		Name   -> Function AudioPlugin.DialogueFunctionLibrary.AddInLevelParticipantsToParticipantDatas
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UConversationDialogueTriggerDataAsset*       DialogueTrigger                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FDialogueSessionParticipantData>     ParticipantDatas                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NearPosition                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowMultipleParticipantsToUseSameDialogueComponent       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UDialogueFunctionLibrary::STATIC_AddInLevelParticipantsToParticipantDatas(class UObject* WorldContextObject, class UConversationDialogueTriggerDataAsset* DialogueTrigger, TArray<struct FDialogueSessionParticipantData>* ParticipantDatas, const struct FVector& NearPosition, bool bAllowMultipleParticipantsToUseSameDialogueComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueFunctionLibrary.AddInLevelParticipantsToParticipantDatas");
		
		UDialogueFunctionLibrary_AddInLevelParticipantsToParticipantDatas_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DialogueTrigger = DialogueTrigger;
		params.NearPosition = NearPosition;
		params.bAllowMultipleParticipantsToUseSameDialogueComponent = bAllowMultipleParticipantsToUseSameDialogueComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParticipantDatas != nullptr)
			*ParticipantDatas = params.ParticipantDatas;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB5D50
	 * 		Name   -> Function AudioPlugin.DialogueFunctionLibrary.AddDialogueComponentsToParticipantDatas
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UDialogueComponent*>                  DialogueComponents                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UConversationDialogueTriggerDataAsset*       DialogueTrigger                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FDialogueSessionParticipantData>     ParticipantDatas                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	int32_t UDialogueFunctionLibrary::STATIC_AddDialogueComponentsToParticipantDatas(TArray<class UDialogueComponent*> DialogueComponents, class UConversationDialogueTriggerDataAsset* DialogueTrigger, TArray<struct FDialogueSessionParticipantData>* ParticipantDatas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueFunctionLibrary.AddDialogueComponentsToParticipantDatas");
		
		UDialogueFunctionLibrary_AddDialogueComponentsToParticipantDatas_Params params {};
		params.DialogueComponents = DialogueComponents;
		params.DialogueTrigger = DialogueTrigger;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParticipantDatas != nullptr)
			*ParticipantDatas = params.ParticipantDatas;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB5C50
	 * 		Name   -> Function AudioPlugin.DialogueFunctionLibrary.AddBlockAllDialogueReason
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUnique                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UDialogueFunctionLibrary::STATIC_AddBlockAllDialogueReason(class UObject* WorldContextObject, const class FName& Reason, bool bUnique)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueFunctionLibrary.AddBlockAllDialogueReason");
		
		UDialogueFunctionLibrary_AddBlockAllDialogueReason_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Reason = Reason;
		params.bUnique = bUnique;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogueFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogueFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.DialogueFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB76F0
	 * 		Name   -> Function AudioPlugin.DialogueManager.RemoveRuntimeEventHandler
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            RuntimeEventHandlerId                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDialogueManager::RemoveRuntimeEventHandler(int32_t RuntimeEventHandlerId, const class FString& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueManager.RemoveRuntimeEventHandler");
		
		UDialogueManager_RemoveRuntimeEventHandler_Params params {};
		params.RuntimeEventHandlerId = RuntimeEventHandlerId;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB73D0
	 * 		Name   -> Function AudioPlugin.DialogueManager.OnShardLoadedEvent
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class FName                                        ShardName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsLoaded                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDialogueManager::OnShardLoadedEvent(const class FName& ShardName, bool bIsLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueManager.OnShardLoadedEvent");
		
		UDialogueManager_OnShardLoadedEvent_Params params {};
		params.ShardName = ShardName;
		params.bIsLoaded = bIsLoaded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function AudioPlugin.DialogueManager.BlueprintInit
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDialogueManager::BlueprintInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueManager.BlueprintInit");
		
		UDialogueManager_BlueprintInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB5FD0
	 * 		Name   -> Function AudioPlugin.DialogueManager.AddDynamicRuntimeEventHandler
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnRuntimeEventDynamic                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UDialogueManager::AddDynamicRuntimeEventHandler(const class FScriptDelegate& OnRuntimeEventDynamic, const class FString& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueManager.AddDynamicRuntimeEventHandler");
		
		UDialogueManager_AddDynamicRuntimeEventHandler_Params params {};
		params.OnRuntimeEventDynamic = OnRuntimeEventDynamic;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogueManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogueManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.DialogueManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB7AA0
	 * 		Name   -> Function AudioPlugin.DialogueNetworkingManager.ServerStopNetworkedDialogueSession
	 * 		Flags  -> (Net, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		int32_t                                            OriginalNetworkSessionId                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADialogueNetworkingManager::ServerStopNetworkedDialogueSession(int32_t OriginalNetworkSessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueNetworkingManager.ServerStopNetworkedDialogueSession");
		
		ADialogueNetworkingManager_ServerStopNetworkedDialogueSession_Params params {};
		params.OriginalNetworkSessionId = OriginalNetworkSessionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6FB0
	 * 		Name   -> Function AudioPlugin.DialogueNetworkingManager.NetMulticastTriggerDialogueWithComponents
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public, HasDefaults)
	 * Parameters:
	 * 		TArray<class UDialogueComponent*>                  Components                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UConversationDialogueTriggerDataAsset*       DataAsset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDialogueSessionConfigData                  ConfigData                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NearPosition                                               (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTriggerDialogueParamsInternal              TriggerParams                                              (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		TArray<struct FKnowledgeBaseValueSelector>         ContextKnowledgeBaseValues                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ADialogueNetworkingManager::NetMulticastTriggerDialogueWithComponents(TArray<class UDialogueComponent*> Components, class UConversationDialogueTriggerDataAsset* DataAsset, const struct FDialogueSessionConfigData& ConfigData, const struct FVector& NearPosition, const struct FTriggerDialogueParamsInternal& TriggerParams, TArray<struct FKnowledgeBaseValueSelector> ContextKnowledgeBaseValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueNetworkingManager.NetMulticastTriggerDialogueWithComponents");
		
		ADialogueNetworkingManager_NetMulticastTriggerDialogueWithComponents_Params params {};
		params.Components = Components;
		params.DataAsset = DataAsset;
		params.ConfigData = ConfigData;
		params.NearPosition = NearPosition;
		params.TriggerParams = TriggerParams;
		params.ContextKnowledgeBaseValues = ContextKnowledgeBaseValues;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6F20
	 * 		Name   -> Function AudioPlugin.DialogueNetworkingManager.NetMulticastStopNetworkedDialogueSession
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		int32_t                                            OriginalNetworkSessionId                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADialogueNetworkingManager::NetMulticastStopNetworkedDialogueSession(int32_t OriginalNetworkSessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueNetworkingManager.NetMulticastStopNetworkedDialogueSession");
		
		ADialogueNetworkingManager_NetMulticastStopNetworkedDialogueSession_Params params {};
		params.OriginalNetworkSessionId = OriginalNetworkSessionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADialogueNetworkingManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADialogueNetworkingManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.DialogueNetworkingManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayCommunicationDialoguePerformActionCustomParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayCommunicationDialoguePerformActionCustomParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.PlayCommunicationDialoguePerformActionCustomParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayLocalisedAudioDialoguePerformActionCustomParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayLocalisedAudioDialoguePerformActionCustomParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.PlayLocalisedAudioDialoguePerformActionCustomParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestDialoguePerformActionCustomParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestDialoguePerformActionCustomParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.TestDialoguePerformActionCustomParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseDialogueTriggerDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseDialogueTriggerDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.BaseDialogueTriggerDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogueTriggerDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogueTriggerDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.DialogueTriggerDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConversationDialogueTriggerDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConversationDialogueTriggerDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.ConversationDialogueTriggerDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalisedAudioDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalisedAudioDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.LocalisedAudioDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBC0B0
	 * 		Name   -> Function AudioPlugin.DialogueSystemNodes.EqualEqual_DialogueKey
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDialogueKey                                KeyA                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FDialogueKey                                KeyB                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UDialogueSystemNodes::STATIC_EqualEqual_DialogueKey(const struct FDialogueKey& KeyA, const struct FDialogueKey& KeyB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueSystemNodes.EqualEqual_DialogueKey");
		
		UDialogueSystemNodes_EqualEqual_DialogueKey_Params params {};
		params.KeyA = KeyA;
		params.KeyB = KeyB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A84720
	 * 		Name   -> Function AudioPlugin.DialogueSystemNodes.Conv_StringToDialogueKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDialogueKey UDialogueSystemNodes::STATIC_Conv_StringToDialogueKey(const class FString& inString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueSystemNodes.Conv_StringToDialogueKey");
		
		UDialogueSystemNodes_Conv_StringToDialogueKey_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A84580
	 * 		Name   -> Function AudioPlugin.DialogueSystemNodes.Conv_NameToDialogueKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDialogueKey UDialogueSystemNodes::STATIC_Conv_NameToDialogueKey(const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueSystemNodes.Conv_NameToDialogueKey");
		
		UDialogueSystemNodes_Conv_NameToDialogueKey_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A843F0
	 * 		Name   -> Function AudioPlugin.DialogueSystemNodes.Conv_DialoguetKeyToString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDialogueKey                                InDialogueKey                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UDialogueSystemNodes::STATIC_Conv_DialoguetKeyToString(const struct FDialogueKey& InDialogueKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueSystemNodes.Conv_DialoguetKeyToString");
		
		UDialogueSystemNodes_Conv_DialoguetKeyToString_Params params {};
		params.InDialogueKey = InDialogueKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A84350
	 * 		Name   -> Function AudioPlugin.DialogueSystemNodes.Conv_DialogueKeyToName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDialogueKey                                InDialogueKey                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FName UDialogueSystemNodes::STATIC_Conv_DialogueKeyToName(const struct FDialogueKey& InDialogueKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.DialogueSystemNodes.Conv_DialogueKeyToName");
		
		UDialogueSystemNodes_Conv_DialogueKeyToName_Params params {};
		params.InDialogueKey = InDialogueKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDialogueSystemNodes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDialogueSystemNodes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.DialogueSystemNodes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADummyDialogueActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADummyDialogueActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.DummyDialogueActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBC1D0
	 * 		Name   -> Function AudioPlugin.LocalisedAudioManager.OnShardLoadedEvent
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class FName                                        ShardName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsLoaded                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULocalisedAudioManager::OnShardLoadedEvent(const class FName& ShardName, bool bIsLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.LocalisedAudioManager.OnShardLoadedEvent");
		
		ULocalisedAudioManager_OnShardLoadedEvent_Params params {};
		params.ShardName = ShardName;
		params.bIsLoaded = bIsLoaded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalisedAudioManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalisedAudioManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.LocalisedAudioManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBC1B0
	 * 		Name   -> Function AudioPlugin.MusicComponent.OnRep_MusicTheme
	 * 		Flags  -> (Native, Protected)
	 */
	void UMusicComponent::OnRep_MusicTheme()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.MusicComponent.OnRep_MusicTheme");
		
		UMusicComponent_OnRep_MusicTheme_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMusicComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMusicComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.MusicComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBC600
	 * 		Name   -> Function AudioPlugin.MusicManager.PushPlayerIntensityConfig
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMusicComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPlayerIntensityDataAsset*                   DataAsset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForResetMusicData                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMusicManager::PushPlayerIntensityConfig(class UMusicComponent* Component, int32_t Priority, class UPlayerIntensityDataAsset* DataAsset, bool bForResetMusicData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.MusicManager.PushPlayerIntensityConfig");
		
		UMusicManager_PushPlayerIntensityConfig_Params params {};
		params.Component = Component;
		params.Priority = Priority;
		params.DataAsset = DataAsset;
		params.bForResetMusicData = bForResetMusicData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBC4A0
	 * 		Name   -> Function AudioPlugin.MusicManager.PushMusicThemeDefinition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMusicComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMusicThemeSelectorDataAsset*                MusicTheme                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RequestDescription                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMusicManager::PushMusicThemeDefinition(class UMusicComponent* Component, int32_t Priority, class UMusicThemeSelectorDataAsset* MusicTheme, const class FString& RequestDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.MusicManager.PushMusicThemeDefinition");
		
		UMusicManager_PushMusicThemeDefinition_Params params {};
		params.Component = Component;
		params.Priority = Priority;
		params.MusicTheme = MusicTheme;
		params.RequestDescription = RequestDescription;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBC3A0
	 * 		Name   -> Function AudioPlugin.MusicManager.PopPlayerIntensityConfig
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMusicComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPlayerIntensityDataAsset*                   DataAsset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMusicManager::PopPlayerIntensityConfig(class UMusicComponent* Component, int32_t Priority, class UPlayerIntensityDataAsset* DataAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.MusicManager.PopPlayerIntensityConfig");
		
		UMusicManager_PopPlayerIntensityConfig_Params params {};
		params.Component = Component;
		params.Priority = Priority;
		params.DataAsset = DataAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBC2A0
	 * 		Name   -> Function AudioPlugin.MusicManager.PopMusicThemeDefinition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMusicComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMusicThemeSelectorDataAsset*                MusicTheme                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMusicManager::PopMusicThemeDefinition(class UMusicComponent* Component, int32_t Priority, class UMusicThemeSelectorDataAsset* MusicTheme)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioPlugin.MusicManager.PopMusicThemeDefinition");
		
		UMusicManager_PopMusicThemeDefinition_Params params {};
		params.Component = Component;
		params.Priority = Priority;
		params.MusicTheme = MusicTheme;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMusicManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMusicManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.MusicManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerIntensityDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerIntensityDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.PlayerIntensityDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNPCAudioMessagingType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNPCAudioMessagingType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.NPCAudioMessagingType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScopedDialogueKBFactPersistentDataCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScopedDialogueKBFactPersistentDataCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.ScopedDialogueKBFactPersistentDataCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASoundPropagator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASoundPropagator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioPlugin.SoundPropagator");
		return ptr;
	}

}


