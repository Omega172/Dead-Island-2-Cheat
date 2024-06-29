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
	 * 		Name   -> Function BPC_ThresholdTracking_AI.BPC_ThresholdTracking_AI_C.ListenForDamageOverTimeDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       TrackingGuid                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ThresholdTracking_AI_C::ListenForDamageOverTimeDelegate__DelegateSignature(const struct FGuid& TrackingGuid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ThresholdTracking_AI.BPC_ThresholdTracking_AI_C.ListenForDamageOverTimeDelegate__DelegateSignature");
		
		UBPC_ThresholdTracking_AI_C_ListenForDamageOverTimeDelegate__DelegateSignature_Params params {};
		params.TrackingGuid = TrackingGuid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_ThresholdTracking_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_ThresholdTracking_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_ThresholdTracking_AI.BPC_ThresholdTracking_AI_C");
		return ptr;
	}

}


