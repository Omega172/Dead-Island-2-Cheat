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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AIHeavyAttackConditions
	 */
	struct ABP_Base_MeleeWeaponItem_C_AIHeavyAttackConditions_Params
	{
	public:
		class AActor*                                              AITarget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CancelAttackActions
	 */
	struct ABP_Base_MeleeWeaponItem_C_CancelAttackActions_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.ShouldThrowWeapon
	 */
	struct ABP_Base_MeleeWeaponItem_C_ShouldThrowWeapon_Params
	{
	public:
		bool                                                       IsAimValid;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldAttemptThrow;                                      // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CancelAnyQueuedRecoveryActions
	 */
	struct ABP_Base_MeleeWeaponItem_C_CancelAnyQueuedRecoveryActions_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CancelWindups
	 */
	struct ABP_Base_MeleeWeaponItem_C_CancelWindups_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.RequestRecoveryaction
	 */
	struct ABP_Base_MeleeWeaponItem_C_RequestRecoveryaction_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.HitWorldStatic
	 */
	struct ABP_Base_MeleeWeaponItem_C_HitWorldStatic_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CheckThrowAllowed
	 */
	struct ABP_Base_MeleeWeaponItem_C_CheckThrowAllowed_Params
	{
	public:
		bool                                                       AllowThrow;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.SetupRequestHelpers
	 */
	struct ABP_Base_MeleeWeaponItem_C_SetupRequestHelpers_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CheckForQueuedAttackAction
	 */
	struct ABP_Base_MeleeWeaponItem_C_CheckForQueuedAttackAction_Params
	{
	public:
		bool                                                       AttackQueued;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.UnbindFromDecisionNotifier
	 */
	struct ABP_Base_MeleeWeaponItem_C_UnbindFromDecisionNotifier_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.BindToDecisionNotifier
	 */
	struct ABP_Base_MeleeWeaponItem_C_BindToDecisionNotifier_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.Attack
	 */
	struct ABP_Base_MeleeWeaponItem_C_Attack_Params
	{
	public:
		bool                                                       SkipTransition;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SkipAnticipation;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TEJ1[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AttackWindup
	 */
	struct ABP_Base_MeleeWeaponItem_C_AttackWindup_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CancelActions
	 */
	struct ABP_Base_MeleeWeaponItem_C_CancelActions_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.HeavyAttack
	 */
	struct ABP_Base_MeleeWeaponItem_C_HeavyAttack_Params
	{
	public:
		bool                                                       Intro;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YOQ6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.DoImpactPause
	 */
	struct ABP_Base_MeleeWeaponItem_C_DoImpactPause_Params
	{
	public:
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.OnMeleeHit
	 */
	struct ABP_Base_MeleeWeaponItem_C_OnMeleeHit_Params
	{
	public:
		TArray<struct FHitResult>                                  HitResults;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		struct FVector                                             SweepDirection;                                          // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AttackOrigin;                                            // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.InpMapActEvt_CancelAttackActions_InputMapperActionEventNode_1
	 */
	struct ABP_Base_MeleeWeaponItem_C_InpMapActEvt_CancelAttackActions_InputMapperActionEventNode_1_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K0H2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.RegisterInput
	 */
	struct ABP_Base_MeleeWeaponItem_C_RegisterInput_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_1_PaperDollEventMulticastDelegate__DelegateSignature
	 */
	struct ABP_Base_MeleeWeaponItem_C_BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_1_PaperDollEventMulticastDelegate__DelegateSignature_Params
	{
	public:
		class UPaperDollSlot*                                      PaperDollSlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_2_PaperDollEventMulticastDelegate__DelegateSignature
	 */
	struct ABP_Base_MeleeWeaponItem_C_BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_2_PaperDollEventMulticastDelegate__DelegateSignature_Params
	{
	public:
		class UPaperDollSlot*                                      PaperDollSlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AttackDecisionEntered
	 */
	struct ABP_Base_MeleeWeaponItem_C_AttackDecisionEntered_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.ReceiveBeginPlay
	 */
	struct ABP_Base_MeleeWeaponItem_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.RequestReboundAction
	 */
	struct ABP_Base_MeleeWeaponItem_C_RequestReboundAction_Params
	{
	public:
		struct FHitResult                                          ReboundingHit;                                           // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.RequestImpactPause
	 */
	struct ABP_Base_MeleeWeaponItem_C_RequestImpactPause_Params
	{
	public:
		class AActor*                                              ImpactedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AttackPressed
	 */
	struct ABP_Base_MeleeWeaponItem_C_AttackPressed_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AttackReleased
	 */
	struct ABP_Base_MeleeWeaponItem_C_AttackReleased_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AttackHold
	 */
	struct ABP_Base_MeleeWeaponItem_C_AttackHold_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.EventStandardAttackCancelled
	 */
	struct ABP_Base_MeleeWeaponItem_C_EventStandardAttackCancelled_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnCancelledParams                   Params;                                                  // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.OnDebugCurrentPerspectiveChanged
	 */
	struct ABP_Base_MeleeWeaponItem_C_OnDebugCurrentPerspectiveChanged_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.ExecuteUbergraph_BP_Base_MeleeWeaponItem
	 */
	struct ABP_Base_MeleeWeaponItem_C_ExecuteUbergraph_BP_Base_MeleeWeaponItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.OverriddenAttackReleased__DelegateSignature
	 */
	struct ABP_Base_MeleeWeaponItem_C_OverriddenAttackReleased__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.OverridenAttackPressed__DelegateSignature
	 */
	struct ABP_Base_MeleeWeaponItem_C_OverridenAttackPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
