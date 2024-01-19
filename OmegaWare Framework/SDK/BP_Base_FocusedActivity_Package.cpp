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
	 * 		Name   -> Function BP_Base_FocusedActivity.BP_Base_FocusedActivity_C.Add Animation For State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ELevelSequenceState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameSequencePlaybackParams                 CustomPlaybackParams                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               ForceEarlyMontageOrphaning                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_FocusedActivity_C::AddAnimationForState(class UParticipantSlotComponent* Participant, ELevelSequenceState State, const struct FGameSequencePlaybackParams& CustomPlaybackParams, bool ForceEarlyMontageOrphaning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_FocusedActivity.BP_Base_FocusedActivity_C.Add Animation For State");
		
		ABP_Base_FocusedActivity_C_AddAnimationForState_Params params {};
		params.Participant = Participant;
		params.State = State;
		params.CustomPlaybackParams = CustomPlaybackParams;
		params.ForceEarlyMontageOrphaning = ForceEarlyMontageOrphaning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_FocusedActivity.BP_Base_FocusedActivity_C.Setup Animation Params
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_FocusedActivity_C::SetupAnimationParams(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_FocusedActivity.BP_Base_FocusedActivity_C.Setup Animation Params");
		
		ABP_Base_FocusedActivity_C_SetupAnimationParams_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_FocusedActivity.BP_Base_FocusedActivity_C.On Participant Will Be Received
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_FocusedActivity_C::OnParticipantWillBeReceived(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_FocusedActivity.BP_Base_FocusedActivity_C.On Participant Will Be Received");
		
		ABP_Base_FocusedActivity_C_OnParticipantWillBeReceived_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_FocusedActivity.BP_Base_FocusedActivity_C.ExecuteUbergraph_BP_Base_FocusedActivity
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_FocusedActivity_C::ExecuteUbergraph_BP_Base_FocusedActivity(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_FocusedActivity.BP_Base_FocusedActivity_C.ExecuteUbergraph_BP_Base_FocusedActivity");
		
		ABP_Base_FocusedActivity_C_ExecuteUbergraph_BP_Base_FocusedActivity_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_FocusedActivity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_FocusedActivity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_FocusedActivity.BP_Base_FocusedActivity_C");
		return ptr;
	}

}


