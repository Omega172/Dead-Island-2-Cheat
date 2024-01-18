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
	 * 		Name   -> Function BP_Base_JerryCan.BP_Base_JerryCan_C.RadialThresholdReached
	 * 		Flags  -> ()
	 */
	void ABP_Base_JerryCan_C::RadialThresholdReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_JerryCan.BP_Base_JerryCan_C.RadialThresholdReached");
		
		ABP_Base_JerryCan_C_RadialThresholdReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_JerryCan.BP_Base_JerryCan_C.EndImpactOnCollisionDetection
	 * 		Flags  -> ()
	 */
	void ABP_Base_JerryCan_C::EndImpactOnCollisionDetection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_JerryCan.BP_Base_JerryCan_C.EndImpactOnCollisionDetection");
		
		ABP_Base_JerryCan_C_EndImpactOnCollisionDetection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_JerryCan.BP_Base_JerryCan_C.OnBeginHolding
	 * 		Flags  -> ()
	 */
	void ABP_Base_JerryCan_C::OnBeginHolding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_JerryCan.BP_Base_JerryCan_C.OnBeginHolding");
		
		ABP_Base_JerryCan_C_OnBeginHolding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_JerryCan.BP_Base_JerryCan_C.IsCarrierLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOutIsLocal                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_JerryCan_C::IsCarrierLocal(bool* bOutIsLocal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_JerryCan.BP_Base_JerryCan_C.IsCarrierLocal");
		
		ABP_Base_JerryCan_C_IsCarrierLocal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutIsLocal != nullptr)
			*bOutIsLocal = params.bOutIsLocal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_JerryCan.BP_Base_JerryCan_C.OnTerminal
	 * 		Flags  -> ()
	 */
	void ABP_Base_JerryCan_C::OnTerminal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_JerryCan.BP_Base_JerryCan_C.OnTerminal");
		
		ABP_Base_JerryCan_C_OnTerminal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_JerryCan.BP_Base_JerryCan_C.SetupActionHelpersOnCarryableComponent
	 * 		Flags  -> ()
	 */
	void ABP_Base_JerryCan_C::SetupActionHelpersOnCarryableComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_JerryCan.BP_Base_JerryCan_C.SetupActionHelpersOnCarryableComponent");
		
		ABP_Base_JerryCan_C_SetupActionHelpersOnCarryableComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_JerryCan.BP_Base_JerryCan_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Base_JerryCan_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_JerryCan.BP_Base_JerryCan_C.UserConstructionScript");
		
		ABP_Base_JerryCan_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_JerryCan.BP_Base_JerryCan_C.BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_3_PaperDollEventMulticastDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperDollSlot*                              PaperDollSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_JerryCan_C::BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_3_PaperDollEventMulticastDelegate__DelegateSignature(class UPaperDollSlot* PaperDollSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_JerryCan.BP_Base_JerryCan_C.BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_3_PaperDollEventMulticastDelegate__DelegateSignature");
		
		ABP_Base_JerryCan_C_BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_3_PaperDollEventMulticastDelegate__DelegateSignature_Params params {};
		params.PaperDollSlot = PaperDollSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_JerryCan.BP_Base_JerryCan_C.BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_4_PaperDollEventMulticastDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperDollSlot*                              PaperDollSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_JerryCan_C::BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_4_PaperDollEventMulticastDelegate__DelegateSignature(class UPaperDollSlot* PaperDollSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_JerryCan.BP_Base_JerryCan_C.BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_4_PaperDollEventMulticastDelegate__DelegateSignature");
		
		ABP_Base_JerryCan_C_BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_4_PaperDollEventMulticastDelegate__DelegateSignature_Params params {};
		params.PaperDollSlot = PaperDollSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_JerryCan.BP_Base_JerryCan_C.OnHeavyAttackStart
	 * 		Flags  -> ()
	 */
	void ABP_Base_JerryCan_C::OnHeavyAttackStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_JerryCan.BP_Base_JerryCan_C.OnHeavyAttackStart");
		
		ABP_Base_JerryCan_C_OnHeavyAttackStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_JerryCan.BP_Base_JerryCan_C.OnHeavyAttackEnd
	 * 		Flags  -> ()
	 */
	void ABP_Base_JerryCan_C::OnHeavyAttackEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_JerryCan.BP_Base_JerryCan_C.OnHeavyAttackEnd");
		
		ABP_Base_JerryCan_C_OnHeavyAttackEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_JerryCan.BP_Base_JerryCan_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Base_JerryCan_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_JerryCan.BP_Base_JerryCan_C.ReceiveBeginPlay");
		
		ABP_Base_JerryCan_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_JerryCan.BP_Base_JerryCan_C.BlueprintOnBeginAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActionType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_JerryCan_C::BlueprintOnBeginAction(const struct FGuid& RequestId, const class FName& ActionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_JerryCan.BP_Base_JerryCan_C.BlueprintOnBeginAction");
		
		ABP_Base_JerryCan_C_BlueprintOnBeginAction_Params params {};
		params.RequestId = RequestId;
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_JerryCan.BP_Base_JerryCan_C.ReceivePostInitializeComponents
	 * 		Flags  -> ()
	 */
	void ABP_Base_JerryCan_C::ReceivePostInitializeComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_JerryCan.BP_Base_JerryCan_C.ReceivePostInitializeComponents");
		
		ABP_Base_JerryCan_C_ReceivePostInitializeComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_JerryCan.BP_Base_JerryCan_C.TriggerBrokenAction
	 * 		Flags  -> ()
	 */
	void ABP_Base_JerryCan_C::TriggerBrokenAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_JerryCan.BP_Base_JerryCan_C.TriggerBrokenAction");
		
		ABP_Base_JerryCan_C_TriggerBrokenAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_JerryCan.BP_Base_JerryCan_C.ExecuteUbergraph_BP_Base_JerryCan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_JerryCan_C::ExecuteUbergraph_BP_Base_JerryCan(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_JerryCan.BP_Base_JerryCan_C.ExecuteUbergraph_BP_Base_JerryCan");
		
		ABP_Base_JerryCan_C_ExecuteUbergraph_BP_Base_JerryCan_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_JerryCan_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_JerryCan_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_JerryCan.BP_Base_JerryCan_C");
		return ptr;
	}

}


