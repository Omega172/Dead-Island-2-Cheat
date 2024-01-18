/**
 * Name: Dead_Island_2
 * Version: Cracked
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.UnbindImpacyEvents
	 * 		Flags  -> ()
	 */
	void UBPC_Carryable_C::UnbindImpacyEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.UnbindImpacyEvents");
		
		UBPC_Carryable_C_UnbindImpacyEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.GenerateMeleeImpact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FHitResult>                          HitResults                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		struct FVector                                     SweepDirection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AttackOrigin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Carryable_C::GenerateMeleeImpact(TArray<struct FHitResult> HitResults, const struct FVector& SweepDirection, const struct FVector& AttackOrigin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.GenerateMeleeImpact");
		
		UBPC_Carryable_C_GenerateMeleeImpact_Params params {};
		params.HitResults = HitResults;
		params.SweepDirection = SweepDirection;
		params.AttackOrigin = AttackOrigin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.BindImpactEvents
	 * 		Flags  -> ()
	 */
	void UBPC_Carryable_C::BindImpactEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.BindImpactEvents");
		
		UBPC_Carryable_C_BindImpactEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.GetOwnerKnowledgeCompRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseRef                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Carryable_C::GetOwnerKnowledgeCompRef(class UKnowledgeBaseComponent** KnowledgeBaseRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.GetOwnerKnowledgeCompRef");
		
		UBPC_Carryable_C_GetOwnerKnowledgeCompRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KnowledgeBaseRef != nullptr)
			*KnowledgeBaseRef = params.KnowledgeBaseRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.GetOwnerActionCompRef
	 * 		Flags  -> ()
	 */
	void UBPC_Carryable_C::GetOwnerActionCompRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.GetOwnerActionCompRef");
		
		UBPC_Carryable_C_GetOwnerActionCompRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.SetUpBalancingData
	 * 		Flags  -> ()
	 */
	void UBPC_Carryable_C::SetUpBalancingData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.SetUpBalancingData");
		
		UBPC_Carryable_C_SetUpBalancingData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.DockCarryable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  DockTransform                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               DisableAfterDock                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Carryable_C::DockCarryable(struct FTransform* DockTransform, bool DisableAfterDock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.DockCarryable");
		
		UBPC_Carryable_C_DockCarryable_Params params {};
		params.DisableAfterDock = DisableAfterDock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DockTransform != nullptr)
			*DockTransform = params.DockTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.EquippableAssignedToPaperDollSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperDollSlot*                              PaperDollSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Carryable_C::EquippableAssignedToPaperDollSlot(class UPaperDollSlot* PaperDollSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.EquippableAssignedToPaperDollSlot");
		
		UBPC_Carryable_C_EquippableAssignedToPaperDollSlot_Params params {};
		params.PaperDollSlot = PaperDollSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.AttackHold
	 * 		Flags  -> ()
	 */
	void UBPC_Carryable_C::AttackHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.AttackHold");
		
		UBPC_Carryable_C_AttackHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.AttackReleased
	 * 		Flags  -> ()
	 */
	void UBPC_Carryable_C::AttackReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.AttackReleased");
		
		UBPC_Carryable_C_AttackReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.EquippableRemovedFromPaperDollSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperDollSlot*                              PaperDollSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Carryable_C::EquippableRemovedFromPaperDollSlot(class UPaperDollSlot* PaperDollSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.EquippableRemovedFromPaperDollSlot");
		
		UBPC_Carryable_C_EquippableRemovedFromPaperDollSlot_Params params {};
		params.PaperDollSlot = PaperDollSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.AttackPressed
	 * 		Flags  -> ()
	 */
	void UBPC_Carryable_C::AttackPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.AttackPressed");
		
		UBPC_Carryable_C_AttackPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_Carryable_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.ReceiveBeginPlay");
		
		UBPC_Carryable_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.RequestCustomHeavyAttackAction
	 * 		Flags  -> ()
	 */
	void UBPC_Carryable_C::RequestCustomHeavyAttackAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.RequestCustomHeavyAttackAction");
		
		UBPC_Carryable_C_RequestCustomHeavyAttackAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.SkipToHold
	 * 		Flags  -> ()
	 */
	void UBPC_Carryable_C::SkipToHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.SkipToHold");
		
		UBPC_Carryable_C_SkipToHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.OnMeleeHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FHitResult>                          HitResults                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		struct FVector                                     SweepDirection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AttackOrigin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Carryable_C::OnMeleeHit(TArray<struct FHitResult> HitResults, const struct FVector& SweepDirection, const struct FVector& AttackOrigin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.OnMeleeHit");
		
		UBPC_Carryable_C_OnMeleeHit_Params params {};
		params.HitResults = HitResults;
		params.SweepDirection = SweepDirection;
		params.AttackOrigin = AttackOrigin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.ExecuteUbergraph_BPC_Carryable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Carryable_C::ExecuteUbergraph_BPC_Carryable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.ExecuteUbergraph_BPC_Carryable");
		
		UBPC_Carryable_C_ExecuteUbergraph_BPC_Carryable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable.BPC_Carryable_C.CarryableUnDocked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      UndockedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Carryable_C::CarryableUnDocked__DelegateSignature(class AActor* UndockedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable.BPC_Carryable_C.CarryableUnDocked__DelegateSignature");
		
		UBPC_Carryable_C_CarryableUnDocked__DelegateSignature_Params params {};
		params.UndockedActor = UndockedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Carryable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Carryable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Carryable.BPC_Carryable_C");
		return ptr;
	}

}


