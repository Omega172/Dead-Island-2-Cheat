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
	 * BlueprintGeneratedClass BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C
	 * Size -> 0x00D9 (FullSize[0x1251] - InheritedSize[0x1178])
	 */
	class ABP_Base_MeleeWeaponItem_C : public AMeleeWeaponItemActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1178(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_ScrappableComponent_C*                          BPC_ScrappableComponent;                                 // 0x1180(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x1188(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ABP_Base_Player_C*                                   Player;                                                  // 0x1190(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OverridenAttackPressed;                                  // 0x1198(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OverriddenAttackReleased;                                // 0x11A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        StartHeavyAttackTimerHandle;                             // 0x11B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       StandardAttackRequestHelper;                             // 0x11C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       WindupAttackRequestHelper;                               // 0x11C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       RecoveryAttackRequestHelper;                             // 0x11D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       HeavyAttackRequestHelper;                                // 0x11D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       ThrowActionHelper;                                       // 0x11E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WaitForNewPress;                                         // 0x11E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MKX1[0x7];                                   // 0x11E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterActionRequestHelper*                       ReboundRequestHelper;                                    // 0x11F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AnimSetToRetrieveRecoveryFrom;                           // 0x11F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasBeenThrown;                                           // 0x1200(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T8SN[0x7];                                   // 0x1201(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        ReboundMontageToUse;                                     // 0x1208(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        ReboundAnticipationMontage;                              // 0x1210(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CoolDownHeavyAttack;                                     // 0x1218(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UEN3[0x4];                                   // 0x121C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSet_Base*                                       ReboundAnimSet;                                          // 0x1220(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        AttackAnticipationMontage;                               // 0x1228(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAttackInputPressed;                                    // 0x1230(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1WIK[0x7];                                   // 0x1231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        HeavyAttackAnticipationMontage;                          // 0x1238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADICharacter*                                        Character;                                               // 0x1240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       CancelHeavyAttackAction;                                 // 0x1248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseAdditivePose;                                         // 0x1250(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

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
