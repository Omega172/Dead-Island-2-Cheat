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
	 * 		Name   -> Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.Resolve
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionResolveParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		ECharacterActionResolution                         OutResolution                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutQueuedTimeout                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_InstantUseItem_PickUp_C::Resolve(const struct FCharacterActionResolveParams& Params, ECharacterActionResolution* OutResolution, float* OutQueuedTimeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.Resolve");
		
		UBP_Action_Player_InstantUseItem_PickUp_C_Resolve_Params params {};
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
	 * 		Name   -> Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.ConsumeItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Base_InstantUsePickup_C*                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_InstantUseItem_PickUp_C::ConsumeItem(class ABP_Base_InstantUsePickup_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.ConsumeItem");
		
		UBP_Action_Player_InstantUseItem_PickUp_C_ConsumeItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.ApplyEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Player_InstantUseItem_PickUp_C::ApplyEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.ApplyEffects");
		
		UBP_Action_Player_InstantUseItem_PickUp_C_ApplyEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnFailedToPlay_63686BC947A0D905815B2A9AEB96C5B4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_InstantUseItem_PickUp_C::OnFailedToPlay_63686BC947A0D905815B2A9AEB96C5B4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnFailedToPlay_63686BC947A0D905815B2A9AEB96C5B4");
		
		UBP_Action_Player_InstantUseItem_PickUp_C_OnFailedToPlay_63686BC947A0D905815B2A9AEB96C5B4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnSectionChanged_63686BC947A0D905815B2A9AEB96C5B4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SectionName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_InstantUseItem_PickUp_C::OnSectionChanged_63686BC947A0D905815B2A9AEB96C5B4(const class FName& SectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnSectionChanged_63686BC947A0D905815B2A9AEB96C5B4");
		
		UBP_Action_Player_InstantUseItem_PickUp_C_OnSectionChanged_63686BC947A0D905815B2A9AEB96C5B4_Params params {};
		params.SectionName = SectionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnNotifyEnd_63686BC947A0D905815B2A9AEB96C5B4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_InstantUseItem_PickUp_C::OnNotifyEnd_63686BC947A0D905815B2A9AEB96C5B4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnNotifyEnd_63686BC947A0D905815B2A9AEB96C5B4");
		
		UBP_Action_Player_InstantUseItem_PickUp_C_OnNotifyEnd_63686BC947A0D905815B2A9AEB96C5B4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnNotifyBegin_63686BC947A0D905815B2A9AEB96C5B4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_InstantUseItem_PickUp_C::OnNotifyBegin_63686BC947A0D905815B2A9AEB96C5B4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnNotifyBegin_63686BC947A0D905815B2A9AEB96C5B4");
		
		UBP_Action_Player_InstantUseItem_PickUp_C_OnNotifyBegin_63686BC947A0D905815B2A9AEB96C5B4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnInterrupted_63686BC947A0D905815B2A9AEB96C5B4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_InstantUseItem_PickUp_C::OnInterrupted_63686BC947A0D905815B2A9AEB96C5B4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnInterrupted_63686BC947A0D905815B2A9AEB96C5B4");
		
		UBP_Action_Player_InstantUseItem_PickUp_C_OnInterrupted_63686BC947A0D905815B2A9AEB96C5B4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnBlendOut_63686BC947A0D905815B2A9AEB96C5B4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_InstantUseItem_PickUp_C::OnBlendOut_63686BC947A0D905815B2A9AEB96C5B4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnBlendOut_63686BC947A0D905815B2A9AEB96C5B4");
		
		UBP_Action_Player_InstantUseItem_PickUp_C_OnBlendOut_63686BC947A0D905815B2A9AEB96C5B4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnCompleted_63686BC947A0D905815B2A9AEB96C5B4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_InstantUseItem_PickUp_C::OnCompleted_63686BC947A0D905815B2A9AEB96C5B4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnCompleted_63686BC947A0D905815B2A9AEB96C5B4");
		
		UBP_Action_Player_InstantUseItem_PickUp_C_OnCompleted_63686BC947A0D905815B2A9AEB96C5B4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Player_InstantUseItem_PickUp_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnBegin");
		
		UBP_Action_Player_InstantUseItem_PickUp_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnConstruct
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     InitParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_InstantUseItem_PickUp_C::OnConstruct(class UCustomActionParamsBase* InitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnConstruct");
		
		UBP_Action_Player_InstantUseItem_PickUp_C_OnConstruct_Params params {};
		params.InitParams = InitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnEnd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Player_InstantUseItem_PickUp_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.OnEnd");
		
		UBP_Action_Player_InstantUseItem_PickUp_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.ExecuteUbergraph_BP_Action_Player_InstantUseItem_PickUp
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_InstantUseItem_PickUp_C::ExecuteUbergraph_BP_Action_Player_InstantUseItem_PickUp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C.ExecuteUbergraph_BP_Action_Player_InstantUseItem_PickUp");
		
		UBP_Action_Player_InstantUseItem_PickUp_C_ExecuteUbergraph_BP_Action_Player_InstantUseItem_PickUp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Player_InstantUseItem_PickUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Player_InstantUseItem_PickUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C");
		return ptr;
	}

}


