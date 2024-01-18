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
	 * 		Name   -> Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.GetBodyPartsHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterBodyPartHeights                          BodyPartHeight                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ReturnValue_Location_Z                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AnimationCoordinator_AI_C::GetBodyPartsHeight(class USceneComponent* Mesh, ECharacterBodyPartHeights BodyPartHeight, float* ReturnValue_Location_Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.GetBodyPartsHeight");
		
		UBPC_AnimationCoordinator_AI_C_GetBodyPartsHeight_Params params {};
		params.Mesh = Mesh;
		params.BodyPartHeight = BodyPartHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue_Location_Z != nullptr)
			*ReturnValue_Location_Z = params.ReturnValue_Location_Z;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.GetBodyPartWorldSpaceHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterBodyPartHeights                          BodyPartHeight                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UBPC_AnimationCoordinator_AI_C::GetBodyPartWorldSpaceHeight(ECharacterBodyPartHeights BodyPartHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.GetBodyPartWorldSpaceHeight");
		
		UBPC_AnimationCoordinator_AI_C_GetBodyPartWorldSpaceHeight_Params params {};
		params.BodyPartHeight = BodyPartHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.GetTorsoTwistParamsByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TorsoTwistName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSTorsoTwistParams UBPC_AnimationCoordinator_AI_C::GetTorsoTwistParamsByName(const class FName& TorsoTwistName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.GetTorsoTwistParamsByName");
		
		UBPC_AnimationCoordinator_AI_C_GetTorsoTwistParamsByName_Params params {};
		params.TorsoTwistName = TorsoTwistName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.GetTorsoTwistParamsByActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TorsoTwistTarget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSTorsoTwistParams UBPC_AnimationCoordinator_AI_C::GetTorsoTwistParamsByActor(class AActor* TorsoTwistTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.GetTorsoTwistParamsByActor");
		
		UBPC_AnimationCoordinator_AI_C_GetTorsoTwistParamsByActor_Params params {};
		params.TorsoTwistTarget = TorsoTwistTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.OnTorsoTwistTargetEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AnimationCoordinator_AI_C::OnTorsoTwistTargetEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.OnTorsoTwistTargetEndPlay");
		
		UBPC_AnimationCoordinator_AI_C_OnTorsoTwistTargetEndPlay_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.GetHighestPriorityTorsoTwistTarget
	 * 		Flags  -> ()
	 */
	class AActor* UBPC_AnimationCoordinator_AI_C::GetHighestPriorityTorsoTwistTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.GetHighestPriorityTorsoTwistTarget");
		
		UBPC_AnimationCoordinator_AI_C_GetHighestPriorityTorsoTwistTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.RemoveTorsoTwistTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TorsoTwistName                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AnimationCoordinator_AI_C::RemoveTorsoTwistTarget(const class FName& TorsoTwistName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.RemoveTorsoTwistTarget");
		
		UBPC_AnimationCoordinator_AI_C_RemoveTorsoTwistTarget_Params params {};
		params.TorsoTwistName = TorsoTwistName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.AddTorsoTwistTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        TorsoTwistName                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSTorsoTwistParams                          TorsoTwistParams                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBPC_AnimationCoordinator_AI_C::AddTorsoTwistTarget(class AActor* TargetActor, const class FName& TorsoTwistName, const struct FSTorsoTwistParams& TorsoTwistParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.AddTorsoTwistTarget");
		
		UBPC_AnimationCoordinator_AI_C_AddTorsoTwistTarget_Params params {};
		params.TargetActor = TargetActor;
		params.TorsoTwistName = TorsoTwistName;
		params.TorsoTwistParams = TorsoTwistParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_AnimationCoordinator_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_AnimationCoordinator_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C");
		return ptr;
	}

}


