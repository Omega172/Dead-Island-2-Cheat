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
	 * 		Name   -> Function BP_SpawnActivity_VegetationBase.BP_SpawnActivity_VegetationBase_C.On Participant Will Be Received
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpawnActivity_VegetationBase_C::OnParticipantWillBeReceived(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpawnActivity_VegetationBase.BP_SpawnActivity_VegetationBase_C.On Participant Will Be Received");
		
		ABP_SpawnActivity_VegetationBase_C_OnParticipantWillBeReceived_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_SpawnActivity_VegetationBase.BP_SpawnActivity_VegetationBase_C.ExecuteUbergraph_BP_SpawnActivity_VegetationBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpawnActivity_VegetationBase_C::ExecuteUbergraph_BP_SpawnActivity_VegetationBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpawnActivity_VegetationBase.BP_SpawnActivity_VegetationBase_C.ExecuteUbergraph_BP_SpawnActivity_VegetationBase");
		
		ABP_SpawnActivity_VegetationBase_C_ExecuteUbergraph_BP_SpawnActivity_VegetationBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SpawnActivity_VegetationBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SpawnActivity_VegetationBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawnActivity_VegetationBase.BP_SpawnActivity_VegetationBase_C");
		return ptr;
	}

}


