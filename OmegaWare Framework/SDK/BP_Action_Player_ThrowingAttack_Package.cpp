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
	 * 		Name   -> Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.CheckStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanTakeAction                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Player_ThrowingAttack_C::CheckStamina(bool* CanTakeAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.CheckStamina");
		
		UBP_Action_Player_ThrowingAttack_C_CheckStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanTakeAction != nullptr)
			*CanTakeAction = params.CanTakeAction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnBeginEarly
	 * 		Flags  -> ()
	 */
	bool UBP_Action_Player_ThrowingAttack_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnBeginEarly");
		
		UBP_Action_Player_ThrowingAttack_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.MakeProjectile
	 * 		Flags  -> ()
	 */
	void UBP_Action_Player_ThrowingAttack_C::MakeProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.MakeProjectile");
		
		UBP_Action_Player_ThrowingAttack_C_MakeProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnFailedToPlay_DF819F014193E18B5C179D975AAA4639
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_ThrowingAttack_C::OnFailedToPlay_DF819F014193E18B5C179D975AAA4639(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnFailedToPlay_DF819F014193E18B5C179D975AAA4639");
		
		UBP_Action_Player_ThrowingAttack_C_OnFailedToPlay_DF819F014193E18B5C179D975AAA4639_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnSectionChanged_DF819F014193E18B5C179D975AAA4639
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SectionName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_ThrowingAttack_C::OnSectionChanged_DF819F014193E18B5C179D975AAA4639(const class FName& SectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnSectionChanged_DF819F014193E18B5C179D975AAA4639");
		
		UBP_Action_Player_ThrowingAttack_C_OnSectionChanged_DF819F014193E18B5C179D975AAA4639_Params params {};
		params.SectionName = SectionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnNotifyEnd_DF819F014193E18B5C179D975AAA4639
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_ThrowingAttack_C::OnNotifyEnd_DF819F014193E18B5C179D975AAA4639(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnNotifyEnd_DF819F014193E18B5C179D975AAA4639");
		
		UBP_Action_Player_ThrowingAttack_C_OnNotifyEnd_DF819F014193E18B5C179D975AAA4639_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnNotifyBegin_DF819F014193E18B5C179D975AAA4639
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_ThrowingAttack_C::OnNotifyBegin_DF819F014193E18B5C179D975AAA4639(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnNotifyBegin_DF819F014193E18B5C179D975AAA4639");
		
		UBP_Action_Player_ThrowingAttack_C_OnNotifyBegin_DF819F014193E18B5C179D975AAA4639_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnInterrupted_DF819F014193E18B5C179D975AAA4639
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_ThrowingAttack_C::OnInterrupted_DF819F014193E18B5C179D975AAA4639(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnInterrupted_DF819F014193E18B5C179D975AAA4639");
		
		UBP_Action_Player_ThrowingAttack_C_OnInterrupted_DF819F014193E18B5C179D975AAA4639_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnBlendOut_DF819F014193E18B5C179D975AAA4639
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_ThrowingAttack_C::OnBlendOut_DF819F014193E18B5C179D975AAA4639(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnBlendOut_DF819F014193E18B5C179D975AAA4639");
		
		UBP_Action_Player_ThrowingAttack_C_OnBlendOut_DF819F014193E18B5C179D975AAA4639_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnCompleted_DF819F014193E18B5C179D975AAA4639
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_ThrowingAttack_C::OnCompleted_DF819F014193E18B5C179D975AAA4639(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnCompleted_DF819F014193E18B5C179D975AAA4639");
		
		UBP_Action_Player_ThrowingAttack_C_OnCompleted_DF819F014193E18B5C179D975AAA4639_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     InitParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_ThrowingAttack_C::OnConstruct(class UCustomActionParamsBase* InitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnConstruct");
		
		UBP_Action_Player_ThrowingAttack_C_OnConstruct_Params params {};
		params.InitParams = InitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Player_ThrowingAttack_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.OnBegin");
		
		UBP_Action_Player_ThrowingAttack_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.ThrowWeapon
	 * 		Flags  -> ()
	 */
	void UBP_Action_Player_ThrowingAttack_C::ThrowWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.ThrowWeapon");
		
		UBP_Action_Player_ThrowingAttack_C_ThrowWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.ExecuteUbergraph_BP_Action_Player_ThrowingAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Player_ThrowingAttack_C::ExecuteUbergraph_BP_Action_Player_ThrowingAttack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C.ExecuteUbergraph_BP_Action_Player_ThrowingAttack");
		
		UBP_Action_Player_ThrowingAttack_C_ExecuteUbergraph_BP_Action_Player_ThrowingAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Player_ThrowingAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Player_ThrowingAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C");
		return ptr;
	}

}


