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
	 * 		Name   -> Function BP_BTService_ImpactReceivedByTarget.BP_BTService_ImpactReceivedByTarget_C.DamageSumReceived
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UBP_BTService_ImpactReceivedByTarget_C::DamageSumReceived(class UBaseImpactEventResultWrapper* ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BTService_ImpactReceivedByTarget.BP_BTService_ImpactReceivedByTarget_C.DamageSumReceived");
		
		UBP_BTService_ImpactReceivedByTarget_C_DamageSumReceived_Params params {};
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BTService_ImpactReceivedByTarget.BP_BTService_ImpactReceivedByTarget_C.CombatTargetHasChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCombatTargetComponent*                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BTService_ImpactReceivedByTarget_C::CombatTargetHasChanged(class UCombatTargetComponent* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BTService_ImpactReceivedByTarget.BP_BTService_ImpactReceivedByTarget_C.CombatTargetHasChanged");
		
		UBP_BTService_ImpactReceivedByTarget_C_CombatTargetHasChanged_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BTService_ImpactReceivedByTarget.BP_BTService_ImpactReceivedByTarget_C.ReceiveActivationAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BTService_ImpactReceivedByTarget_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BTService_ImpactReceivedByTarget.BP_BTService_ImpactReceivedByTarget_C.ReceiveActivationAI");
		
		UBP_BTService_ImpactReceivedByTarget_C_ReceiveActivationAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BTService_ImpactReceivedByTarget.BP_BTService_ImpactReceivedByTarget_C.ReceiveDeactivationAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BTService_ImpactReceivedByTarget_C::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BTService_ImpactReceivedByTarget.BP_BTService_ImpactReceivedByTarget_C.ReceiveDeactivationAI");
		
		UBP_BTService_ImpactReceivedByTarget_C_ReceiveDeactivationAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BTService_ImpactReceivedByTarget.BP_BTService_ImpactReceivedByTarget_C.OnAnyImpactReceived
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BTService_ImpactReceivedByTarget_C::OnAnyImpactReceived(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BTService_ImpactReceivedByTarget.BP_BTService_ImpactReceivedByTarget_C.OnAnyImpactReceived");
		
		UBP_BTService_ImpactReceivedByTarget_C_OnAnyImpactReceived_Params params {};
		params.Actor = Actor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BTService_ImpactReceivedByTarget.BP_BTService_ImpactReceivedByTarget_C.ExecuteUbergraph_BP_BTService_ImpactReceivedByTarget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BTService_ImpactReceivedByTarget_C::ExecuteUbergraph_BP_BTService_ImpactReceivedByTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BTService_ImpactReceivedByTarget.BP_BTService_ImpactReceivedByTarget_C.ExecuteUbergraph_BP_BTService_ImpactReceivedByTarget");
		
		UBP_BTService_ImpactReceivedByTarget_C_ExecuteUbergraph_BP_BTService_ImpactReceivedByTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BTService_ImpactReceivedByTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BTService_ImpactReceivedByTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTService_ImpactReceivedByTarget.BP_BTService_ImpactReceivedByTarget_C");
		return ptr;
	}

}


