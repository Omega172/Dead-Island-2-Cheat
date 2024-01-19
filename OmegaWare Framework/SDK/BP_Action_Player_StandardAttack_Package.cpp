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
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnSectionChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SectionName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnSectionChanged(const class FName& SectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnSectionChanged");
		
		UBP_Action_Player_StandardAttack_C_OnSectionChanged_Params params {};
		params.SectionName = SectionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.CacheSharedVariables
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Player_StandardAttack_C::CacheSharedVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.CacheSharedVariables");
		
		UBP_Action_Player_StandardAttack_C_CacheSharedVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.CleanRepeatRelatedFacts
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     PlayerKBComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::CleanRepeatRelatedFacts(class UKnowledgeBaseComponent* PlayerKBComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.CleanRepeatRelatedFacts");
		
		UBP_Action_Player_StandardAttack_C_CleanRepeatRelatedFacts_Params params {};
		params.PlayerKBComponent = PlayerKBComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.ToggleStartingHand
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Player_StandardAttack_C::ToggleStartingHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.ToggleStartingHand");
		
		UBP_Action_Player_StandardAttack_C_ToggleStartingHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.GetChainStartingHand
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      ChainStartingHand                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::GetChainStartingHand(class FString* ChainStartingHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.GetChainStartingHand");
		
		UBP_Action_Player_StandardAttack_C_GetChainStartingHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChainStartingHand != nullptr)
			*ChainStartingHand = params.ChainStartingHand;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.IncreaseRepeatCounter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Player_StandardAttack_C::IncreaseRepeatCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.IncreaseRepeatCounter");
		
		UBP_Action_Player_StandardAttack_C_IncreaseRepeatCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.ResolveRepeatMontage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               MontageFound                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                RepeatMontage                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::ResolveRepeatMontage(bool* MontageFound, class UAnimMontage** RepeatMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.ResolveRepeatMontage");
		
		UBP_Action_Player_StandardAttack_C_ResolveRepeatMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MontageFound != nullptr)
			*MontageFound = params.MontageFound;
		if (RepeatMontage != nullptr)
			*RepeatMontage = params.RepeatMontage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.SkipRepeat
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Skip                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Player_StandardAttack_C::SkipRepeat(bool* Skip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.SkipRepeat");
		
		UBP_Action_Player_StandardAttack_C_SkipRepeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skip != nullptr)
			*Skip = params.Skip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.CallReticlePulse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Player_StandardAttack_C::CallReticlePulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.CallReticlePulse");
		
		UBP_Action_Player_StandardAttack_C_CallReticlePulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.FindMontageInAnimSet
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        AssetName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimMontage*                                ResolvedMontage                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::FindMontageInAnimSet(const class FName& AssetName, class UAnimMontage** ResolvedMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.FindMontageInAnimSet");
		
		UBP_Action_Player_StandardAttack_C_FindMontageInAnimSet_Params params {};
		params.AssetName = AssetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResolvedMontage != nullptr)
			*ResolvedMontage = params.ResolvedMontage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.GetActionRelevantMontages
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDIAnimInstance*                             PlayerAnimInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        StandardAttackAnimSetName                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        StandardAttackMontageAsset                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        StandardAttackAnticMontageAsset                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        HeavyAttackAnticMontageAsset                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                StandardAttackMontage                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimMontage*                                StandardAttackAnticMontage                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimMontage*                                HeavyAttackAnticMontage                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::GetActionRelevantMontages(class UDIAnimInstance* PlayerAnimInstance, const class FName& StandardAttackAnimSetName, const class FName& StandardAttackMontageAsset, const class FName& StandardAttackAnticMontageAsset, const class FName& HeavyAttackAnticMontageAsset, bool* Success, class UAnimMontage** StandardAttackMontage, class UAnimMontage** StandardAttackAnticMontage, class UAnimMontage** HeavyAttackAnticMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.GetActionRelevantMontages");
		
		UBP_Action_Player_StandardAttack_C_GetActionRelevantMontages_Params params {};
		params.PlayerAnimInstance = PlayerAnimInstance;
		params.StandardAttackAnimSetName = StandardAttackAnimSetName;
		params.StandardAttackMontageAsset = StandardAttackMontageAsset;
		params.StandardAttackAnticMontageAsset = StandardAttackAnticMontageAsset;
		params.HeavyAttackAnticMontageAsset = HeavyAttackAnticMontageAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (StandardAttackMontage != nullptr)
			*StandardAttackMontage = params.StandardAttackMontage;
		if (StandardAttackAnticMontage != nullptr)
			*StandardAttackAnticMontage = params.StandardAttackAnticMontage;
		if (HeavyAttackAnticMontage != nullptr)
			*HeavyAttackAnticMontage = params.HeavyAttackAnticMontage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.IsInChain
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               InChain                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Player_StandardAttack_C::IsInChain(bool* InChain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.IsInChain");
		
		UBP_Action_Player_StandardAttack_C_IsInChain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InChain != nullptr)
			*InChain = params.InChain;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBeginEarly
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_Player_StandardAttack_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBeginEarly");
		
		UBP_Action_Player_StandardAttack_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.CacheVariables
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanContinue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Player_StandardAttack_C::CacheVariables(bool* CanContinue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.CacheVariables");
		
		UBP_Action_Player_StandardAttack_C_CacheVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanContinue != nullptr)
			*CanContinue = params.CanContinue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.Resolve
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionResolveParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		ECharacterActionResolution                         OutResolution                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutQueuedTimeout                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::Resolve(const struct FCharacterActionResolveParams& Params, ECharacterActionResolution* OutResolution, float* OutQueuedTimeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.Resolve");
		
		UBP_Action_Player_StandardAttack_C_Resolve_Params params {};
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
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnFailedToPlay_139D106441E71098568BCF853FD3020C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnFailedToPlay_139D106441E71098568BCF853FD3020C(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnFailedToPlay_139D106441E71098568BCF853FD3020C");
		
		UBP_Action_Player_StandardAttack_C_OnFailedToPlay_139D106441E71098568BCF853FD3020C_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnSectionChanged_139D106441E71098568BCF853FD3020C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SectionName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnSectionChanged_139D106441E71098568BCF853FD3020C(const class FName& SectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnSectionChanged_139D106441E71098568BCF853FD3020C");
		
		UBP_Action_Player_StandardAttack_C_OnSectionChanged_139D106441E71098568BCF853FD3020C_Params params {};
		params.SectionName = SectionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyEnd_139D106441E71098568BCF853FD3020C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnNotifyEnd_139D106441E71098568BCF853FD3020C(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyEnd_139D106441E71098568BCF853FD3020C");
		
		UBP_Action_Player_StandardAttack_C_OnNotifyEnd_139D106441E71098568BCF853FD3020C_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyBegin_139D106441E71098568BCF853FD3020C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnNotifyBegin_139D106441E71098568BCF853FD3020C(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyBegin_139D106441E71098568BCF853FD3020C");
		
		UBP_Action_Player_StandardAttack_C_OnNotifyBegin_139D106441E71098568BCF853FD3020C_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnInterrupted_139D106441E71098568BCF853FD3020C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnInterrupted_139D106441E71098568BCF853FD3020C(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnInterrupted_139D106441E71098568BCF853FD3020C");
		
		UBP_Action_Player_StandardAttack_C_OnInterrupted_139D106441E71098568BCF853FD3020C_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBlendOut_139D106441E71098568BCF853FD3020C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnBlendOut_139D106441E71098568BCF853FD3020C(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBlendOut_139D106441E71098568BCF853FD3020C");
		
		UBP_Action_Player_StandardAttack_C_OnBlendOut_139D106441E71098568BCF853FD3020C_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnCompleted_139D106441E71098568BCF853FD3020C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnCompleted_139D106441E71098568BCF853FD3020C(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnCompleted_139D106441E71098568BCF853FD3020C");
		
		UBP_Action_Player_StandardAttack_C_OnCompleted_139D106441E71098568BCF853FD3020C_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnFailedToPlay_F233E8AD47904CC1F37A9692233AD991
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnFailedToPlay_F233E8AD47904CC1F37A9692233AD991(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnFailedToPlay_F233E8AD47904CC1F37A9692233AD991");
		
		UBP_Action_Player_StandardAttack_C_OnFailedToPlay_F233E8AD47904CC1F37A9692233AD991_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnSectionChanged_F233E8AD47904CC1F37A9692233AD991
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SectionName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnSectionChanged_F233E8AD47904CC1F37A9692233AD991(const class FName& SectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnSectionChanged_F233E8AD47904CC1F37A9692233AD991");
		
		UBP_Action_Player_StandardAttack_C_OnSectionChanged_F233E8AD47904CC1F37A9692233AD991_Params params {};
		params.SectionName = SectionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyEnd_F233E8AD47904CC1F37A9692233AD991
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnNotifyEnd_F233E8AD47904CC1F37A9692233AD991(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyEnd_F233E8AD47904CC1F37A9692233AD991");
		
		UBP_Action_Player_StandardAttack_C_OnNotifyEnd_F233E8AD47904CC1F37A9692233AD991_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyBegin_F233E8AD47904CC1F37A9692233AD991
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnNotifyBegin_F233E8AD47904CC1F37A9692233AD991(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyBegin_F233E8AD47904CC1F37A9692233AD991");
		
		UBP_Action_Player_StandardAttack_C_OnNotifyBegin_F233E8AD47904CC1F37A9692233AD991_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnInterrupted_F233E8AD47904CC1F37A9692233AD991
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnInterrupted_F233E8AD47904CC1F37A9692233AD991(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnInterrupted_F233E8AD47904CC1F37A9692233AD991");
		
		UBP_Action_Player_StandardAttack_C_OnInterrupted_F233E8AD47904CC1F37A9692233AD991_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBlendOut_F233E8AD47904CC1F37A9692233AD991
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnBlendOut_F233E8AD47904CC1F37A9692233AD991(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBlendOut_F233E8AD47904CC1F37A9692233AD991");
		
		UBP_Action_Player_StandardAttack_C_OnBlendOut_F233E8AD47904CC1F37A9692233AD991_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnCompleted_F233E8AD47904CC1F37A9692233AD991
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnCompleted_F233E8AD47904CC1F37A9692233AD991(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnCompleted_F233E8AD47904CC1F37A9692233AD991");
		
		UBP_Action_Player_StandardAttack_C_OnCompleted_F233E8AD47904CC1F37A9692233AD991_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnFailedToPlay_E1A1DDFE4DCCE2EF357289BF63770AFE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnFailedToPlay_E1A1DDFE4DCCE2EF357289BF63770AFE(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnFailedToPlay_E1A1DDFE4DCCE2EF357289BF63770AFE");
		
		UBP_Action_Player_StandardAttack_C_OnFailedToPlay_E1A1DDFE4DCCE2EF357289BF63770AFE_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnSectionChanged_E1A1DDFE4DCCE2EF357289BF63770AFE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SectionName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnSectionChanged_E1A1DDFE4DCCE2EF357289BF63770AFE(const class FName& SectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnSectionChanged_E1A1DDFE4DCCE2EF357289BF63770AFE");
		
		UBP_Action_Player_StandardAttack_C_OnSectionChanged_E1A1DDFE4DCCE2EF357289BF63770AFE_Params params {};
		params.SectionName = SectionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyEnd_E1A1DDFE4DCCE2EF357289BF63770AFE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnNotifyEnd_E1A1DDFE4DCCE2EF357289BF63770AFE(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyEnd_E1A1DDFE4DCCE2EF357289BF63770AFE");
		
		UBP_Action_Player_StandardAttack_C_OnNotifyEnd_E1A1DDFE4DCCE2EF357289BF63770AFE_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyBegin_E1A1DDFE4DCCE2EF357289BF63770AFE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnNotifyBegin_E1A1DDFE4DCCE2EF357289BF63770AFE(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyBegin_E1A1DDFE4DCCE2EF357289BF63770AFE");
		
		UBP_Action_Player_StandardAttack_C_OnNotifyBegin_E1A1DDFE4DCCE2EF357289BF63770AFE_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnInterrupted_E1A1DDFE4DCCE2EF357289BF63770AFE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnInterrupted_E1A1DDFE4DCCE2EF357289BF63770AFE(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnInterrupted_E1A1DDFE4DCCE2EF357289BF63770AFE");
		
		UBP_Action_Player_StandardAttack_C_OnInterrupted_E1A1DDFE4DCCE2EF357289BF63770AFE_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBlendOut_E1A1DDFE4DCCE2EF357289BF63770AFE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnBlendOut_E1A1DDFE4DCCE2EF357289BF63770AFE(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBlendOut_E1A1DDFE4DCCE2EF357289BF63770AFE");
		
		UBP_Action_Player_StandardAttack_C_OnBlendOut_E1A1DDFE4DCCE2EF357289BF63770AFE_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnCompleted_E1A1DDFE4DCCE2EF357289BF63770AFE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnCompleted_E1A1DDFE4DCCE2EF357289BF63770AFE(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnCompleted_E1A1DDFE4DCCE2EF357289BF63770AFE");
		
		UBP_Action_Player_StandardAttack_C_OnCompleted_E1A1DDFE4DCCE2EF357289BF63770AFE_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnFailedToPlay_2C92C94A4CEE5F8D0F1A8CACB22A346A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnFailedToPlay_2C92C94A4CEE5F8D0F1A8CACB22A346A(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnFailedToPlay_2C92C94A4CEE5F8D0F1A8CACB22A346A");
		
		UBP_Action_Player_StandardAttack_C_OnFailedToPlay_2C92C94A4CEE5F8D0F1A8CACB22A346A_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnSectionChanged_2C92C94A4CEE5F8D0F1A8CACB22A346A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SectionName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnSectionChanged_2C92C94A4CEE5F8D0F1A8CACB22A346A(const class FName& SectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnSectionChanged_2C92C94A4CEE5F8D0F1A8CACB22A346A");
		
		UBP_Action_Player_StandardAttack_C_OnSectionChanged_2C92C94A4CEE5F8D0F1A8CACB22A346A_Params params {};
		params.SectionName = SectionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyEnd_2C92C94A4CEE5F8D0F1A8CACB22A346A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnNotifyEnd_2C92C94A4CEE5F8D0F1A8CACB22A346A(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyEnd_2C92C94A4CEE5F8D0F1A8CACB22A346A");
		
		UBP_Action_Player_StandardAttack_C_OnNotifyEnd_2C92C94A4CEE5F8D0F1A8CACB22A346A_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyBegin_2C92C94A4CEE5F8D0F1A8CACB22A346A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnNotifyBegin_2C92C94A4CEE5F8D0F1A8CACB22A346A(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyBegin_2C92C94A4CEE5F8D0F1A8CACB22A346A");
		
		UBP_Action_Player_StandardAttack_C_OnNotifyBegin_2C92C94A4CEE5F8D0F1A8CACB22A346A_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnInterrupted_2C92C94A4CEE5F8D0F1A8CACB22A346A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnInterrupted_2C92C94A4CEE5F8D0F1A8CACB22A346A(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnInterrupted_2C92C94A4CEE5F8D0F1A8CACB22A346A");
		
		UBP_Action_Player_StandardAttack_C_OnInterrupted_2C92C94A4CEE5F8D0F1A8CACB22A346A_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBlendOut_2C92C94A4CEE5F8D0F1A8CACB22A346A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnBlendOut_2C92C94A4CEE5F8D0F1A8CACB22A346A(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBlendOut_2C92C94A4CEE5F8D0F1A8CACB22A346A");
		
		UBP_Action_Player_StandardAttack_C_OnBlendOut_2C92C94A4CEE5F8D0F1A8CACB22A346A_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnCompleted_2C92C94A4CEE5F8D0F1A8CACB22A346A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnCompleted_2C92C94A4CEE5F8D0F1A8CACB22A346A(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnCompleted_2C92C94A4CEE5F8D0F1A8CACB22A346A");
		
		UBP_Action_Player_StandardAttack_C_OnCompleted_2C92C94A4CEE5F8D0F1A8CACB22A346A_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnConstruct
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     InitParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::OnConstruct(class UCustomActionParamsBase* InitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnConstruct");
		
		UBP_Action_Player_StandardAttack_C_OnConstruct_Params params {};
		params.InitParams = InitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnEnd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Player_StandardAttack_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnEnd");
		
		UBP_Action_Player_StandardAttack_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Player_StandardAttack_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBegin");
		
		UBP_Action_Player_StandardAttack_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.ExecuteUbergraph_BP_Action_Player_StandardAttack
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttack_C::ExecuteUbergraph_BP_Action_Player_StandardAttack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.ExecuteUbergraph_BP_Action_Player_StandardAttack");
		
		UBP_Action_Player_StandardAttack_C_ExecuteUbergraph_BP_Action_Player_StandardAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Player_StandardAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Player_StandardAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C");
		return ptr;
	}

}


