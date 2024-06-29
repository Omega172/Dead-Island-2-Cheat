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
	 * 		Name   -> Function BP_BaseEntryActivity_Manhole.BP_BaseEntryActivity_Manhole_C.ConstructBoundActors
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseEntryActivity_Manhole_C::ConstructBoundActors(class UParticipantSlotComponent** ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseEntryActivity_Manhole.BP_BaseEntryActivity_Manhole_C.ConstructBoundActors");
		
		ABP_BaseEntryActivity_Manhole_C_ConstructBoundActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParticipantSlot != nullptr)
			*ParticipantSlot = params.ParticipantSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BaseEntryActivity_Manhole_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BaseEntryActivity_Manhole_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseEntryActivity_Manhole.BP_BaseEntryActivity_Manhole_C");
		return ptr;
	}

}


