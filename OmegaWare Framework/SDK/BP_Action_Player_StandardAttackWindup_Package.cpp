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
	 * 		Name   -> Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnBeginEarly
	 * 		Flags  -> ()
	 */
	bool UBP_Action_Player_StandardAttackWindup_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnBeginEarly");
		
		UBP_Action_Player_StandardAttackWindup_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.Resolve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterActionResolveParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		ECharacterActionResolution                         OutResolution                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutQueuedTimeout                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttackWindup_C::Resolve(const struct FCharacterActionResolveParams& Params, ECharacterActionResolution* OutResolution, float* OutQueuedTimeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.Resolve");
		
		UBP_Action_Player_StandardAttackWindup_C_Resolve_Params params {};
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttackWindup_C::Init(class UObject* Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.Init");
		
		UBP_Action_Player_StandardAttackWindup_C_Init_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnFailedToPlay_A887B1C74DEF4227CF373F8B2E31778E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttackWindup_C::OnFailedToPlay_A887B1C74DEF4227CF373F8B2E31778E(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnFailedToPlay_A887B1C74DEF4227CF373F8B2E31778E");
		
		UBP_Action_Player_StandardAttackWindup_C_OnFailedToPlay_A887B1C74DEF4227CF373F8B2E31778E_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnSectionChanged_A887B1C74DEF4227CF373F8B2E31778E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SectionName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttackWindup_C::OnSectionChanged_A887B1C74DEF4227CF373F8B2E31778E(const class FName& SectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnSectionChanged_A887B1C74DEF4227CF373F8B2E31778E");
		
		UBP_Action_Player_StandardAttackWindup_C_OnSectionChanged_A887B1C74DEF4227CF373F8B2E31778E_Params params {};
		params.SectionName = SectionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnNotifyEnd_A887B1C74DEF4227CF373F8B2E31778E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttackWindup_C::OnNotifyEnd_A887B1C74DEF4227CF373F8B2E31778E(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnNotifyEnd_A887B1C74DEF4227CF373F8B2E31778E");
		
		UBP_Action_Player_StandardAttackWindup_C_OnNotifyEnd_A887B1C74DEF4227CF373F8B2E31778E_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnNotifyBegin_A887B1C74DEF4227CF373F8B2E31778E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttackWindup_C::OnNotifyBegin_A887B1C74DEF4227CF373F8B2E31778E(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnNotifyBegin_A887B1C74DEF4227CF373F8B2E31778E");
		
		UBP_Action_Player_StandardAttackWindup_C_OnNotifyBegin_A887B1C74DEF4227CF373F8B2E31778E_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnInterrupted_A887B1C74DEF4227CF373F8B2E31778E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttackWindup_C::OnInterrupted_A887B1C74DEF4227CF373F8B2E31778E(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnInterrupted_A887B1C74DEF4227CF373F8B2E31778E");
		
		UBP_Action_Player_StandardAttackWindup_C_OnInterrupted_A887B1C74DEF4227CF373F8B2E31778E_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnBlendOut_A887B1C74DEF4227CF373F8B2E31778E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttackWindup_C::OnBlendOut_A887B1C74DEF4227CF373F8B2E31778E(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnBlendOut_A887B1C74DEF4227CF373F8B2E31778E");
		
		UBP_Action_Player_StandardAttackWindup_C_OnBlendOut_A887B1C74DEF4227CF373F8B2E31778E_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnCompleted_A887B1C74DEF4227CF373F8B2E31778E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttackWindup_C::OnCompleted_A887B1C74DEF4227CF373F8B2E31778E(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnCompleted_A887B1C74DEF4227CF373F8B2E31778E");
		
		UBP_Action_Player_StandardAttackWindup_C_OnCompleted_A887B1C74DEF4227CF373F8B2E31778E_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Player_StandardAttackWindup_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnBegin");
		
		UBP_Action_Player_StandardAttackWindup_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     InitParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttackWindup_C::OnConstruct(class UCustomActionParamsBase* InitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnConstruct");
		
		UBP_Action_Player_StandardAttackWindup_C_OnConstruct_Params params {};
		params.InitParams = InitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Player_StandardAttackWindup_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.OnEnd");
		
		UBP_Action_Player_StandardAttackWindup_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.ExecuteUbergraph_BP_Action_Player_StandardAttackWindup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_StandardAttackWindup_C::ExecuteUbergraph_BP_Action_Player_StandardAttackWindup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C.ExecuteUbergraph_BP_Action_Player_StandardAttackWindup");
		
		UBP_Action_Player_StandardAttackWindup_C_ExecuteUbergraph_BP_Action_Player_StandardAttackWindup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Player_StandardAttackWindup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Player_StandardAttackWindup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C");
		return ptr;
	}

}


