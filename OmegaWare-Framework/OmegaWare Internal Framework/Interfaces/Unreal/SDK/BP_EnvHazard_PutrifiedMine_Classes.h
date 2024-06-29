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
	 * BlueprintGeneratedClass BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C
	 * Size -> 0x00A0 (FullSize[0x04C0] - InheritedSize[0x0420])
	 */
	class ABP_EnvHazard_PutrifiedMine_C : public AEnvironmentalHazard
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereComponent*                                    Sphere1;                                                 // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow;                                                   // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStaticMeshComponent*                                Stalk;                                                   // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStateTransmitterComponent*                          StateTransmitter;                                        // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImpactEventComponent*                               ImpactEvent;                                             // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UModularConditionsAndEffectsComponent*               ModularConditionsAndEffects;                             // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      Timeline_0_TerminalTL_5EB1CE6E42BB4F745916D9A945B3F696;  // 0x0468(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_5EB1CE6E42BB4F745916D9A945B3F696;  // 0x046C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P915[0x3];                                   // 0x046D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       ChargeEvent;                                             // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UABP_PutrefiedProjectile_C*                          ABP;                                                     // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UExplosionActionArchetype*                           Explosion;                                               // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TriggerAngle;                                            // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0N6M[0x4];                                   // 0x0494(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ADIPlayerCharacter*>                          PlayersInRange;                                          // 0x0498(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FTimerHandle                                        LocationCheckTimer;                                      // 0x04A8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       Detonated;                                               // 0x04B0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       Broken;                                                  // 0x04B1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_OUL9[0x6];                                   // 0x04B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_Broken();
		void OnRep_Detonated();
		void PlayerExitedRange(class ADIPlayerCharacter* Player);
		void CheckPawns();
		void PlayerEnteredRange(class ADIPlayerCharacter* Player);
		void VisibilityTest(const struct FVector& OtherLocation, bool* bSuccess);
		bool CheckVectorInConeWS(const struct FVector& ConeOrigin, const struct FVector& ConeDirection, float ConeRadius, const struct FVector& OtherLocation);
		void CheckAngle(class AActor* Actor, bool* bSuccess);
		void ShowTriggerCone();
		void HideRadii();
		void ShowBlastRadius();
		void ShowDetectionRadius();
		void CacheABP();
		void PlayChargeSound();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void BlueprintOnBeginAction(const struct FGuid& RequestId, const class FName& ActionType);
		void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void TriggerBrokenAction();
		void BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_3_OnAnyImpactEventReceivedDelegate__DelegateSignature(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent);
		void BndEvt__StateTransmitter_K2Node_ComponentBoundEvent_4_OnStatusTypeActivated__DelegateSignature(class UStateTransmitterComponent* Component, ETransmittableStatus StatusType, float Strength);
		void OnTerminal();
		void ReceiveBeginPlay();
		void OnBroken();
		void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void Detonate();
		void HideMesh();
		void ExecuteUbergraph_BP_EnvHazard_PutrifiedMine(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
