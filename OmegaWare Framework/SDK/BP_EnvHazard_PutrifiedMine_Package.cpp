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
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.OnRep_Broken
	 * 		Flags  -> ()
	 */
	void ABP_EnvHazard_PutrifiedMine_C::OnRep_Broken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.OnRep_Broken");
		
		ABP_EnvHazard_PutrifiedMine_C_OnRep_Broken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.OnRep_Detonated
	 * 		Flags  -> ()
	 */
	void ABP_EnvHazard_PutrifiedMine_C::OnRep_Detonated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.OnRep_Detonated");
		
		ABP_EnvHazard_PutrifiedMine_C_OnRep_Detonated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.PlayerExitedRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADIPlayerCharacter*                          Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EnvHazard_PutrifiedMine_C::PlayerExitedRange(class ADIPlayerCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.PlayerExitedRange");
		
		ABP_EnvHazard_PutrifiedMine_C_PlayerExitedRange_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.CheckPawns
	 * 		Flags  -> ()
	 */
	void ABP_EnvHazard_PutrifiedMine_C::CheckPawns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.CheckPawns");
		
		ABP_EnvHazard_PutrifiedMine_C_CheckPawns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.PlayerEnteredRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADIPlayerCharacter*                          Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EnvHazard_PutrifiedMine_C::PlayerEnteredRange(class ADIPlayerCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.PlayerEnteredRange");
		
		ABP_EnvHazard_PutrifiedMine_C_PlayerEnteredRange_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.VisibilityTest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     OtherLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_EnvHazard_PutrifiedMine_C::VisibilityTest(const struct FVector& OtherLocation, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.VisibilityTest");
		
		ABP_EnvHazard_PutrifiedMine_C_VisibilityTest_Params params {};
		params.OtherLocation = OtherLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.CheckVectorInConeWS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ConeOrigin                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ConeDirection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ConeRadius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OtherLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_EnvHazard_PutrifiedMine_C::CheckVectorInConeWS(const struct FVector& ConeOrigin, const struct FVector& ConeDirection, float ConeRadius, const struct FVector& OtherLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.CheckVectorInConeWS");
		
		ABP_EnvHazard_PutrifiedMine_C_CheckVectorInConeWS_Params params {};
		params.ConeOrigin = ConeOrigin;
		params.ConeDirection = ConeDirection;
		params.ConeRadius = ConeRadius;
		params.OtherLocation = OtherLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.CheckAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_EnvHazard_PutrifiedMine_C::CheckAngle(class AActor* Actor, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.CheckAngle");
		
		ABP_EnvHazard_PutrifiedMine_C_CheckAngle_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.ShowTriggerCone
	 * 		Flags  -> ()
	 */
	void ABP_EnvHazard_PutrifiedMine_C::ShowTriggerCone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.ShowTriggerCone");
		
		ABP_EnvHazard_PutrifiedMine_C_ShowTriggerCone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.HideRadii
	 * 		Flags  -> ()
	 */
	void ABP_EnvHazard_PutrifiedMine_C::HideRadii()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.HideRadii");
		
		ABP_EnvHazard_PutrifiedMine_C_HideRadii_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.ShowBlastRadius
	 * 		Flags  -> ()
	 */
	void ABP_EnvHazard_PutrifiedMine_C::ShowBlastRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.ShowBlastRadius");
		
		ABP_EnvHazard_PutrifiedMine_C_ShowBlastRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.ShowDetectionRadius
	 * 		Flags  -> ()
	 */
	void ABP_EnvHazard_PutrifiedMine_C::ShowDetectionRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.ShowDetectionRadius");
		
		ABP_EnvHazard_PutrifiedMine_C_ShowDetectionRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.CacheABP
	 * 		Flags  -> ()
	 */
	void ABP_EnvHazard_PutrifiedMine_C::CacheABP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.CacheABP");
		
		ABP_EnvHazard_PutrifiedMine_C_CacheABP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.PlayChargeSound
	 * 		Flags  -> ()
	 */
	void ABP_EnvHazard_PutrifiedMine_C::PlayChargeSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.PlayChargeSound");
		
		ABP_EnvHazard_PutrifiedMine_C_PlayChargeSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_EnvHazard_PutrifiedMine_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.Timeline_0__FinishedFunc");
		
		ABP_EnvHazard_PutrifiedMine_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_EnvHazard_PutrifiedMine_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.Timeline_0__UpdateFunc");
		
		ABP_EnvHazard_PutrifiedMine_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.BlueprintOnBeginAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActionType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EnvHazard_PutrifiedMine_C::BlueprintOnBeginAction(const struct FGuid& RequestId, const class FName& ActionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.BlueprintOnBeginAction");
		
		ABP_EnvHazard_PutrifiedMine_C_BlueprintOnBeginAction_Params params {};
		params.RequestId = RequestId;
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_EnvHazard_PutrifiedMine_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_EnvHazard_PutrifiedMine_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.TriggerBrokenAction
	 * 		Flags  -> ()
	 */
	void ABP_EnvHazard_PutrifiedMine_C::TriggerBrokenAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.TriggerBrokenAction");
		
		ABP_EnvHazard_PutrifiedMine_C_TriggerBrokenAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_3_OnAnyImpactEventReceivedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EnvHazard_PutrifiedMine_C::BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_3_OnAnyImpactEventReceivedDelegate__DelegateSignature(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_3_OnAnyImpactEventReceivedDelegate__DelegateSignature");
		
		ABP_EnvHazard_PutrifiedMine_C_BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_3_OnAnyImpactEventReceivedDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.BndEvt__StateTransmitter_K2Node_ComponentBoundEvent_4_OnStatusTypeActivated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStateTransmitterComponent*                  Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETransmittableStatus                               StatusType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EnvHazard_PutrifiedMine_C::BndEvt__StateTransmitter_K2Node_ComponentBoundEvent_4_OnStatusTypeActivated__DelegateSignature(class UStateTransmitterComponent* Component, ETransmittableStatus StatusType, float Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.BndEvt__StateTransmitter_K2Node_ComponentBoundEvent_4_OnStatusTypeActivated__DelegateSignature");
		
		ABP_EnvHazard_PutrifiedMine_C_BndEvt__StateTransmitter_K2Node_ComponentBoundEvent_4_OnStatusTypeActivated__DelegateSignature_Params params {};
		params.Component = Component;
		params.StatusType = StatusType;
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.OnTerminal
	 * 		Flags  -> ()
	 */
	void ABP_EnvHazard_PutrifiedMine_C::OnTerminal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.OnTerminal");
		
		ABP_EnvHazard_PutrifiedMine_C_OnTerminal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_EnvHazard_PutrifiedMine_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.ReceiveBeginPlay");
		
		ABP_EnvHazard_PutrifiedMine_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.OnBroken
	 * 		Flags  -> ()
	 */
	void ABP_EnvHazard_PutrifiedMine_C::OnBroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.OnBroken");
		
		ABP_EnvHazard_PutrifiedMine_C_OnBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EnvHazard_PutrifiedMine_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_EnvHazard_PutrifiedMine_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.Detonate
	 * 		Flags  -> ()
	 */
	void ABP_EnvHazard_PutrifiedMine_C::Detonate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.Detonate");
		
		ABP_EnvHazard_PutrifiedMine_C_Detonate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.HideMesh
	 * 		Flags  -> ()
	 */
	void ABP_EnvHazard_PutrifiedMine_C::HideMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.HideMesh");
		
		ABP_EnvHazard_PutrifiedMine_C_HideMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.ExecuteUbergraph_BP_EnvHazard_PutrifiedMine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EnvHazard_PutrifiedMine_C::ExecuteUbergraph_BP_EnvHazard_PutrifiedMine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.ExecuteUbergraph_BP_EnvHazard_PutrifiedMine");
		
		ABP_EnvHazard_PutrifiedMine_C_ExecuteUbergraph_BP_EnvHazard_PutrifiedMine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_EnvHazard_PutrifiedMine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EnvHazard_PutrifiedMine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C");
		return ptr;
	}

}


