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
	 * BlueprintGeneratedClass BP_Action_AnimSet_AI.BP_Action_AnimSet_AI_C
	 * Size -> 0x0070 (FullSize[0x01F0] - InheritedSize[0x0180])
	 */
	class UBP_Action_AnimSet_AI_C : public UNavSafeAnimSetAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0180(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_ActionParams_AnimSet_AI_C*                       Params;                                                  // 0x0188(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             KB;                                                      // 0x0190(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADICharacter*                                        OwnerCharacter;                                          // 0x0198(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDINPCAnimInstance*                                  AnimInstance;                                            // 0x01A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPC_ThresholdTracking_AI_C*                         ThresholdTrackingComponent;                              // 0x01A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              PersonalityDisableReason;                                // 0x01B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FGuid>                                       ThresholdTrackingIDs;                                    // 0x01C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FGuid>                                       ModifiersAddedDuringAction;                              // 0x01D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UModifiableValuesComponent*                          ModifiableValues;                                        // 0x01E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FactInvokerName;                                         // 0x01E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnInterruptionConditionsMet(bool DamageRequirementMet, bool StabilityDamageMet);
		void AddModifiers(TArray<struct FModifierAndValue> Modifiers);
		void RequestMontageToStop(EMontageEndEvent MontageEndEvent);
		void InitialiseVariables();
		void PostResolve();
		void PreResolve();
		bool OnBeginEarly();
		void GetBlendOutTime(bool* Success, float* BlendOutTime);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void ExecuteUbergraph_BP_Action_AnimSet_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
