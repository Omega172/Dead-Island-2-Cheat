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
	 * 		Name   -> Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.SetOwnersKnowledgeBaseComponent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_CombatAggro_C::SetOwnersKnowledgeBaseComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.SetOwnersKnowledgeBaseComponent");
		
		UBPC_Base_CombatAggro_C_SetOwnersKnowledgeBaseComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.CombatTargetDiedFactDurationFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_CombatAggro_C::CombatTargetDiedFactDurationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.CombatTargetDiedFactDurationFinished");
		
		UBPC_Base_CombatAggro_C_CombatTargetDiedFactDurationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.EndCombatTargetDiedStim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_CombatAggro_C::EndCombatTargetDiedStim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.EndCombatTargetDiedStim");
		
		UBPC_Base_CombatAggro_C_EndCombatTargetDiedStim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.BeginCombatTargetDiedStim
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_CombatAggro_C::BeginCombatTargetDiedStim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.BeginCombatTargetDiedStim");
		
		UBPC_Base_CombatAggro_C_BeginCombatTargetDiedStim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.GetDICharacterFromComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADICharacter*                                AsDICharacter                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_CombatAggro_C::GetDICharacterFromComponent(class UActorComponent* Component, class ADICharacter** AsDICharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.GetDICharacterFromComponent");
		
		UBPC_Base_CombatAggro_C_GetDICharacterFromComponent_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsDICharacter != nullptr)
			*AsDICharacter = params.AsDICharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.OnOwnersCombatTargetChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCombatTargetComponent*                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_CombatAggro_C::OnOwnersCombatTargetChanged(class UCombatTargetComponent* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.OnOwnersCombatTargetChanged");
		
		UBPC_Base_CombatAggro_C_OnOwnersCombatTargetChanged_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_Base_CombatAggro_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.ReceiveBeginPlay");
		
		UBPC_Base_CombatAggro_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.ExecuteUbergraph_BPC_Base_CombatAggro
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_CombatAggro_C::ExecuteUbergraph_BPC_Base_CombatAggro(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.ExecuteUbergraph_BPC_Base_CombatAggro");
		
		UBPC_Base_CombatAggro_C_ExecuteUbergraph_BPC_Base_CombatAggro_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Base_CombatAggro_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Base_CombatAggro_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Base_CombatAggro.BPC_Base_CombatAggro_C");
		return ptr;
	}

}


