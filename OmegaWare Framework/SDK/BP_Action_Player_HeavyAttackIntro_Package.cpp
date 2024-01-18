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
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.ResolveWindup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                WindupToPlay                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::ResolveWindup(class UAnimMontage** WindupToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.ResolveWindup");
		
		UBP_Action_Player_HeavyAttackIntro_C_ResolveWindup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WindupToPlay != nullptr)
			*WindupToPlay = params.WindupToPlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.GetAntic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Continue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::GetAntic(bool* Continue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.GetAntic");
		
		UBP_Action_Player_HeavyAttackIntro_C_GetAntic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Continue != nullptr)
			*Continue = params.Continue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     UserParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::Init(class UCustomActionParamsBase* UserParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.Init");
		
		UBP_Action_Player_HeavyAttackIntro_C_Init_Params params {};
		params.UserParams = UserParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnFailedToPlay_767FC960478F7BA1580F798E3C0CED85
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::OnFailedToPlay_767FC960478F7BA1580F798E3C0CED85(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnFailedToPlay_767FC960478F7BA1580F798E3C0CED85");
		
		UBP_Action_Player_HeavyAttackIntro_C_OnFailedToPlay_767FC960478F7BA1580F798E3C0CED85_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnSectionChanged_767FC960478F7BA1580F798E3C0CED85
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SectionName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::OnSectionChanged_767FC960478F7BA1580F798E3C0CED85(const class FName& SectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnSectionChanged_767FC960478F7BA1580F798E3C0CED85");
		
		UBP_Action_Player_HeavyAttackIntro_C_OnSectionChanged_767FC960478F7BA1580F798E3C0CED85_Params params {};
		params.SectionName = SectionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnNotifyEnd_767FC960478F7BA1580F798E3C0CED85
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::OnNotifyEnd_767FC960478F7BA1580F798E3C0CED85(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnNotifyEnd_767FC960478F7BA1580F798E3C0CED85");
		
		UBP_Action_Player_HeavyAttackIntro_C_OnNotifyEnd_767FC960478F7BA1580F798E3C0CED85_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnNotifyBegin_767FC960478F7BA1580F798E3C0CED85
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::OnNotifyBegin_767FC960478F7BA1580F798E3C0CED85(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnNotifyBegin_767FC960478F7BA1580F798E3C0CED85");
		
		UBP_Action_Player_HeavyAttackIntro_C_OnNotifyBegin_767FC960478F7BA1580F798E3C0CED85_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnInterrupted_767FC960478F7BA1580F798E3C0CED85
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::OnInterrupted_767FC960478F7BA1580F798E3C0CED85(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnInterrupted_767FC960478F7BA1580F798E3C0CED85");
		
		UBP_Action_Player_HeavyAttackIntro_C_OnInterrupted_767FC960478F7BA1580F798E3C0CED85_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnBlendOut_767FC960478F7BA1580F798E3C0CED85
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::OnBlendOut_767FC960478F7BA1580F798E3C0CED85(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnBlendOut_767FC960478F7BA1580F798E3C0CED85");
		
		UBP_Action_Player_HeavyAttackIntro_C_OnBlendOut_767FC960478F7BA1580F798E3C0CED85_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnCompleted_767FC960478F7BA1580F798E3C0CED85
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::OnCompleted_767FC960478F7BA1580F798E3C0CED85(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnCompleted_767FC960478F7BA1580F798E3C0CED85");
		
		UBP_Action_Player_HeavyAttackIntro_C_OnCompleted_767FC960478F7BA1580F798E3C0CED85_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnFailedToPlay_30A9C0DF4D407C341A89718DA8E7D4F7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::OnFailedToPlay_30A9C0DF4D407C341A89718DA8E7D4F7(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnFailedToPlay_30A9C0DF4D407C341A89718DA8E7D4F7");
		
		UBP_Action_Player_HeavyAttackIntro_C_OnFailedToPlay_30A9C0DF4D407C341A89718DA8E7D4F7_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnSectionChanged_30A9C0DF4D407C341A89718DA8E7D4F7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SectionName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::OnSectionChanged_30A9C0DF4D407C341A89718DA8E7D4F7(const class FName& SectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnSectionChanged_30A9C0DF4D407C341A89718DA8E7D4F7");
		
		UBP_Action_Player_HeavyAttackIntro_C_OnSectionChanged_30A9C0DF4D407C341A89718DA8E7D4F7_Params params {};
		params.SectionName = SectionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnNotifyEnd_30A9C0DF4D407C341A89718DA8E7D4F7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::OnNotifyEnd_30A9C0DF4D407C341A89718DA8E7D4F7(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnNotifyEnd_30A9C0DF4D407C341A89718DA8E7D4F7");
		
		UBP_Action_Player_HeavyAttackIntro_C_OnNotifyEnd_30A9C0DF4D407C341A89718DA8E7D4F7_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnNotifyBegin_30A9C0DF4D407C341A89718DA8E7D4F7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::OnNotifyBegin_30A9C0DF4D407C341A89718DA8E7D4F7(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnNotifyBegin_30A9C0DF4D407C341A89718DA8E7D4F7");
		
		UBP_Action_Player_HeavyAttackIntro_C_OnNotifyBegin_30A9C0DF4D407C341A89718DA8E7D4F7_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnInterrupted_30A9C0DF4D407C341A89718DA8E7D4F7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::OnInterrupted_30A9C0DF4D407C341A89718DA8E7D4F7(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnInterrupted_30A9C0DF4D407C341A89718DA8E7D4F7");
		
		UBP_Action_Player_HeavyAttackIntro_C_OnInterrupted_30A9C0DF4D407C341A89718DA8E7D4F7_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnBlendOut_30A9C0DF4D407C341A89718DA8E7D4F7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::OnBlendOut_30A9C0DF4D407C341A89718DA8E7D4F7(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnBlendOut_30A9C0DF4D407C341A89718DA8E7D4F7");
		
		UBP_Action_Player_HeavyAttackIntro_C_OnBlendOut_30A9C0DF4D407C341A89718DA8E7D4F7_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnCompleted_30A9C0DF4D407C341A89718DA8E7D4F7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::OnCompleted_30A9C0DF4D407C341A89718DA8E7D4F7(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnCompleted_30A9C0DF4D407C341A89718DA8E7D4F7");
		
		UBP_Action_Player_HeavyAttackIntro_C_OnCompleted_30A9C0DF4D407C341A89718DA8E7D4F7_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     InitParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::OnConstruct(class UCustomActionParamsBase* InitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnConstruct");
		
		UBP_Action_Player_HeavyAttackIntro_C_OnConstruct_Params params {};
		params.InitParams = InitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnEnd");
		
		UBP_Action_Player_HeavyAttackIntro_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.OnBegin");
		
		UBP_Action_Player_HeavyAttackIntro_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.ExecuteUbergraph_BP_Action_Player_HeavyAttackIntro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_HeavyAttackIntro_C::ExecuteUbergraph_BP_Action_Player_HeavyAttackIntro(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C.ExecuteUbergraph_BP_Action_Player_HeavyAttackIntro");
		
		UBP_Action_Player_HeavyAttackIntro_C_ExecuteUbergraph_BP_Action_Player_HeavyAttackIntro_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Player_HeavyAttackIntro_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Player_HeavyAttackIntro_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C");
		return ptr;
	}

}


