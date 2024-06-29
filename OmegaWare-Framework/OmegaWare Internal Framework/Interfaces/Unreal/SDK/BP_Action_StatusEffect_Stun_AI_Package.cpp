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
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnBeginEarly
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_StatusEffect_Stun_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnBeginEarly");
		
		UBP_Action_StatusEffect_Stun_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnInterruptionConditionsMet
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::OnInterruptionConditionsMet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnInterruptionConditionsMet");
		
		UBP_Action_StatusEffect_Stun_AI_C_OnInterruptionConditionsMet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.DoesImpactMeetInterruptionConditions
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBaseImpactEventResultWrapper*               Impact                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::DoesImpactMeetInterruptionConditions(class UBaseImpactEventResultWrapper* Impact, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.DoesImpactMeetInterruptionConditions");
		
		UBP_Action_StatusEffect_Stun_AI_C_DoesImpactMeetInterruptionConditions_Params params {};
		params.Impact = Impact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.GetAttributeValueForDamageInterruption
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAttributeType*                              AttributeType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutputPin                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::GetAttributeValueForDamageInterruption(class UAttributeType* AttributeType, float* OutputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.GetAttributeValueForDamageInterruption");
		
		UBP_Action_StatusEffect_Stun_AI_C_GetAttributeValueForDamageInterruption_Params params {};
		params.AttributeType = AttributeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputPin != nullptr)
			*OutputPin = params.OutputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.SetupDamageInterruption
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAttributeType*                              AttributeType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::SetupDamageInterruption(class UAttributeType* AttributeType, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.SetupDamageInterruption");
		
		UBP_Action_StatusEffect_Stun_AI_C_SetupDamageInterruption_Params params {};
		params.AttributeType = AttributeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.Resolve
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionResolveParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		ECharacterActionResolution                         OutResolution                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutQueuedTimeout                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::Resolve(const struct FCharacterActionResolveParams& Params, ECharacterActionResolution* OutResolution, float* OutQueuedTimeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.Resolve");
		
		UBP_Action_StatusEffect_Stun_AI_C_Resolve_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResolution != nullptr)
			*OutResolution = params.OutResolution;
		if (OutQueuedTimeout != nullptr)
			*OutQueuedTimeout = params.OutQueuedTimeout;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnFailedToPlay_64E0CC78418DB30CF33E12ABD3290705
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::OnFailedToPlay_64E0CC78418DB30CF33E12ABD3290705(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnFailedToPlay_64E0CC78418DB30CF33E12ABD3290705");
		
		UBP_Action_StatusEffect_Stun_AI_C_OnFailedToPlay_64E0CC78418DB30CF33E12ABD3290705_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnSectionChanged_64E0CC78418DB30CF33E12ABD3290705
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SectionName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::OnSectionChanged_64E0CC78418DB30CF33E12ABD3290705(const class FName& SectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnSectionChanged_64E0CC78418DB30CF33E12ABD3290705");
		
		UBP_Action_StatusEffect_Stun_AI_C_OnSectionChanged_64E0CC78418DB30CF33E12ABD3290705_Params params {};
		params.SectionName = SectionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnNotifyEnd_64E0CC78418DB30CF33E12ABD3290705
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::OnNotifyEnd_64E0CC78418DB30CF33E12ABD3290705(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnNotifyEnd_64E0CC78418DB30CF33E12ABD3290705");
		
		UBP_Action_StatusEffect_Stun_AI_C_OnNotifyEnd_64E0CC78418DB30CF33E12ABD3290705_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnNotifyBegin_64E0CC78418DB30CF33E12ABD3290705
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::OnNotifyBegin_64E0CC78418DB30CF33E12ABD3290705(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnNotifyBegin_64E0CC78418DB30CF33E12ABD3290705");
		
		UBP_Action_StatusEffect_Stun_AI_C_OnNotifyBegin_64E0CC78418DB30CF33E12ABD3290705_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnInterrupted_64E0CC78418DB30CF33E12ABD3290705
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::OnInterrupted_64E0CC78418DB30CF33E12ABD3290705(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnInterrupted_64E0CC78418DB30CF33E12ABD3290705");
		
		UBP_Action_StatusEffect_Stun_AI_C_OnInterrupted_64E0CC78418DB30CF33E12ABD3290705_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnBlendOut_64E0CC78418DB30CF33E12ABD3290705
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::OnBlendOut_64E0CC78418DB30CF33E12ABD3290705(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnBlendOut_64E0CC78418DB30CF33E12ABD3290705");
		
		UBP_Action_StatusEffect_Stun_AI_C_OnBlendOut_64E0CC78418DB30CF33E12ABD3290705_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnCompleted_64E0CC78418DB30CF33E12ABD3290705
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::OnCompleted_64E0CC78418DB30CF33E12ABD3290705(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnCompleted_64E0CC78418DB30CF33E12ABD3290705");
		
		UBP_Action_StatusEffect_Stun_AI_C_OnCompleted_64E0CC78418DB30CF33E12ABD3290705_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnEnd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnEnd");
		
		UBP_Action_StatusEffect_Stun_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnConstruct
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     InitParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::OnConstruct(class UCustomActionParamsBase* InitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnConstruct");
		
		UBP_Action_StatusEffect_Stun_AI_C_OnConstruct_Params params {};
		params.InitParams = InitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.StartAnimPlayback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::StartAnimPlayback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.StartAnimPlayback");
		
		UBP_Action_StatusEffect_Stun_AI_C_StartAnimPlayback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnBegin");
		
		UBP_Action_StatusEffect_Stun_AI_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.StartDamageInterruptionSetup
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::StartDamageInterruptionSetup(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.StartDamageInterruptionSetup");
		
		UBP_Action_StatusEffect_Stun_AI_C_StartDamageInterruptionSetup_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnImpactReceived
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::OnImpactReceived(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.OnImpactReceived");
		
		UBP_Action_StatusEffect_Stun_AI_C_OnImpactReceived_Params params {};
		params.Actor = Actor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.DamageInterruption
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DamageRequirementMet                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               StabilityDamageMet                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::DamageInterruption(bool DamageRequirementMet, bool StabilityDamageMet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.DamageInterruption");
		
		UBP_Action_StatusEffect_Stun_AI_C_DamageInterruption_Params params {};
		params.DamageRequirementMet = DamageRequirementMet;
		params.StabilityDamageMet = StabilityDamageMet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.ExecuteUbergraph_BP_Action_StatusEffect_Stun_AI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatusEffect_Stun_AI_C::ExecuteUbergraph_BP_Action_StatusEffect_Stun_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C.ExecuteUbergraph_BP_Action_StatusEffect_Stun_AI");
		
		UBP_Action_StatusEffect_Stun_AI_C_ExecuteUbergraph_BP_Action_StatusEffect_Stun_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_StatusEffect_Stun_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_StatusEffect_Stun_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_StatusEffect_Stun_AI.BP_Action_StatusEffect_Stun_AI_C");
		return ptr;
	}

}


