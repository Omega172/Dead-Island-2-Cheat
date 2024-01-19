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
	 * BlueprintGeneratedClass BP_Base_Light.BP_Base_Light_C
	 * Size -> 0x0148 (FullSize[0x03F8] - InheritedSize[0x02B0])
	 */
	class ABP_Base_Light_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpatialTickComponent*                               SpatialTick;                                             // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      Flicker_Timeline_UpdateIntensityMultipier_90F1B7EA4B721F5636F39D9F5979DCD2; // 0x02C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Flicker_Timeline__Direction_90F1B7EA4B721F5636F39D9F5979DCD2; // 0x02CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X776[0x3];                                   // 0x02CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FlickerTimeline;                                         // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFixedLightSetting                                         ActivateTimeSetting;                                     // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WA8Q[0x3];                                   // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TemperatureAdjustment;                                   // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RandomTemperatureVariation;                              // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FilterColor;                                             // 0x02E4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IntensityAdjustment;                                     // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AttenuationRadiusAdjustment;                             // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightDrawDistance;                                       // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceFadeRange;                                       // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2UHS[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         IntensityAnimationCurve;                                 // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimationPlaybackRate;                                   // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimationDelayRange;                                     // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceStatic;                                             // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5A19[0x3];                                   // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              MeshTint;                                                // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableParticles;                                        // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AutoSetApproxEmissiveIntensity;                          // 0x0321(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GU6A[0x2];                                   // 0x0322(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EmissiveBulbIntensity;                                   // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SetSourceRadius;                                         // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NoOfLightSources;                                        // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EmissiveBulbConeAngle;                                   // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FinalTemperature;                                        // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxIntensity;                                            // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxFlickerMultiplier;                                    // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinFlickerMultiplier;                                    // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LH9P[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ULocalLightComponent*>                        LocalLightComponents;                                    // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<float>                                              LightDefaultIntensities;                                 // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UMaterialInstanceDynamic*>                    BulbDynamicMaterialInstance;                             // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UStaticMeshComponent*>                        StaticMeshComponents;                                    // 0x0378(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FTimerHandle                                        FlickerDelayTimer;                                       // 0x0388(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class ULocalLightComponent*>                        FlickeringLightComponents;                               // 0x0390(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UParticleSystemComponent*>                    ParticleSystemComponents;                                // 0x03A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                      Local_TemperatureToUse;                                  // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       KeepMeshShadowCastingValue;                              // 0x03B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DisableClippingAffectArea;                               // 0x03B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       SpatiallyActivated;                                      // 0x03B6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CR6H[0x1];                                   // 0x03B7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VolumetricScatteringIntensity;                           // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CastOnlyCacheableShadows;                                // 0x03BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SLCF[0x3];                                   // 0x03BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DynamicCastThresholdScale;                               // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BoostSmallObjectsShadowCasting;                          // 0x03C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q3KO[0x3];                                   // 0x03C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDSAkComponentBudgetConfig                          AudioBudgetConfig;                                       // 0x03C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UDSAkComponent*                                      DSAK_LightIdle;                                          // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       StartEvent;                                              // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       StopEvent;                                               // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AudioAttachComponent;                                    // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool GetCurrentScenarioState();
		void UpdateAudioAttachComponent();
		void UpdateRTPC(float NewValue);
		void StopAudio();
		void StartAudio();
		void SetAllStaticProperties();
		void DeactivateLight();
		void UpdateLightFlicker(float Intensity);
		void StartFlickerDelay();
		void UpdateMaterialState(class UMaterialInstanceDynamic* MaterialInstanceDynamic, bool State);
		void UpdateParticleState(class UParticleSystemComponent* Component, bool State);
		void UpdateMeshState(class UStaticMeshComponent* MeshComponent, bool State);
		void UpdateLightState(class ULocalLightComponent* Component, bool State);
		void UpdateStateForScenario();
		void SetMaterialConstants(class UMaterialInstanceDynamic* MaterialInstanceDynamic);
		void SetMeshConstants(class UStaticMeshComponent* Component);
		void SetLightConstants(class ULocalLightComponent* Component, float Intensity, int32_t Index);
		void CalculateEmissiveIntensity(float* EmissiveIntensity);
		void UserConstructionScript();
		void FlickerTimeline__FinishedFunc();
		void FlickerTimeline__UpdateFunc();
		void StartFlicker();
		void ReceiveBeginPlay();
		void StopFlicker();
		void UpdateFlickerTimelineTime();
		void BndEvt__SpatialTick_K2Node_ComponentBoundEvent_2_OnSpatialCellActivatedSignature__DelegateSignature(class USpatialTickComponent* Component);
		void BndEvt__SpatialTick_K2Node_ComponentBoundEvent_3_OnSpatialCellDeativatedSignature__DelegateSignature(class USpatialTickComponent* Component);
		void ExecuteUbergraph_BP_Base_Light(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
