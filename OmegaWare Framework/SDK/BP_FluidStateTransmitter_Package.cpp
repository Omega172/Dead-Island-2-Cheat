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
	 * 		Name   -> Function BP_FluidStateTransmitter.BP_FluidStateTransmitter_C.OnServerActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		ETransmittableStatus                               StatusType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FluidStateTransmitter_C::OnServerActivated(ETransmittableStatus StatusType, float Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FluidStateTransmitter.BP_FluidStateTransmitter_C.OnServerActivated");
		
		UBP_FluidStateTransmitter_C_OnServerActivated_Params params {};
		params.StatusType = StatusType;
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FluidStateTransmitter.BP_FluidStateTransmitter_C.OnServerDeactivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		ETransmittableStatus                               StatusType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FluidStateTransmitter_C::OnServerDeactivated(ETransmittableStatus StatusType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FluidStateTransmitter.BP_FluidStateTransmitter_C.OnServerDeactivated");
		
		UBP_FluidStateTransmitter_C_OnServerDeactivated_Params params {};
		params.StatusType = StatusType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FluidStateTransmitter.BP_FluidStateTransmitter_C.ExecuteUbergraph_BP_FluidStateTransmitter
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FluidStateTransmitter_C::ExecuteUbergraph_BP_FluidStateTransmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FluidStateTransmitter.BP_FluidStateTransmitter_C.ExecuteUbergraph_BP_FluidStateTransmitter");
		
		UBP_FluidStateTransmitter_C_ExecuteUbergraph_BP_FluidStateTransmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_FluidStateTransmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FluidStateTransmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FluidStateTransmitter.BP_FluidStateTransmitter_C");
		return ptr;
	}

}


