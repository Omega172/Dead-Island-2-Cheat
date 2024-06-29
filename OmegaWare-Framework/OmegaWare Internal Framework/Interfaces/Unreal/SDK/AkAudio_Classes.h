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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class AkAudio.AkAcousticPortal
	 * Size -> 0x0090 (FullSize[0x0378] - InheritedSize[0x02E8])
	 */
	class AAkAcousticPortal : public AVolume
	{
	public:
		EAkAcousticPortalState                                     InitialState;                                            // 0x02E8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8JAX[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ObstructionRefreshInterval;                              // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          ObstructionCollisionChannel;                             // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQP2[0x87];                                  // 0x02F1(0x0087) MISSED OFFSET (PADDING)

	public:
		void OpenPortal();
		EAkAcousticPortalState GetCurrentState();
		void ClosePortal();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPortalComponent
	 * Size -> 0x0000 (FullSize[0x0290] - InheritedSize[0x0290])
	 */
	class UAkPortalComponent : public USceneComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioType
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UAkAudioType : public UObject
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ShortID;                                                 // 0x0038(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GUTW[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     UserData;                                                // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAcousticTexture
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UAkAcousticTexture : public UAkAudioType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAmbientSound
	 * Size -> 0x0040 (FullSize[0x02F0] - InheritedSize[0x02B0])
	 */
	class AAkAmbientSound : public AActor
	{
	public:
		class UAkAudioEvent*                                       AkAudioEvent;                                            // 0x02B0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkComponent*                                        AkComponent;                                             // 0x02B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StopWhenOwnerIsDestroyed;                                // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoPost;                                                // 0x02C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C2CT[0x2E];                                  // 0x02C2(0x002E) MISSED OFFSET (PADDING)

	public:
		void StopAmbientSound();
		void StartAmbientSound();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAndroidInitializationSettings
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UAkAndroidInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_PLSG[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAndroidAdvancedInitializationSettings            AdvancedSettings;                                        // 0x00C0(0x0040) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPlatformInfo
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UAkPlatformInfo : public UObject
	{
	public:
		unsigned char                                              UnknownData_6B2R[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAndroidPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkAndroidPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetBase
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UAkAssetBase : public UAkAudioType
	{
	public:
		class UAkAssetPlatformData*                                PlatformAssetData;                                       // 0x0050(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4G9J[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetData
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UAkAssetData : public UObject
	{
	public:
		uint32_t                                                   CachedHash;                                              // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U70P[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BankLanguage;                                            // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6OUG[0x38];                                  // 0x0040(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetDataWithMedia
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	class UAkAssetDataWithMedia : public UAkAssetData
	{
	public:
		TArray<class UAkMediaAsset*>                               MediaList;                                               // 0x0078(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetPlatformData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAkAssetPlatformData : public UObject
	{
	public:
		class UAkAssetData*                                        CurrentAssetData;                                        // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetDataSwitchContainerData
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UAkAssetDataSwitchContainerData : public UObject
	{
	public:
		unsigned char                                              GroupValue[0x28];                                        // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FGuid                                               GroupValueID;                                            // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGroupValueShouldSplitSwitchContainerMedia;              // 0x0060(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3VMS[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkGroupValue*                                       DefaultGroupValue;                                       // 0x0068(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAkMediaAsset*>                               MediaList;                                               // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class UAkAssetDataSwitchContainerData*>             Children;                                                // 0x0080(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetDataSwitchContainer
	 * Size -> 0x0068 (FullSize[0x00F0] - InheritedSize[0x0088])
	 */
	class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
	{
	public:
		TArray<class UAkAssetDataSwitchContainerData*>             SwitchContainers;                                        // 0x0088(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class UAkGroupValue*                                       DefaultGroupValue;                                       // 0x0098(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CE9O[0x50];                                  // 0x00A0(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioEventData
	 * Size -> 0x01A0 (FullSize[0x0290] - InheritedSize[0x00F0])
	 */
	class UAkAudioEventData : public UAkAssetDataSwitchContainer
	{
	public:
		float                                                      MaxAttenuationRadius;                                    // 0x00F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInfinite;                                              // 0x00F4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5U50[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDuration;                                         // 0x00F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDuration;                                         // 0x00FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class UAkAssetDataSwitchContainer*>    LocalizedMedia;                                          // 0x0100(0x0050) Deprecated, NativeAccessSpecifierPublic
		unsigned char                                              PostedEvents[0x50];                                      // 0x0150(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UserDefinedSends[0x50];                                  // 0x01A0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              PostedTriggers[0x50];                                    // 0x01F0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              GroupValues[0x50];                                       // 0x0240(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioBank
	 * Size -> 0x0078 (FullSize[0x00D8] - InheritedSize[0x0060])
	 */
	class UAkAudioBank : public UAkAssetBase
	{
	public:
		bool                                                       AutoLoad;                                                // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F50L[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UAkAssetPlatformData*>           LocalizedPlatformAssetDataMap;                           // 0x0068(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		class UAkAssetPlatformData*                                CurrentLocalizedPlatformAssetData;                       // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BKBN[0x18];                                  // 0x00C0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioEvent
	 * Size -> 0x0090 (FullSize[0x00F0] - InheritedSize[0x0060])
	 */
	class UAkAudioEvent : public UAkAssetBase
	{
	public:
		TMap<class FString, class UAkAssetPlatformData*>           LocalizedPlatformAssetDataMap;                           // 0x0060(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		class UAkAudioBank*                                        RequiredBank;                                            // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z5A0[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSubtitleCueDS>                              CaptionCues;                                             // 0x00C0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UAkAssetPlatformData*                                CurrentLocalizedPlatformData;                            // 0x00D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxAttenuationRadius;                                    // 0x00D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       IsInfinite;                                              // 0x00DC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DMKU[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDuration;                                         // 0x00E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaximumDuration;                                         // 0x00E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WDOM[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		float GetMinimumDuration();
		float GetMaximumDuration();
		float GetMaxAttenuationRadius();
		bool GetIsInfinite();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGameObject
	 * Size -> 0x0090 (FullSize[0x0320] - InheritedSize[0x0290])
	 */
	class UAkGameObject : public USceneComponent
	{
	public:
		class UAkAudioEvent*                                       AkAudioEvent;                                            // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6B4H[0x78];                                  // 0x02A8(0x0078) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int32_t* PlayingID);
		int32_t PostAssociatedAkEvent(int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources);
		void PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32_t* PlayingID, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAkEvent(class UAkAudioEvent* AkEvent, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const class FString& in_EventName);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkComponent
	 * Size -> 0x0238 (FullSize[0x0558] - InheritedSize[0x0320])
	 */
	class UAkComponent : public UAkGameObject
	{
	public:
		bool                                                       bUseSpatialAudio;                                        // 0x0320(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HN6F[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECollisionChannel                                          OcclusionCollisionChannel;                               // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWN6[0x3];                                   // 0x0329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       EnableSpotReflectors : 1;                                // 0x032C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DIYR[0x3];                                   // 0x032D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAuxBus*                                           EarlyReflectionAuxBus;                                   // 0x0330(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              EarlyReflectionAuxBusName;                               // 0x0338(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    EarlyReflectionOrder;                                    // 0x0348(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EarlyReflectionBusSendGain;                              // 0x034C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EarlyReflectionMaxPathLength;                            // 0x0350(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      roomReverbAuxBusGain;                                    // 0x0354(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    diffractionMaxEdges;                                     // 0x0358(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    diffractionMaxPaths;                                     // 0x035C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      diffractionMaxPathLength;                                // 0x0360(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       DrawFirstOrderReflections : 1;                           // 0x0364(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrawSecondOrderReflections : 1;                          // 0x0364(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrawHigherOrderReflections : 1;                          // 0x0364(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrawDiffraction : 1;                                     // 0x0364(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrawDebugOcclusion : 1;                                  // 0x0364(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_526M[0x3];                                   // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AttenuationScalingFactor;                                // 0x0368(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OcclusionRefreshInterval;                                // 0x036C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseReverbVolumes;                                       // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OUO2[0x1E7];                                 // 0x0371(0x01E7) Fix size for supers

	public:
		void UseReverbVolumes(bool inUseReverbVolumes);
		void UseEarlyReflections(class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
		void SetSwitch(class UAkSwitchValue* SwitchValue, const class FString& SwitchGroup, const class FString& SwitchState);
		void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, const class FString& RTPC);
		void SetOutputBusVolume(float BusVolume);
		void SetListeners(TArray<class UAkComponent*> Listeners);
		void SetEarlyReflectionsVolume(float SendVolume);
		void SetEarlyReflectionsAuxBus(const class FString& AuxBusName);
		void SetAttenuationScalingFactor(float Value);
		void SetAllowAnyoneToDestroyMe(bool bAllow);
		void PostTrigger(class UAkTrigger* TriggerValue, const class FString& Trigger);
		void PostAssociatedAkEventAndWaitForEndAsync(int32_t* PlayingID, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAkEventByName(const class FString& in_EventName);
		void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32_t* PlayingID, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const class FString& in_EventName, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float* Value, ERTPCValueType* OutputValueType, const class FString& RTPC, int32_t PlayingID);
		float GetAttenuationRadius();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioInputComponent
	 * Size -> 0x0038 (FullSize[0x0590] - InheritedSize[0x0558])
	 */
	class UAkAudioInputComponent : public UAkComponent
	{
	public:
		unsigned char                                              UnknownData_ZMHZ[0x8];                                   // 0x0558(0x0008) Fix Super Size
		unsigned char                                              UnknownData_Y4RE[0x30];                                  // 0x0560(0x0030) MISSED OFFSET (PADDING)

	public:
		int32_t PostAssociatedAudioInputEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAuxBus
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UAkAuxBus : public UAkAssetBase
	{
	public:
		class UAkAudioBank*                                        RequiredBank;                                            // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkCheckBox
	 * Size -> 0x0A18 (FullSize[0x0B38] - InheritedSize[0x0120])
	 */
	class UAkCheckBox : public UContentWidget
	{
	public:
		unsigned char                                              UnknownData_T7M8[0x3A8];                                 // 0x0120(0x03A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECheckBoxState                                             CheckedState;                                            // 0x04C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UD0S[0x3];                                   // 0x04C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      CheckedStateDelegate;                                    // 0x04CC(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBKR[0x4];                                   // 0x04DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCheckBoxStyle                                      WidgetStyle;                                             // 0x04E0(0x0580) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0A60(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x0A61(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELM3[0x6];                                   // 0x0A62(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkBoolPropertyToControl                            ThePropertyToControl;                                    // 0x0A68(0x0010) Edit, NativeAccessSpecifierPublic
		struct FAkWwiseItemToControl                               ItemToControl;                                           // 0x0A78(0x0040) Edit, Config, EditConst, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             AkOnCheckStateChanged;                                   // 0x0AB8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDropped;                                           // 0x0AC8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDropped;                                       // 0x0AD8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SKTW[0x50];                                  // 0x0AE8(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetIsChecked(bool InIsChecked);
		void SetCheckedState(ECheckBoxState InCheckedState);
		void SetAkItemId(const struct FGuid& ItemId);
		void SetAkBoolProperty(const class FString& ItemProperty);
		bool IsPressed();
		bool IsChecked();
		ECheckBoxState GetCheckedState();
		class FString GetAkProperty();
		struct FGuid GetAkItemId();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkChinookPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkChinookPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMPXPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkMPXPlatformInfo : public UAkChinookPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXSXPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkXSXPlatformInfo : public UAkChinookPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkComponentPool
	 * Size -> 0x0128 (FullSize[0x0150] - InheritedSize[0x0028])
	 */
	class UAkComponentPool : public UObject
	{
	public:
		struct FObjectPoolParameters                               ComponentPoolParams;                                     // 0x0028(0x000C) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UAT0[0x11C];                                 // 0x0034(0x011C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLateReverbActor
	 * Size -> 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
	 */
	class AAkLateReverbActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioPhysicsMaterialToObstructionData
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UAkAudioPhysicsMaterialToObstructionData : public UDataAsset
	{
	public:
		TMap<class UPhysicalMaterial*, struct FAkAudioObstructionData> PhysicsMaterialToObstructionDataMap;                     // 0x0030(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkFolder
	 * Size -> 0x0078 (FullSize[0x00C8] - InheritedSize[0x0050])
	 */
	class UAkFolder : public UAkAudioType
	{
	public:
		class FString                                              UnrealFolderPath;                                        // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WwiseFolderPath;                                         // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QGJ7[0x58];                                  // 0x0070(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGameplayStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkGameplayStatics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
		void STATIC_UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
		void STATIC_UnloadBankByName(const class FString& BankName);
		void STATIC_UnloadBankAsync(class UAkAudioBank* Bank, const class FScriptDelegate& BankUnloadedCallback);
		void STATIC_UnloadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
		void STATIC_StopProfilerCapture();
		void STATIC_StopOutputCapture();
		void STATIC_StopAllAmbientSounds(class UObject* WorldContextObject);
		void STATIC_StopAll();
		void STATIC_StopActor(class AActor* Actor);
		void STATIC_StartProfilerCapture(const class FString& Filename);
		void STATIC_StartOutputCapture(const class FString& Filename);
		void STATIC_StartAllAmbientSounds(class UObject* WorldContextObject);
		class UAkComponent* STATIC_SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const class FString& EventName, bool AutoDestroy);
		void STATIC_SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, const class FName& SwitchGroup, const class FName& SwitchState);
		void STATIC_SetState(class UAkStateValue* StateValue, const class FName& StateGroup, const class FName& State);
		void STATIC_SetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, const class FString& DeviceShareset);
		void STATIC_SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class AActor* Actor, const class FName& RTPC);
		void STATIC_SetReflectionsOrder(int32_t Order, bool RefreshPaths);
		void STATIC_SetPanningRule(EPanningRule PanRule);
		void STATIC_SetOutputBusVolume(float BusVolume, class AActor* Actor);
		void STATIC_SetOcclusionScalingFactor(float ScalingFactor);
		void STATIC_SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
		void STATIC_SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
		void STATIC_SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<struct FAkChannelMask> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
		void STATIC_SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
		void STATIC_SetCurrentAudioCultureAsync(const class FString& AudioCulture, const class FScriptDelegate& Completed);
		void STATIC_SetCurrentAudioCulture(const class FString& AudioCulture, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
		void STATIC_SetBusConfig(const class FString& BusName, EAkChannelConfiguration ChannelConfiguration);
		void STATIC_ResetRTPCValue(class UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, class AActor* Actor, const class FName& RTPC);
		void STATIC_PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, const class FName& Trigger);
		void STATIC_PostEventWithExternalSource(class UAkAudioEvent* AkEvent, class AActor* Actor, const class FString& ExternalSourceName, const class FString& ExternalSourceFilePath, const class FString& EventName, bool bStopWhenAttachedToDestroyed);
		void STATIC_PostEventToComponentWithExternalSource(class UAkAudioEvent* AkEvent, class UAkComponent* AkComponent, const class FString& ExternalSourceName, const class FString& ExternalSourceFilePath, const class FString& EventName, bool bStopWhenAttachedToDestroyed);
		int32_t STATIC_PostEventToComponent(class UAkAudioEvent* AkEvent, class UAkComponent* AkComponent, const class FString& EventName, TArray<struct FAkExternalSourceInfo> ExternalSourceInfoArray, TArray<struct FAudioSwitchGroupNameSwitchStateSimplePair> SwitchGroupsAndSwitchStates, TArray<struct FAudioRTPCNameRTPCValueSimplePair> RTPCNamesAndValues, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed);
		int32_t STATIC_PostEventOnActor(class UAkAudioEvent* AkEvent, class UAkAuxBus* EarlyReflectionBus, class AActor* Actor, const class FString& EventName, TArray<struct FAkExternalSourceInfo> ExternalSources, const class FString& EarlyReflectionsBusName, TArray<struct FAudioSwitchGroupNameSwitchStateSimplePair> SwitchGroupsAndSwitchStates, TArray<struct FAudioRTPCNameRTPCValueSimplePair> RTPCNamesAndValues, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed);
		void STATIC_PostEventByName(const class FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
		int32_t STATIC_PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const class FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const class FString& EventName);
		struct FPlayAtLocationResult STATIC_PostEventAtLocationDS(class UAkAudioEvent* AkEvent, class UAkAuxBus* EarlyReflectionsBus, const struct FVector& Location, const struct FRotator& Orientation, const class FString& EventName, TArray<struct FAkExternalSourceInfo> ExternalSourceInfoArray, const class FString& EarlyReflectionsBusName, class UObject* WorldContextObject, const struct FAkPostEventExtraParams& Params, TArray<struct FAudioSwitchGroupNameSwitchStateSimplePair> SwitchGroupsAndSwitchStates, TArray<struct FAudioRTPCNameRTPCValueSimplePair> RTPCNamesAndValues, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback);
		void STATIC_PostEventAtLocationByName(const class FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
		int32_t STATIC_PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const class FString& EventName, class UObject* WorldContextObject);
		int32_t STATIC_PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed, const class FString& EventName);
		void STATIC_PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t* PlayingID, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t STATIC_PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const class FString& EventName, const struct FLatentActionInfo& LatentInfo);
		void STATIC_LoadInitBank();
		void STATIC_LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
		void STATIC_LoadBankByName(const class FString& BankName);
		void STATIC_LoadBankAsync(class UAkAudioBank* Bank, const class FScriptDelegate& BankLoadedCallback);
		void STATIC_LoadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
		bool STATIC_IsGame(class UObject* WorldContextObject);
		bool STATIC_IsEditor();
		void STATIC_GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const class FString& DeviceShareset);
		void STATIC_GetRTPCValue(class UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float* Value, ERTPCValueType* OutputValueType, class AActor* Actor, const class FName& RTPC);
		float STATIC_GetOcclusionScalingFactor();
		class FString STATIC_GetCurrentAudioCulture();
		TArray<class FString> STATIC_GetAvailableAudioCultures();
		class UObject* STATIC_GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* Type);
		class UAkComponent* STATIC_GetAkComponent(class USceneComponent* AttachToComponent, bool* ComponentCreated, const class FName& AttachPointName, const struct FVector& Location, EAttachLocation LocationType, const struct FRotator& Rotation);
		class UObject* STATIC_GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type);
		void STATIC_ExecuteActionOnPlayingID(EAkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve);
		void STATIC_ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, EAkActionOnEventType ActionType, class AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID);
		void STATIC_ClearBanks();
		void STATIC_CancelEventCallback(const class FScriptDelegate& PostEventCallback);
		void STATIC_ApplyPostEventExtraParamsToAkComponent(const struct FAkPostEventExtraParams& ExtraParams, class UAkComponent* AkComponent);
		void STATIC_AddOutputCaptureMarker(const class FString& MarkerText);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkCallbackInfo
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAkCallbackInfo : public UObject
	{
	public:
		class UAkComponent*                                        AkComponent;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkEventCallbackInfo
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAkEventCallbackInfo : public UAkCallbackInfo
	{
	public:
		int32_t                                                    PlayingID;                                               // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventID;                                                 // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMIDIEventCallbackInfo
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_C16P[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		EAkMidiEventType GetType();
		bool GetProgramChange(struct FAkMidiProgramChange* AsProgramChange);
		bool GetPitchBend(struct FAkMidiPitchBend* AsPitchBend);
		bool GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn);
		bool GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff);
		bool GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch);
		bool GetGeneric(struct FAkMidiGeneric* AsGeneric);
		bool GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch);
		unsigned char GetChannel();
		bool GetCc(struct FAkMidiCc* AsCc);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMarkerCallbackInfo
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
	{
	public:
		int32_t                                                    Identifier;                                              // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Position;                                                // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Label;                                                   // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkDurationCallbackInfo
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UAkDurationCallbackInfo : public UAkEventCallbackInfo
	{
	public:
		float                                                      Duration;                                                // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EstimatedDuration;                                       // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AudioNodeID;                                             // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MediaID;                                                 // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStreaming;                                              // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3XRR[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMusicSyncCallbackInfo
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
	{
	public:
		int32_t                                                    PlayingID;                                               // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAkSegmentInfo                                      SegmentInfo;                                             // 0x0034(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		EAkCallbackType                                            MusicSyncType;                                           // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JKE6[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UserCueName;                                             // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGeometryComponent
	 * Size -> 0x0130 (FullSize[0x03C0] - InheritedSize[0x0290])
	 */
	class UAkGeometryComponent : public USceneComponent
	{
	public:
		EAkMeshType                                                MeshType;                                                // 0x0290(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5WA6[0x3];                                   // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LOD;                                                     // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeldingThreshold;                                        // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_378N[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;                               // 0x02A0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAkGeometrySurfaceOverride                          CollisionMeshSurfaceOverride;                            // 0x02F0(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableDiffraction : 1;                                  // 0x0300(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDiffractionOnBoundaryEdges : 1;                   // 0x0300(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWLC[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              AssociatedRoom;                                          // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7S71[0x10];                                  // 0x0310(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkGeometryData                                     GeometryData;                                            // 0x0320(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BBCM[0x50];                                  // 0x0370(0x0050) MISSED OFFSET (PADDING)

	public:
		void UpdateGeometry();
		void RemoveGeometry();
		void ConvertMesh();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGroupValue
	 * Size -> 0x0048 (FullSize[0x0098] - InheritedSize[0x0050])
	 */
	class UAkGroupValue : public UAkAudioType
	{
	public:
		unsigned char                                              DependantEvents[0x10];                                   // 0x0050(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<struct FGuid>                                       DependantEventIDs;                                       // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              MediaDependencies[0x10];                                 // 0x0070(0x0010) UNKNOWN PROPERTY: ArrayProperty
		uint32_t                                                   GroupShortID;                                            // 0x0080(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldSplitSwitchContainerMedia;                        // 0x0084(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O6Q7[0x13];                                  // 0x0085(0x0013) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkHololensInitializationSettings
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UAkHololensInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_YJGL[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkHololensAdvancedInitializationSettings           AdvancedSettings;                                        // 0x00C0(0x0040) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkHololensPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkHololensPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkInitBankAssetData
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UAkInitBankAssetData : public UAkAssetDataWithMedia
	{
	public:
		TArray<struct FAkPluginInfo>                               PluginInfos;                                             // 0x0088(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkInitBank
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class UAkInitBank : public UAkAssetBase
	{
	public:
		TArray<class FString>                                      AvailableAudioCultures;                                  // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class FString                                              DefaultLanguage;                                         // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkIOSInitializationSettings
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UAkIOSInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_5ONE[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAudioSession                                     AudioSession;                                            // 0x0098(0x000C) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IL42[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x00A8(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettings                   AdvancedSettings;                                        // 0x00D0(0x0034) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_56X4[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkIOSPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkIOSPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkItemBoolPropertiesConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText STATIC_Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
		class FString STATIC_Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkItemBoolProperties
	 * Size -> 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
	 */
	class UAkItemBoolProperties : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDragged;                                       // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OG6Q[0x20];                                  // 0x0128(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetSearchText(const class FString& NewText);
		class FString GetSelectedProperty();
		class FString GetSearchText();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkItemPropertiesConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText STATIC_Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl);
		class FString STATIC_Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkItemProperties
	 * Size -> 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
	 */
	class UAkItemProperties : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDragged;                                       // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F8QB[0x20];                                  // 0x0128(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetSearchText(const class FString& NewText);
		class FString GetSelectedProperty();
		class FString GetSearchText();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLateReverbComponent
	 * Size -> 0x0050 (FullSize[0x02E0] - InheritedSize[0x0290])
	 */
	class UAkLateReverbComponent : public USceneComponent
	{
	public:
		bool                                                       bEnable : 1;                                             // 0x0290(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O641[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAuxBus*                                           AuxBus;                                                  // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AuxBusName;                                              // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SendLevel;                                               // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeRate;                                                // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_01RF[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkLateReverbComponent*                              NextLowerPriorityComponent;                              // 0x02C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MOF9[0x18];                                  // 0x02C8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLinuxInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkLinuxInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_L27I[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00C0(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLinuxPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkLinuxPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLuminInitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkLuminInitializationSettings : public UObject
	{
	public:
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0028(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00B8(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLuminPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkLuminPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMacInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkMacInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_TMH6[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00C0(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMacPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkMacPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMediaAssetData
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UAkMediaAssetData : public UObject
	{
	public:
		bool                                                       IsStreamed;                                              // 0x0028(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseDeviceMemory;                                         // 0x0029(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7JQ[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Language;                                                // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BKWY[0x28];                                  // 0x0040(0x0028) MISSED OFFSET (PADDING)

	public:
		bool IsBulkMediaPreFetch();
		int64_t GetStreamedBulkMediaDataSize();
		int64_t GetBulkMediaDataSize();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMediaAsset
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UAkMediaAsset : public UObject
	{
	public:
		uint32_t                                                   ID;                                                      // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZCJ2[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MediaName;                                               // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoLoad;                                                // 0x0040(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I037[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     UserData;                                                // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              Language;                                                // 0x0058(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkMediaAssetData*                                   CurrentMediaAssetData;                                   // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_36NM[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLocalizedMediaAsset
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UAkLocalizedMediaAsset : public UAkMediaAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkExternalMediaAsset
	 * Size -> 0x0060 (FullSize[0x00D8] - InheritedSize[0x0078])
	 */
	class UAkExternalMediaAsset : public UAkMediaAsset
	{
	public:
		unsigned char                                              UnknownData_Q1JW[0x60];                                  // 0x0078(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMediaPlayerAudioInputComponent
	 * Size -> 0x0070 (FullSize[0x0600] - InheritedSize[0x0590])
	 */
	class UAkMediaPlayerAudioInputComponent : public UAkAudioInputComponent
	{
	public:
		unsigned char                                              UnknownData_MELP[0x70];                                  // 0x0590(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPellegrinoPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkPellegrinoPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkDPXPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkDPXPlatformInfo : public UAkPellegrinoPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPS5PlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkPS5PlatformInfo : public UAkPellegrinoPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPlatformInitialisationSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkPlatformInitialisationSettingsBase : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPS4InitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkPS4InitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_AYKA[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0030(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkPS4AdvancedInitializationSettings                AdvancedSettings;                                        // 0x00B8(0x0040) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPS4PlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkPS4PlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPS5InitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkPS5InitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_GOOG[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0030(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkPS5AdvancedInitializationSettings                AdvancedSettings;                                        // 0x00B8(0x003C) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G5DB[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkDPXInitializationSettings
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkReverbVolume
	 * Size -> 0x0038 (FullSize[0x0320] - InheritedSize[0x02E8])
	 */
	class AAkReverbVolume : public AVolume
	{
	public:
		bool                                                       bEnabled : 1;                                            // 0x02E8(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NO98[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAuxBus*                                           AuxBus;                                                  // 0x02F0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AuxBusName;                                              // 0x02F8(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SendLevel;                                               // 0x0308(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeRate;                                                // 0x030C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x0310(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0QT[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkLateReverbComponent*                              LateReverbComponent;                                     // 0x0318(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkRoomComponent
	 * Size -> 0x0020 (FullSize[0x0340] - InheritedSize[0x0320])
	 */
	class UAkRoomComponent : public UAkGameObject
	{
	public:
		class UAkRoomComponent*                                    NextLowerPriorityComponent;                              // 0x0320(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallOcclusion;                                           // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AuxSendLevel;                                            // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoPost;                                                // 0x0334(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SJE[0xB];                                   // 0x0335(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkRtpc
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UAkRtpc : public UAkAudioType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSettings
	 * Size -> 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
	 */
	class UAkSettings : public UObject
	{
	public:
		unsigned char                                              MaxSimultaneousReverbVolumes;                            // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XI7N[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFilePath                                           WwiseProjectPath;                                        // 0x0030(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      WwiseSoundDataFolder;                                    // 0x0040(0x0010) Edit, Config, NativeAccessSpecifierPublic
		bool                                                       bAutoConnectToWAAPI;                                     // 0x0050(0x0001) ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          DefaultOcclusionCollisionChannel;                        // 0x0051(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DUPJ[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AkGeometryMap[0x50];                                     // 0x0058(0x0050) UNKNOWN PROPERTY: MapProperty
		bool                                                       SplitSwitchContainerMedia;                               // 0x00A8(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SplitMediaPerFolder;                                     // 0x00A9(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseEventBasedPackaging;                                  // 0x00AA(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableAutomaticAssetSynchronization;                     // 0x00AB(0x0001) ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NHAO[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CommandletCommitMessage;                                 // 0x00B0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         UnrealCultureToWwiseCulture;                             // 0x00C0(0x0050) Edit, Config, NativeAccessSpecifierPublic
		bool                                                       AskedToUseNewAssetManagement;                            // 0x0110(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMultiCoreRendering;                               // 0x0111(0x0001) ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MigratedEnableMultiCoreRendering;                        // 0x0112(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FixupRedirectorsDuringMigration;                         // 0x0113(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YITQ[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDirectoryPath                                      WwiseWindowsInstallationPath;                            // 0x0118(0x0010) Config, Deprecated, NativeAccessSpecifierPublic
		struct FFilePath                                           WwiseMacInstallationPath;                                // 0x0128(0x0010) Config, Deprecated, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CAK2[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSettingsPerUser
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UAkSettingsPerUser : public UObject
	{
	public:
		struct FDirectoryPath                                      WwiseWindowsInstallationPath;                            // 0x0028(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FFilePath                                           WwiseMacInstallationPath;                                // 0x0038(0x0010) Edit, Config, NativeAccessSpecifierPublic
		bool                                                       EnableAutomaticAssetSynchronization;                     // 0x0048(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8F1K[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              WaapiIPAddress;                                          // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   WaapiPort;                                               // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoConnectToWAAPI;                                     // 0x0064(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoSyncSelection;                                       // 0x0065(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SuppressWwiseProjectPathWarnings;                        // 0x0066(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SoundDataGenerationSkipLanguage;                         // 0x0067(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2U8K[0x18];                                  // 0x0068(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSlider
	 * Size -> 0x0428 (FullSize[0x0530] - InheritedSize[0x0108])
	 */
	class UAkSlider : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x010C(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48FJ[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSliderStyle                                        WidgetStyle;                                             // 0x0120(0x0340) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x0460(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EWIC[0x3];                                   // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        SliderBarColor;                                          // 0x0464(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderHandleColor;                                       // 0x0474(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IndentHandle;                                            // 0x0484(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Locked;                                                  // 0x0485(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SEXS[0x2];                                   // 0x0486(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StepSize;                                                // 0x0488(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x048C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7X4E[0x3];                                   // 0x048D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkPropertyToControl                                ThePropertyToControl;                                    // 0x0490(0x0010) Edit, EditConst, NativeAccessSpecifierPublic
		struct FAkWwiseItemToControl                               ItemToControl;                                           // 0x04A0(0x0040) Edit, Config, EditConst, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x04E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDropped;                                           // 0x04F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDropped;                                       // 0x0500(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFW5[0x20];                                  // 0x0510(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetValue(float InValue);
		void SetStepSize(float InValue);
		void SetSliderHandleColor(const struct FLinearColor& InValue);
		void SetSliderBarColor(const struct FLinearColor& InValue);
		void SetLocked(bool InValue);
		void SetIndentHandle(bool InValue);
		void SetAkSliderItemProperty(const class FString& ItemProperty);
		void SetAkSliderItemId(const struct FGuid& ItemId);
		float GetValue();
		class FString GetAkSliderItemProperty();
		struct FGuid GetAkSliderItemId();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSpatialAudioVolume
	 * Size -> 0x0018 (FullSize[0x0300] - InheritedSize[0x02E8])
	 */
	class AAkSpatialAudioVolume : public AVolume
	{
	public:
		class UAkSurfaceReflectorSetComponent*                     SurfaceReflectorSet;                                     // 0x02E8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkLateReverbComponent*                              LateReverb;                                              // 0x02F0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkRoomComponent*                                    Room;                                                    // 0x02F8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSpotReflector
	 * Size -> 0x0028 (FullSize[0x02D8] - InheritedSize[0x02B0])
	 */
	class AAkSpotReflector : public AActor
	{
	public:
		class UAkAuxBus*                                           EarlyReflectionAuxBus;                                   // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EarlyReflectionAuxBusName;                               // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAcousticTexture*                                  AcousticTexture;                                         // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceScalingFactor;                                   // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Level;                                                   // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkStadiaInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkStadiaInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_XO1R[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00C0(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkQuailInitializationSettings
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class UAkQuailInitializationSettings : public UAkStadiaInitializationSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkStadiaPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkStadiaPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkQuailPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkQuailPlatformInfo : public UAkStadiaPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkStateValue
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UAkStateValue : public UAkGroupValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSurfaceReflectorSetComponent
	 * Size -> 0x0040 (FullSize[0x02D0] - InheritedSize[0x0290])
	 */
	class UAkSurfaceReflectorSetComponent : public USceneComponent
	{
	public:
		bool                                                       bEnableSurfaceReflectors : 1;                            // 0x0290(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DDR5[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAkPoly>                                     AcousticPolys;                                           // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnableDiffraction : 1;                                  // 0x02A8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDiffractionOnBoundaryEdges : 1;                   // 0x02A8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5TS[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              AssociatedRoom;                                          // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJ89[0x18];                                  // 0x02B8(0x0018) MISSED OFFSET (PADDING)

	public:
		void UpdateSurfaceReflectorSet();
		void SendSurfaceReflectorSet();
		void RemoveSurfaceReflectorSet();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSwitchInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkSwitchInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_41YJ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithCommSelection           CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00C0(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSwitchPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkSwitchPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSwitchValue
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UAkSwitchValue : public UAkGroupValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkTrigger
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UAkTrigger : public UAkAudioType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkTVOSInitializationSettings
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UAkTVOSInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_97I5[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAudioSession                                     AudioSession;                                            // 0x0098(0x000C) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QSIE[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x00A8(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettings                   AdvancedSettings;                                        // 0x00D0(0x0034) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G0CS[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkTVOSPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkTVOSPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWaapiCalls
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkWaapiCalls : public UBlueprintFunctionLibrary
	{
	public:
		struct FAKWaapiJsonObject STATIC_Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone);
		struct FAKWaapiJsonObject STATIC_SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const class FScriptDelegate& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone);
		void STATIC_SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int32_t ID);
		bool STATIC_RegisterWaapiProjectLoadedCallback(const class FScriptDelegate& Callback);
		bool STATIC_RegisterWaapiConnectionLostCallback(const class FScriptDelegate& Callback);
		int32_t STATIC_GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription);
		class FText STATIC_Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
		class FString STATIC_Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
		struct FAKWaapiJsonObject STATIC_CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.SAkWaapiFieldNamesConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText STATIC_Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
		class FString STATIC_Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWaapiJsonManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
	{
	public:
		struct FAKWaapiJsonObject STATIC_SetStringField(const struct FAkWaapiFieldNames& FieldName, const class FString& FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<class FString> FieldStringValues, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& Target);
		class FString STATIC_GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		float STATIC_GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		int32_t STATIC_GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		bool STATIC_GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		TArray<struct FAKWaapiJsonObject> STATIC_GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		class FText STATIC_Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
		class FString STATIC_Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWaapiUriConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkWaapiUriConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText STATIC_Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri);
		class FString STATIC_Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWindowsInitializationSettings
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UAkWindowsInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_ZPZ2[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkWindowsAdvancedInitializationSettings            AdvancedSettings;                                        // 0x00C0(0x0040) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWin32PlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkWin32PlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWin64PlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkWin64PlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWindowsPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWinGDKInitializationSettings
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UAkWinGDKInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_R68E[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkWinGDKAdvancedInitializationSettings             AdvancedSettings;                                        // 0x00C0(0x0040) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWinAnvilInitializationSettings
	 * Size -> 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
	 */
	class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWinGDKPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkWinGDKPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWinAnvilPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWwiseTree
	 * Size -> 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
	 */
	class UAkWwiseTree : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDragged;                                           // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8H62[0x20];                                  // 0x0128(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetSearchText(const class FString& NewText);
		struct FAkWwiseObjectDetails GetSelectedItem();
		class FString GetSearchText();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWwiseTreeSelector
	 * Size -> 0x0060 (FullSize[0x0168] - InheritedSize[0x0108])
	 */
	class UAkWwiseTreeSelector : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDragged;                                           // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TDBL[0x40];                                  // 0x0128(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXboxOneGDKInitializationSettings
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UAkXboxOneGDKInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_9TL6[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0030(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXboxOneGDKApuHeapInitializationSettings          ApuHeapSettings;                                         // 0x0090(0x0008) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXboxOneGDKAdvancedInitializationSettings         AdvancedSettings;                                        // 0x00C0(0x003C) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HB10[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXboxOneAnvilInitializationSettings
	 * Size -> 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
	 */
	class UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXboxOneGDKPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkXboxOneGDKPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXboxOneAnvilPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkXboxOneAnvilPlatformInfo : public UAkXboxOneGDKPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXboxOneInitializationSettings
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UAkXboxOneInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_AWNM[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0030(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXboxOneApuHeapInitializationSettings             ApuHeapSettings;                                         // 0x0090(0x0008) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXboxOneAdvancedInitializationSettings            AdvancedSettings;                                        // 0x00C0(0x003C) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RB1[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXboxOnePlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkXboxOnePlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXSXInitializationSettings
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UAkXSXInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_WM04[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0030(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXSXApuHeapInitializationSettings                 ApuHeapSettings;                                         // 0x0090(0x0008) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXSXAdvancedInitializationSettings                AdvancedSettings;                                        // 0x00C0(0x003C) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAAW[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMPXInitializationSettings
	 * Size -> 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
	 */
	class UAkMPXInitializationSettings : public UAkXSXInitializationSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.InterpTrackAkAudioEvent
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
	{
	public:
		TArray<struct FAkAudioEventTrackKey>                       Events;                                                  // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bContinueEventOnMatineeEnd : 1;                          // 0x00A0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7NFV[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.InterpTrackAkAudioRTPC
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
	{
	public:
		class FString                                              Param;                                                   // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayOnReverse : 1;                                      // 0x00A0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bContinueRTPCOnMatineeEnd : 1;                           // 0x00A0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V3M6[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.InterpTrackInstAkAudioEvent
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
	{
	public:
		float                                                      LastUpdatePosition;                                      // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I76H[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.InterpTrackInstAkAudioRTPC
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
	{
	public:
		float                                                      LastUpdatePosition;                                      // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PIUA[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioEventSection
	 * Size -> 0x0100 (FullSize[0x01E0] - InheritedSize[0x00E0])
	 */
	class UMovieSceneAkAudioEventSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_7301[0x40];                                  // 0x00E0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       Event;                                                   // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       RetriggerEvent;                                          // 0x0128(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MODW[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ScrubTailLengthMs;                                       // 0x012C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       StopAtSectionEnd;                                        // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZR7Q[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AttachPointName;                                         // 0x0134(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bFollow;                                                 // 0x013C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoDestroyComponent;                                   // 0x013D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H5BQ[0x2];                                   // 0x013E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkPostEventExtraParams                             PostEventExtraParams;                                    // 0x0140(0x000C) Edit, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BW07[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EventName;                                               // 0x0150(0x0010) Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YXYX[0x20];                                  // 0x0160(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSourceDuration;                                       // 0x0180(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4JYS[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MaxDurationSourceID;                                     // 0x0188(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SIEZ[0x48];                                  // 0x0198(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkTrack
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UMovieSceneAkTrack : public UMovieSceneTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsAMasterTrack : 1;                                     // 0x0068(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z7JL[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioEventTrack
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioRTPCSection
	 * Size -> 0x0178 (FullSize[0x0258] - InheritedSize[0x00E0])
	 */
	class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
	{
	public:
		class UAkRtpc*                                             RTPC;                                                    // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              Name;                                                    // 0x00E8(0x0010) Edit, ZeroConstructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRichCurve                                          FloatCurve;                                              // 0x00F8(0x0090) Protected, NativeAccessSpecifierProtected
		struct FMovieSceneFloatChannelSerializationHelper          FloatChannelSerializationHelper;                         // 0x0188(0x0030) Protected, NativeAccessSpecifierProtected
		struct FMovieSceneFloatChannel                             RTPCChannel;                                             // 0x01B8(0x00A0) Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioRTPCTrack
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.PostEventAsync
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UPostEventAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GMDA[0x60];                                  // 0x0040(0x0060) MISSED OFFSET (PADDING)

	public:
		class UPostEventAsync* STATIC_PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed);
		void PollPostEventFuture();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.PostEventAtLocationAsync
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MWG6[0x40];                                  // 0x0040(0x0040) MISSED OFFSET (PADDING)

	public:
		class UPostEventAtLocationAsync* STATIC_PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation);
		void PollPostEventFuture();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
