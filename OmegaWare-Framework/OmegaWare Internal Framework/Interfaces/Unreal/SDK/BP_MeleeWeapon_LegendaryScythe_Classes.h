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
	 * BlueprintGeneratedClass BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C
	 * Size -> 0x0060 (FullSize[0x0688] - InheritedSize[0x0628])
	 */
	class ABP_MeleeWeapon_LegendaryScythe_C : public ABP_Base_MeleeWeapon_WithImpactResponse_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0628(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    MaxImpacts;                                              // 0x0630(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentImpacts;                                          // 0x0634(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FirstStageThreshold;                                     // 0x0638(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SecondStageThreshold;                                    // 0x063C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ThirdStageThreshold;                                     // 0x0640(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               ImpactNumberExpression;                                  // 0x0644(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FCosmeticEffectsID                                  HeavyAttackSweepCEID;                                    // 0x0650(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FCosmeticEffectsID                                  StagesCEID;                                              // 0x0654(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UCosmeticEffectsDefinition*                          FirstStageCE;                                            // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ELegendaryScytheStages                                     Stages;                                                  // 0x0660(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G9FG[0x7];                                   // 0x0661(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticEffectsDefinition*                          SecondStageCE;                                           // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCosmeticEffectsDefinition*                          ThirdStageCE;                                            // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCosmeticEffectsDefinition*                          HeavyAttackSweepCE;                                      // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SocketToSpawnCE;                                         // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetInstigatedImpactsFactInWeaponKB();
		void CheckCurrentStateInKB(int32_t* CurrentImpacts);
		void EvaluateStage();
		void ActionStarts(const struct FGuid& RequestId, const class FName& ActionType);
		void ActionEnd(const struct FGuid& RequestId, const class FName& ActionType, ECharacterActionEndedReason Reason);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void DeferredBeginPlay();
		void ImpactInstigated(const struct FPointImpactEventResult& RecordedImpact);
		void ExecuteUbergraph_BP_MeleeWeapon_LegendaryScythe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
