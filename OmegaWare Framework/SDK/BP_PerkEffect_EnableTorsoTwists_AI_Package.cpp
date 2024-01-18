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
	 * 		Name   -> Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.TorsoTwistDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADICharacter*                                TorsoTwistTargetCharacter                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CapsuleHalfHeight                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CentreLocationWS                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TorsoTwistRequired                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PerkEffect_EnableTorsoTwists_AI_C::TorsoTwistDebug(class ADICharacter* TorsoTwistTargetCharacter, float CapsuleHalfHeight, float CentreLocationWS, bool TorsoTwistRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.TorsoTwistDebug");
		
		UBP_PerkEffect_EnableTorsoTwists_AI_C_TorsoTwistDebug_Params params {};
		params.TorsoTwistTargetCharacter = TorsoTwistTargetCharacter;
		params.CapsuleHalfHeight = CapsuleHalfHeight;
		params.CentreLocationWS = CentreLocationWS;
		params.TorsoTwistRequired = TorsoTwistRequired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.SetAimTargetOffsetForCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TargetCapsuleHalfHeight                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CentreLocationWS                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_EnableTorsoTwists_AI_C::SetAimTargetOffsetForCharacters(float TargetCapsuleHalfHeight, float CentreLocationWS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.SetAimTargetOffsetForCharacters");
		
		UBP_PerkEffect_EnableTorsoTwists_AI_C_SetAimTargetOffsetForCharacters_Params params {};
		params.TargetCapsuleHalfHeight = TargetCapsuleHalfHeight;
		params.CentreLocationWS = CentreLocationWS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.IsHitTargetLocationWithRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CapsuleHalfHeight                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CentreLocationWS                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_PerkEffect_EnableTorsoTwists_AI_C::IsHitTargetLocationWithRange(float CapsuleHalfHeight, float CentreLocationWS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.IsHitTargetLocationWithRange");
		
		UBP_PerkEffect_EnableTorsoTwists_AI_C_IsHitTargetLocationWithRange_Params params {};
		params.CapsuleHalfHeight = CapsuleHalfHeight;
		params.CentreLocationWS = CentreLocationWS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.GetCharacterTargetCapsuleData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADSCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TargetCapsuleHalfHeight                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TargetCapsuleCentreLocation                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_EnableTorsoTwists_AI_C::GetCharacterTargetCapsuleData(class ADSCharacter* Character, float* TargetCapsuleHalfHeight, float* TargetCapsuleCentreLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.GetCharacterTargetCapsuleData");
		
		UBP_PerkEffect_EnableTorsoTwists_AI_C_GetCharacterTargetCapsuleData_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetCapsuleHalfHeight != nullptr)
			*TargetCapsuleHalfHeight = params.TargetCapsuleHalfHeight;
		if (TargetCapsuleCentreLocation != nullptr)
			*TargetCapsuleCentreLocation = params.TargetCapsuleCentreLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.IsTorsoTwistRequired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_PerkEffect_EnableTorsoTwists_AI_C::IsTorsoTwistRequired(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.IsTorsoTwistRequired");
		
		UBP_PerkEffect_EnableTorsoTwists_AI_C_IsTorsoTwistRequired_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectEndParams                        Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_EnableTorsoTwists_AI_C::OnEnd(const struct FPerkEffectEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.OnEnd");
		
		UBP_PerkEffect_EnableTorsoTwists_AI_C_OnEnd_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.OnStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_EnableTorsoTwists_AI_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.OnStart");
		
		UBP_PerkEffect_EnableTorsoTwists_AI_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.ExecuteUbergraph_BP_PerkEffect_EnableTorsoTwists_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_EnableTorsoTwists_AI_C::ExecuteUbergraph_BP_PerkEffect_EnableTorsoTwists_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.ExecuteUbergraph_BP_PerkEffect_EnableTorsoTwists_AI");
		
		UBP_PerkEffect_EnableTorsoTwists_AI_C_ExecuteUbergraph_BP_PerkEffect_EnableTorsoTwists_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_EnableTorsoTwists_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_EnableTorsoTwists_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C");
		return ptr;
	}

}


