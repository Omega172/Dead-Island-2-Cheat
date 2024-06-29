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
	 * 		Name   -> Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.Evaluate Body Part Expression Required to Live
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_MultiPartHealth_AI_C::EvaluateBodyPartExpressionRequiredtoLive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.Evaluate Body Part Expression Required to Live");
		
		UBPC_Base_MultiPartHealth_AI_C_EvaluateBodyPartExpressionRequiredtoLive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.OnBodyPartKilled
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BodyPartName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBodyPartState*                              PartState                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_MultiPartHealth_AI_C::OnBodyPartKilled(class AActor* DamagedActor, const class FName& BodyPartName, class UBodyPartState* PartState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.OnBodyPartKilled");
		
		UBPC_Base_MultiPartHealth_AI_C_OnBodyPartKilled_Params params {};
		params.DamagedActor = DamagedActor;
		params.BodyPartName = BodyPartName;
		params.PartState = PartState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.AuthorityOnDismemberment
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      LastDamager                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FEventInstigator                            LastInstigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBPC_Base_MultiPartHealth_AI_C::AuthorityOnDismemberment(class AActor* LastDamager, const struct FEventInstigator& LastInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.AuthorityOnDismemberment");
		
		UBPC_Base_MultiPartHealth_AI_C_AuthorityOnDismemberment_Params params {};
		params.LastDamager = LastDamager;
		params.LastInstigator = LastInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_Base_MultiPartHealth_AI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.ReceiveBeginPlay");
		
		UBPC_Base_MultiPartHealth_AI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.OnActorJustDamagedDelegate_Event
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FEventInstigator                            InstigatedBy                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDSDamageData                               DSDamageData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBPC_Base_MultiPartHealth_AI_C::OnActorJustDamagedDelegate_Event(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, const struct FEventInstigator& InstigatedBy, class AActor* DamageCauser, const struct FDSDamageData& DSDamageData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.OnActorJustDamagedDelegate_Event");
		
		UBPC_Base_MultiPartHealth_AI_C_OnActorJustDamagedDelegate_Event_Params params {};
		params.DamagedActor = DamagedActor;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		params.DSDamageData = DSDamageData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.ExecuteUbergraph_BPC_Base_MultiPartHealth_AI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_MultiPartHealth_AI_C::ExecuteUbergraph_BPC_Base_MultiPartHealth_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.ExecuteUbergraph_BPC_Base_MultiPartHealth_AI");
		
		UBPC_Base_MultiPartHealth_AI_C_ExecuteUbergraph_BPC_Base_MultiPartHealth_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Base_MultiPartHealth_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Base_MultiPartHealth_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C");
		return ptr;
	}

}


