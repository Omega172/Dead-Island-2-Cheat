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
	 * BlueprintGeneratedClass BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C
	 * Size -> 0x00A5 (FullSize[0x0175] - InheritedSize[0x00D0])
	 */
	class UBP_Action_Player_StandardAttack_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_Player_C*                                   Player;                                                  // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_MeleeWeaponItem_C*                          MeleeWeaponRef;                                          // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SkipAnticipation;                                        // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RJAI[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              CharacterMesh;                                           // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             PlayerKnoweldgeBase;                                     // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SkipTransition;                                          // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SRD7[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MontagePlayRate;                                         // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDIAnimInstance*                                     AnimInstance;                                            // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSet_Base*                                       RepeatAttackAnimSetRef;                                  // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        RepeatMontage;                                           // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_ActionParams_Player_StandardAttack_C*            ActionParams;                                            // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSet_Base*                                       StandardAttackAnimSet;                                   // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                StandardAttackAnimSetName;                               // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                StandardAttackMontageAssetName;                          // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                StandardAttackAnticMontageAssetName;                     // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                HeavyAttackAnticMontageAssetName;                        // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              HandPositionOnStart;                                     // 0x0158(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               ChainStartingHandKey;                                    // 0x0168(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bDecisionLoopSectionHit;                                 // 0x0174(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnSectionChanged(const class FName& SectionName);
		void CacheSharedVariables();
		void CleanRepeatRelatedFacts(class UKnowledgeBaseComponent* PlayerKBComponent);
		void ToggleStartingHand();
		void GetChainStartingHand(class FString* ChainStartingHand);
		void IncreaseRepeatCounter();
		void ResolveRepeatMontage(bool* MontageFound, class UAnimMontage** RepeatMontage);
		void SkipRepeat(bool* Skip);
		void CallReticlePulse();
		void FindMontageInAnimSet(const class FName& AssetName, class UAnimMontage** ResolvedMontage);
		void GetActionRelevantMontages(class UDIAnimInstance* PlayerAnimInstance, const class FName& StandardAttackAnimSetName, const class FName& StandardAttackMontageAsset, const class FName& StandardAttackAnticMontageAsset, const class FName& HeavyAttackAnticMontageAsset, bool* Success, class UAnimMontage** StandardAttackMontage, class UAnimMontage** StandardAttackAnticMontage, class UAnimMontage** HeavyAttackAnticMontage);
		void IsInChain(bool* InChain);
		bool OnBeginEarly();
		void CacheVariables(bool* CanContinue);
		void Resolve(const struct FCharacterActionResolveParams& Params, ECharacterActionResolution* OutResolution, float* OutQueuedTimeout);
		void OnFailedToPlay_139D106441E71098568BCF853FD3020C(const class FName& NotifyName);
		void OnSectionChanged_139D106441E71098568BCF853FD3020C(const class FName& SectionName);
		void OnNotifyEnd_139D106441E71098568BCF853FD3020C(const class FName& NotifyName);
		void OnNotifyBegin_139D106441E71098568BCF853FD3020C(const class FName& NotifyName);
		void OnInterrupted_139D106441E71098568BCF853FD3020C(const class FName& NotifyName);
		void OnBlendOut_139D106441E71098568BCF853FD3020C(const class FName& NotifyName);
		void OnCompleted_139D106441E71098568BCF853FD3020C(const class FName& NotifyName);
		void OnFailedToPlay_F233E8AD47904CC1F37A9692233AD991(const class FName& NotifyName);
		void OnSectionChanged_F233E8AD47904CC1F37A9692233AD991(const class FName& SectionName);
		void OnNotifyEnd_F233E8AD47904CC1F37A9692233AD991(const class FName& NotifyName);
		void OnNotifyBegin_F233E8AD47904CC1F37A9692233AD991(const class FName& NotifyName);
		void OnInterrupted_F233E8AD47904CC1F37A9692233AD991(const class FName& NotifyName);
		void OnBlendOut_F233E8AD47904CC1F37A9692233AD991(const class FName& NotifyName);
		void OnCompleted_F233E8AD47904CC1F37A9692233AD991(const class FName& NotifyName);
		void OnFailedToPlay_E1A1DDFE4DCCE2EF357289BF63770AFE(const class FName& NotifyName);
		void OnSectionChanged_E1A1DDFE4DCCE2EF357289BF63770AFE(const class FName& SectionName);
		void OnNotifyEnd_E1A1DDFE4DCCE2EF357289BF63770AFE(const class FName& NotifyName);
		void OnNotifyBegin_E1A1DDFE4DCCE2EF357289BF63770AFE(const class FName& NotifyName);
		void OnInterrupted_E1A1DDFE4DCCE2EF357289BF63770AFE(const class FName& NotifyName);
		void OnBlendOut_E1A1DDFE4DCCE2EF357289BF63770AFE(const class FName& NotifyName);
		void OnCompleted_E1A1DDFE4DCCE2EF357289BF63770AFE(const class FName& NotifyName);
		void OnFailedToPlay_2C92C94A4CEE5F8D0F1A8CACB22A346A(const class FName& NotifyName);
		void OnSectionChanged_2C92C94A4CEE5F8D0F1A8CACB22A346A(const class FName& SectionName);
		void OnNotifyEnd_2C92C94A4CEE5F8D0F1A8CACB22A346A(const class FName& NotifyName);
		void OnNotifyBegin_2C92C94A4CEE5F8D0F1A8CACB22A346A(const class FName& NotifyName);
		void OnInterrupted_2C92C94A4CEE5F8D0F1A8CACB22A346A(const class FName& NotifyName);
		void OnBlendOut_2C92C94A4CEE5F8D0F1A8CACB22A346A(const class FName& NotifyName);
		void OnCompleted_2C92C94A4CEE5F8D0F1A8CACB22A346A(const class FName& NotifyName);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void ExecuteUbergraph_BP_Action_Player_StandardAttack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
