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
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnMinDurationOver
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Scream_Screamer_C::OnMinDurationOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnMinDurationOver");
		
		UBP_Action_Scream_Screamer_C_OnMinDurationOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.DetermineIfPrematureEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Scream_Screamer_C::DetermineIfPrematureEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.DetermineIfPrematureEnd");
		
		UBP_Action_Scream_Screamer_C_DetermineIfPrematureEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.RemoveBurningAccumulation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Scream_Screamer_C::RemoveBurningAccumulation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.RemoveBurningAccumulation");
		
		UBP_Action_Scream_Screamer_C_RemoveBurningAccumulation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.ClientSetup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Scream_Screamer_C::ClientSetup(class AActor* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.ClientSetup");
		
		UBP_Action_Scream_Screamer_C_ClientSetup_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.SetDebugActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Scream_Screamer_C::SetDebugActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.SetDebugActive");
		
		UBP_Action_Scream_Screamer_C_SetDebugActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.RemoveHealthTracking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Scream_Screamer_C::RemoveHealthTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.RemoveHealthTracking");
		
		UBP_Action_Scream_Screamer_C_RemoveHealthTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnBeginEarly
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_Scream_Screamer_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnBeginEarly");
		
		UBP_Action_Scream_Screamer_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.AddNeutralStatusEffect
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     OverlappedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectComponent*                      StatusEffectComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       OutputPin                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Scream_Screamer_C::AddNeutralStatusEffect(class UObject* OverlappedCharacter, class UStatusEffectComponent* StatusEffectComponent, class UStatusEffectInstance** OutputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.AddNeutralStatusEffect");
		
		UBP_Action_Scream_Screamer_C_AddNeutralStatusEffect_Params params {};
		params.OverlappedCharacter = OverlappedCharacter;
		params.StatusEffectComponent = StatusEffectComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputPin != nullptr)
			*OutputPin = params.OutputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.AddFriendlyStatusEffect
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     OverlappedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectComponent*                      StatusEffectComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       OutputPin                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Scream_Screamer_C::AddFriendlyStatusEffect(class UObject* OverlappedCharacter, class UStatusEffectComponent* StatusEffectComponent, class UStatusEffectInstance** OutputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.AddFriendlyStatusEffect");
		
		UBP_Action_Scream_Screamer_C_AddFriendlyStatusEffect_Params params {};
		params.OverlappedCharacter = OverlappedCharacter;
		params.StatusEffectComponent = StatusEffectComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputPin != nullptr)
			*OutputPin = params.OutputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.AddHostileStatusEffect
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     OverlappedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectComponent*                      StatusEffectComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UStatusEffectInstance* UBP_Action_Scream_Screamer_C::AddHostileStatusEffect(class UObject* OverlappedCharacter, class UStatusEffectComponent* StatusEffectComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.AddHostileStatusEffect");
		
		UBP_Action_Scream_Screamer_C_AddHostileStatusEffect_Params params {};
		params.OverlappedCharacter = OverlappedCharacter;
		params.StatusEffectComponent = StatusEffectComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.EndStim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Scream_Screamer_C::EndStim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.EndStim");
		
		UBP_Action_Scream_Screamer_C_EndStim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.GetCurveChangePoint
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              MinTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ChangeFromValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UBP_Action_Scream_Screamer_C::GetCurveChangePoint(float MinTime, float MaxTime, float ChangeFromValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.GetCurveChangePoint");
		
		UBP_Action_Scream_Screamer_C_GetCurveChangePoint_Params params {};
		params.MinTime = MinTime;
		params.MaxTime = MaxTime;
		params.ChangeFromValue = ChangeFromValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.PlayCE_OnEnd
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECharacterActionEndedReason                        ExitReason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Scream_Screamer_C::PlayCE_OnEnd(ECharacterActionEndedReason ExitReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.PlayCE_OnEnd");
		
		UBP_Action_Scream_Screamer_C_PlayCE_OnEnd_Params params {};
		params.ExitReason = ExitReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.PlayCE_OnBegin
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Scream_Screamer_C::PlayCE_OnBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.PlayCE_OnBegin");
		
		UBP_Action_Scream_Screamer_C_PlayCE_OnBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.AddLingeringStatusEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADICharacter*                                OverlappedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectComponent*                      StatusEffectComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       StatusEffectInstance                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Scream_Screamer_C::AddLingeringStatusEffect(class ADICharacter* OverlappedCharacter, class UStatusEffectComponent* StatusEffectComponent, class UStatusEffectInstance* StatusEffectInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.AddLingeringStatusEffect");
		
		UBP_Action_Scream_Screamer_C_AddLingeringStatusEffect_Params params {};
		params.OverlappedCharacter = OverlappedCharacter;
		params.StatusEffectComponent = StatusEffectComponent;
		params.StatusEffectInstance = StatusEffectInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.ShouldRequestBackup
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Scream_Screamer_C::ShouldRequestBackup(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.ShouldRequestBackup");
		
		UBP_Action_Scream_Screamer_C_ShouldRequestBackup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.CancelZombieBackup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Scream_Screamer_C::CancelZombieBackup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.CancelZombieBackup");
		
		UBP_Action_Scream_Screamer_C_CancelZombieBackup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.EndSphereOverlap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Scream_Screamer_C::EndSphereOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.EndSphereOverlap");
		
		UBP_Action_Scream_Screamer_C_EndSphereOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.SummonZombieBackup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Scream_Screamer_C::SummonZombieBackup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.SummonZombieBackup");
		
		UBP_Action_Scream_Screamer_C_SummonZombieBackup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.AddOverlapStatusEffect
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EFactionReaction                                   FactionReaction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectComponent*                      StatusEffectComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     OverlappedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UStatusEffectInstance* UBP_Action_Scream_Screamer_C::AddOverlapStatusEffect(EFactionReaction FactionReaction, class UStatusEffectComponent* StatusEffectComponent, class UObject* OverlappedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.AddOverlapStatusEffect");
		
		UBP_Action_Scream_Screamer_C_AddOverlapStatusEffect_Params params {};
		params.FactionReaction = FactionReaction;
		params.StatusEffectComponent = StatusEffectComponent;
		params.OverlappedCharacter = OverlappedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnOverlapScreamSphere
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Scream_Screamer_C::OnOverlapScreamSphere(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnOverlapScreamSphere");
		
		UBP_Action_Scream_Screamer_C_OnOverlapScreamSphere_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.UninitialiseScreamCollision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Scream_Screamer_C::UninitialiseScreamCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.UninitialiseScreamCollision");
		
		UBP_Action_Scream_Screamer_C_UninitialiseScreamCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.IntialiseScreamCollision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Scream_Screamer_C::IntialiseScreamCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.IntialiseScreamCollision");
		
		UBP_Action_Scream_Screamer_C_IntialiseScreamCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.SpawnExplosion
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Scream_Screamer_C::SpawnExplosion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.SpawnExplosion");
		
		UBP_Action_Scream_Screamer_C_SpawnExplosion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.UnintialiseScreamEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECharacterActionEndedReason                        ExitReason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Scream_Screamer_C::UnintialiseScreamEffects(ECharacterActionEndedReason ExitReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.UnintialiseScreamEffects");
		
		UBP_Action_Scream_Screamer_C_UnintialiseScreamEffects_Params params {};
		params.ExitReason = ExitReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.IntialiseScreamEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Scream_Screamer_C::IntialiseScreamEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.IntialiseScreamEffects");
		
		UBP_Action_Scream_Screamer_C_IntialiseScreamEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.SpawnStim
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Scream_Screamer_C::SpawnStim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.SpawnStim");
		
		UBP_Action_Scream_Screamer_C_SpawnStim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Scream_Screamer_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnBegin");
		
		UBP_Action_Scream_Screamer_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnEnd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Scream_Screamer_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnEnd");
		
		UBP_Action_Scream_Screamer_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnScreamDurationOver
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Scream_Screamer_C::OnScreamDurationOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnScreamDurationOver");
		
		UBP_Action_Scream_Screamer_C_OnScreamDurationOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnCombatStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECosmeticCombatState                               NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Scream_Screamer_C::OnCombatStateChanged(ECosmeticCombatState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnCombatStateChanged");
		
		UBP_Action_Scream_Screamer_C_OnCombatStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnScreamEffectsBeginChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Scream_Screamer_C::OnScreamEffectsBeginChanged(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnScreamEffectsBeginChanged");
		
		UBP_Action_Scream_Screamer_C_OnScreamEffectsBeginChanged_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnReceivingDamageOverTimeStatusEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Scream_Screamer_C::OnReceivingDamageOverTimeStatusEffect(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnReceivingDamageOverTimeStatusEffect");
		
		UBP_Action_Scream_Screamer_C_OnReceivingDamageOverTimeStatusEffect_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.EstablishAdditionalCancelationSettings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Scream_Screamer_C::EstablishAdditionalCancelationSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.EstablishAdditionalCancelationSettings");
		
		UBP_Action_Scream_Screamer_C_EstablishAdditionalCancelationSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnDamageThresholdForHitReactVulnerabilityReached
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DamageRequirementMet                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               StabilityDamageMet                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Scream_Screamer_C::OnDamageThresholdForHitReactVulnerabilityReached(bool DamageRequirementMet, bool StabilityDamageMet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.OnDamageThresholdForHitReactVulnerabilityReached");
		
		UBP_Action_Scream_Screamer_C_OnDamageThresholdForHitReactVulnerabilityReached_Params params {};
		params.DamageRequirementMet = DamageRequirementMet;
		params.StabilityDamageMet = StabilityDamageMet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.ExecuteUbergraph_BP_Action_Scream_Screamer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Scream_Screamer_C::ExecuteUbergraph_BP_Action_Scream_Screamer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C.ExecuteUbergraph_BP_Action_Scream_Screamer");
		
		UBP_Action_Scream_Screamer_C_ExecuteUbergraph_BP_Action_Scream_Screamer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Scream_Screamer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Scream_Screamer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Scream_Screamer.BP_Action_Scream_Screamer_C");
		return ptr;
	}

}


