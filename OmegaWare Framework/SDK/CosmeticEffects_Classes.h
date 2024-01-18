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
	 * Class CosmeticEffects.AnimNotify_CosmeticEffect
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UAnimNotify_CosmeticEffect : public UAnimNotify
	{
	public:
		class UCosmeticEffectsDefinition*                          Definition;                                              // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCosmeticEffectLocationParam                        Location;                                                // 0x0040(0x0024) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DC1F[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.AnimNotifyState_CosmeticEffect
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_CosmeticEffect : public UAnimNotifyState
	{
	public:
		class UCosmeticEffectsDefinition*                          Definition;                                              // 0x0030(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCosmeticEffectLocationParam                        Location;                                                // 0x0038(0x0024) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GFFH[0x54];                                  // 0x005C(0x0054) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectData
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UCosmeticEffectData : public UObject
	{
	public:
		unsigned char                                              UnknownData_5USA[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (PADDING)

	public:
		void OnComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.ForceCompleteCosmeticEffectEnforcementHandler
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UForceCompleteCosmeticEffectEnforcementHandler : public UMaxCountEnforcementHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffect
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCosmeticEffect : public UObject
	{
	public:
		TArray<class UCosmeticEffectParamRemap*>                   ParameterRemappings;                                     // 0x0028(0x0010) Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectData_PlayerController
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UCosmeticEffectData_PlayerController : public UCosmeticEffectData
	{
	public:
		unsigned char                                              UnknownData_0UXQ[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectData_Blendable
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UCosmeticEffectData_Blendable : public UCosmeticEffectData_PlayerController
	{
	public:
		unsigned char                                              UnknownData_N3KQ[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectPlayerController
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UCosmeticEffectPlayerController : public UCosmeticEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffect_Blendable
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UCosmeticEffect_Blendable : public UCosmeticEffectPlayerController
	{
	public:
		unsigned char                                              Blendable[0x10];                                         // 0x0038(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		float                                                      InitialWeight;                                           // 0x0048(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                Parameter;                                               // 0x004C(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A17K[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectPlayerControllerCamera
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UCosmeticEffectPlayerControllerCamera : public UCosmeticEffectPlayerController
	{
	public:
		bool                                                       bRotationPitch;                                          // 0x0038(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRotationYaw;                                            // 0x0039(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRotationRoll;                                           // 0x003A(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EQ3T[0x5];                                   // 0x003B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffect_CameraAnim
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UCosmeticEffect_CameraAnim : public UCosmeticEffectPlayerControllerCamera
	{
	public:
		class UCameraAnim*                                         AnimToPlay;                                              // 0x0040(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Scale;                                                   // 0x0048(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Rate;                                                    // 0x004C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BlendInTime;                                             // 0x0050(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BlendOutTime;                                            // 0x0054(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLoop;                                                   // 0x0058(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRandomStartTime;                                        // 0x0059(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SN3E[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffect_CameraShake
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UCosmeticEffect_CameraShake : public UCosmeticEffectPlayerControllerCamera
	{
	public:
		class UClass*                                              Shake;                                                   // 0x0040(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Scale;                                                   // 0x0048(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SAO6[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectData_Decal
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UCosmeticEffectData_Decal : public UCosmeticEffectData
	{
	public:
		unsigned char                                              UnknownData_IV8B[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnDecalComponentDestroyed(class UActorComponent* DestroyedComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffect_Decal
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UCosmeticEffect_Decal : public UCosmeticEffect
	{
	public:
		class UMaterialInterface*                                  DecalMaterial;                                           // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             DecalSize;                                               // 0x0040(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            DecalExtraRotation;                                      // 0x004C(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FRotator                                            DecalRandomRotation;                                     // 0x0058(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      DecalSizePercentageOffsetRange;                          // 0x0064(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    SortOrder;                                               // 0x0068(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bApplyCustomFadeInSettings;                              // 0x006C(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0HCM[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FadeInStartDelay;                                        // 0x0070(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FadeInDuration;                                          // 0x0074(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FadeStartDelay;                                          // 0x0078(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FadeDuration;                                            // 0x007C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FadeDistance;                                            // 0x0080(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DestroyFadeStartDelay;                                   // 0x0084(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DestroyFadeDuration;                                     // 0x0088(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YYO6[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectData_Duration
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UCosmeticEffectData_Duration : public UCosmeticEffectData
	{
	public:
		unsigned char                                              UnknownData_OUCI[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffect_Duration
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UCosmeticEffect_Duration : public UCosmeticEffect
	{
	public:
		float                                                      DurationSeconds;                                         // 0x0038(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YQXL[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectData_Emitter
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UCosmeticEffectData_Emitter : public UCosmeticEffectData
	{
	public:
		float                                                      Amount;                                                  // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NextEmitThreshold;                                       // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EmitThreshold;                                           // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60FZ[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACosmeticEffectsManager*                             Manager;                                                 // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectData_EmitterLocation
	 * Size -> 0x0020 (FullSize[0x0098] - InheritedSize[0x0078])
	 */
	class UCosmeticEffectData_EmitterLocation : public UCosmeticEffectData_Emitter
	{
	public:
		struct FCosmeticEffectLocation                             Location;                                                // 0x0078(0x0020) NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectData_EmitterAttached
	 * Size -> 0x0030 (FullSize[0x00A8] - InheritedSize[0x0078])
	 */
	class UCosmeticEffectData_EmitterAttached : public UCosmeticEffectData_Emitter
	{
	public:
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USceneComponent>                      SceneComponent;                                          // 0x0080(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0088(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0094(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                PointName;                                               // 0x00A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffect_Emitter
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UCosmeticEffect_Emitter : public UCosmeticEffect
	{
	public:
		class UCosmeticEffectsDefinition*                          Effect;                                                  // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EmitThreshold;                                           // 0x0040(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LifetimeAmount;                                          // 0x0044(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInitialEmit;                                            // 0x0048(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EL23[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                EmitThresholdParameter;                                  // 0x004C(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                AccumulateAmountParameter;                               // 0x0054(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                TotalAmountParameter;                                    // 0x005C(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_96FX[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectData_PostProcess
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UCosmeticEffectData_PostProcess : public UCosmeticEffectData
	{
	public:
		class UPostProcessComponent*                               PostProcessComponent;                                    // 0x0060(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffect_PostProcess
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UCosmeticEffect_PostProcess : public UCosmeticEffect
	{
	public:
		class UClass*                                              PostProcessClass;                                        // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                BlendWeightParam;                                        // 0x0040(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                BlendRadiusParam;                                        // 0x0048(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                EnabledParam;                                            // 0x0050(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectData_ScreenEffect
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UCosmeticEffectData_ScreenEffect : public UCosmeticEffectData_PlayerController
	{
	public:
		unsigned char                                              UnknownData_2P41[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffect_ScreenEffect
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UCosmeticEffect_ScreenEffect : public UCosmeticEffectPlayerController
	{
	public:
		class UClass*                                              ScreenEffect;                                            // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectPlaceableActor
	 * Size -> 0x00A0 (FullSize[0x0350] - InheritedSize[0x02B0])
	 */
	class ACosmeticEffectPlaceableActor : public AActor
	{
	public:
		class UCosmeticEffectsDefinition*                          CosmeticEffect;                                          // 0x02B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRepeatableCosmeticEffectData                       RepeatableData;                                          // 0x02B8(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4J5P[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScopedKnowledgeBaseExpressionListener              ActiveExpression;                                        // 0x02C8(0x0060) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4FN8[0x21];                                  // 0x0328(0x0021) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsPlaying;                                              // 0x0349(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AOS7[0x6];                                   // 0x034A(0x0006) MISSED OFFSET (PADDING)

	public:
		void RequestStopEffect();
		void RequestPlayEffect(bool bInterruptCurrentEffect);
		void NetMulticastUpdateCosmeticEffect(bool bShouldPlay, bool bInterruptCurrentEffectIn);
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectData_ParamThreshold
	 * Size -> 0x0078 (FullSize[0x00D8] - InheritedSize[0x0060])
	 */
	class UCosmeticEffectData_ParamThreshold : public UCosmeticEffectData
	{
	public:
		unsigned char                                              UnknownData_AZY9[0x78];                                  // 0x0060(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffect_ParamThreshold
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UCosmeticEffect_ParamThreshold : public UCosmeticEffect
	{
	public:
		class FName                                                Parameter;                                               // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FParamThresholdEffect>                       ThresholdEffects;                                        // 0x0040(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		bool                                                       bEnableAutoCompletion;                                   // 0x0050(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N357[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectsBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCosmeticEffectsBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FCosmeticEffectsID SpawnLocationID(class UObject* WorldContextObject, class UCosmeticEffectsDefinition* Definition, const struct FVector& InPosition, const struct FRotator& InRotation, const struct FCosmeticEffectParams& Params);
		void SpawnLocation(class UObject* WorldContextObject, class UCosmeticEffectsDefinition* Definition, const struct FVector& InPosition, const struct FRotator& InRotation, const struct FCosmeticEffectParams& Params);
		struct FCosmeticEffectsID SpawnAttachedID(class UObject* WorldContextObject, class UCosmeticEffectsDefinition* Definition, class AActor* InActor, class USceneComponent* InSceneComponent, const struct FVector& InPosition, const struct FRotator& InRotation, const class FName& InPointName, const struct FCosmeticEffectParams& Params);
		struct FCosmeticEffectsID SpawnAttachedActorID(class AActor* Actor, class UCosmeticEffectsDefinition* Definition);
		void SpawnAttachedActor(class AActor* Actor, class UCosmeticEffectsDefinition* Definition);
		void SpawnAttached(class UObject* WorldContextObject, class UCosmeticEffectsDefinition* Definition, class AActor* InActor, class USceneComponent* InSceneComponent, const struct FVector& InPosition, const struct FRotator& InRotation, const class FName& InPointName, const struct FCosmeticEffectParams& Params);
		bool SetVec3Parameter(class UObject* WorldContextObject, const struct FCosmeticEffectsID& CosmeticEffectsID, const class FName& Parameter, const struct FVector& Value);
		bool SetParameter(class UObject* WorldContextObject, const struct FCosmeticEffectsID& CosmeticEffectsID, const class FName& Parameter, float Value);
		void RelinquishID(class UObject* WorldContextObject, struct FCosmeticEffectsID* CosmeticEffectsID);
		bool LerpVec3Parameter(class UObject* WorldContextObject, const struct FCosmeticEffectsID& CosmeticEffectsID, const class FName& Parameter, const struct FVector& NewValue, float LerpTime, float Delay, ECosmeticEffectLerpType LerpType);
		bool LerpParameter(class UObject* WorldContextObject, const struct FCosmeticEffectsID& CosmeticEffectsID, const class FName& Parameter, float NewValue, float LerpTime, float Delay, ECosmeticEffectLerpType LerpType);
		void DestroyWithDelay(class UObject* WorldContextObject, struct FCosmeticEffectsID* CosmeticEffectsID, float Delay);
		void Destroy(class UObject* WorldContextObject, struct FCosmeticEffectsID* CosmeticEffectsID);
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectDataStore
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UCosmeticEffectDataStore : public UObject
	{
	public:
		TMap<class UCosmeticEffect*, class UCosmeticEffectData*>   DataMap;                                                 // 0x0028(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T0W4[0x20];                                  // 0x0078(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnEffectCompleted(class UCosmeticEffect* Effect, class UCosmeticEffectData* Data);
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectData_Definition
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UCosmeticEffectData_Definition : public UCosmeticEffectData
	{
	public:
		class UCosmeticEffectDataStore*                            Store;                                                   // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OU29[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectsDefinition
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UCosmeticEffectsDefinition : public UCosmeticEffect
	{
	public:
		TArray<class UCosmeticEffect*>                             Instanced;                                               // 0x0038(0x0010) Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<struct FCosmeticEffectConditionalInstancedEffects>  ConditionalInstanced;                                    // 0x0048(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UCosmeticEffect*>                             Files;                                                   // 0x0058(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bRequiresTimeParameter;                                  // 0x0068(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PLD9[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        TimeBasedParametersNames;                                // 0x0070(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FCosmeticEffectKnowledgeParam>               KnowledgeParameters;                                     // 0x0080(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FCosmeticEffectBudgetOverrideSettings               BudgetOverrideSettings;                                  // 0x0090(0x0008) Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectsManager
	 * Size -> 0x02C8 (FullSize[0x0578] - InheritedSize[0x02B0])
	 */
	class ACosmeticEffectsManager : public AInfo
	{
	public:
		unsigned char                                              UnknownData_UW4Y[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnforceMaxManagedActorCount;                            // 0x02B8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IVU[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, struct FCosmeticEffectBudgetSettings>  DefaultTypeBudgetSettings;                               // 0x02C0(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<uint32_t, class UCosmeticEffectsObject*>              ObjectMap;                                               // 0x0310(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              TickingObjectsWantingTickIDs[0x50];                      // 0x0360(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              TickingObjectsLerpingIDs[0x50];                          // 0x03B0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_TETG[0x78];                                  // 0x0400(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScalableCountLoadBalancedFeature*                   CurrentManagedSpawnLimitPerTick;                         // 0x0478(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UScalableCountLoadBalancedFeature*                   CurrentUnmanagedSpawnLimitPerTick;                       // 0x0480(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UScalableCountLoadBalancedFeature*                   PriorityPercentSpawnThreshold;                           // 0x0488(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KYQS[0xE8];                                  // 0x0490(0x00E8) MISSED OFFSET (PADDING)

	public:
		void DelayedDestroyCallback(const struct FCosmeticEffectsID& EffectID);
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectsObject
	 * Size -> 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
	 */
	class UCosmeticEffectsObject : public UPoolableObject
	{
	public:
		unsigned char                                              UnknownData_BP8N[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticEffect*                                     Effect;                                                  // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCosmeticEffectData*                                 Data;                                                    // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G45H[0xB8];                                  // 0x0048(0x00B8) MISSED OFFSET (PADDING)

	public:
		void OnEffectCompleted(class UCosmeticEffect* Effect, class UCosmeticEffectData* Data);
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectParamRemap
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCosmeticEffectParamRemap : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectParamRemap_Scale
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCosmeticEffectParamRemap_Scale : public UCosmeticEffectParamRemap
	{
	public:
		class FName                                                Parameter;                                               // 0x0028(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Scale;                                                   // 0x0030(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IB22[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectParamRemap_Rename
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCosmeticEffectParamRemap_Rename : public UCosmeticEffectParamRemap
	{
	public:
		class FName                                                From;                                                    // 0x0028(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                To;                                                      // 0x0030(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectParamRemap_NumericKBExpression
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UCosmeticEffectParamRemap_NumericKBExpression : public UCosmeticEffectParamRemap
	{
	public:
		class FName                                                Parameter;                                               // 0x0028(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FKnowledgeBaseExpression                            NumericExpression;                                       // 0x0030(0x0038) Edit, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectParamRemap_GraphScale
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UCosmeticEffectParamRemap_GraphScale : public UCosmeticEffectParamRemap
	{
	public:
		class FName                                                Parameter;                                               // 0x0028(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRuntimeFloatCurve                                  Scale;                                                   // 0x0030(0x0098) Edit, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectParamRemap_Clamp
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCosmeticEffectParamRemap_Clamp : public UCosmeticEffectParamRemap
	{
	public:
		class FName                                                Parameter;                                               // 0x0028(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Min;                                                     // 0x0030(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Max;                                                     // 0x0034(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CosmeticEffects.CosmeticEffectsTrigger
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UCosmeticEffectsTrigger : public UCosmeticEffect
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Radius;                                                  // 0x0040(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6J0C[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticEffectsDefinition*                          Effect;                                                  // 0x0048(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
