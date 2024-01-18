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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPC_Base_CombatAggro.BPC_Base_CombatAggro_C
	 * Size -> 0x0054 (FullSize[0x03E4] - InheritedSize[0x0390])
	 */
	class UBPC_Base_CombatAggro_C : public UCombatAggroComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0390(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ADICharacter*                                        DICombatTarget;                                          // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               CombatTargetDiedFact;                                    // 0x03A0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                CombatTargetDiedFactInvokerName;                         // 0x03AC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VPMH[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        CombatTargetDiedFactTimer;                               // 0x03B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      CombatTargetDiedFactDuration;                            // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I0BV[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKnowledgeBaseComponent*                             OwnersKnowledgeBaseComponent;                            // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStimTemplate*                                       CombatTargetDiedStimTemplate;                            // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStimReceiverComponent*                              StimRecieverComponent;                                   // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStimID                                             CombatTargetDiedStimID;                                  // 0x03E0(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void SetOwnersKnowledgeBaseComponent();
		void CombatTargetDiedFactDurationFinished();
		void EndCombatTargetDiedStim();
		void BeginCombatTargetDiedStim();
		void GetDICharacterFromComponent(class UActorComponent* Component, class ADICharacter** AsDICharacter);
		void OnOwnersCombatTargetChanged(class UCombatTargetComponent* NewTarget);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPC_Base_CombatAggro(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
