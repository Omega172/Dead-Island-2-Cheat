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
	 * 		Name   -> Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.GenerateInteriorNavlinks
	 * 		Flags  -> ()
	 */
	void ABP_EntryActivity_VanBack_C::GenerateInteriorNavlinks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.GenerateInteriorNavlinks");
		
		ABP_EntryActivity_VanBack_C_GenerateInteriorNavlinks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_EntryActivity_VanBack_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.UserConstructionScript");
		
		ABP_EntryActivity_VanBack_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.OnActivityEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActivityEndedReason                               EndReason                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EntryActivity_VanBack_C::OnActivityEnded(class AActivityActor* Activity, EActivityEndedReason EndReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.OnActivityEnded");
		
		ABP_EntryActivity_VanBack_C_OnActivityEnded_Params params {};
		params.Activity = Activity;
		params.EndReason = EndReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.On Participant Will Be Received
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EntryActivity_VanBack_C::OnParticipantWillBeReceived(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.On Participant Will Be Received");
		
		ABP_EntryActivity_VanBack_C_OnParticipantWillBeReceived_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.ParticipantReleasedDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EntryActivity_VanBack_C::ParticipantReleasedDelegate(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.ParticipantReleasedDelegate");
		
		ABP_EntryActivity_VanBack_C_ParticipantReleasedDelegate_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.ExecuteUbergraph_BP_EntryActivity_VanBack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EntryActivity_VanBack_C::ExecuteUbergraph_BP_EntryActivity_VanBack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.ExecuteUbergraph_BP_EntryActivity_VanBack");
		
		ABP_EntryActivity_VanBack_C_ExecuteUbergraph_BP_EntryActivity_VanBack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_EntryActivity_VanBack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EntryActivity_VanBack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C");
		return ptr;
	}

}


