﻿/**
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
	 * 		RVA    -> 0x00B6ED60
	 * 		Name   -> Function AkAudio.AkAcousticPortal.OpenPortal
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AAkAcousticPortal::OpenPortal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.OpenPortal");
		
		AAkAcousticPortal_OpenPortal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6E950
	 * 		Name   -> Function AkAudio.AkAcousticPortal.GetCurrentState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EAkAcousticPortalState AAkAcousticPortal::GetCurrentState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.GetCurrentState");
		
		AAkAcousticPortal_GetCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6E840
	 * 		Name   -> Function AkAudio.AkAcousticPortal.ClosePortal
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AAkAcousticPortal::ClosePortal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.ClosePortal");
		
		AAkAcousticPortal_ClosePortal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAkAcousticPortal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAkAcousticPortal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAcousticPortal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkPortalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkPortalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPortalComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAudioType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAudioType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAudioType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAcousticTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAcousticTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAcousticTexture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6FF20
	 * 		Name   -> Function AkAudio.AkAmbientSound.StopAmbientSound
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	void AAkAmbientSound::StopAmbientSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StopAmbientSound");
		
		AAkAmbientSound_StopAmbientSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6FF00
	 * 		Name   -> Function AkAudio.AkAmbientSound.StartAmbientSound
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	void AAkAmbientSound::StartAmbientSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StartAmbientSound");
		
		AAkAmbientSound_StartAmbientSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAkAmbientSound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAkAmbientSound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6ECE0
	 * 		Name   -> Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkAndroidInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering");
		
		UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAndroidInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAndroidInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAndroidInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAndroidPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAndroidPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAndroidPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAssetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAssetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAssetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAssetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAssetDataWithMedia.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAssetDataWithMedia::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetDataWithMedia");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAssetPlatformData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAssetPlatformData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetPlatformData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAssetDataSwitchContainerData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAssetDataSwitchContainerData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetDataSwitchContainerData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAssetDataSwitchContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAssetDataSwitchContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetDataSwitchContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAudioEventData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAudioEventData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAudioEventData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAudioBank.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAudioBank::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAudioBank");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6EA10
	 * 		Name   -> Function AkAudio.AkAudioEvent.GetMinimumDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UAkAudioEvent::GetMinimumDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.GetMinimumDuration");
		
		UAkAudioEvent_GetMinimumDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6E9E0
	 * 		Name   -> Function AkAudio.AkAudioEvent.GetMaximumDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UAkAudioEvent::GetMaximumDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.GetMaximumDuration");
		
		UAkAudioEvent_GetMaximumDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6E9B0
	 * 		Name   -> Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UAkAudioEvent::GetMaxAttenuationRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius");
		
		UAkAudioEvent_GetMaxAttenuationRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6E980
	 * 		Name   -> Function AkAudio.AkAudioEvent.GetIsInfinite
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAkAudioEvent::GetIsInfinite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.GetIsInfinite");
		
		UAkAudioEvent_GetIsInfinite_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAudioEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAudioEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAudioEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B77470
	 * 		Name   -> Function AkAudio.AkGameObject.Stop
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	void UAkGameObject::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.Stop");
		
		UAkGameObject_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B74230
	 * 		Name   -> Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameObject::PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int32_t* PlayingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAssociatedAkEventAsync");
		
		UAkGameObject_PostAssociatedAkEventAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CallbackMask = CallbackMask;
		params.PostEventCallback = PostEventCallback;
		params.ExternalSources = ExternalSources;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayingID != nullptr)
			*PlayingID = params.PlayingID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B740A0
	 * 		Name   -> Function AkAudio.AkGameObject.PostAssociatedAkEvent
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	int32_t UAkGameObject::PostAssociatedAkEvent(int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAssociatedAkEvent");
		
		UAkGameObject_PostAssociatedAkEvent_Params params {};
		params.CallbackMask = CallbackMask;
		params.PostEventCallback = PostEventCallback;
		params.ExternalSources = ExternalSources;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B73920
	 * 		Name   -> Function AkAudio.AkGameObject.PostAkEventAsync
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	void UAkGameObject::PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32_t* PlayingID, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAkEventAsync");
		
		UAkGameObject_PostAkEventAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AkEvent = AkEvent;
		params.CallbackMask = CallbackMask;
		params.PostEventCallback = PostEventCallback;
		params.ExternalSources = ExternalSources;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayingID != nullptr)
			*PlayingID = params.PlayingID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B73700
	 * 		Name   -> Function AkAudio.AkGameObject.PostAkEvent
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FString                                      in_EventName                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAkGameObject::PostAkEvent(class UAkAudioEvent* AkEvent, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const class FString& in_EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAkEvent");
		
		UAkGameObject_PostAkEvent_Params params {};
		params.AkEvent = AkEvent;
		params.CallbackMask = CallbackMask;
		params.PostEventCallback = PostEventCallback;
		params.ExternalSources = ExternalSources;
		params.in_EventName = in_EventName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkGameObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkGameObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkGameObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B70120
	 * 		Name   -> Function AkAudio.AkComponent.UseReverbVolumes
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               inUseReverbVolumes                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseReverbVolumes");
		
		UAkComponent_UseReverbVolumes_Params params {};
		params.inUseReverbVolumes = inUseReverbVolumes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6FF40
	 * 		Name   -> Function AkAudio.AkComponent.UseEarlyReflections
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAuxBus*                                   AuxBus                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BusSendGain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxPathLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SpotReflectors                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AuxBusName                                                 (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::UseEarlyReflections(class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseEarlyReflections");
		
		UAkComponent_UseEarlyReflections_Params params {};
		params.AuxBus = AuxBus;
		params.Order = Order;
		params.BusSendGain = BusSendGain;
		params.MaxPathLength = MaxPathLength;
		params.SpotReflectors = SpotReflectors;
		params.AuxBusName = AuxBusName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6FD60
	 * 		Name   -> Function AkAudio.AkComponent.SetSwitch
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkSwitchValue*                              SwitchValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SwitchGroup                                                (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SwitchState                                                (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::SetSwitch(class UAkSwitchValue* SwitchValue, const class FString& SwitchGroup, const class FString& SwitchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetSwitch");
		
		UAkComponent_SetSwitch_Params params {};
		params.SwitchValue = SwitchValue;
		params.SwitchGroup = SwitchGroup;
		params.SwitchState = SwitchState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6FBD0
	 * 		Name   -> Function AkAudio.AkComponent.SetRTPCValue
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkRtpc*                                     RTPCValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InterpolationTimeMs                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RTPC                                                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, const class FString& RTPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetRTPCValue");
		
		UAkComponent_SetRTPCValue_Params params {};
		params.RTPCValue = RTPCValue;
		params.Value = Value;
		params.InterpolationTimeMs = InterpolationTimeMs;
		params.RTPC = RTPC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6FB50
	 * 		Name   -> Function AkAudio.AkComponent.SetOutputBusVolume
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              BusVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::SetOutputBusVolume(float BusVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetOutputBusVolume");
		
		UAkComponent_SetOutputBusVolume_Params params {};
		params.BusVolume = BusVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6FAA0
	 * 		Name   -> Function AkAudio.AkComponent.SetListeners
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UAkComponent*>                        Listeners                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::SetListeners(TArray<class UAkComponent*> Listeners)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetListeners");
		
		UAkComponent_SetListeners_Params params {};
		params.Listeners = Listeners;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6F990
	 * 		Name   -> Function AkAudio.AkComponent.SetEarlyReflectionsVolume
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SendVolume                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::SetEarlyReflectionsVolume(float SendVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetEarlyReflectionsVolume");
		
		UAkComponent_SetEarlyReflectionsVolume_Params params {};
		params.SendVolume = SendVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6F8F0
	 * 		Name   -> Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      AuxBusName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::SetEarlyReflectionsAuxBus(const class FString& AuxBusName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus");
		
		UAkComponent_SetEarlyReflectionsAuxBus_Params params {};
		params.AuxBusName = AuxBusName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6F7F0
	 * 		Name   -> Function AkAudio.AkComponent.SetAttenuationScalingFactor
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::SetAttenuationScalingFactor(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetAttenuationScalingFactor");
		
		UAkComponent_SetAttenuationScalingFactor_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6F760
	 * 		Name   -> Function AkAudio.AkComponent.SetAllowAnyoneToDestroyMe
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAllow                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::SetAllowAnyoneToDestroyMe(bool bAllow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetAllowAnyoneToDestroyMe");
		
		UAkComponent_SetAllowAnyoneToDestroyMe_Params params {};
		params.bAllow = bAllow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6F500
	 * 		Name   -> Function AkAudio.AkComponent.PostTrigger
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkTrigger*                                  TriggerValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Trigger                                                    (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::PostTrigger(class UAkTrigger* TriggerValue, const class FString& Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostTrigger");
		
		UAkComponent_PostTrigger_Params params {};
		params.TriggerValue = TriggerValue;
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6F340
	 * 		Name   -> Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            PlayingID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::PostAssociatedAkEventAndWaitForEndAsync(int32_t* PlayingID, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync");
		
		UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Params params {};
		params.ExternalSources = ExternalSources;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayingID != nullptr)
			*PlayingID = params.PlayingID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6F1E0
	 * 		Name   -> Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UAkComponent::PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd");
		
		UAkComponent_PostAssociatedAkEventAndWaitForEnd_Params params {};
		params.ExternalSources = ExternalSources;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6F130
	 * 		Name   -> Function AkAudio.AkComponent.PostAkEventByName
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      in_EventName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAkComponent::PostAkEventByName(const class FString& in_EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventByName");
		
		UAkComponent_PostAkEventByName_Params params {};
		params.in_EventName = in_EventName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6EF60
	 * 		Name   -> Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32_t* PlayingID, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync");
		
		UAkComponent_PostAkEventAndWaitForEndAsync_Params params {};
		params.AkEvent = AkEvent;
		params.ExternalSources = ExternalSources;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayingID != nullptr)
			*PlayingID = params.PlayingID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6ED80
	 * 		Name   -> Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      in_EventName                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	int32_t UAkComponent::PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const class FString& in_EventName, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventAndWaitForEnd");
		
		UAkComponent_PostAkEventAndWaitForEnd_Params params {};
		params.AkEvent = AkEvent;
		params.in_EventName = in_EventName;
		params.ExternalSources = ExternalSources;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6EA40
	 * 		Name   -> Function AkAudio.AkComponent.GetRTPCValue
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAkRtpc*                                     RTPCValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERTPCValueType                                     InputValueType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERTPCValueType                                     OutputValueType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RTPC                                                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float* Value, ERTPCValueType* OutputValueType, const class FString& RTPC, int32_t PlayingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.GetRTPCValue");
		
		UAkComponent_GetRTPCValue_Params params {};
		params.RTPCValue = RTPCValue;
		params.InputValueType = InputValueType;
		params.RTPC = RTPC;
		params.PlayingID = PlayingID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		if (OutputValueType != nullptr)
			*OutputValueType = params.OutputValueType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6E8F0
	 * 		Name   -> Function AkAudio.AkComponent.GetAttenuationRadius
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UAkComponent::GetAttenuationRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.GetAttenuationRadius");
		
		UAkComponent_GetAttenuationRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6F4D0
	 * 		Name   -> Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	int32_t UAkAudioInputComponent::PostAssociatedAudioInputEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent");
		
		UAkAudioInputComponent_PostAssociatedAudioInputEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAudioInputComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAudioInputComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAudioInputComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAuxBus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAuxBus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAuxBus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6FA10
	 * 		Name   -> Function AkAudio.AkCheckBox.SetIsChecked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InIsChecked                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkCheckBox::SetIsChecked(bool InIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetIsChecked");
		
		UAkCheckBox_SetIsChecked_Params params {};
		params.InIsChecked = InIsChecked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6F870
	 * 		Name   -> Function AkAudio.AkCheckBox.SetCheckedState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECheckBoxState                                     InCheckedState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkCheckBox::SetCheckedState(ECheckBoxState InCheckedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetCheckedState");
		
		UAkCheckBox_SetCheckedState_Params params {};
		params.InCheckedState = InCheckedState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6F6C0
	 * 		Name   -> Function AkAudio.AkCheckBox.SetAkItemId
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGuid                                       ItemId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkCheckBox::SetAkItemId(const struct FGuid& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetAkItemId");
		
		UAkCheckBox_SetAkItemId_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6F620
	 * 		Name   -> Function AkAudio.AkCheckBox.SetAkBoolProperty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ItemProperty                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkCheckBox::SetAkBoolProperty(const class FString& ItemProperty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetAkBoolProperty");
		
		UAkCheckBox_SetAkBoolProperty_Params params {};
		params.ItemProperty = ItemProperty;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6ECB0
	 * 		Name   -> Function AkAudio.AkCheckBox.IsPressed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAkCheckBox::IsPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.IsPressed");
		
		UAkCheckBox_IsPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6EC80
	 * 		Name   -> Function AkAudio.AkCheckBox.IsChecked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAkCheckBox::IsChecked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.IsChecked");
		
		UAkCheckBox_IsChecked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6E920
	 * 		Name   -> Function AkAudio.AkCheckBox.GetCheckedState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ECheckBoxState UAkCheckBox::GetCheckedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetCheckedState");
		
		UAkCheckBox_GetCheckedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6E8A0
	 * 		Name   -> Function AkAudio.AkCheckBox.GetAkProperty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UAkCheckBox::GetAkProperty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetAkProperty");
		
		UAkCheckBox_GetAkProperty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6E860
	 * 		Name   -> Function AkAudio.AkCheckBox.GetAkItemId
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FGuid UAkCheckBox::GetAkItemId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetAkItemId");
		
		UAkCheckBox_GetAkItemId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkCheckBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkCheckBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkCheckBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkChinookPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkChinookPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkChinookPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMPXPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMPXPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMPXPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkXSXPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkXSXPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkXSXPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkComponentPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkComponentPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkComponentPool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAkLateReverbActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAkLateReverbActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkLateReverbActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAudioPhysicsMaterialToObstructionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAudioPhysicsMaterialToObstructionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAudioPhysicsMaterialToObstructionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkFolder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkFolder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkFolder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B77AA0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.UseReverbVolumes
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               inUseReverbVolumes                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UseReverbVolumes");
		
		UAkGameplayStatics_UseReverbVolumes_Params params {};
		params.inUseReverbVolumes = inUseReverbVolumes;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B778A0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.UseEarlyReflections
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkAuxBus*                                   AuxBus                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BusSendGain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxPathLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SpotReflectors                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AuxBusName                                                 (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UseEarlyReflections");
		
		UAkGameplayStatics_UseEarlyReflections_Params params {};
		params.Actor = Actor;
		params.AuxBus = AuxBus;
		params.Order = Order;
		params.BusSendGain = BusSendGain;
		params.MaxPathLength = MaxPathLength;
		params.SpotReflectors = SpotReflectors;
		params.AuxBusName = AuxBusName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B77810
	 * 		Name   -> Function AkAudio.AkGameplayStatics.UnloadBankByName
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      BankName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_UnloadBankByName(const class FString& BankName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBankByName");
		
		UAkGameplayStatics_UnloadBankByName_Params params {};
		params.BankName = BankName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B77730
	 * 		Name   -> Function AkAudio.AkGameplayStatics.UnloadBankAsync
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioBank*                                Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              BankUnloadedCallback                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_UnloadBankAsync(class UAkAudioBank* Bank, const class FScriptDelegate& BankUnloadedCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBankAsync");
		
		UAkGameplayStatics_UnloadBankAsync_Params params {};
		params.Bank = Bank;
		params.BankUnloadedCallback = BankUnloadedCallback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B775D0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.UnloadBank
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioBank*                                Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      BankName                                                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_UnloadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBank");
		
		UAkGameplayStatics_UnloadBank_Params params {};
		params.Bank = Bank;
		params.BankName = BankName;
		params.LatentInfo = LatentInfo;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B775B0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.StopProfilerCapture
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 */
	void UAkGameplayStatics::STATIC_StopProfilerCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopProfilerCapture");
		
		UAkGameplayStatics_StopProfilerCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B77590
	 * 		Name   -> Function AkAudio.AkGameplayStatics.StopOutputCapture
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 */
	void UAkGameplayStatics::STATIC_StopOutputCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopOutputCapture");
		
		UAkGameplayStatics_StopOutputCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B77520
	 * 		Name   -> Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_StopAllAmbientSounds(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAllAmbientSounds");
		
		UAkGameplayStatics_StopAllAmbientSounds_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B77500
	 * 		Name   -> Function AkAudio.AkGameplayStatics.StopAll
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 */
	void UAkGameplayStatics::STATIC_StopAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAll");
		
		UAkGameplayStatics_StopAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B77490
	 * 		Name   -> Function AkAudio.AkGameplayStatics.StopActor
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_StopActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopActor");
		
		UAkGameplayStatics_StopActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B773E0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.StartProfilerCapture
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_StartProfilerCapture(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartProfilerCapture");
		
		UAkGameplayStatics_StartProfilerCapture_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B77350
	 * 		Name   -> Function AkAudio.AkGameplayStatics.StartOutputCapture
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_StartOutputCapture(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartOutputCapture");
		
		UAkGameplayStatics_StartOutputCapture_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B772E0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_StartAllAmbientSounds(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartAllAmbientSounds");
		
		UAkGameplayStatics_StartAllAmbientSounds_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B770C0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               AutoPost                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AutoDestroy                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAkComponent* UAkGameplayStatics::STATIC_SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const class FString& EventName, bool AutoDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation");
		
		UAkGameplayStatics_SpawnAkComponentAtLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AkEvent = AkEvent;
		params.Location = Location;
		params.Orientation = Orientation;
		params.AutoPost = AutoPost;
		params.EventName = EventName;
		params.AutoDestroy = AutoDestroy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B76F90
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetSwitch
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkSwitchValue*                              SwitchValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SwitchGroup                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SwitchState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, const class FName& SwitchGroup, const class FName& SwitchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetSwitch");
		
		UAkGameplayStatics_SetSwitch_Params params {};
		params.SwitchValue = SwitchValue;
		params.Actor = Actor;
		params.SwitchGroup = SwitchGroup;
		params.SwitchState = SwitchState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B76EA0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetState
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkStateValue*                               StateValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StateGroup                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_SetState(class UAkStateValue* StateValue, const class FName& StateGroup, const class FName& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetState");
		
		UAkGameplayStatics_SetState_Params params {};
		params.StateValue = StateValue;
		params.StateGroup = StateGroup;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B76D60
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetSpeakerAngles
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<float>                                      SpeakerAngles                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              HeightAngle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DeviceShareset                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_SetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, const class FString& DeviceShareset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetSpeakerAngles");
		
		UAkGameplayStatics_SetSpeakerAngles_Params params {};
		params.SpeakerAngles = SpeakerAngles;
		params.HeightAngle = HeightAngle;
		params.DeviceShareset = DeviceShareset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B76B30
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetRTPCValue
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkRtpc*                                     RTPCValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InterpolationTimeMs                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        RTPC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class AActor* Actor, const class FName& RTPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetRTPCValue");
		
		UAkGameplayStatics_SetRTPCValue_Params params {};
		params.RTPCValue = RTPCValue;
		params.Value = Value;
		params.InterpolationTimeMs = InterpolationTimeMs;
		params.Actor = Actor;
		params.RTPC = RTPC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B76CB0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetReflectionsOrder
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               RefreshPaths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_SetReflectionsOrder(int32_t Order, bool RefreshPaths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetReflectionsOrder");
		
		UAkGameplayStatics_SetReflectionsOrder_Params params {};
		params.Order = Order;
		params.RefreshPaths = RefreshPaths;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B76AC0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetPanningRule
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EPanningRule                                       PanRule                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_SetPanningRule(EPanningRule PanRule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetPanningRule");
		
		UAkGameplayStatics_SetPanningRule_Params params {};
		params.PanRule = PanRule;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B76A00
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetOutputBusVolume
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              BusVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_SetOutputBusVolume(float BusVolume, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOutputBusVolume");
		
		UAkGameplayStatics_SetOutputBusVolume_Params params {};
		params.BusVolume = BusVolume;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B76990
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              ScalingFactor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_SetOcclusionScalingFactor(float ScalingFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor");
		
		UAkGameplayStatics_SetOcclusionScalingFactor_Params params {};
		params.ScalingFactor = ScalingFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B768D0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              RefreshInterval                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval");
		
		UAkGameplayStatics_SetOcclusionRefreshInterval_Params params {};
		params.RefreshInterval = RefreshInterval;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B76780
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetMultiplePositions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkComponent*                                GameObjectAkComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Positions                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EAkMultiPositionType                               MultiPositionType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultiplePositions");
		
		UAkGameplayStatics_SetMultiplePositions_Params params {};
		params.GameObjectAkComponent = GameObjectAkComponent;
		params.Positions = Positions;
		params.MultiPositionType = MultiPositionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B765B0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkComponent*                                GameObjectAkComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkChannelMask>                      ChannelMasks                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Positions                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EAkMultiPositionType                               MultiPositionType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<struct FAkChannelMask> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions");
		
		UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Params params {};
		params.GameObjectAkComponent = GameObjectAkComponent;
		params.ChannelMasks = ChannelMasks;
		params.Positions = Positions;
		params.MultiPositionType = MultiPositionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B763F0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkComponent*                                GameObjectAkComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EAkChannelConfiguration>                    ChannelMasks                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Positions                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EAkMultiPositionType                               MultiPositionType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions");
		
		UAkGameplayStatics_SetMultipleChannelEmitterPositions_Params params {};
		params.GameObjectAkComponent = GameObjectAkComponent;
		params.ChannelMasks = ChannelMasks;
		params.Positions = Positions;
		params.MultiPositionType = MultiPositionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B76300
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      AudioCulture                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_SetCurrentAudioCultureAsync(const class FString& AudioCulture, const class FScriptDelegate& Completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync");
		
		UAkGameplayStatics_SetCurrentAudioCultureAsync_Params params {};
		params.AudioCulture = AudioCulture;
		params.Completed = Completed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B761C0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      AudioCulture                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_SetCurrentAudioCulture(const class FString& AudioCulture, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture");
		
		UAkGameplayStatics_SetCurrentAudioCulture_Params params {};
		params.AudioCulture = AudioCulture;
		params.LatentInfo = LatentInfo;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B760F0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetBusConfig
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      BusName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAkChannelConfiguration                            ChannelConfiguration                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_SetBusConfig(const class FString& BusName, EAkChannelConfiguration ChannelConfiguration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetBusConfig");
		
		UAkGameplayStatics_SetBusConfig_Params params {};
		params.BusName = BusName;
		params.ChannelConfiguration = ChannelConfiguration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B75FC0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.ResetRTPCValue
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkRtpc*                                     RTPCValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InterpolationTimeMs                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        RTPC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_ResetRTPCValue(class UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, class AActor* Actor, const class FName& RTPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ResetRTPCValue");
		
		UAkGameplayStatics_ResetRTPCValue_Params params {};
		params.RTPCValue = RTPCValue;
		params.InterpolationTimeMs = InterpolationTimeMs;
		params.Actor = Actor;
		params.RTPC = RTPC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B75ED0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostTrigger
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkTrigger*                                  TriggerValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Trigger                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, const class FName& Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostTrigger");
		
		UAkGameplayStatics_PostTrigger_Params params {};
		params.TriggerValue = TriggerValue;
		params.Actor = Actor;
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B75CA0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostEventWithExternalSource
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExternalSourceName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExternalSourceFilePath                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventName                                                  (ConstParm, Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_PostEventWithExternalSource(class UAkAudioEvent* AkEvent, class AActor* Actor, const class FString& ExternalSourceName, const class FString& ExternalSourceFilePath, const class FString& EventName, bool bStopWhenAttachedToDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventWithExternalSource");
		
		UAkGameplayStatics_PostEventWithExternalSource_Params params {};
		params.AkEvent = AkEvent;
		params.Actor = Actor;
		params.ExternalSourceName = ExternalSourceName;
		params.ExternalSourceFilePath = ExternalSourceFilePath;
		params.EventName = EventName;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B75A70
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostEventToComponentWithExternalSource
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkComponent*                                AkComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExternalSourceName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExternalSourceFilePath                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventName                                                  (ConstParm, Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_PostEventToComponentWithExternalSource(class UAkAudioEvent* AkEvent, class UAkComponent* AkComponent, const class FString& ExternalSourceName, const class FString& ExternalSourceFilePath, const class FString& EventName, bool bStopWhenAttachedToDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventToComponentWithExternalSource");
		
		UAkGameplayStatics_PostEventToComponentWithExternalSource_Params params {};
		params.AkEvent = AkEvent;
		params.AkComponent = AkComponent;
		params.ExternalSourceName = ExternalSourceName;
		params.ExternalSourceFilePath = ExternalSourceFilePath;
		params.EventName = EventName;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B756C0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostEventToComponent
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkComponent*                                AkComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSourceInfoArray                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAudioSwitchGroupNameSwitchStateSimplePair> SwitchGroupsAndSwitchStates                                (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAudioRTPCNameRTPCValueSimplePair>   RTPCNamesAndValues                                         (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAkGameplayStatics::STATIC_PostEventToComponent(class UAkAudioEvent* AkEvent, class UAkComponent* AkComponent, const class FString& EventName, TArray<struct FAkExternalSourceInfo> ExternalSourceInfoArray, TArray<struct FAudioSwitchGroupNameSwitchStateSimplePair> SwitchGroupsAndSwitchStates, TArray<struct FAudioRTPCNameRTPCValueSimplePair> RTPCNamesAndValues, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventToComponent");
		
		UAkGameplayStatics_PostEventToComponent_Params params {};
		params.AkEvent = AkEvent;
		params.AkComponent = AkComponent;
		params.EventName = EventName;
		params.ExternalSourceInfoArray = ExternalSourceInfoArray;
		params.SwitchGroupsAndSwitchStates = SwitchGroupsAndSwitchStates;
		params.RTPCNamesAndValues = RTPCNamesAndValues;
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
	 * 		RVA    -> 0x00B75280
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostEventOnActor
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkAuxBus*                                   EarlyReflectionBus                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      EarlyReflectionsBusName                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAudioSwitchGroupNameSwitchStateSimplePair> SwitchGroupsAndSwitchStates                                (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAudioRTPCNameRTPCValueSimplePair>   RTPCNamesAndValues                                         (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAkGameplayStatics::STATIC_PostEventOnActor(class UAkAudioEvent* AkEvent, class UAkAuxBus* EarlyReflectionBus, class AActor* Actor, const class FString& EventName, TArray<struct FAkExternalSourceInfo> ExternalSources, const class FString& EarlyReflectionsBusName, TArray<struct FAudioSwitchGroupNameSwitchStateSimplePair> SwitchGroupsAndSwitchStates, TArray<struct FAudioRTPCNameRTPCValueSimplePair> RTPCNamesAndValues, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventOnActor");
		
		UAkGameplayStatics_PostEventOnActor_Params params {};
		params.AkEvent = AkEvent;
		params.EarlyReflectionBus = EarlyReflectionBus;
		params.Actor = Actor;
		params.EventName = EventName;
		params.ExternalSources = ExternalSources;
		params.EarlyReflectionsBusName = EarlyReflectionsBusName;
		params.SwitchGroupsAndSwitchStates = SwitchGroupsAndSwitchStates;
		params.RTPCNamesAndValues = RTPCNamesAndValues;
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
	 * 		RVA    -> 0x00B75170
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostEventByName
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_PostEventByName(const class FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventByName");
		
		UAkGameplayStatics_PostEventByName_Params params {};
		params.EventName = EventName;
		params.Actor = Actor;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B74FA0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostEventAttached
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAkGameplayStatics::STATIC_PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const class FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const class FString& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAttached");
		
		UAkGameplayStatics_PostEventAttached_Params params {};
		params.AkEvent = AkEvent;
		params.Actor = Actor;
		params.AttachPointName = AttachPointName;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B74A70
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostEventAtLocationDS
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkAuxBus*                                   EarlyReflectionsBus                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSourceInfoArray                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      EarlyReflectionsBusName                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAkPostEventExtraParams                     Params                                                     (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAudioSwitchGroupNameSwitchStateSimplePair> SwitchGroupsAndSwitchStates                                (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAudioRTPCNameRTPCValueSimplePair>   RTPCNamesAndValues                                         (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FPlayAtLocationResult UAkGameplayStatics::STATIC_PostEventAtLocationDS(class UAkAudioEvent* AkEvent, class UAkAuxBus* EarlyReflectionsBus, const struct FVector& Location, const struct FRotator& Orientation, const class FString& EventName, TArray<struct FAkExternalSourceInfo> ExternalSourceInfoArray, const class FString& EarlyReflectionsBusName, class UObject* WorldContextObject, const struct FAkPostEventExtraParams& Params, TArray<struct FAudioSwitchGroupNameSwitchStateSimplePair> SwitchGroupsAndSwitchStates, TArray<struct FAudioRTPCNameRTPCValueSimplePair> RTPCNamesAndValues, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocationDS");
		
		UAkGameplayStatics_PostEventAtLocationDS_Params params {};
		params.AkEvent = AkEvent;
		params.EarlyReflectionsBus = EarlyReflectionsBus;
		params.Location = Location;
		params.Orientation = Orientation;
		params.EventName = EventName;
		params.ExternalSourceInfoArray = ExternalSourceInfoArray;
		params.EarlyReflectionsBusName = EarlyReflectionsBusName;
		params.WorldContextObject = WorldContextObject;
		params.Params = Params;
		params.SwitchGroupsAndSwitchStates = SwitchGroupsAndSwitchStates;
		params.RTPCNamesAndValues = RTPCNamesAndValues;
		params.CallbackMask = CallbackMask;
		params.PostEventCallback = PostEventCallback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B74910
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_PostEventAtLocationByName(const class FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocationByName");
		
		UAkGameplayStatics_PostEventAtLocationByName_Params params {};
		params.EventName = EventName;
		params.Location = Location;
		params.Orientation = Orientation;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B74770
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostEventAtLocation
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAkGameplayStatics::STATIC_PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const class FString& EventName, class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocation");
		
		UAkGameplayStatics_PostEventAtLocation_Params params {};
		params.AkEvent = AkEvent;
		params.Location = Location;
		params.Orientation = Orientation;
		params.EventName = EventName;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B744A0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostEvent
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAkGameplayStatics::STATIC_PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed, const class FString& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEvent");
		
		UAkGameplayStatics_PostEvent_Params params {};
		params.AkEvent = AkEvent;
		params.Actor = Actor;
		params.CallbackMask = CallbackMask;
		params.PostEventCallback = PostEventCallback;
		params.ExternalSources = ExternalSources;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B73E60
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t* PlayingID, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync");
		
		UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Params params {};
		params.AkEvent = AkEvent;
		params.Actor = Actor;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		params.ExternalSources = ExternalSources;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayingID != nullptr)
			*PlayingID = params.PlayingID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B73BD0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	int32_t UAkGameplayStatics::STATIC_PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const class FString& EventName, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent");
		
		UAkGameplayStatics_PostAndWaitForEndOfEvent_Params params {};
		params.AkEvent = AkEvent;
		params.Actor = Actor;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		params.ExternalSources = ExternalSources;
		params.EventName = EventName;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B736E0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.LoadInitBank
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 */
	void UAkGameplayStatics::STATIC_LoadInitBank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadInitBank");
		
		UAkGameplayStatics_LoadInitBank_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B735F0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.LoadBanks
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UAkAudioBank*>                        SoundBanks                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               SynchronizeSoundBanks                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBanks");
		
		UAkGameplayStatics_LoadBanks_Params params {};
		params.SoundBanks = SoundBanks;
		params.SynchronizeSoundBanks = SynchronizeSoundBanks;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B73560
	 * 		Name   -> Function AkAudio.AkGameplayStatics.LoadBankByName
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      BankName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_LoadBankByName(const class FString& BankName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBankByName");
		
		UAkGameplayStatics_LoadBankByName_Params params {};
		params.BankName = BankName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B73480
	 * 		Name   -> Function AkAudio.AkGameplayStatics.LoadBankAsync
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioBank*                                Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              BankLoadedCallback                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_LoadBankAsync(class UAkAudioBank* Bank, const class FScriptDelegate& BankLoadedCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBankAsync");
		
		UAkGameplayStatics_LoadBankAsync_Params params {};
		params.Bank = Bank;
		params.BankLoadedCallback = BankLoadedCallback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B73320
	 * 		Name   -> Function AkAudio.AkGameplayStatics.LoadBank
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioBank*                                Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      BankName                                                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_LoadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBank");
		
		UAkGameplayStatics_LoadBank_Params params {};
		params.Bank = Bank;
		params.BankName = BankName;
		params.LatentInfo = LatentInfo;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B732A0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.IsGame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAkGameplayStatics::STATIC_IsGame(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.IsGame");
		
		UAkGameplayStatics_IsGame_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B73270
	 * 		Name   -> Function AkAudio.AkGameplayStatics.IsEditor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UAkGameplayStatics::STATIC_IsEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.IsEditor");
		
		UAkGameplayStatics_IsEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B73110
	 * 		Name   -> Function AkAudio.AkGameplayStatics.GetSpeakerAngles
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<float>                                      SpeakerAngles                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              HeightAngle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DeviceShareset                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const class FString& DeviceShareset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetSpeakerAngles");
		
		UAkGameplayStatics_GetSpeakerAngles_Params params {};
		params.DeviceShareset = DeviceShareset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpeakerAngles != nullptr)
			*SpeakerAngles = params.SpeakerAngles;
		if (HeightAngle != nullptr)
			*HeightAngle = params.HeightAngle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B72EF0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.GetRTPCValue
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAkRtpc*                                     RTPCValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERTPCValueType                                     InputValueType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERTPCValueType                                     OutputValueType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        RTPC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_GetRTPCValue(class UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float* Value, ERTPCValueType* OutputValueType, class AActor* Actor, const class FName& RTPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetRTPCValue");
		
		UAkGameplayStatics_GetRTPCValue_Params params {};
		params.RTPCValue = RTPCValue;
		params.PlayingID = PlayingID;
		params.InputValueType = InputValueType;
		params.Actor = Actor;
		params.RTPC = RTPC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		if (OutputValueType != nullptr)
			*OutputValueType = params.OutputValueType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B72EC0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	float UAkGameplayStatics::STATIC_GetOcclusionScalingFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor");
		
		UAkGameplayStatics_GetOcclusionScalingFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B72E40
	 * 		Name   -> Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString UAkGameplayStatics::STATIC_GetCurrentAudioCulture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture");
		
		UAkGameplayStatics_GetCurrentAudioCulture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B72D60
	 * 		Name   -> Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class FString> UAkGameplayStatics::STATIC_GetAvailableAudioCultures()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures");
		
		UAkGameplayStatics_GetAvailableAudioCultures_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B72CA0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkMediaAsset*                               Instance                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UAkGameplayStatics::STATIC_GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData");
		
		UAkGameplayStatics_GetAkMediaAssetUserData_Params params {};
		params.Instance = Instance;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B72AC0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.GetAkComponent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ComponentCreated                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAttachLocation                                    LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAkComponent* UAkGameplayStatics::STATIC_GetAkComponent(class USceneComponent* AttachToComponent, bool* ComponentCreated, const class FName& AttachPointName, const struct FVector& Location, EAttachLocation LocationType, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAkComponent");
		
		UAkGameplayStatics_GetAkComponent_Params params {};
		params.AttachToComponent = AttachToComponent;
		params.AttachPointName = AttachPointName;
		params.Location = Location;
		params.LocationType = LocationType;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComponentCreated != nullptr)
			*ComponentCreated = params.ComponentCreated;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B72A00
	 * 		Name   -> Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioType*                                Instance                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UAkGameplayStatics::STATIC_GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData");
		
		UAkGameplayStatics_GetAkAudioTypeUserData_Params params {};
		params.Instance = Instance;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B728D0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EAkActionOnEventType                               ActionType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TransitionDuration                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAkCurveInterpolation                              FadeCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_ExecuteActionOnPlayingID(EAkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID");
		
		UAkGameplayStatics_ExecuteActionOnPlayingID_Params params {};
		params.ActionType = ActionType;
		params.PlayingID = PlayingID;
		params.TransitionDuration = TransitionDuration;
		params.FadeCurve = FadeCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B72720
	 * 		Name   -> Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAkActionOnEventType                               ActionType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TransitionDuration                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAkCurveInterpolation                              FadeCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, EAkActionOnEventType ActionType, class AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent");
		
		UAkGameplayStatics_ExecuteActionOnEvent_Params params {};
		params.AkEvent = AkEvent;
		params.ActionType = ActionType;
		params.Actor = Actor;
		params.TransitionDuration = TransitionDuration;
		params.FadeCurve = FadeCurve;
		params.PlayingID = PlayingID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B72700
	 * 		Name   -> Function AkAudio.AkGameplayStatics.ClearBanks
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 */
	void UAkGameplayStatics::STATIC_ClearBanks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ClearBanks");
		
		UAkGameplayStatics_ClearBanks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B72660
	 * 		Name   -> Function AkAudio.AkGameplayStatics.CancelEventCallback
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_CancelEventCallback(const class FScriptDelegate& PostEventCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.CancelEventCallback");
		
		UAkGameplayStatics_CancelEventCallback_Params params {};
		params.PostEventCallback = PostEventCallback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B72570
	 * 		Name   -> Function AkAudio.AkGameplayStatics.ApplyPostEventExtraParamsToAkComponent
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkPostEventExtraParams                     ExtraParams                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UAkComponent*                                AkComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_ApplyPostEventExtraParamsToAkComponent(const struct FAkPostEventExtraParams& ExtraParams, class UAkComponent* AkComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ApplyPostEventExtraParamsToAkComponent");
		
		UAkGameplayStatics_ApplyPostEventExtraParamsToAkComponent_Params params {};
		params.ExtraParams = ExtraParams;
		params.AkComponent = AkComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B724E0
	 * 		Name   -> Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MarkerText                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::STATIC_AddOutputCaptureMarker(const class FString& MarkerText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker");
		
		UAkGameplayStatics_AddOutputCaptureMarker_Params params {};
		params.MarkerText = MarkerText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkGameplayStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkGameplayStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkGameplayStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkCallbackInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkCallbackInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkCallbackInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkEventCallbackInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkEventCallbackInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkEventCallbackInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B7C4D0
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EAkMidiEventType UAkMIDIEventCallbackInfo::GetType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetType");
		
		UAkMIDIEventCallbackInfo_GetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B7C420
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkMidiProgramChange                        AsProgramChange                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkMIDIEventCallbackInfo::GetProgramChange(struct FAkMidiProgramChange* AsProgramChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange");
		
		UAkMIDIEventCallbackInfo_GetProgramChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsProgramChange != nullptr)
			*AsProgramChange = params.AsProgramChange;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B7C370
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkMidiPitchBend                            AsPitchBend                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkMIDIEventCallbackInfo::GetPitchBend(struct FAkMidiPitchBend* AsPitchBend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend");
		
		UAkMIDIEventCallbackInfo_GetPitchBend_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsPitchBend != nullptr)
			*AsPitchBend = params.AsPitchBend;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B7C2C0
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkMidiNoteOnOff                            AsNoteOn                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkMIDIEventCallbackInfo::GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn");
		
		UAkMIDIEventCallbackInfo_GetNoteOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsNoteOn != nullptr)
			*AsNoteOn = params.AsNoteOn;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B7C210
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkMidiNoteOnOff                            AsNoteOff                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkMIDIEventCallbackInfo::GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff");
		
		UAkMIDIEventCallbackInfo_GetNoteOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsNoteOff != nullptr)
			*AsNoteOff = params.AsNoteOff;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B7C160
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkMidiNoteAftertouch                       AsNoteAftertouch                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkMIDIEventCallbackInfo::GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch");
		
		UAkMIDIEventCallbackInfo_GetNoteAftertouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsNoteAftertouch != nullptr)
			*AsNoteAftertouch = params.AsNoteAftertouch;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B7C0B0
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkMidiGeneric                              AsGeneric                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkMIDIEventCallbackInfo::GetGeneric(struct FAkMidiGeneric* AsGeneric)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric");
		
		UAkMIDIEventCallbackInfo_GetGeneric_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsGeneric != nullptr)
			*AsGeneric = params.AsGeneric;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B7C000
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkMidiChannelAftertouch                    AsChannelAftertouch                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkMIDIEventCallbackInfo::GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch");
		
		UAkMIDIEventCallbackInfo_GetChannelAftertouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsChannelAftertouch != nullptr)
			*AsChannelAftertouch = params.AsChannelAftertouch;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B7BFD0
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	unsigned char UAkMIDIEventCallbackInfo::GetChannel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetChannel");
		
		UAkMIDIEventCallbackInfo_GetChannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B7BF20
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetCc
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkMidiCc                                   AsCc                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkMIDIEventCallbackInfo::GetCc(struct FAkMidiCc* AsCc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetCc");
		
		UAkMIDIEventCallbackInfo_GetCc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsCc != nullptr)
			*AsCc = params.AsCc;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMIDIEventCallbackInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMIDIEventCallbackInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMIDIEventCallbackInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMarkerCallbackInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMarkerCallbackInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMarkerCallbackInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkDurationCallbackInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkDurationCallbackInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkDurationCallbackInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMusicSyncCallbackInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMusicSyncCallbackInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMusicSyncCallbackInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B7C520
	 * 		Name   -> Function AkAudio.AkGeometryComponent.UpdateGeometry
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAkGeometryComponent::UpdateGeometry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.UpdateGeometry");
		
		UAkGeometryComponent_UpdateGeometry_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B7C500
	 * 		Name   -> Function AkAudio.AkGeometryComponent.RemoveGeometry
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAkGeometryComponent::RemoveGeometry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.RemoveGeometry");
		
		UAkGeometryComponent_RemoveGeometry_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B7BF00
	 * 		Name   -> Function AkAudio.AkGeometryComponent.ConvertMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAkGeometryComponent::ConvertMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.ConvertMesh");
		
		UAkGeometryComponent_ConvertMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkGeometryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkGeometryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkGeometryComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkGroupValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkGroupValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkGroupValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6ECE0
	 * 		Name   -> Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkHololensInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering");
		
		UAkHololensInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkHololensInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkHololensInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkHololensInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkHololensPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkHololensPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkHololensPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkInitBankAssetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkInitBankAssetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkInitBankAssetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkInitBank.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkInitBank::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkInitBank");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkIOSInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkIOSInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkIOSInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkIOSPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkIOSPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkIOSPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80A50
	 * 		Name   -> Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAkBoolPropertyToControl                    INAkBoolPropertyToControl                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UAkItemBoolPropertiesConv::STATIC_Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText");
		
		UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Params params {};
		params.INAkBoolPropertyToControl = INAkBoolPropertyToControl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80960
	 * 		Name   -> Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAkBoolPropertyToControl                    INAkBoolPropertyToControl                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UAkItemBoolPropertiesConv::STATIC_Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString");
		
		UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Params params {};
		params.INAkBoolPropertyToControl = INAkBoolPropertyToControl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkItemBoolPropertiesConv.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkItemBoolPropertiesConv::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkItemBoolPropertiesConv");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B81140
	 * 		Name   -> Function AkAudio.AkItemBoolProperties.SetSearchText
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      NewText                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkItemBoolProperties::SetSearchText(const class FString& NewText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.SetSearchText");
		
		UAkItemBoolProperties_SetSearchText_Params params {};
		params.NewText = NewText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80CA0
	 * 		Name   -> Function AkAudio.AkItemBoolProperties.GetSelectedProperty
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UAkItemBoolProperties::GetSelectedProperty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.GetSelectedProperty");
		
		UAkItemBoolProperties_GetSelectedProperty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80C20
	 * 		Name   -> Function AkAudio.AkItemBoolProperties.GetSearchText
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UAkItemBoolProperties::GetSearchText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.GetSearchText");
		
		UAkItemBoolProperties_GetSearchText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkItemBoolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkItemBoolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkItemBoolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80A50
	 * 		Name   -> Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAkPropertyToControl                        INAkPropertyToControl                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UAkItemPropertiesConv::STATIC_Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText");
		
		UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Params params {};
		params.INAkPropertyToControl = INAkPropertyToControl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80960
	 * 		Name   -> Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAkPropertyToControl                        INAkPropertyToControl                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UAkItemPropertiesConv::STATIC_Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString");
		
		UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Params params {};
		params.INAkPropertyToControl = INAkPropertyToControl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkItemPropertiesConv.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkItemPropertiesConv::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkItemPropertiesConv");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B81140
	 * 		Name   -> Function AkAudio.AkItemProperties.SetSearchText
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      NewText                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkItemProperties::SetSearchText(const class FString& NewText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.SetSearchText");
		
		UAkItemProperties_SetSearchText_Params params {};
		params.NewText = NewText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80D20
	 * 		Name   -> Function AkAudio.AkItemProperties.GetSelectedProperty
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UAkItemProperties::GetSelectedProperty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.GetSelectedProperty");
		
		UAkItemProperties_GetSelectedProperty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80C20
	 * 		Name   -> Function AkAudio.AkItemProperties.GetSearchText
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UAkItemProperties::GetSearchText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.GetSearchText");
		
		UAkItemProperties_GetSearchText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkItemProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkItemProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkItemProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkLateReverbComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkLateReverbComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkLateReverbComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6ECE0
	 * 		Name   -> Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkLinuxInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering");
		
		UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkLinuxInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkLinuxInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkLinuxInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkLinuxPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkLinuxPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkLinuxPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80E60
	 * 		Name   -> Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkLuminInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering");
		
		UAkLuminInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkLuminInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkLuminInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkLuminInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkLuminPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkLuminPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkLuminPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6ECE0
	 * 		Name   -> Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkMacInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering");
		
		UAkMacInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMacInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMacInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMacInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMacPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMacPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMacPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80E30
	 * 		Name   -> Function AkAudio.AkMediaAssetData.IsBulkMediaPreFetch
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	bool UAkMediaAssetData::IsBulkMediaPreFetch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMediaAssetData.IsBulkMediaPreFetch");
		
		UAkMediaAssetData_IsBulkMediaPreFetch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80DA0
	 * 		Name   -> Function AkAudio.AkMediaAssetData.GetStreamedBulkMediaDataSize
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	int64_t UAkMediaAssetData::GetStreamedBulkMediaDataSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMediaAssetData.GetStreamedBulkMediaDataSize");
		
		UAkMediaAssetData_GetStreamedBulkMediaDataSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80BE0
	 * 		Name   -> Function AkAudio.AkMediaAssetData.GetBulkMediaDataSize
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	int64_t UAkMediaAssetData::GetBulkMediaDataSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMediaAssetData.GetBulkMediaDataSize");
		
		UAkMediaAssetData_GetBulkMediaDataSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMediaAssetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMediaAssetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMediaAssetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMediaAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMediaAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMediaAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkLocalizedMediaAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkLocalizedMediaAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkLocalizedMediaAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkExternalMediaAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkExternalMediaAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkExternalMediaAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMediaPlayerAudioInputComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMediaPlayerAudioInputComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMediaPlayerAudioInputComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkPellegrinoPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkPellegrinoPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPellegrinoPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkDPXPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkDPXPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkDPXPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkPS5PlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkPS5PlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPS5PlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkPlatformInitialisationSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkPlatformInitialisationSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPlatformInitialisationSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80E60
	 * 		Name   -> Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkPS4InitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering");
		
		UAkPS4InitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkPS4InitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkPS4InitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPS4InitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkPS4PlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkPS4PlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPS4PlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkPS5InitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkPS5InitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPS5InitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkDPXInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkDPXInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkDPXInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAkReverbVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAkReverbVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkReverbVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkRoomComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkRoomComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkRoomComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkRtpc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkRtpc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkRtpc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkSettingsPerUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkSettingsPerUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSettingsPerUser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B81360
	 * 		Name   -> Function AkAudio.AkSlider.SetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSlider::SetValue(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetValue");
		
		UAkSlider_SetValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B812E0
	 * 		Name   -> Function AkAudio.AkSlider.SetStepSize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSlider::SetStepSize(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetStepSize");
		
		UAkSlider_SetStepSize_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B81260
	 * 		Name   -> Function AkAudio.AkSlider.SetSliderHandleColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSlider::SetSliderHandleColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetSliderHandleColor");
		
		UAkSlider_SetSliderHandleColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B811E0
	 * 		Name   -> Function AkAudio.AkSlider.SetSliderBarColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSlider::SetSliderBarColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetSliderBarColor");
		
		UAkSlider_SetSliderBarColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B810B0
	 * 		Name   -> Function AkAudio.AkSlider.SetLocked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSlider::SetLocked(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetLocked");
		
		UAkSlider_SetLocked_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B81020
	 * 		Name   -> Function AkAudio.AkSlider.SetIndentHandle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSlider::SetIndentHandle(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetIndentHandle");
		
		UAkSlider_SetIndentHandle_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80F80
	 * 		Name   -> Function AkAudio.AkSlider.SetAkSliderItemProperty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ItemProperty                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSlider::SetAkSliderItemProperty(const class FString& ItemProperty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetAkSliderItemProperty");
		
		UAkSlider_SetAkSliderItemProperty_Params params {};
		params.ItemProperty = ItemProperty;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80EE0
	 * 		Name   -> Function AkAudio.AkSlider.SetAkSliderItemId
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGuid                                       ItemId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSlider::SetAkSliderItemId(const struct FGuid& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetAkSliderItemId");
		
		UAkSlider_SetAkSliderItemId_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80E00
	 * 		Name   -> Function AkAudio.AkSlider.GetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UAkSlider::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetValue");
		
		UAkSlider_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80B90
	 * 		Name   -> Function AkAudio.AkSlider.GetAkSliderItemProperty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UAkSlider::GetAkSliderItemProperty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetAkSliderItemProperty");
		
		UAkSlider_GetAkSliderItemProperty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80B50
	 * 		Name   -> Function AkAudio.AkSlider.GetAkSliderItemId
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FGuid UAkSlider::GetAkSliderItemId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetAkSliderItemId");
		
		UAkSlider_GetAkSliderItemId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkSlider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkSlider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSlider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAkSpatialAudioVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAkSpatialAudioVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSpatialAudioVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAkSpotReflector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAkSpotReflector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSpotReflector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkStadiaInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkStadiaInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkStadiaInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkQuailInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkQuailInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkQuailInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkStadiaPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkStadiaPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkStadiaPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkQuailPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkQuailPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkQuailPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkStateValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkStateValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkStateValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B87740
	 * 		Name   -> Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet");
		
		UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B86520
	 * 		Name   -> Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet");
		
		UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B86500
	 * 		Name   -> Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet");
		
		UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkSurfaceReflectorSetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkSurfaceReflectorSetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSurfaceReflectorSetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6ECE0
	 * 		Name   -> Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSwitchInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering");
		
		UAkSwitchInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkSwitchInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkSwitchInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSwitchInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkSwitchPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkSwitchPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSwitchPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkSwitchValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkSwitchValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSwitchValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkTVOSInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkTVOSInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkTVOSInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkTVOSPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkTVOSPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkTVOSPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B87600
	 * 		Name   -> Function AkAudio.AkWaapiCalls.Unsubscribe
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkWaapiSubscriptionId                      SubscriptionId                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               UnsubscriptionDone                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiCalls::STATIC_Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Unsubscribe");
		
		UAkWaapiCalls_Unsubscribe_Params params {};
		params.SubscriptionId = SubscriptionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnsubscriptionDone != nullptr)
			*UnsubscriptionDone = params.UnsubscriptionDone;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B87360
	 * 		Name   -> Function AkAudio.AkWaapiCalls.SubscribeToWaapi
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkWaapiUri                                 WaapiUri                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          WaapiOptions                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FAkWaapiSubscriptionId                      SubscriptionId                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               SubscriptionDone                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiCalls::STATIC_SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const class FScriptDelegate& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.SubscribeToWaapi");
		
		UAkWaapiCalls_SubscribeToWaapi_Params params {};
		params.WaapiUri = WaapiUri;
		params.WaapiOptions = WaapiOptions;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubscriptionId != nullptr)
			*SubscriptionId = params.SubscriptionId;
		if (SubscriptionDone != nullptr)
			*SubscriptionDone = params.SubscriptionDone;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B87290
	 * 		Name   -> Function AkAudio.AkWaapiCalls.SetSubscriptionID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkWaapiSubscriptionId                      Subscription                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkWaapiCalls::STATIC_SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.SetSubscriptionID");
		
		UAkWaapiCalls_SetSubscriptionID_Params params {};
		params.Subscription = Subscription;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B86450
	 * 		Name   -> Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkWaapiCalls::STATIC_RegisterWaapiProjectLoadedCallback(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback");
		
		UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B863A0
	 * 		Name   -> Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkWaapiCalls::STATIC_RegisterWaapiConnectionLostCallback(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback");
		
		UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B86310
	 * 		Name   -> Function AkAudio.AkWaapiCalls.GetSubscriptionID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkWaapiSubscriptionId                      Subscription                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UAkWaapiCalls::STATIC_GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.GetSubscriptionID");
		
		UAkWaapiCalls_GetSubscriptionID_Params params {};
		params.Subscription = Subscription;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B85710
	 * 		Name   -> Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAkWaapiSubscriptionId                      INAkWaapiSubscriptionId                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FText UAkWaapiCalls::STATIC_Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText");
		
		UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Params params {};
		params.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B85640
	 * 		Name   -> Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAkWaapiSubscriptionId                      INAkWaapiSubscriptionId                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UAkWaapiCalls::STATIC_Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString");
		
		UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Params params {};
		params.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B851C0
	 * 		Name   -> Function AkAudio.AkWaapiCalls.CallWaapi
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkWaapiUri                                 WaapiUri                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          WaapiArgs                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          WaapiOptions                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiCalls::STATIC_CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.CallWaapi");
		
		UAkWaapiCalls_CallWaapi_Params params {};
		params.WaapiUri = WaapiUri;
		params.WaapiArgs = WaapiArgs;
		params.WaapiOptions = WaapiOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWaapiCalls.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWaapiCalls::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWaapiCalls");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80A50
	 * 		Name   -> Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          INAkWaapiFieldNames                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText USAkWaapiFieldNamesConv::STATIC_Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText");
		
		USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Params params {};
		params.INAkWaapiFieldNames = INAkWaapiFieldNames;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80960
	 * 		Name   -> Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          INAkWaapiFieldNames                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString USAkWaapiFieldNamesConv::STATIC_Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString");
		
		USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Params params {};
		params.INAkWaapiFieldNames = INAkWaapiFieldNames;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USAkWaapiFieldNamesConv.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USAkWaapiFieldNamesConv::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.SAkWaapiFieldNamesConv");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B87090
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.SetStringField
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      FieldValue                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetStringField(const struct FAkWaapiFieldNames& FieldName, const class FString& FieldValue, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetStringField");
		
		UAkWaapiJsonManager_SetStringField_Params params {};
		params.FieldName = FieldName;
		params.FieldValue = FieldValue;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B86DB0
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.SetObjectField
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          FieldValue                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetObjectField");
		
		UAkWaapiJsonManager_SetObjectField_Params params {};
		params.FieldName = FieldName;
		params.FieldValue = FieldValue;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B86BC0
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.SetNumberField
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              FieldValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetNumberField");
		
		UAkWaapiJsonManager_SetNumberField_Params params {};
		params.FieldName = FieldName;
		params.FieldValue = FieldValue;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B869C0
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.SetBoolField
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               FieldValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetBoolField");
		
		UAkWaapiJsonManager_SetBoolField_Params params {};
		params.FieldName = FieldName;
		params.FieldValue = FieldValue;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B867A0
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              FieldStringValues                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<class FString> FieldStringValues, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetArrayStringFields");
		
		UAkWaapiJsonManager_SetArrayStringFields_Params params {};
		params.FieldName = FieldName;
		params.FieldStringValues = FieldStringValues;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B86540
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAKWaapiJsonObject>                  FieldObjectValues                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields");
		
		UAkWaapiJsonManager_SetArrayObjectFields_Params params {};
		params.FieldName = FieldName;
		params.FieldObjectValues = FieldObjectValues;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B86180
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.GetStringField
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	class FString UAkWaapiJsonManager::STATIC_GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetStringField");
		
		UAkWaapiJsonManager_GetStringField_Params params {};
		params.FieldName = FieldName;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B85E30
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.GetObjectField
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetObjectField");
		
		UAkWaapiJsonManager_GetObjectField_Params params {};
		params.FieldName = FieldName;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B85CE0
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.GetNumberField
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	float UAkWaapiJsonManager::STATIC_GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetNumberField");
		
		UAkWaapiJsonManager_GetNumberField_Params params {};
		params.FieldName = FieldName;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B85B90
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.GetIntegerField
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UAkWaapiJsonManager::STATIC_GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetIntegerField");
		
		UAkWaapiJsonManager_GetIntegerField_Params params {};
		params.FieldName = FieldName;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B85A40
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.GetBoolField
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	bool UAkWaapiJsonManager::STATIC_GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetBoolField");
		
		UAkWaapiJsonManager_GetBoolField_Params params {};
		params.FieldName = FieldName;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B85800
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.GetArrayField
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FAKWaapiJsonObject> UAkWaapiJsonManager::STATIC_GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetArrayField");
		
		UAkWaapiJsonManager_GetArrayField_Params params {};
		params.FieldName = FieldName;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B85510
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAKWaapiJsonObject                          INAKWaapiJsonObject                                        (Parm, NativeAccessSpecifierPublic)
	 */
	class FText UAkWaapiJsonManager::STATIC_Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText");
		
		UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Params params {};
		params.INAKWaapiJsonObject = INAKWaapiJsonObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B853F0
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAKWaapiJsonObject                          INAKWaapiJsonObject                                        (Parm, NativeAccessSpecifierPublic)
	 */
	class FString UAkWaapiJsonManager::STATIC_Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString");
		
		UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Params params {};
		params.INAKWaapiJsonObject = INAKWaapiJsonObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWaapiJsonManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWaapiJsonManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWaapiJsonManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80A50
	 * 		Name   -> Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAkWaapiUri                                 INAkWaapiUri                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UAkWaapiUriConv::STATIC_Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText");
		
		UAkWaapiUriConv_Conv_FAkWaapiUriToText_Params params {};
		params.INAkWaapiUri = INAkWaapiUri;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B80960
	 * 		Name   -> Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAkWaapiUri                                 INAkWaapiUri                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UAkWaapiUriConv::STATIC_Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString");
		
		UAkWaapiUriConv_Conv_FAkWaapiUriToString_Params params {};
		params.INAkWaapiUri = INAkWaapiUri;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWaapiUriConv.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWaapiUriConv::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWaapiUriConv");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6ECE0
	 * 		Name   -> Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkWindowsInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering");
		
		UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWindowsInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWindowsInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWindowsInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWin32PlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWin32PlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWin32PlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWin64PlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWin64PlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWin64PlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWindowsPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWindowsPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWindowsPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6ECE0
	 * 		Name   -> Function AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkWinGDKInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering");
		
		UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWinGDKInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWinGDKInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWinGDKInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWinAnvilInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWinAnvilInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWinAnvilInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWinGDKPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWinGDKPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWinGDKPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWinAnvilPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWinAnvilPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWinAnvilPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B86FF0
	 * 		Name   -> Function AkAudio.AkWwiseTree.SetSearchText
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      NewText                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkWwiseTree::SetSearchText(const class FString& NewText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.SetSearchText");
		
		UAkWwiseTree_SetSearchText_Params params {};
		params.NewText = NewText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B86060
	 * 		Name   -> Function AkAudio.AkWwiseTree.GetSelectedItem
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FAkWwiseObjectDetails UAkWwiseTree::GetSelectedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.GetSelectedItem");
		
		UAkWwiseTree_GetSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B85FE0
	 * 		Name   -> Function AkAudio.AkWwiseTree.GetSearchText
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UAkWwiseTree::GetSearchText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.GetSearchText");
		
		UAkWwiseTree_GetSearchText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWwiseTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWwiseTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWwiseTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWwiseTreeSelector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWwiseTreeSelector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWwiseTreeSelector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6ECE0
	 * 		Name   -> Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkXboxOneGDKInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering");
		
		UAkXboxOneGDKInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkXboxOneGDKInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkXboxOneGDKInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkXboxOneGDKInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkXboxOneAnvilInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkXboxOneAnvilInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkXboxOneAnvilInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkXboxOneGDKPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkXboxOneGDKPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkXboxOneGDKPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkXboxOneAnvilPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkXboxOneAnvilPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkXboxOneAnvilPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6ECE0
	 * 		Name   -> Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkXboxOneInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering");
		
		UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkXboxOneInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkXboxOneInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkXboxOneInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkXboxOnePlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkXboxOnePlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkXboxOnePlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6ECE0
	 * 		Name   -> Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkXSXInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering");
		
		UAkXSXInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkXSXInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkXSXInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkXSXInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMPXInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMPXInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMPXInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterpTrackAkAudioEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterpTrackAkAudioEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterpTrackAkAudioRTPC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterpTrackAkAudioRTPC::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioRTPC");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterpTrackInstAkAudioEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterpTrackInstAkAudioEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterpTrackInstAkAudioRTPC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterpTrackInstAkAudioRTPC::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioRTPC");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAkAudioEventSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAkAudioEventSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAkTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAkTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.MovieSceneAkTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAkAudioEventTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAkAudioEventTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAkAudioRTPCSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAkAudioRTPCSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAkAudioRTPCTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAkAudioRTPCTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B8AD40
	 * 		Name   -> Function AkAudio.PostEventAsync.PostEventAsync
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPostEventAsync* UPostEventAsync::STATIC_PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.PostEventAsync.PostEventAsync");
		
		UPostEventAsync_PostEventAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AkEvent = AkEvent;
		params.Actor = Actor;
		params.CallbackMask = CallbackMask;
		params.PostEventCallback = PostEventCallback;
		params.ExternalSources = ExternalSources;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B8AD00
	 * 		Name   -> Function AkAudio.PostEventAsync.PollPostEventFuture
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPostEventAsync::PollPostEventFuture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.PostEventAsync.PollPostEventFuture");
		
		UPostEventAsync_PollPostEventFuture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPostEventAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPostEventAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.PostEventAsync");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B8AFC0
	 * 		Name   -> Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UPostEventAtLocationAsync* UPostEventAtLocationAsync::STATIC_PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync");
		
		UPostEventAtLocationAsync_PostEventAtLocationAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AkEvent = AkEvent;
		params.Location = Location;
		params.Orientation = Orientation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B8AD20
	 * 		Name   -> Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPostEventAtLocationAsync::PollPostEventFuture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture");
		
		UPostEventAtLocationAsync_PollPostEventFuture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPostEventAtLocationAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPostEventAtLocationAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.PostEventAtLocationAsync");
		return ptr;
	}

}


