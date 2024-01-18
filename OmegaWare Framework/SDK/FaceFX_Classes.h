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
	 * Class FaceFX.FaceFXCharacter
	 * Size -> 0x0140 (FullSize[0x0168] - InheritedSize[0x0028])
	 */
	class UFaceFXCharacter : public UObject
	{
	public:
		unsigned char                                              UnknownData_4VTK[0x68];                                  // 0x0028(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFaceFXActor*                                        FaceFXActor;                                             // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5TJM[0xC0];                                  // 0x0098(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFaceFXAnim*                                         CurrentAnim;                                             // 0x0158(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R2O6[0x8];                                   // 0x0160(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.DSFaceFXCharacter
	 * Size -> 0x0038 (FullSize[0x01A0] - InheritedSize[0x0168])
	 */
	class UDSFaceFXCharacter : public UFaceFXCharacter
	{
	public:
		unsigned char                                              UnknownData_296N[0x38];                                  // 0x0168(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXAsset
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFaceFXAsset : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXActor
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UFaceFXActor : public UFaceFXAsset
	{
	public:
		TArray<struct FFaceFXActorData>                            PlatformData;                                            // 0x0028(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate
		struct FFaceFXActorData                                    ActorData;                                               // 0x0038(0x0030) Edit, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPrivate
		TArray<class UFaceFXAnim*>                                 Animations;                                              // 0x0068(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPrivate
		EFaceFXActorBlendMode                                      BlendMode;                                               // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_28A9[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXAnim
	 * Size -> 0x0108 (FullSize[0x0130] - InheritedSize[0x0028])
	 */
	class UFaceFXAnim : public UFaceFXAsset
	{
	public:
		TArray<struct FFaceFXAnimData>                             PlatformData;                                            // 0x0028(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate
		struct FFaceFXAnimData                                     AnimData;                                                // 0x0038(0x0010) Edit, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPrivate
		struct FFaceFXAnimId                                       ID;                                                      // 0x0048(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              Audio[0x28];                                             // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AudioAkEvent[0x28];                                      // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FString                                              AudioAkEventExternalSourcePath;                          // 0x00A8(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              AudioAkEventStop[0x28];                                  // 0x00B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AudioAkEventPause[0x28];                                 // 0x00E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AudioAkEventResume[0x28];                                // 0x0108(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXAnimationSection
	 * Size -> 0x0058 (FullSize[0x0138] - InheritedSize[0x00E0])
	 */
	class UFaceFXAnimationSection : public UMovieSceneSection
	{
	public:
		struct FFaceFXSkelMeshComponentId                          SkelMeshComponentId;                                     // 0x00E0(0x000C) Edit, NoDestructor, NativeAccessSpecifierPrivate
		struct FFaceFXAnimId                                       AnimationId;                                             // 0x00EC(0x0010) Edit, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SDMU[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Animation[0x28];                                         // 0x0100(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      StartOffset;                                             // 0x0128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EndOffset;                                               // 0x012C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsAnimationDurationLoaded : 1;                          // 0x0130(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X551[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimationDuration;                                       // 0x0134(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXAnimationTrack
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UFaceFXAnimationTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          AnimationSections;                                       // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFaceFXBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool GetAnimationBounds(class UFaceFXAnim* Animation, float* Start, float* End, float* Duration);
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXComponent
	 * Size -> 0x0048 (FullSize[0x0130] - InheritedSize[0x00E8])
	 */
	class UFaceFXComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnRawPlaybackStarted;                                    // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlaybackAudioStart;                                    // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlaybackStopped;                                       // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FFaceFXEntry>                                Entries;                                                 // 0x0118(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1MTM[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (PADDING)

	public:
		void StopAll();
		bool Stop(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
		bool Setup(class USkeletalMeshComponent* SkelMeshComp, class UActorComponent* AudioComponent, class UFaceFXActor* Asset, bool IsCompensateForForceFrontXAxis, bool IsAutoPlaySound, bool IsDisableMorphTargets, bool IsDisableMaterialParameters, class UObject* Caller);
		bool Resume(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
		bool PlayRaw(const class FString& RawFaceFXAnimPath, class UAkAudioEvent* AudioEvent, const class FString& ExternalSourcePath, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller);
		bool PlayFullPathRaw(const class FString& RawFaceFXAnimPath, class UAkAudioEvent* AudioEvent, const class FString& ExternalSourcePath, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller);
		bool PlayById(const class FName& Group, const class FName& AnimName, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller);
		bool Play(class UFaceFXAnim* Animation, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller);
		bool Pause(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
		void OnCharacterPlaybackStopped(class UFaceFXCharacter* Character, const struct FFaceFXAnimId& AnimId);
		void OnCharacterAudioStart(class UFaceFXCharacter* Character, const struct FFaceFXAnimId& AnimId, bool IsAudioStarted, class UActorComponent* AudioComponentStartedOn);
		bool JumpToById(float Position, bool Pause, const class FName& Group, const class FName& AnimName, bool LoopAnimation, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
		bool JumpTo(float Position, bool Pause, class UFaceFXAnim* Animation, bool LoopAnimation, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
		bool IsPlayingAnimation(const struct FFaceFXAnimId& AnimId, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
		bool IsPlaying(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
		bool IsPaused(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXConfig
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UFaceFXConfig : public UObject
	{
	public:
		EFaceFXBlendMode                                           DefaultBlendMode;                                        // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YYNU[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
