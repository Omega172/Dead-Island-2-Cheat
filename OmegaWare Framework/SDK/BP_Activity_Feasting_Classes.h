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
	 * BlueprintGeneratedClass BP_Activity_Feasting.BP_Activity_Feasting_C
	 * Size -> 0x0061 (FullSize[0x0891] - InheritedSize[0x0830])
	 */
	class ABP_Activity_Feasting_C : public ABP_Base_FocusedActivity_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0830(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      FeastingRadius;                                          // 0x0838(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FeastingMaxFacingAngle;                                  // 0x083C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            FeastingExpression;                                      // 0x0840(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class ABP_Feasting_Meatpile_C*                             Meatpile;                                                // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeatpileSpawnDelay;                                      // 0x0880(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H2NB[0x4];                                   // 0x0884(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        MeatpileSpawnDelayTimer;                                 // 0x0888(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowFeastingMeatpileBackup;                             // 0x0890(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void TrySpawnMeatpileIfNoCorpseToFeastOn();
		void DoesPlayDeadActivityMetFeastingRequirements(class ABP_Base_SpawnActivity_C* FeastingTarget, bool* Success);
		TArray<class AActor*> GetFeastingTargetsWithinRadius();
		void OnActivityStarted(class AActivityActor* Activity);
		void OnActivityEnded(class AActivityActor* Activity, EActivityEndedReason EndReason);
		void ExecuteUbergraph_BP_Activity_Feasting(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
