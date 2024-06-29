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
	 * BlueprintGeneratedClass BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C
	 * Size -> 0x0088 (FullSize[0x0158] - InheritedSize[0x00D0])
	 */
	class UBP_Action_StatusEffect_Stun_AI_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_ActionParams_StatusEffect_Stun_AI_C*             StunActionParams;                                        // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDIAnimInstance*                                     OwnersAnimInstance;                                      // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              OwnersMesh;                                              // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADICharacter*                                        OwningCharacter;                                         // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LoopAnims;                                               // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K17D[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterActionRequestHelper*                       StatusEffectBufferActionRequestHelper;                   // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlockHitReactPeriod;                                     // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8LOC[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBPC_ThresholdTracking_AI_C*                         ThresholdTrackingComponent;                              // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               HealthTrackingEntry;                                     // 0x0118(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimationLayerComponent*                            AnimLayer;                                               // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               LayeredHitReactsLayerGroupGUID;                          // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               LookAtLayerGroupGUID;                                    // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool OnBeginEarly();
		void OnInterruptionConditionsMet();
		void DoesImpactMeetInterruptionConditions(class UBaseImpactEventResultWrapper* Impact, bool* Result);
		void GetAttributeValueForDamageInterruption(class UAttributeType* AttributeType, float* OutputPin);
		void SetupDamageInterruption(class UAttributeType* AttributeType, bool* Success);
		void Resolve(const struct FCharacterActionResolveParams& Params, ECharacterActionResolution* OutResolution, float* OutQueuedTimeout);
		void OnFailedToPlay_64E0CC78418DB30CF33E12ABD3290705(const class FName& NotifyName);
		void OnSectionChanged_64E0CC78418DB30CF33E12ABD3290705(const class FName& SectionName);
		void OnNotifyEnd_64E0CC78418DB30CF33E12ABD3290705(const class FName& NotifyName);
		void OnNotifyBegin_64E0CC78418DB30CF33E12ABD3290705(const class FName& NotifyName);
		void OnInterrupted_64E0CC78418DB30CF33E12ABD3290705(const class FName& NotifyName);
		void OnBlendOut_64E0CC78418DB30CF33E12ABD3290705(const class FName& NotifyName);
		void OnCompleted_64E0CC78418DB30CF33E12ABD3290705(const class FName& NotifyName);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void StartAnimPlayback();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void StartDamageInterruptionSetup(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnImpactReceived(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent);
		void DamageInterruption(bool DamageRequirementMet, bool StabilityDamageMet);
		void ExecuteUbergraph_BP_Action_StatusEffect_Stun_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
