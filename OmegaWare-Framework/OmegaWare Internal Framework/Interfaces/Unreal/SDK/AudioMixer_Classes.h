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
	 * Class AudioMixer.SynthComponent
	 * Size -> 0x0530 (FullSize[0x07C0] - InheritedSize[0x0290])
	 */
	class USynthComponent : public USceneComponent
	{
	public:
		bool                                                       bAutoDestroy : 1;                                        // 0x0290(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopWhenOwnerDestroyed : 1;                             // 0x0290(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowSpatialization : 1;                                // 0x0290(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAttenuation : 1;                                // 0x0290(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I4L8[0x3];                                   // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOutputToBusOnly : 1;                                    // 0x0294(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_224Z[0x3];                                   // 0x0295(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoundAttenuationSettings                           AttenuationOverrides;                                    // 0x02A0(0x03F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0690(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ConcurrencySet[0x50];                                    // 0x0698(0x0050) UNKNOWN PROPERTY: SetProperty
		class USoundClass*                                         SoundClass;                                              // 0x06E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundEffectSourcePresetChain*                       SourceEffectChain;                                       // 0x06F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundSubmixBase*                                    SoundSubmix;                                             // 0x06F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoundSubmixSendInfo>                        SoundSubmixSends;                                        // 0x0700(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoundSourceBusSendInfo>                     BusSends;                                                // 0x0710(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FSoundModulation                                    Modulation;                                              // 0x0720(0x0010) Edit, NativeAccessSpecifierPublic
		TArray<struct FSoundSourceBusSendInfo>                     PreEffectBusSends;                                       // 0x0730(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsUISound : 1;                                          // 0x0740(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPreviewSound : 1;                                     // 0x0740(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BCQD[0x3];                                   // 0x0741(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EnvelopeFollowerAttackTime;                              // 0x0744(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnvelopeFollowerReleaseTime;                             // 0x0748(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IAZY[0x4];                                   // 0x074C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAudioEnvelopeValue;                                    // 0x0750(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8RVH[0x20];                                  // 0x0760(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USynthSound*                                         Synth;                                                   // 0x0780(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAudioComponent*                                     AudioComponent;                                          // 0x0788(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z0WV[0x30];                                  // 0x0790(0x0030) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void Start();
		void SetVolumeMultiplier(float VolumeMultiplier);
		void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
		bool IsPlaying();
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.AudioGenerator
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UAudioGenerator : public UObject
	{
	public:
		unsigned char                                              UnknownData_CK5C[0x80];                                  // 0x0028(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.AudioMixerBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_TrimAudioCache(float InMegabytesToFree);
		class USoundWave* STATIC_StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
		void STATIC_StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
		void STATIC_StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
		void STATIC_StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize);
		void STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed);
		void STATIC_ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
		void STATIC_ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void STATIC_RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32_t SubmixChainIndex);
		void STATIC_RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex);
		void STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void STATIC_PrimeSoundForPlayback(class USoundWave* SoundWave, const class FScriptDelegate& OnLoadCompletion);
		void STATIC_PrimeSoundCueForPlayback(class USoundCue* SoundCue);
		void STATIC_PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
		void STATIC_GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze);
		int32_t STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
		void STATIC_GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze);
		void STATIC_ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
		void STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject);
		int32_t STATIC_AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
		void STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectDynamicsProcessorPreset
	 * Size -> 0x00C8 (FullSize[0x0108] - InheritedSize[0x0040])
	 */
	class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_W15O[0x78];                                  // 0x0040(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectDynamicsProcessorSettings              Settings;                                                // 0x00B8(0x0050) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings);
		void SetExternalSubmix(class USoundSubmix* Submix);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectSubmixEQPreset
	 * Size -> 0x0048 (FullSize[0x0088] - InheritedSize[0x0040])
	 */
	class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_RGJV[0x38];                                  // 0x0040(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectSubmixEQSettings                       Settings;                                                // 0x0078(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectReverbPreset
	 * Size -> 0x0090 (FullSize[0x00D0] - InheritedSize[0x0040])
	 */
	class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_QECF[0x5C];                                  // 0x0040(0x005C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectReverbSettings                         Settings;                                                // 0x009C(0x0034) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
		void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectReverbFastPreset
	 * Size -> 0x0098 (FullSize[0x00D8] - InheritedSize[0x0040])
	 */
	class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_ITHE[0x60];                                  // 0x0040(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectReverbFastSettings                     Settings;                                                // 0x00A0(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
		void SetSettings(const struct FSubmixEffectReverbFastSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SynthSound
	 * Size -> 0x0020 (FullSize[0x0380] - InheritedSize[0x0360])
	 */
	class USynthSound : public USoundWaveProcedural
	{
	public:
		class USynthComponent*                                     OwningSynthComponent;                                    // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ONIB[0x18];                                  // 0x0368(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
