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
	 * BlueprintGeneratedClass BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C
	 * Size -> 0x009D (FullSize[0x02B0] - InheritedSize[0x0213])
	 */
	class UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C : public UBPC_Base_ConditionalActivityGeneratorComponent_C
	{
	public:
		unsigned char                                              UnknownData_HHWR[0x5];                                   // 0x0213(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0218(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              OwnerMeshComponent[0x28];                                // 0x0220(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_GPTH[0x8];                                   // 0x0248(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          PreviousTransform;                                       // 0x0250(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LocationTolerance;                                       // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationTolerance;                                       // 0x0284(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OnlyActiveWhenStationary;                                // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QMY5[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        StationaryTimer;                                         // 0x0290(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      StationaryCheckFrequency;                                // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T2A4[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Activity_Feasting_C*                             FeastingActivityRef;                                     // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LingerReason;                                            // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DestroyOrOrphanActivity();
		void PlayDeadPosingDebug();
		void BindKnowledgeBaseListeners();
		void SetupActivity();
		void SetActivityTransform(class USceneComponent* Target, const struct FVector& LocationOffset, const struct FRotator& RotationOffset, float MaxFloorDistance, bool* FoundSpawnLocation, struct FTransform* ReturnTransform);
		void RemoveFeastingCorpseLingerReason();
		void AddFeastingCorpseLingerReason();
		void OnParticipantWillBeReleased(class UParticipantSlotComponent* Participant);
		void OnParticipantWillArrive(class UParticipantSlotComponent* Participant);
		void UpdateTargetTransform();
		void IsStationary(bool* IsStationary);
		void IsActivityActive(bool* ActivityActive);
		void DisableActivity();
		void SpawnActivity();
		void UpdateActivityPositionAndEnable();
		void SetActivityActive(bool Active);
		void SetupExpressionListenerForActor(class AActor* Actor);
		void CleanUpAndDestroyActivity();
		void OnEvaluateExpression(bool bResult);
		void UpdateActivityState();
		void ExecuteUbergraph_BPC_ConditionalActivity_SpawnFeastingOnCorpse(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
