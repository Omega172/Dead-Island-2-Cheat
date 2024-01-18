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
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.FaceTargetStateCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMeatbaitAnimStates                                PotentialNewState                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMeatbaitAnimStates                                NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_Distraction_AnimStateMachine_AI_C::FaceTargetStateCondition(EMeatbaitAnimStates PotentialNewState, EMeatbaitAnimStates* NextState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.FaceTargetStateCondition");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_FaceTargetStateCondition_Params params {};
		params.PotentialNewState = PotentialNewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextState != nullptr)
			*NextState = params.NextState;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.AddDSLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      DebugText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EDSLogVerbosity                                    Verbosity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::AddDSLog(const class FString& DebugText, EDSLogVerbosity Verbosity, bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.AddDSLog");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_AddDSLog_Params params {};
		params.DebugText = DebugText;
		params.Verbosity = Verbosity;
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.SetupDistractionLogger
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::SetupDistractionLogger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.SetupDistractionLogger");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_SetupDistractionLogger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetTorsoTwistTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     RelativeLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::GetTorsoTwistTarget(class AActor** TargetActor, struct FVector* RelativeLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetTorsoTwistTarget");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_GetTorsoTwistTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetActor != nullptr)
			*TargetActor = params.TargetActor;
		if (RelativeLocation != nullptr)
			*RelativeLocation = params.RelativeLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.RemoveTorsoTwistTarget
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::RemoveTorsoTwistTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.RemoveTorsoTwistTarget");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_RemoveTorsoTwistTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.AddTorsoTwistTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::AddTorsoTwistTarget(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.AddTorsoTwistTarget");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_AddTorsoTwistTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetInterestDuration
	 * 		Flags  -> ()
	 */
	float UBP_Action_Distraction_AnimStateMachine_AI_C::GetInterestDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetInterestDuration");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_GetInterestDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnAnimSetSpacingStateFinished
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::OnAnimSetSpacingStateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnAnimSetSpacingStateFinished");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_OnAnimSetSpacingStateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GoToState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMeatbaitAnimStates                                CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::GoToState(EMeatbaitAnimStates CurrentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GoToState");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_GoToState_Params params {};
		params.CurrentState = CurrentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.InterestLost
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::InterestLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.InterestLost");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_InterestLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.StartInterestTimer
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::StartInterestTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.StartInterestTimer");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_StartInterestTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetMoveTargetDirection
	 * 		Flags  -> ()
	 */
	struct FVector UBP_Action_Distraction_AnimStateMachine_AI_C::GetMoveTargetDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetMoveTargetDirection");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_GetMoveTargetDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnMoveTargetEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMoveTargetEvent                                   Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::OnMoveTargetEvent(EMoveTargetEvent Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnMoveTargetEvent");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_OnMoveTargetEvent_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.EndFaceTargetState
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::EndFaceTargetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.EndFaceTargetState");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_EndFaceTargetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.BeginFaceTargetState
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::BeginFaceTargetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.BeginFaceTargetState");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_BeginFaceTargetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnAnimSetActionEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::OnAnimSetActionEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnAnimSetActionEnded");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_OnAnimSetActionEnded_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnBeginEarly
	 * 		Flags  -> ()
	 */
	bool UBP_Action_Distraction_AnimStateMachine_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnBeginEarly");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.EndAnimSetSpacingState
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::EndAnimSetSpacingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.EndAnimSetSpacingState");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_EndAnimSetSpacingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.BeginAnimSetSpacingState
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::BeginAnimSetSpacingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.BeginAnimSetSpacingState");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_BeginAnimSetSpacingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.EndAnimSetActionState
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::EndAnimSetActionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.EndAnimSetActionState");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_EndAnimSetActionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.BeginAnimSetActionState
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::BeginAnimSetActionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.BeginAnimSetActionState");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_BeginAnimSetActionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetNextState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMeatbaitAnimStates                                NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_Distraction_AnimStateMachine_AI_C::GetNextState(EMeatbaitAnimStates* NextState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetNextState");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_GetNextState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextState != nullptr)
			*NextState = params.NextState;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.EndState
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::EndState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.EndState");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_EndState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GoToNextState
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::GoToNextState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GoToNextState");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_GoToNextState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.BeginState
	 * 		Flags  -> ()
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::BeginState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.BeginState");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_BeginState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetDistanceInFrontOfCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::GetDistanceInFrontOfCharacter(float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetDistanceInFrontOfCharacter");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_GetDistanceInFrontOfCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetTargetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              VerticalDegrees                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance2D                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::GetTargetData(float* VerticalDegrees, float* Distance2D)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetTargetData");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_GetTargetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VerticalDegrees != nullptr)
			*VerticalDegrees = params.VerticalDegrees;
		if (Distance2D != nullptr)
			*Distance2D = params.Distance2D;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnBegin");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnEnd");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.ExecuteUbergraph_BP_Action_Distraction_AnimStateMachine_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_AnimStateMachine_AI_C::ExecuteUbergraph_BP_Action_Distraction_AnimStateMachine_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.ExecuteUbergraph_BP_Action_Distraction_AnimStateMachine_AI");
		
		UBP_Action_Distraction_AnimStateMachine_AI_C_ExecuteUbergraph_BP_Action_Distraction_AnimStateMachine_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Distraction_AnimStateMachine_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Distraction_AnimStateMachine_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C");
		return ptr;
	}

}


