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
	 * BlueprintGeneratedClass BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C
	 * Size -> 0x012B (FullSize[0x0213] - InheritedSize[0x00E8])
	 */
	class UBPC_Base_ConditionalActivityGeneratorComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FKnowledgeBaseExpression                            ActivityActivationExpression;                            // 0x00F0(0x0038) Edit, BlueprintVisible, ExportObject, InstancedReference, ContainsInstancedReference, PersistentInstance, HasGetValueTypeHash
		unsigned char                                              OwnerKBComponent[0x28];                                  // 0x0128(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Owner[0x28];                                             // 0x0150(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ActivityActorRef[0x28];                                  // 0x0178(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UClass*                                              ActivityClass;                                           // 0x01A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0OSO[0x8];                                   // 0x01A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          ActivityTargetTransform;                                 // 0x01B0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             ActivityWillBeDisabled;                                  // 0x01E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ActivityWillBeEnabled;                                   // 0x01F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ActivateWhenOwnerBeginsPlay;                             // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y3BD[0x7];                                   // 0x0201(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x0208(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ConditionsToSpawnActivityMet;                            // 0x0210(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ActivityPendingDestruction;                              // 0x0211(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasPerformedCleanUp;                                     // 0x0212(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void DestroyOrOrphanActivity();
		void UnbindKnowledgeBaseListeners();
		void BindKnowledgeBaseListeners();
		void DestroyActivityOnActivityEnded(class AActivityActor* Activity, EActivityEndedReason EndReason);
		void DespawnActivity();
		void DeactivateActivity();
		void SpawnOrActivateActivity();
		void SetActivityActive(bool Active);
		void CleanUpAndDestroyActivity();
		void IsActivityActive(bool* ActivityActive);
		void DisableActivity();
		void SpawnActivity();
		void UpdateActivityPositionAndEnable();
		void OnEvaluateExpression(bool bResult);
		void SetupExpressionListenerForActor(class AActor* Actor);
		void OnOwnerDestruction(class AActor* Actor);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BPC_Base_ConditionalActivityGeneratorComponent(int32_t EntryPoint);
		void ActivityWillBeEnabled__DelegateSignature();
		void ActivityWillBeDisabled__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
