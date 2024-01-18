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
	 * 		Name   -> Function BP_Base_HoleCuttingEntryActivity.BP_Base_HoleCuttingEntryActivity_C.SetLightingOverrides
	 * 		Flags  -> ()
	 */
	void ABP_Base_HoleCuttingEntryActivity_C::SetLightingOverrides()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HoleCuttingEntryActivity.BP_Base_HoleCuttingEntryActivity_C.SetLightingOverrides");
		
		ABP_Base_HoleCuttingEntryActivity_C_SetLightingOverrides_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HoleCuttingEntryActivity.BP_Base_HoleCuttingEntryActivity_C.ConstructBoundActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_HoleCuttingEntryActivity_C::ConstructBoundActors(class UParticipantSlotComponent** ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HoleCuttingEntryActivity.BP_Base_HoleCuttingEntryActivity_C.ConstructBoundActors");
		
		ABP_Base_HoleCuttingEntryActivity_C_ConstructBoundActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParticipantSlot != nullptr)
			*ParticipantSlot = params.ParticipantSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HoleCuttingEntryActivity.BP_Base_HoleCuttingEntryActivity_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Base_HoleCuttingEntryActivity_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HoleCuttingEntryActivity.BP_Base_HoleCuttingEntryActivity_C.UserConstructionScript");
		
		ABP_Base_HoleCuttingEntryActivity_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HoleCuttingEntryActivity.BP_Base_HoleCuttingEntryActivity_C.On Participant Will Be Received
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_HoleCuttingEntryActivity_C::OnParticipantWillBeReceived(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HoleCuttingEntryActivity.BP_Base_HoleCuttingEntryActivity_C.On Participant Will Be Received");
		
		ABP_Base_HoleCuttingEntryActivity_C_OnParticipantWillBeReceived_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HoleCuttingEntryActivity.BP_Base_HoleCuttingEntryActivity_C.ExecuteUbergraph_BP_Base_HoleCuttingEntryActivity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_HoleCuttingEntryActivity_C::ExecuteUbergraph_BP_Base_HoleCuttingEntryActivity(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HoleCuttingEntryActivity.BP_Base_HoleCuttingEntryActivity_C.ExecuteUbergraph_BP_Base_HoleCuttingEntryActivity");
		
		ABP_Base_HoleCuttingEntryActivity_C_ExecuteUbergraph_BP_Base_HoleCuttingEntryActivity_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_HoleCuttingEntryActivity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_HoleCuttingEntryActivity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_HoleCuttingEntryActivity.BP_Base_HoleCuttingEntryActivity_C");
		return ptr;
	}

}


