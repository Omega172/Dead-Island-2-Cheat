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
	 * 		Name   -> Function BP_Base_EntryActivity_Vent.BP_Base_EntryActivity_Vent_C.Bind Opening
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_EntryActivity_Vent_C::BindOpening()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntryActivity_Vent.BP_Base_EntryActivity_Vent_C.Bind Opening");
		
		ABP_Base_EntryActivity_Vent_C_BindOpening_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_EntryActivity_Vent.BP_Base_EntryActivity_Vent_C.ConstructBoundActors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_EntryActivity_Vent_C::ConstructBoundActors(class UParticipantSlotComponent** ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntryActivity_Vent.BP_Base_EntryActivity_Vent_C.ConstructBoundActors");
		
		ABP_Base_EntryActivity_Vent_C_ConstructBoundActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParticipantSlot != nullptr)
			*ParticipantSlot = params.ParticipantSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_EntryActivity_Vent.BP_Base_EntryActivity_Vent_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_EntryActivity_Vent_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntryActivity_Vent.BP_Base_EntryActivity_Vent_C.UserConstructionScript");
		
		ABP_Base_EntryActivity_Vent_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_EntryActivity_Vent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_EntryActivity_Vent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_EntryActivity_Vent.BP_Base_EntryActivity_Vent_C");
		return ptr;
	}

}


