﻿#pragma once

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
	 * Function AkAudio.AkAcousticPortal.OpenPortal
	 */
	struct AAkAcousticPortal_OpenPortal_Params
	{	};

	/**
	 * Function AkAudio.AkAcousticPortal.GetCurrentState
	 */
	struct AAkAcousticPortal_GetCurrentState_Params
	{
	public:
		EAkAcousticPortalState                                     ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkAcousticPortal.ClosePortal
	 */
	struct AAkAcousticPortal_ClosePortal_Params
	{	};

	/**
	 * Function AkAudio.AkAmbientSound.StopAmbientSound
	 */
	struct AAkAmbientSound_StopAmbientSound_Params
	{	};

	/**
	 * Function AkAudio.AkAmbientSound.StartAmbientSound
	 */
	struct AAkAmbientSound_StartAmbientSound_Params
	{	};

	/**
	 * Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
	 */
	struct UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkAudioEvent.GetMinimumDuration
	 */
	struct UAkAudioEvent_GetMinimumDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkAudioEvent.GetMaximumDuration
	 */
	struct UAkAudioEvent_GetMaximumDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius
	 */
	struct UAkAudioEvent_GetMaxAttenuationRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkAudioEvent.GetIsInfinite
	 */
	struct UAkAudioEvent_GetIsInfinite_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameObject.Stop
	 */
	struct UAkGameObject_Stop_Params
	{	};

	/**
	 * Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
	 */
	struct UAkGameObject_PostAssociatedAkEventAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CallbackMask;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      PostEventCallback;                                       // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XII9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAkExternalSourceInfo>                       ExternalSources;                                         // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0030(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    PlayingID;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameObject.PostAssociatedAkEvent
	 */
	struct UAkGameObject_PostAssociatedAkEvent_Params
	{
	public:
		int32_t                                                    CallbackMask;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      PostEventCallback;                                       // 0x0004(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J0H1[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAkExternalSourceInfo>                       ExternalSources;                                         // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameObject.PostAkEventAsync
	 */
	struct UAkGameObject_PostAkEventAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayingID;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CallbackMask;                                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      PostEventCallback;                                       // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<struct FAkExternalSourceInfo>                       ExternalSources;                                         // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0038(0x0018)  (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameObject.PostAkEvent
	 */
	struct UAkGameObject_PostAkEvent_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CallbackMask;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      PostEventCallback;                                       // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OA4T[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAkExternalSourceInfo>                       ExternalSources;                                         // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		class FString                                              in_EventName;                                            // 0x0030(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.UseReverbVolumes
	 */
	struct UAkComponent_UseReverbVolumes_Params
	{
	public:
		bool                                                       inUseReverbVolumes;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.UseEarlyReflections
	 */
	struct UAkComponent_UseEarlyReflections_Params
	{
	public:
		class UAkAuxBus*                                           AuxBus;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Order;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BusSendGain;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxPathLength;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SpotReflectors;                                          // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0V67[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              AuxBusName;                                              // 0x0018(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.SetSwitch
	 */
	struct UAkComponent_SetSwitch_Params
	{
	public:
		class UAkSwitchValue*                                      SwitchValue;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SwitchGroup;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SwitchState;                                             // 0x0018(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.SetRTPCValue
	 */
	struct UAkComponent_SetRTPCValue_Params
	{
	public:
		class UAkRtpc*                                             RTPCValue;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InterpolationTimeMs;                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              RTPC;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.SetOutputBusVolume
	 */
	struct UAkComponent_SetOutputBusVolume_Params
	{
	public:
		float                                                      BusVolume;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.SetListeners
	 */
	struct UAkComponent_SetListeners_Params
	{
	public:
		TArray<class UAkComponent*>                                Listeners;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.SetEarlyReflectionsVolume
	 */
	struct UAkComponent_SetEarlyReflectionsVolume_Params
	{
	public:
		float                                                      SendVolume;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
	 */
	struct UAkComponent_SetEarlyReflectionsAuxBus_Params
	{
	public:
		class FString                                              AuxBusName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.SetAttenuationScalingFactor
	 */
	struct UAkComponent_SetAttenuationScalingFactor_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.SetAllowAnyoneToDestroyMe
	 */
	struct UAkComponent_SetAllowAnyoneToDestroyMe_Params
	{
	public:
		bool                                                       bAllow;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.PostTrigger
	 */
	struct UAkComponent_PostTrigger_Params
	{
	public:
		class UAkTrigger*                                          TriggerValue;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Trigger;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
	 */
	struct UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Params
	{
	public:
		int32_t                                                    PlayingID;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S0SW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAkExternalSourceInfo>                       ExternalSources;                                         // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0018(0x0018)  (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
	 */
	struct UAkComponent_PostAssociatedAkEventAndWaitForEnd_Params
	{
	public:
		TArray<struct FAkExternalSourceInfo>                       ExternalSources;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0010(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.PostAkEventByName
	 */
	struct UAkComponent_PostAkEventByName_Params
	{
	public:
		class FString                                              in_EventName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
	 */
	struct UAkComponent_PostAkEventAndWaitForEndAsync_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayingID;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JKYU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAkExternalSourceInfo>                       ExternalSources;                                         // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0020(0x0018)  (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
	 */
	struct UAkComponent_PostAkEventAndWaitForEnd_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              in_EventName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAkExternalSourceInfo>                       ExternalSources;                                         // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0028(0x0018)  (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.GetRTPCValue
	 */
	struct UAkComponent_GetRTPCValue_Params
	{
	public:
		class UAkRtpc*                                             RTPCValue;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERTPCValueType                                             InputValueType;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_94HL[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERTPCValueType                                             OutputValueType;                                         // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PDC0[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              RTPC;                                                    // 0x0018(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayingID;                                               // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkComponent.GetAttenuationRadius
	 */
	struct UAkComponent_GetAttenuationRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
	 */
	struct UAkAudioInputComponent_PostAssociatedAudioInputEvent_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkCheckBox.SetIsChecked
	 */
	struct UAkCheckBox_SetIsChecked_Params
	{
	public:
		bool                                                       InIsChecked;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkCheckBox.SetCheckedState
	 */
	struct UAkCheckBox_SetCheckedState_Params
	{
	public:
		ECheckBoxState                                             InCheckedState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkCheckBox.SetAkItemId
	 */
	struct UAkCheckBox_SetAkItemId_Params
	{
	public:
		struct FGuid                                               ItemId;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkCheckBox.SetAkBoolProperty
	 */
	struct UAkCheckBox_SetAkBoolProperty_Params
	{
	public:
		class FString                                              ItemProperty;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkCheckBox.IsPressed
	 */
	struct UAkCheckBox_IsPressed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkCheckBox.IsChecked
	 */
	struct UAkCheckBox_IsChecked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkCheckBox.GetCheckedState
	 */
	struct UAkCheckBox_GetCheckedState_Params
	{
	public:
		ECheckBoxState                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkCheckBox.GetAkProperty
	 */
	struct UAkCheckBox_GetAkProperty_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkCheckBox.GetAkItemId
	 */
	struct UAkCheckBox_GetAkItemId_Params
	{
	public:
		struct FGuid                                               ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.UseReverbVolumes
	 */
	struct UAkGameplayStatics_UseReverbVolumes_Params
	{
	public:
		bool                                                       inUseReverbVolumes;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8EHY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.UseEarlyReflections
	 */
	struct UAkGameplayStatics_UseEarlyReflections_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkAuxBus*                                           AuxBus;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Order;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BusSendGain;                                             // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxPathLength;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SpotReflectors;                                          // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y23G[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              AuxBusName;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.UnloadBankByName
	 */
	struct UAkGameplayStatics_UnloadBankByName_Params
	{
	public:
		class FString                                              BankName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.UnloadBankAsync
	 */
	struct UAkGameplayStatics_UnloadBankAsync_Params
	{
	public:
		class UAkAudioBank*                                        Bank;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      BankUnloadedCallback;                                    // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.UnloadBank
	 */
	struct UAkGameplayStatics_UnloadBank_Params
	{
	public:
		class UAkAudioBank*                                        Bank;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              BankName;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0018(0x0018)  (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.StopProfilerCapture
	 */
	struct UAkGameplayStatics_StopProfilerCapture_Params
	{	};

	/**
	 * Function AkAudio.AkGameplayStatics.StopOutputCapture
	 */
	struct UAkGameplayStatics_StopOutputCapture_Params
	{	};

	/**
	 * Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
	 */
	struct UAkGameplayStatics_StopAllAmbientSounds_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.StopAll
	 */
	struct UAkGameplayStatics_StopAll_Params
	{	};

	/**
	 * Function AkAudio.AkGameplayStatics.StopActor
	 */
	struct UAkGameplayStatics_StopActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.StartProfilerCapture
	 */
	struct UAkGameplayStatics_StartProfilerCapture_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.StartOutputCapture
	 */
	struct UAkGameplayStatics_StartOutputCapture_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
	 */
	struct UAkGameplayStatics_StartAllAmbientSounds_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
	 */
	struct UAkGameplayStatics_SpawnAkComponentAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Orientation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       AutoPost;                                                // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GNCI[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              EventName;                                               // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       AutoDestroy;                                             // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B27M[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkComponent*                                        ReturnValue;                                             // 0x0048(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.SetSwitch
	 */
	struct UAkGameplayStatics_SetSwitch_Params
	{
	public:
		class UAkSwitchValue*                                      SwitchValue;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SwitchGroup;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SwitchState;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.SetState
	 */
	struct UAkGameplayStatics_SetState_Params
	{
	public:
		class UAkStateValue*                                       StateValue;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StateGroup;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                State;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.SetSpeakerAngles
	 */
	struct UAkGameplayStatics_SetSpeakerAngles_Params
	{
	public:
		TArray<float>                                              SpeakerAngles;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      HeightAngle;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TIG2[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              DeviceShareset;                                          // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.SetRTPCValue
	 */
	struct UAkGameplayStatics_SetRTPCValue_Params
	{
	public:
		class UAkRtpc*                                             RTPCValue;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InterpolationTimeMs;                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                RTPC;                                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.SetReflectionsOrder
	 */
	struct UAkGameplayStatics_SetReflectionsOrder_Params
	{
	public:
		int32_t                                                    Order;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RefreshPaths;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.SetPanningRule
	 */
	struct UAkGameplayStatics_SetPanningRule_Params
	{
	public:
		EPanningRule                                               PanRule;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.SetOutputBusVolume
	 */
	struct UAkGameplayStatics_SetOutputBusVolume_Params
	{
	public:
		float                                                      BusVolume;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FYYJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
	 */
	struct UAkGameplayStatics_SetOcclusionScalingFactor_Params
	{
	public:
		float                                                      ScalingFactor;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
	 */
	struct UAkGameplayStatics_SetOcclusionRefreshInterval_Params
	{
	public:
		float                                                      RefreshInterval;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ED4H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.SetMultiplePositions
	 */
	struct UAkGameplayStatics_SetMultiplePositions_Params
	{
	public:
		class UAkComponent*                                        GameObjectAkComponent;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FTransform>                                  Positions;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		EAkMultiPositionType                                       MultiPositionType;                                       // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
	 */
	struct UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Params
	{
	public:
		class UAkComponent*                                        GameObjectAkComponent;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAkChannelMask>                              ChannelMasks;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FTransform>                                  Positions;                                               // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		EAkMultiPositionType                                       MultiPositionType;                                       // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
	 */
	struct UAkGameplayStatics_SetMultipleChannelEmitterPositions_Params
	{
	public:
		class UAkComponent*                                        GameObjectAkComponent;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<EAkChannelConfiguration>                            ChannelMasks;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FTransform>                                  Positions;                                               // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		EAkMultiPositionType                                       MultiPositionType;                                       // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
	 */
	struct UAkGameplayStatics_SetCurrentAudioCultureAsync_Params
	{
	public:
		class FString                                              AudioCulture;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Completed;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture
	 */
	struct UAkGameplayStatics_SetCurrentAudioCulture_Params
	{
	public:
		class FString                                              AudioCulture;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0010(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.SetBusConfig
	 */
	struct UAkGameplayStatics_SetBusConfig_Params
	{
	public:
		class FString                                              BusName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAkChannelConfiguration                                    ChannelConfiguration;                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.ResetRTPCValue
	 */
	struct UAkGameplayStatics_ResetRTPCValue_Params
	{
	public:
		class UAkRtpc*                                             RTPCValue;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InterpolationTimeMs;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VZEK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                RTPC;                                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.PostTrigger
	 */
	struct UAkGameplayStatics_PostTrigger_Params
	{
	public:
		class UAkTrigger*                                          TriggerValue;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Trigger;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.PostEventWithExternalSource
	 */
	struct UAkGameplayStatics_PostEventWithExternalSource_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ExternalSourceName;                                      // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ExternalSourceFilePath;                                  // 0x0020(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              EventName;                                               // 0x0030(0x0010)  (ConstParm, Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x0040(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.PostEventToComponentWithExternalSource
	 */
	struct UAkGameplayStatics_PostEventToComponentWithExternalSource_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkComponent*                                        AkComponent;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ExternalSourceName;                                      // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ExternalSourceFilePath;                                  // 0x0020(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              EventName;                                               // 0x0030(0x0010)  (ConstParm, Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x0040(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.PostEventToComponent
	 */
	struct UAkGameplayStatics_PostEventToComponent_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkComponent*                                        AkComponent;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              EventName;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAkExternalSourceInfo>                       ExternalSourceInfoArray;                                 // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FAudioSwitchGroupNameSwitchStateSimplePair>  SwitchGroupsAndSwitchStates;                             // 0x0030(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FAudioRTPCNameRTPCValueSimplePair>           RTPCNamesAndValues;                                      // 0x0040(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    CallbackMask;                                            // 0x0050(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      PostEventCallback;                                       // 0x0054(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x0064(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1MU3[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0068(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.PostEventOnActor
	 */
	struct UAkGameplayStatics_PostEventOnActor_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkAuxBus*                                           EarlyReflectionBus;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              EventName;                                               // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAkExternalSourceInfo>                       ExternalSources;                                         // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              EarlyReflectionsBusName;                                 // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAudioSwitchGroupNameSwitchStateSimplePair>  SwitchGroupsAndSwitchStates;                             // 0x0048(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FAudioRTPCNameRTPCValueSimplePair>           RTPCNamesAndValues;                                      // 0x0058(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    CallbackMask;                                            // 0x0068(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      PostEventCallback;                                       // 0x006C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x007C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZVWO[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0080(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.PostEventByName
	 */
	struct UAkGameplayStatics_PostEventByName_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.PostEventAttached
	 */
	struct UAkGameplayStatics_PostEventAttached_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttachPointName;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F3OV[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              EventName;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.PostEventAtLocationDS
	 */
	struct UAkGameplayStatics_PostEventAtLocationDS_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkAuxBus*                                           EarlyReflectionsBus;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Orientation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              EventName;                                               // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAkExternalSourceInfo>                       ExternalSourceInfoArray;                                 // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              EarlyReflectionsBusName;                                 // 0x0048(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAkPostEventExtraParams                             Params;                                                  // 0x0060(0x000C)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V9XZ[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAudioSwitchGroupNameSwitchStateSimplePair>  SwitchGroupsAndSwitchStates;                             // 0x0070(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FAudioRTPCNameRTPCValueSimplePair>           RTPCNamesAndValues;                                      // 0x0080(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    CallbackMask;                                            // 0x0090(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      PostEventCallback;                                       // 0x0094(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_95MQ[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayAtLocationResult                               ReturnValue;                                             // 0x00A8(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
	 */
	struct UAkGameplayStatics_PostEventAtLocationByName_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Orientation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.PostEventAtLocation
	 */
	struct UAkGameplayStatics_PostEventAtLocation_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Orientation;                                             // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              EventName;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.PostEvent
	 */
	struct UAkGameplayStatics_PostEvent_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CallbackMask;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      PostEventCallback;                                       // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KEAV[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAkExternalSourceInfo>                       ExternalSources;                                         // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CPAP[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              EventName;                                               // 0x0040(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0050(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
	 */
	struct UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayingID;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TCFR[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAkExternalSourceInfo>                       ExternalSources;                                         // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0028(0x0018)  (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
	 */
	struct UAkGameplayStatics_PostAndWaitForEndOfEvent_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CL9T[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAkExternalSourceInfo>                       ExternalSources;                                         // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		class FString                                              EventName;                                               // 0x0028(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0038(0x0018)  (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0050(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.LoadInitBank
	 */
	struct UAkGameplayStatics_LoadInitBank_Params
	{	};

	/**
	 * Function AkAudio.AkGameplayStatics.LoadBanks
	 */
	struct UAkGameplayStatics_LoadBanks_Params
	{
	public:
		TArray<class UAkAudioBank*>                                SoundBanks;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       SynchronizeSoundBanks;                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.LoadBankByName
	 */
	struct UAkGameplayStatics_LoadBankByName_Params
	{
	public:
		class FString                                              BankName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.LoadBankAsync
	 */
	struct UAkGameplayStatics_LoadBankAsync_Params
	{
	public:
		class UAkAudioBank*                                        Bank;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      BankLoadedCallback;                                      // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.LoadBank
	 */
	struct UAkGameplayStatics_LoadBank_Params
	{
	public:
		class UAkAudioBank*                                        Bank;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              BankName;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0018(0x0018)  (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.IsGame
	 */
	struct UAkGameplayStatics_IsGame_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.IsEditor
	 */
	struct UAkGameplayStatics_IsEditor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.GetSpeakerAngles
	 */
	struct UAkGameplayStatics_GetSpeakerAngles_Params
	{
	public:
		TArray<float>                                              SpeakerAngles;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		float                                                      HeightAngle;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_126G[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              DeviceShareset;                                          // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.GetRTPCValue
	 */
	struct UAkGameplayStatics_GetRTPCValue_Params
	{
	public:
		class UAkRtpc*                                             RTPCValue;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayingID;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERTPCValueType                                             InputValueType;                                          // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0W4R[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERTPCValueType                                             OutputValueType;                                         // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DCG3[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                RTPC;                                                    // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
	 */
	struct UAkGameplayStatics_GetOcclusionScalingFactor_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture
	 */
	struct UAkGameplayStatics_GetCurrentAudioCulture_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures
	 */
	struct UAkGameplayStatics_GetAvailableAudioCultures_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
	 */
	struct UAkGameplayStatics_GetAkMediaAssetUserData_Params
	{
	public:
		class UAkMediaAsset*                                       Instance;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Type;                                                    // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.GetAkComponent
	 */
	struct UAkGameplayStatics_GetAkComponent_Params
	{
	public:
		class USceneComponent*                                     AttachToComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ComponentCreated;                                        // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UVT3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                AttachPointName;                                         // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAttachLocation                                            LocationType;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R759[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            Rotation;                                                // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UAkComponent*                                        ReturnValue;                                             // 0x0030(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
	 */
	struct UAkGameplayStatics_GetAkAudioTypeUserData_Params
	{
	public:
		class UAkAudioType*                                        Instance;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Type;                                                    // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
	 */
	struct UAkGameplayStatics_ExecuteActionOnPlayingID_Params
	{
	public:
		EAkActionOnEventType                                       ActionType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X2WQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PlayingID;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TransitionDuration;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAkCurveInterpolation                                      FadeCurve;                                               // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
	 */
	struct UAkGameplayStatics_ExecuteActionOnEvent_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAkActionOnEventType                                       ActionType;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YGJ0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TransitionDuration;                                      // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAkCurveInterpolation                                      FadeCurve;                                               // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UKZ9[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PlayingID;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.ClearBanks
	 */
	struct UAkGameplayStatics_ClearBanks_Params
	{	};

	/**
	 * Function AkAudio.AkGameplayStatics.CancelEventCallback
	 */
	struct UAkGameplayStatics_CancelEventCallback_Params
	{
	public:
		class FScriptDelegate                                      PostEventCallback;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.ApplyPostEventExtraParamsToAkComponent
	 */
	struct UAkGameplayStatics_ApplyPostEventExtraParamsToAkComponent_Params
	{
	public:
		struct FAkPostEventExtraParams                             ExtraParams;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TSQ5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkComponent*                                        AkComponent;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
	 */
	struct UAkGameplayStatics_AddOutputCaptureMarker_Params
	{
	public:
		class FString                                              MarkerText;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkMIDIEventCallbackInfo.GetType
	 */
	struct UAkMIDIEventCallbackInfo_GetType_Params
	{
	public:
		EAkMidiEventType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
	 */
	struct UAkMIDIEventCallbackInfo_GetProgramChange_Params
	{
	public:
		struct FAkMidiProgramChange                                AsProgramChange;                                         // 0x0000(0x0003)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
	 */
	struct UAkMIDIEventCallbackInfo_GetPitchBend_Params
	{
	public:
		struct FAkMidiPitchBend                                    AsPitchBend;                                             // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
	 */
	struct UAkMIDIEventCallbackInfo_GetNoteOn_Params
	{
	public:
		struct FAkMidiNoteOnOff                                    AsNoteOn;                                                // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
	 */
	struct UAkMIDIEventCallbackInfo_GetNoteOff_Params
	{
	public:
		struct FAkMidiNoteOnOff                                    AsNoteOff;                                               // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
	 */
	struct UAkMIDIEventCallbackInfo_GetNoteAftertouch_Params
	{
	public:
		struct FAkMidiNoteAftertouch                               AsNoteAftertouch;                                        // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
	 */
	struct UAkMIDIEventCallbackInfo_GetGeneric_Params
	{
	public:
		struct FAkMidiGeneric                                      AsGeneric;                                               // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
	 */
	struct UAkMIDIEventCallbackInfo_GetChannelAftertouch_Params
	{
	public:
		struct FAkMidiChannelAftertouch                            AsChannelAftertouch;                                     // 0x0000(0x0003)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
	 */
	struct UAkMIDIEventCallbackInfo_GetChannel_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkMIDIEventCallbackInfo.GetCc
	 */
	struct UAkMIDIEventCallbackInfo_GetCc_Params
	{
	public:
		struct FAkMidiCc                                           AsCc;                                                    // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkGeometryComponent.UpdateGeometry
	 */
	struct UAkGeometryComponent_UpdateGeometry_Params
	{	};

	/**
	 * Function AkAudio.AkGeometryComponent.RemoveGeometry
	 */
	struct UAkGeometryComponent_RemoveGeometry_Params
	{	};

	/**
	 * Function AkAudio.AkGeometryComponent.ConvertMesh
	 */
	struct UAkGeometryComponent_ConvertMesh_Params
	{	};

	/**
	 * Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
	 */
	struct UAkHololensInitializationSettings_MigrateMultiCoreRendering_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
	 */
	struct UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Params
	{
	public:
		struct FAkBoolPropertyToControl                            INAkBoolPropertyToControl;                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
	 */
	struct UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Params
	{
	public:
		struct FAkBoolPropertyToControl                            INAkBoolPropertyToControl;                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkItemBoolProperties.SetSearchText
	 */
	struct UAkItemBoolProperties_SetSearchText_Params
	{
	public:
		class FString                                              NewText;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkItemBoolProperties.GetSelectedProperty
	 */
	struct UAkItemBoolProperties_GetSelectedProperty_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkItemBoolProperties.GetSearchText
	 */
	struct UAkItemBoolProperties_GetSearchText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
	 */
	struct UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Params
	{
	public:
		struct FAkPropertyToControl                                INAkPropertyToControl;                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
	 */
	struct UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Params
	{
	public:
		struct FAkPropertyToControl                                INAkPropertyToControl;                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkItemProperties.SetSearchText
	 */
	struct UAkItemProperties_SetSearchText_Params
	{
	public:
		class FString                                              NewText;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkItemProperties.GetSelectedProperty
	 */
	struct UAkItemProperties_GetSelectedProperty_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkItemProperties.GetSearchText
	 */
	struct UAkItemProperties_GetSearchText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
	 */
	struct UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering
	 */
	struct UAkLuminInitializationSettings_MigrateMultiCoreRendering_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
	 */
	struct UAkMacInitializationSettings_MigrateMultiCoreRendering_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkMediaAssetData.IsBulkMediaPreFetch
	 */
	struct UAkMediaAssetData_IsBulkMediaPreFetch_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkMediaAssetData.GetStreamedBulkMediaDataSize
	 */
	struct UAkMediaAssetData_GetStreamedBulkMediaDataSize_Params
	{
	public:
		int64_t                                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkMediaAssetData.GetBulkMediaDataSize
	 */
	struct UAkMediaAssetData_GetBulkMediaDataSize_Params
	{
	public:
		int64_t                                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
	 */
	struct UAkPS4InitializationSettings_MigrateMultiCoreRendering_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkSlider.SetValue
	 */
	struct UAkSlider_SetValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkSlider.SetStepSize
	 */
	struct UAkSlider_SetStepSize_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkSlider.SetSliderHandleColor
	 */
	struct UAkSlider_SetSliderHandleColor_Params
	{
	public:
		struct FLinearColor                                        InValue;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkSlider.SetSliderBarColor
	 */
	struct UAkSlider_SetSliderBarColor_Params
	{
	public:
		struct FLinearColor                                        InValue;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkSlider.SetLocked
	 */
	struct UAkSlider_SetLocked_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkSlider.SetIndentHandle
	 */
	struct UAkSlider_SetIndentHandle_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkSlider.SetAkSliderItemProperty
	 */
	struct UAkSlider_SetAkSliderItemProperty_Params
	{
	public:
		class FString                                              ItemProperty;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkSlider.SetAkSliderItemId
	 */
	struct UAkSlider_SetAkSliderItemId_Params
	{
	public:
		struct FGuid                                               ItemId;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkSlider.GetValue
	 */
	struct UAkSlider_GetValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkSlider.GetAkSliderItemProperty
	 */
	struct UAkSlider_GetAkSliderItemProperty_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkSlider.GetAkSliderItemId
	 */
	struct UAkSlider_GetAkSliderItemId_Params
	{
	public:
		struct FGuid                                               ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	 */
	struct UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Params
	{	};

	/**
	 * Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	 */
	struct UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Params
	{	};

	/**
	 * Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
	 */
	struct UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Params
	{	};

	/**
	 * Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
	 */
	struct UAkSwitchInitializationSettings_MigrateMultiCoreRendering_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiCalls.Unsubscribe
	 */
	struct UAkWaapiCalls_Unsubscribe_Params
	{
	public:
		struct FAkWaapiSubscriptionId                              SubscriptionId;                                          // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       UnsubscriptionDone;                                      // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9O3W[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAKWaapiJsonObject                                  ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiCalls.SubscribeToWaapi
	 */
	struct UAkWaapiCalls_SubscribeToWaapi_Params
	{
	public:
		struct FAkWaapiUri                                         WaapiUri;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  WaapiOptions;                                            // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FAkWaapiSubscriptionId                              SubscriptionId;                                          // 0x0030(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       SubscriptionDone;                                        // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KHW3[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAKWaapiJsonObject                                  ReturnValue;                                             // 0x0040(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiCalls.SetSubscriptionID
	 */
	struct UAkWaapiCalls_SetSubscriptionID_Params
	{
	public:
		struct FAkWaapiSubscriptionId                              Subscription;                                            // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ID;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
	 */
	struct UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
	 */
	struct UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiCalls.GetSubscriptionID
	 */
	struct UAkWaapiCalls_GetSubscriptionID_Params
	{
	public:
		struct FAkWaapiSubscriptionId                              Subscription;                                            // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
	 */
	struct UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Params
	{
	public:
		struct FAkWaapiSubscriptionId                              INAkWaapiSubscriptionId;                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
	 */
	struct UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Params
	{
	public:
		struct FAkWaapiSubscriptionId                              INAkWaapiSubscriptionId;                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiCalls.CallWaapi
	 */
	struct UAkWaapiCalls_CallWaapi_Params
	{
	public:
		struct FAkWaapiUri                                         WaapiUri;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  WaapiArgs;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  WaapiOptions;                                            // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
	 */
	struct USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Params
	{
	public:
		struct FAkWaapiFieldNames                                  INAkWaapiFieldNames;                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
	 */
	struct USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Params
	{
	public:
		struct FAkWaapiFieldNames                                  INAkWaapiFieldNames;                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiJsonManager.SetStringField
	 */
	struct UAkWaapiJsonManager_SetStringField_Params
	{
	public:
		struct FAkWaapiFieldNames                                  FieldName;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              FieldValue;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  Target;                                                  // 0x0020(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiJsonManager.SetObjectField
	 */
	struct UAkWaapiJsonManager_SetObjectField_Params
	{
	public:
		struct FAkWaapiFieldNames                                  FieldName;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  FieldValue;                                              // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  Target;                                                  // 0x0020(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiJsonManager.SetNumberField
	 */
	struct UAkWaapiJsonManager_SetNumberField_Params
	{
	public:
		struct FAkWaapiFieldNames                                  FieldName;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      FieldValue;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CC9J[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAKWaapiJsonObject                                  Target;                                                  // 0x0018(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiJsonManager.SetBoolField
	 */
	struct UAkWaapiJsonManager_SetBoolField_Params
	{
	public:
		struct FAkWaapiFieldNames                                  FieldName;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       FieldValue;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KTSX[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAKWaapiJsonObject                                  Target;                                                  // 0x0018(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
	 */
	struct UAkWaapiJsonManager_SetArrayStringFields_Params
	{
	public:
		struct FAkWaapiFieldNames                                  FieldName;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      FieldStringValues;                                       // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  Target;                                                  // 0x0020(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
	 */
	struct UAkWaapiJsonManager_SetArrayObjectFields_Params
	{
	public:
		struct FAkWaapiFieldNames                                  FieldName;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FAKWaapiJsonObject>                          FieldObjectValues;                                       // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  Target;                                                  // 0x0020(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiJsonManager.GetStringField
	 */
	struct UAkWaapiJsonManager_GetStringField_Params
	{
	public:
		struct FAkWaapiFieldNames                                  FieldName;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  Target;                                                  // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiJsonManager.GetObjectField
	 */
	struct UAkWaapiJsonManager_GetObjectField_Params
	{
	public:
		struct FAkWaapiFieldNames                                  FieldName;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  Target;                                                  // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiJsonManager.GetNumberField
	 */
	struct UAkWaapiJsonManager_GetNumberField_Params
	{
	public:
		struct FAkWaapiFieldNames                                  FieldName;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  Target;                                                  // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiJsonManager.GetIntegerField
	 */
	struct UAkWaapiJsonManager_GetIntegerField_Params
	{
	public:
		struct FAkWaapiFieldNames                                  FieldName;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  Target;                                                  // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiJsonManager.GetBoolField
	 */
	struct UAkWaapiJsonManager_GetBoolField_Params
	{
	public:
		struct FAkWaapiFieldNames                                  FieldName;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  Target;                                                  // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiJsonManager.GetArrayField
	 */
	struct UAkWaapiJsonManager_GetArrayField_Params
	{
	public:
		struct FAkWaapiFieldNames                                  FieldName;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAKWaapiJsonObject                                  Target;                                                  // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FAKWaapiJsonObject>                          ReturnValue;                                             // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
	 */
	struct UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Params
	{
	public:
		struct FAKWaapiJsonObject                                  INAKWaapiJsonObject;                                     // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
	 */
	struct UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Params
	{
	public:
		struct FAKWaapiJsonObject                                  INAKWaapiJsonObject;                                     // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
	 */
	struct UAkWaapiUriConv_Conv_FAkWaapiUriToText_Params
	{
	public:
		struct FAkWaapiUri                                         INAkWaapiUri;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
	 */
	struct UAkWaapiUriConv_Conv_FAkWaapiUriToString_Params
	{
	public:
		struct FAkWaapiUri                                         INAkWaapiUri;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
	 */
	struct UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering
	 */
	struct UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWwiseTree.SetSearchText
	 */
	struct UAkWwiseTree_SetSearchText_Params
	{
	public:
		class FString                                              NewText;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWwiseTree.GetSelectedItem
	 */
	struct UAkWwiseTree_GetSelectedItem_Params
	{
	public:
		struct FAkWwiseObjectDetails                               ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkWwiseTree.GetSearchText
	 */
	struct UAkWwiseTree_GetSearchText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering
	 */
	struct UAkXboxOneGDKInitializationSettings_MigrateMultiCoreRendering_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
	 */
	struct UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering
	 */
	struct UAkXSXInitializationSettings_MigrateMultiCoreRendering_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.PostEventAsync.PostEventAsync
	 */
	struct UPostEventAsync_PostEventAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CallbackMask;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      PostEventCallback;                                       // 0x001C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BDHL[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAkExternalSourceInfo>                       ExternalSources;                                         // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FEQQ[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPostEventAsync*                                     ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.PostEventAsync.PollPostEventFuture
	 */
	struct UPostEventAsync_PollPostEventFuture_Params
	{	};

	/**
	 * Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
	 */
	struct UPostEventAtLocationAsync_PostEventAtLocationAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Orientation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UPostEventAtLocationAsync*                           ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture
	 */
	struct UPostEventAtLocationAsync_PollPostEventFuture_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
