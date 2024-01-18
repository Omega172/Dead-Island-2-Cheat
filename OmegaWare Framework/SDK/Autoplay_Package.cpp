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
	 * 		Name   -> PredefinedFunction UAutoplayPlaybackGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayPlaybackGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayPlaybackGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttackTargetGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttackTargetGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AttackTargetGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayRecordedEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayRecordedEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayRecordedEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayAttackTargetEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayAttackTargetEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayAttackTargetEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Autoplay.AutoplayBeginCrouchEvent.ConstructAndSubmit_FromBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoplayBeginCrouchEvent::ConstructAndSubmit_FromBlueprint(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Autoplay.AutoplayBeginCrouchEvent.ConstructAndSubmit_FromBlueprint");
		
		UAutoplayBeginCrouchEvent_ConstructAndSubmit_FromBlueprint_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayBeginCrouchEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayBeginCrouchEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayBeginCrouchEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayChallengeEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayChallengeEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayChallengeEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayCvarEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayCvarEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayCvarEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayDeathAndRespawnEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayDeathAndRespawnEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayDeathAndRespawnEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayDisplacementTracker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayDisplacementTracker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayDisplacementTracker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Autoplay.AutoplayEndCrouchEvent.ConstructAndSubmit_FromBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoplayEndCrouchEvent::ConstructAndSubmit_FromBlueprint(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Autoplay.AutoplayEndCrouchEvent.ConstructAndSubmit_FromBlueprint");
		
		UAutoplayEndCrouchEvent_ConstructAndSubmit_FromBlueprint_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayEndCrouchEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayEndCrouchEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayEndCrouchEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayEventClientInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayEventClientInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayEventClientInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayEventEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayEventEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayEventEvaluator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayEventRecorder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayEventRecorder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayEventRecorder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayFollowHostEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayFollowHostEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayFollowHostEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayGoalEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayGoalEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayGoalEvaluator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Autoplay.AutoplayIdleEvent.ConstructAndSubmit_FromBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  PlayerCharacter                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              IdleTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoplayIdleEvent::ConstructAndSubmit_FromBlueprint(class ACharacter* PlayerCharacter, float IdleTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Autoplay.AutoplayIdleEvent.ConstructAndSubmit_FromBlueprint");
		
		UAutoplayIdleEvent_ConstructAndSubmit_FromBlueprint_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		params.IdleTime = IdleTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayIdleEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayIdleEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayIdleEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Autoplay.AutoplayIncludeScriptEvent.ConstructAndSubmit_FromBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ScriptToInclude                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoplayIncludeScriptEvent::ConstructAndSubmit_FromBlueprint(class FString* ScriptToInclude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Autoplay.AutoplayIncludeScriptEvent.ConstructAndSubmit_FromBlueprint");
		
		UAutoplayIncludeScriptEvent_ConstructAndSubmit_FromBlueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScriptToInclude != nullptr)
			*ScriptToInclude = params.ScriptToInclude;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayIncludeScriptEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayIncludeScriptEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayIncludeScriptEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayInputTranslator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayInputTranslator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayInputTranslator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Autoplay.AutoplayInteractPressedEvent.ConstructAndSubmit_FromBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  PlayerCharacter                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InteractActor                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InteractLoc                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InputActionName                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoplayInteractPressedEvent::ConstructAndSubmit_FromBlueprint(class ACharacter* PlayerCharacter, class AActor* InteractActor, const struct FVector& InteractLoc, const class FName& InputActionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Autoplay.AutoplayInteractPressedEvent.ConstructAndSubmit_FromBlueprint");
		
		UAutoplayInteractPressedEvent_ConstructAndSubmit_FromBlueprint_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		params.InteractActor = InteractActor;
		params.InteractLoc = InteractLoc;
		params.InputActionName = InputActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayInteractPressedEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayInteractPressedEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayInteractPressedEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Autoplay.AutoplayJumpEvent.ConstructAndSubmit_FromBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  PlayerCharacter                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    ViewRotation                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAutoplayJumpEvent::ConstructAndSubmit_FromBlueprint(class ACharacter* PlayerCharacter, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Autoplay.AutoplayJumpEvent.ConstructAndSubmit_FromBlueprint");
		
		UAutoplayJumpEvent_ConstructAndSubmit_FromBlueprint_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayJumpEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayJumpEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayJumpEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayKeyInputEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayKeyInputEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayKeyInputEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayKeyInputEventTwo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayKeyInputEventTwo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayKeyInputEventTwo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Autoplay.AutoplayKickEvent.ConstructAndSubmit_FromBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  PlayerCharacter                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    ViewRotation                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAutoplayKickEvent::ConstructAndSubmit_FromBlueprint(class ACharacter* PlayerCharacter, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Autoplay.AutoplayKickEvent.ConstructAndSubmit_FromBlueprint");
		
		UAutoplayKickEvent_ConstructAndSubmit_FromBlueprint_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayKickEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayKickEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayKickEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Autoplay.AutoplayLedgeGrabbedEvent.ConstructAndSubmitWithJumpData_FromBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  PlayerCharacter                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LedgeAnchorLoc                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     JumpLocation                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    ViewRotation                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAutoplayLedgeGrabbedEvent::ConstructAndSubmitWithJumpData_FromBlueprint(class ACharacter* PlayerCharacter, const struct FVector& LedgeAnchorLoc, const struct FVector& JumpLocation, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Autoplay.AutoplayLedgeGrabbedEvent.ConstructAndSubmitWithJumpData_FromBlueprint");
		
		UAutoplayLedgeGrabbedEvent_ConstructAndSubmitWithJumpData_FromBlueprint_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		params.LedgeAnchorLoc = LedgeAnchorLoc;
		params.JumpLocation = JumpLocation;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Autoplay.AutoplayLedgeGrabbedEvent.ConstructAndSubmit_FromBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  PlayerCharacter                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LedgeAnchorLoc                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoplayLedgeGrabbedEvent::ConstructAndSubmit_FromBlueprint(class ACharacter* PlayerCharacter, const struct FVector& LedgeAnchorLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Autoplay.AutoplayLedgeGrabbedEvent.ConstructAndSubmit_FromBlueprint");
		
		UAutoplayLedgeGrabbedEvent_ConstructAndSubmit_FromBlueprint_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		params.LedgeAnchorLoc = LedgeAnchorLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayLedgeGrabbedEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayLedgeGrabbedEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayLedgeGrabbedEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Autoplay.AutoplayManager.Get
	 * 		Flags  -> ()
	 */
	class UAutoplayManager* UAutoplayManager::Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Autoplay.AutoplayManager.Get");
		
		UAutoplayManager_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Autoplay.AutoplayNavWaypointDroppedEvent.ConstructAndSubmit_FromBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoplayNavWaypointDroppedEvent::ConstructAndSubmit_FromBlueprint(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Autoplay.AutoplayNavWaypointDroppedEvent.ConstructAndSubmit_FromBlueprint");
		
		UAutoplayNavWaypointDroppedEvent_ConstructAndSubmit_FromBlueprint_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayNavWaypointDroppedEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayNavWaypointDroppedEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayNavWaypointDroppedEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayNewObjectiveEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayNewObjectiveEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayNewObjectiveEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayReport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayReport::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayReport");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayScreenshotEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayScreenshotEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayScreenshotEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayTransitionCinematicEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayTransitionCinematicEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayTransitionCinematicEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayTransitionEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayTransitionEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayTransitionEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Autoplay.AutoplayWaitForClientDisconnectEvent.ConstructAndSubmit_FromBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoplayWaitForClientDisconnectEvent::ConstructAndSubmit_FromBlueprint(float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Autoplay.AutoplayWaitForClientDisconnectEvent.ConstructAndSubmit_FromBlueprint");
		
		UAutoplayWaitForClientDisconnectEvent_ConstructAndSubmit_FromBlueprint_Params params {};
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayWaitForClientDisconnectEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayWaitForClientDisconnectEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayWaitForClientDisconnectEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Autoplay.AutoplayWaitForPlayersEvent.ConstructAndSubmit_FromBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RequiredNumberOfPlayers                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoplayWaitForPlayersEvent::ConstructAndSubmit_FromBlueprint(int32_t RequiredNumberOfPlayers, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Autoplay.AutoplayWaitForPlayersEvent.ConstructAndSubmit_FromBlueprint");
		
		UAutoplayWaitForPlayersEvent_ConstructAndSubmit_FromBlueprint_Params params {};
		params.RequiredNumberOfPlayers = RequiredNumberOfPlayers;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayWaitForPlayersEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayWaitForPlayersEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayWaitForPlayersEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Autoplay.AutoplayWaypointDroppedEvent.ConstructAndSubmit_FromBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoplayWaypointDroppedEvent::ConstructAndSubmit_FromBlueprint(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Autoplay.AutoplayWaypointDroppedEvent.ConstructAndSubmit_FromBlueprint");
		
		UAutoplayWaypointDroppedEvent_ConstructAndSubmit_FromBlueprint_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayWaypointDroppedEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayWaypointDroppedEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.AutoplayWaypointDroppedEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBeginCrouchGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBeginCrouchGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.BeginCrouchGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCheckChallengeGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCheckChallengeGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.CheckChallengeGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClientAttackGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClientAttackGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.ClientAttackGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombatDodgeBlockGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombatDodgeBlockGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.CombatDodgeBlockGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombatDropkickGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombatDropkickGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.CombatDropkickGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombatQuickThrowGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombatQuickThrowGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.CombatQuickThrowGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombatStandardAttackGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombatStandardAttackGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.CombatStandardAttackGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombatSwitchWeaponGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombatSwitchWeaponGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.CombatSwitchWeaponGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCvarGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCvarGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.CvarGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEndCrouchGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEndCrouchGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.EndCrouchGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFaceDirectionGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFaceDirectionGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.FaceDirectionGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindHostGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindHostGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.FindHostGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJumpGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJumpGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.JumpGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyPressInteractionGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyPressInteractionGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.KeyPressInteractionGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyPressInteractionGoalTwo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyPressInteractionGoalTwo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.KeyPressInteractionGoalTwo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKickGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKickGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.KickGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULedgeGrabGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULedgeGrabGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.LedgeGrabGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoveForwardGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoveForwardGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.MoveForwardGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerMovementTrackerGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerMovementTrackerGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.PlayerMovementTrackerGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoveToLocationGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoveToLocationGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.MoveToLocationGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigateToHostGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigateToHostGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.NavigateToHostGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigateToLocationGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigateToLocationGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.NavigateToLocationGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavigateToTargetActorGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigateToTargetActorGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.NavigateToTargetActorGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPressInteractionGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPressInteractionGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.PressInteractionGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URequestGoalFromObjectiveProxyGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URequestGoalFromObjectiveProxyGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.RequestGoalFromObjectiveProxyGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScreenshotGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScreenshotGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.ScreenshotGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStraightLineMoveGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStraightLineMoveGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.StraightLineMoveGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Autoplay.TransitionWaitForLoadGoal.OnReadyToEnterWorld
	 * 		Flags  -> ()
	 */
	void UTransitionWaitForLoadGoal::OnReadyToEnterWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Autoplay.TransitionWaitForLoadGoal.OnReadyToEnterWorld");
		
		UTransitionWaitForLoadGoal_OnReadyToEnterWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransitionWaitForLoadGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransitionWaitForLoadGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.TransitionWaitForLoadGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitForClientDisconnectGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitForClientDisconnectGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.WaitForClientDisconnectGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitForFatalityGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitForFatalityGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.WaitForFatalityGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitForPlayersGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitForPlayersGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.WaitForPlayersGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Autoplay.WaitGoal");
		return ptr;
	}

}


