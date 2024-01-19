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
	 * 		Name   -> Function BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C.MeetsDirectArcConditions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AffectedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C::MeetsDirectArcConditions(class AActor* AffectedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C.MeetsDirectArcConditions");
		
		UBPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C_MeetsDirectArcConditions_Params params {};
		params.AffectedActor = AffectedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C.ReceiveBeginPlay");
		
		UBPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C.ExecuteUbergraph_BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C::ExecuteUbergraph_BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C.ExecuteUbergraph_BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric");
		
		UBPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C_ExecuteUbergraph_BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C");
		return ptr;
	}

}


