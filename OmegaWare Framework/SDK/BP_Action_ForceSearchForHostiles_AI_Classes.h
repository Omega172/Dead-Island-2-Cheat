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
	 * BlueprintGeneratedClass BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C
	 * Size -> 0x0072 (FullSize[0x0142] - InheritedSize[0x00D0])
	 */
	class UBP_Action_ForceSearchForHostiles_AI_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ADIAICharacter*                                      Character;                                               // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIAIController*                                     Controller;                                              // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStimReceiverComponent*                              StimReceiverComponent;                                   // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_ActionParams_ForceSearchForHostiles_AI_C*        Params;                                                  // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ADICharacter*>                                Hostiles;                                                // 0x00F8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FVector                                             TargetSearchLocation;                                    // 0x0108(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceUpdateTolerence;                                 // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStimID                                             SearchStimID;                                            // 0x0118(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8ZPS[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        PendingAddTimer;                                         // 0x0120(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        ForceSearchBehaviourUpdateTimer;                         // 0x0128(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      SearchUpdateInterval;                                    // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_28GP[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PossessedBound;                                          // 0x0140(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UnpossessedBound;                                        // 0x0141(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnUnpossessed();
		void ClearTimers();
		bool RemoveToHostilesList(class UObject* Object);
		void RemoveForceSearchBehaviourStim();
		void ForceMovementToUpdate();
		void UnbindListeners();
		void StartSearchBehaviourUpdate();
		void StartPendingStimReceiverRegistrationCheck();
		void CheckIfStimReceiverRegistered();
		void GlobalUpdateForceSearchBehaviour();
		bool AddForceSearchBehaviourStim();
		bool IsStimUpdateRequired();
		bool CanUseSearchBehaviour();
		class ADICharacter* GetClosestHostile();
		void AddToHostilesList(class UObject* Object);
		void GetAllHostilesWithAreaShape();
		void OnInteractorOverlapEnd(class UTriggerInteractorComponent* Interactor);
		void OnInteractorOverlapBegin(class UTriggerInteractorComponent* Interactor);
		void BindListeners();
		bool OnBeginEarly();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_ForceSearchForHostiles_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
