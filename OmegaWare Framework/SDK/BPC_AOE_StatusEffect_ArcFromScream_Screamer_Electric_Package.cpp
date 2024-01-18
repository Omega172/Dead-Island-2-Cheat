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
	 * 		Name   -> Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.IsActorWithinScreamCone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AffectedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C::IsActorWithinScreamCone(class AActor* AffectedActor, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.IsActorWithinScreamCone");
		
		UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C_IsActorWithinScreamCone_Params params {};
		params.AffectedActor = AffectedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.SetNumberOfAIWithinScreamCone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Add                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ADIAICharacter*                              AffectedDIAICharacter                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C::SetNumberOfAIWithinScreamCone(bool Add, class ADIAICharacter* AffectedDIAICharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.SetNumberOfAIWithinScreamCone");
		
		UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C_SetNumberOfAIWithinScreamCone_Params params {};
		params.Add = Add;
		params.AffectedDIAICharacter = AffectedDIAICharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.CreateParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AffectedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OwnerLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C::CreateParticle(class AActor* AffectedActor, const struct FVector& TargetLocation, const struct FVector& OwnerLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.CreateParticle");
		
		UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C_CreateParticle_Params params {};
		params.AffectedActor = AffectedActor;
		params.TargetLocation = TargetLocation;
		params.OwnerLocation = OwnerLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.GetOwnersLocationAndBoneName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C::GetOwnersLocationAndBoneName(struct FVector* Location, class FName* BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.GetOwnersLocationAndBoneName");
		
		UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C_GetOwnersLocationAndBoneName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (BoneName != nullptr)
			*BoneName = params.BoneName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.MeetsDirectArcConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AffectedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C::MeetsDirectArcConditions(class AActor* AffectedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.MeetsDirectArcConditions");
		
		UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C_MeetsDirectArcConditions_Params params {};
		params.AffectedActor = AffectedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.OnActorEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C::OnActorEnter(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.OnActorEnter");
		
		UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C_OnActorEnter_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.OnActorExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C::OnActorExit(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.OnActorExit");
		
		UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C_OnActorExit_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.ExecuteUbergraph_BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C::ExecuteUbergraph_BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.ExecuteUbergraph_BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric");
		
		UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C_ExecuteUbergraph_BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C");
		return ptr;
	}

}


