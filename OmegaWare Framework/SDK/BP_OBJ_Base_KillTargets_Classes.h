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
	 * BlueprintGeneratedClass BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C
	 * Size -> 0x00D0 (FullSize[0x0440] - InheritedSize[0x0370])
	 */
	class ABP_OBJ_Base_KillTargets_C : public ABP_OBJ_ScriptedSequence_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UObjectiveIconComponent*                             ObjectiveIcon;                                           // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Goal_C*                                         Goal;                                                    // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class AActor*, bool>                                  TargetAgentsKilled;                                      // 0x0388(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class UDIObjectiveData*                                    DIObjectiveData;                                         // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<ELootDropBehaviour, struct FLootDropUpdatingConfig>   LastTargetDropsOnDeath;                                  // 0x03E0(0x0050) Edit, BlueprintVisible, ContainsInstancedReference
		bool                                                       UseGoal;                                                 // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AllowTargetIndicators;                                   // 0x0431(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AutomaticallySetProgressData;                            // 0x0432(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BQAF[0x1];                                   // 0x0433(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ProgressUIKillsRequired;                                 // 0x0434(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ObjectiveIsLive;                                         // 0x0438(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StartWithVisibleUI;                                      // 0x0439(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZNVG[0x2];                                   // 0x043A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              QuestColour;                                             // 0x043C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HideTargetUI(class AActor* Actor);
		void GetIconActorFromTarget(class AActor* Target, class UUIIconComponent** UIIconComponent, bool* IsValid);
		void AddIconActorToParticipant(class AActor* Actor);
		void UnregisterTargetIcons();
		void SetInitialIconVisibility(class UUIIconComponent* IconComponent);
		void ChooseObjectiveProgressUIDataAsset();
		void GetCurrentKillCount(int32_t* Killcount);
		bool WillModifyLootTables();
		void ModifyLootTables(class ADIAICharacter* AITarget);
		int32_t GetTargetKillCount();
		bool HasKillCountBeenMet(int32_t RequiredKillOffset);
		void UpdateObjectiveProgressUI();
		void SetObjectiveProgressUI();
		void HaveObjectiveRequirementsBeenMet(bool* ObjectiveComplete);
		void UserConstructionScript();
		void AddAgentToTargetList(class AActor* Actor);
		void TargetEliminated(class AActor* Target);
		void SequenceEnded(class UScriptedSequenceComponent* EndedSequence);
		void TargetDespawned(class AActor* DestroyedActor);
		void OnObjectiveStarted();
		void AgentReceived(class AActor* Agent);
		void OnObjectiveEnded();
		void OnTargetWillBeKilled(class AActor* Target, class AActor* Killer, const struct FEventInstigator& Instigator);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_OBJ_Base_KillTargets(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
