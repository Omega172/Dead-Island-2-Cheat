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
	 * BlueprintGeneratedClass BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C
	 * Size -> 0x00D9 (FullSize[0x1359] - InheritedSize[0x1280])
	 */
	class ABP_Base_MeleeWeaponItem_C : public AMeleeWeaponItemActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_ScrappableComponent_C*                          BPC_ScrappableComponent;                                 // 0x1288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x1290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ABP_Base_Player_C*                                   Player;                                                  // 0x1298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OverridenAttackPressed;                                  // 0x12A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OverriddenAttackReleased;                                // 0x12B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        StartHeavyAttackTimerHandle;                             // 0x12C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       StandardAttackRequestHelper;                             // 0x12C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       WindupAttackRequestHelper;                               // 0x12D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       RecoveryAttackRequestHelper;                             // 0x12D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       HeavyAttackRequestHelper;                                // 0x12E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       ThrowActionHelper;                                       // 0x12E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WaitForNewPress;                                         // 0x12F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4FHJ[0x7];                                   // 0x12F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterActionRequestHelper*                       ReboundRequestHelper;                                    // 0x12F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AnimSetToRetrieveRecoveryFrom;                           // 0x1300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasBeenThrown;                                           // 0x1308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IKIC[0x7];                                   // 0x1309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        ReboundMontageToUse;                                     // 0x1310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        ReboundAnticipationMontage;                              // 0x1318(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CoolDownHeavyAttack;                                     // 0x1320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0FWZ[0x4];                                   // 0x1324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSet_Base*                                       ReboundAnimSet;                                          // 0x1328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        AttackAnticipationMontage;                               // 0x1330(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAttackInputPressed;                                    // 0x1338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8A48[0x7];                                   // 0x1339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        HeavyAttackAnticipationMontage;                          // 0x1340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADICharacter*                                        Character;                                               // 0x1348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       CancelHeavyAttackAction;                                 // 0x1350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseAdditivePose;                                         // 0x1358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AIHeavyAttackConditions(class AActor* AITarget);
		void CancelAttackActions();
		void ShouldThrowWeapon(bool IsAimValid, bool* ShouldAttemptThrow);
		void CancelAnyQueuedRecoveryActions();
		void CancelWindups();
		void RequestRecoveryaction();
		void HitWorldStatic();
		void CheckThrowAllowed(bool* AllowThrow);
		void SetupRequestHelpers();
		void CheckForQueuedAttackAction(bool* AttackQueued);
		void UnbindFromDecisionNotifier();
		void BindToDecisionNotifier();
		void Attack(bool SkipTransition, bool SkipAnticipation);
		void AttackWindup();
		void CancelActions();
		void HeavyAttack(bool Intro);
		void DoImpactPause(class AActor* HitActor);
		void OnMeleeHit(TArray<struct FHitResult>* HitResults, const struct FVector& SweepDirection, const struct FVector& AttackOrigin);
		void InpMapActEvt_CancelAttackActions_InputMapperActionEventNode_1(EInputActionEventType Type, float Value);
		void RegisterInput();
		void BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_1_PaperDollEventMulticastDelegate__DelegateSignature(class UPaperDollSlot* PaperDollSlot);
		void BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_2_PaperDollEventMulticastDelegate__DelegateSignature(class UPaperDollSlot* PaperDollSlot);
		void AttackDecisionEntered();
		void ReceiveBeginPlay();
		void RequestReboundAction(const struct FHitResult& ReboundingHit);
		void RequestImpactPause(class AActor* ImpactedActor);
		void AttackPressed();
		void AttackReleased();
		void AttackHold();
		void EventStandardAttackCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params);
		void OnDebugCurrentPerspectiveChanged();
		void ExecuteUbergraph_BP_Base_MeleeWeaponItem(int32_t EntryPoint);
		void OverriddenAttackReleased__DelegateSignature();
		void OverridenAttackPressed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
