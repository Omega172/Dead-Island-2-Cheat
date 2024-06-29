/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AIHeavyAttackConditions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AITarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_MeleeWeaponItem_C::AIHeavyAttackConditions(class AActor* AITarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AIHeavyAttackConditions");
		
		ABP_Base_MeleeWeaponItem_C_AIHeavyAttackConditions_Params params {};
		params.AITarget = AITarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CancelAttackActions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::CancelAttackActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CancelAttackActions");
		
		ABP_Base_MeleeWeaponItem_C_CancelAttackActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.ShouldThrowWeapon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsAimValid                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldAttemptThrow                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_MeleeWeaponItem_C::ShouldThrowWeapon(bool IsAimValid, bool* ShouldAttemptThrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.ShouldThrowWeapon");
		
		ABP_Base_MeleeWeaponItem_C_ShouldThrowWeapon_Params params {};
		params.IsAimValid = IsAimValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldAttemptThrow != nullptr)
			*ShouldAttemptThrow = params.ShouldAttemptThrow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CancelAnyQueuedRecoveryActions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::CancelAnyQueuedRecoveryActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CancelAnyQueuedRecoveryActions");
		
		ABP_Base_MeleeWeaponItem_C_CancelAnyQueuedRecoveryActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CancelWindups
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::CancelWindups()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CancelWindups");
		
		ABP_Base_MeleeWeaponItem_C_CancelWindups_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.RequestRecoveryaction
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::RequestRecoveryaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.RequestRecoveryaction");
		
		ABP_Base_MeleeWeaponItem_C_RequestRecoveryaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.HitWorldStatic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::HitWorldStatic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.HitWorldStatic");
		
		ABP_Base_MeleeWeaponItem_C_HitWorldStatic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CheckThrowAllowed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AllowThrow                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_MeleeWeaponItem_C::CheckThrowAllowed(bool* AllowThrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CheckThrowAllowed");
		
		ABP_Base_MeleeWeaponItem_C_CheckThrowAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowThrow != nullptr)
			*AllowThrow = params.AllowThrow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.SetupRequestHelpers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::SetupRequestHelpers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.SetupRequestHelpers");
		
		ABP_Base_MeleeWeaponItem_C_SetupRequestHelpers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CheckForQueuedAttackAction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AttackQueued                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_MeleeWeaponItem_C::CheckForQueuedAttackAction(bool* AttackQueued)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CheckForQueuedAttackAction");
		
		ABP_Base_MeleeWeaponItem_C_CheckForQueuedAttackAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttackQueued != nullptr)
			*AttackQueued = params.AttackQueued;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.UnbindFromDecisionNotifier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::UnbindFromDecisionNotifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.UnbindFromDecisionNotifier");
		
		ABP_Base_MeleeWeaponItem_C_UnbindFromDecisionNotifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.BindToDecisionNotifier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::BindToDecisionNotifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.BindToDecisionNotifier");
		
		ABP_Base_MeleeWeaponItem_C_BindToDecisionNotifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.Attack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SkipTransition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SkipAnticipation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_MeleeWeaponItem_C::Attack(bool SkipTransition, bool SkipAnticipation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.Attack");
		
		ABP_Base_MeleeWeaponItem_C_Attack_Params params {};
		params.SkipTransition = SkipTransition;
		params.SkipAnticipation = SkipAnticipation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AttackWindup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::AttackWindup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AttackWindup");
		
		ABP_Base_MeleeWeaponItem_C_AttackWindup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CancelActions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::CancelActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.CancelActions");
		
		ABP_Base_MeleeWeaponItem_C_CancelActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.HeavyAttack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Intro                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_MeleeWeaponItem_C::HeavyAttack(bool Intro)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.HeavyAttack");
		
		ABP_Base_MeleeWeaponItem_C_HeavyAttack_Params params {};
		params.Intro = Intro;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.DoImpactPause
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_MeleeWeaponItem_C::DoImpactPause(class AActor* HitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.DoImpactPause");
		
		ABP_Base_MeleeWeaponItem_C_DoImpactPause_Params params {};
		params.HitActor = HitActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.OnMeleeHit
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FHitResult>                          HitResults                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		struct FVector                                     SweepDirection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AttackOrigin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_MeleeWeaponItem_C::OnMeleeHit(TArray<struct FHitResult>* HitResults, const struct FVector& SweepDirection, const struct FVector& AttackOrigin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.OnMeleeHit");
		
		ABP_Base_MeleeWeaponItem_C_OnMeleeHit_Params params {};
		params.SweepDirection = SweepDirection;
		params.AttackOrigin = AttackOrigin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitResults != nullptr)
			*HitResults = params.HitResults;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.InpMapActEvt_CancelAttackActions_InputMapperActionEventNode_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_MeleeWeaponItem_C::InpMapActEvt_CancelAttackActions_InputMapperActionEventNode_1(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.InpMapActEvt_CancelAttackActions_InputMapperActionEventNode_1");
		
		ABP_Base_MeleeWeaponItem_C_InpMapActEvt_CancelAttackActions_InputMapperActionEventNode_1_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.RegisterInput
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::RegisterInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.RegisterInput");
		
		ABP_Base_MeleeWeaponItem_C_RegisterInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_1_PaperDollEventMulticastDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPaperDollSlot*                              PaperDollSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_MeleeWeaponItem_C::BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_1_PaperDollEventMulticastDelegate__DelegateSignature(class UPaperDollSlot* PaperDollSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_1_PaperDollEventMulticastDelegate__DelegateSignature");
		
		ABP_Base_MeleeWeaponItem_C_BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_1_PaperDollEventMulticastDelegate__DelegateSignature_Params params {};
		params.PaperDollSlot = PaperDollSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_2_PaperDollEventMulticastDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPaperDollSlot*                              PaperDollSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_MeleeWeaponItem_C::BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_2_PaperDollEventMulticastDelegate__DelegateSignature(class UPaperDollSlot* PaperDollSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_2_PaperDollEventMulticastDelegate__DelegateSignature");
		
		ABP_Base_MeleeWeaponItem_C_BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_2_PaperDollEventMulticastDelegate__DelegateSignature_Params params {};
		params.PaperDollSlot = PaperDollSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AttackDecisionEntered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::AttackDecisionEntered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AttackDecisionEntered");
		
		ABP_Base_MeleeWeaponItem_C_AttackDecisionEntered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.ReceiveBeginPlay");
		
		ABP_Base_MeleeWeaponItem_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.RequestReboundAction
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ReboundingHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Base_MeleeWeaponItem_C::RequestReboundAction(const struct FHitResult& ReboundingHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.RequestReboundAction");
		
		ABP_Base_MeleeWeaponItem_C_RequestReboundAction_Params params {};
		params.ReboundingHit = ReboundingHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.RequestImpactPause
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ImpactedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_MeleeWeaponItem_C::RequestImpactPause(class AActor* ImpactedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.RequestImpactPause");
		
		ABP_Base_MeleeWeaponItem_C_RequestImpactPause_Params params {};
		params.ImpactedActor = ImpactedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AttackPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::AttackPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AttackPressed");
		
		ABP_Base_MeleeWeaponItem_C_AttackPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AttackReleased
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::AttackReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AttackReleased");
		
		ABP_Base_MeleeWeaponItem_C_AttackReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AttackHold
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::AttackHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.AttackHold");
		
		ABP_Base_MeleeWeaponItem_C_AttackHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.EventStandardAttackCancelled
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnCancelledParams           Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_Base_MeleeWeaponItem_C::EventStandardAttackCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.EventStandardAttackCancelled");
		
		ABP_Base_MeleeWeaponItem_C_EventStandardAttackCancelled_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.OnDebugCurrentPerspectiveChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::OnDebugCurrentPerspectiveChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.OnDebugCurrentPerspectiveChanged");
		
		ABP_Base_MeleeWeaponItem_C_OnDebugCurrentPerspectiveChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.ExecuteUbergraph_BP_Base_MeleeWeaponItem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_MeleeWeaponItem_C::ExecuteUbergraph_BP_Base_MeleeWeaponItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.ExecuteUbergraph_BP_Base_MeleeWeaponItem");
		
		ABP_Base_MeleeWeaponItem_C_ExecuteUbergraph_BP_Base_MeleeWeaponItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.OverriddenAttackReleased__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::OverriddenAttackReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.OverriddenAttackReleased__DelegateSignature");
		
		ABP_Base_MeleeWeaponItem_C_OverriddenAttackReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.OverridenAttackPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_MeleeWeaponItem_C::OverridenAttackPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C.OverridenAttackPressed__DelegateSignature");
		
		ABP_Base_MeleeWeaponItem_C_OverridenAttackPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_MeleeWeaponItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_MeleeWeaponItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_MeleeWeaponItem.BP_Base_MeleeWeaponItem_C");
		return ptr;
	}

}


