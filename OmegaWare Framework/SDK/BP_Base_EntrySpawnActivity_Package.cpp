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
	 * 		Name   -> Function BP_Base_EntrySpawnActivity.BP_Base_EntrySpawnActivity_C.On Participant Will Be Received
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_EntrySpawnActivity_C::OnParticipantWillBeReceived(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntrySpawnActivity.BP_Base_EntrySpawnActivity_C.On Participant Will Be Received");
		
		ABP_Base_EntrySpawnActivity_C_OnParticipantWillBeReceived_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_EntrySpawnActivity.BP_Base_EntrySpawnActivity_C.On zombie Can Be Released
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_EntrySpawnActivity_C::OnzombieCanBeReleased(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntrySpawnActivity.BP_Base_EntrySpawnActivity_C.On zombie Can Be Released");
		
		ABP_Base_EntrySpawnActivity_C_OnzombieCanBeReleased_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_EntrySpawnActivity.BP_Base_EntrySpawnActivity_C.ParticipantReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_EntrySpawnActivity_C::ParticipantReceived(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntrySpawnActivity.BP_Base_EntrySpawnActivity_C.ParticipantReceived");
		
		ABP_Base_EntrySpawnActivity_C_ParticipantReceived_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_EntrySpawnActivity.BP_Base_EntrySpawnActivity_C.ExecuteUbergraph_BP_Base_EntrySpawnActivity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_EntrySpawnActivity_C::ExecuteUbergraph_BP_Base_EntrySpawnActivity(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntrySpawnActivity.BP_Base_EntrySpawnActivity_C.ExecuteUbergraph_BP_Base_EntrySpawnActivity");
		
		ABP_Base_EntrySpawnActivity_C_ExecuteUbergraph_BP_Base_EntrySpawnActivity_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_EntrySpawnActivity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_EntrySpawnActivity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_EntrySpawnActivity.BP_Base_EntrySpawnActivity_C");
		return ptr;
	}

}


