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
	 * 		Name   -> Function BP_Base_GatherActor.BP_Base_GatherActor_C.TryEndGather
	 * 		Flags  -> ()
	 */
	void ABP_Base_GatherActor_C::TryEndGather()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_GatherActor.BP_Base_GatherActor_C.TryEndGather");
		
		ABP_Base_GatherActor_C_TryEndGather_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_GatherActor.BP_Base_GatherActor_C.TryStartGather
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Initiator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGatherContext                              Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_GatherActor_C::TryStartGather(class APawn* Initiator, const struct FGatherContext& Context, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_GatherActor.BP_Base_GatherActor_C.TryStartGather");
		
		ABP_Base_GatherActor_C_TryStartGather_Params params {};
		params.Initiator = Initiator;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_GatherActor.BP_Base_GatherActor_C.RequestGatherEnd
	 * 		Flags  -> ()
	 */
	void ABP_Base_GatherActor_C::RequestGatherEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_GatherActor.BP_Base_GatherActor_C.RequestGatherEnd");
		
		ABP_Base_GatherActor_C_RequestGatherEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_GatherActor.BP_Base_GatherActor_C.RequestGather
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Initiator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGatherContext                              Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_GatherActor_C::RequestGather(class APawn* Initiator, const struct FGatherContext& Context, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_GatherActor.BP_Base_GatherActor_C.RequestGather");
		
		ABP_Base_GatherActor_C_RequestGather_Params params {};
		params.Initiator = Initiator;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_GatherActor.BP_Base_GatherActor_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Base_GatherActor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_GatherActor.BP_Base_GatherActor_C.UserConstructionScript");
		
		ABP_Base_GatherActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_GatherActor.BP_Base_GatherActor_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Base_GatherActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_GatherActor.BP_Base_GatherActor_C.ReceiveBeginPlay");
		
		ABP_Base_GatherActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_GatherActor.BP_Base_GatherActor_C.StartGatherVisuals
	 * 		Flags  -> ()
	 */
	void ABP_Base_GatherActor_C::StartGatherVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_GatherActor.BP_Base_GatherActor_C.StartGatherVisuals");
		
		ABP_Base_GatherActor_C_StartGatherVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_GatherActor.BP_Base_GatherActor_C.EndGatherVisuals
	 * 		Flags  -> ()
	 */
	void ABP_Base_GatherActor_C::EndGatherVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_GatherActor.BP_Base_GatherActor_C.EndGatherVisuals");
		
		ABP_Base_GatherActor_C_EndGatherVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_GatherActor.BP_Base_GatherActor_C.EnableGatherShape
	 * 		Flags  -> ()
	 */
	void ABP_Base_GatherActor_C::EnableGatherShape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_GatherActor.BP_Base_GatherActor_C.EnableGatherShape");
		
		ABP_Base_GatherActor_C_EnableGatherShape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_GatherActor.BP_Base_GatherActor_C.DisableGatherShape
	 * 		Flags  -> ()
	 */
	void ABP_Base_GatherActor_C::DisableGatherShape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_GatherActor.BP_Base_GatherActor_C.DisableGatherShape");
		
		ABP_Base_GatherActor_C_DisableGatherShape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_GatherActor.BP_Base_GatherActor_C.OnStartGathering
	 * 		Flags  -> ()
	 */
	void ABP_Base_GatherActor_C::OnStartGathering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_GatherActor.BP_Base_GatherActor_C.OnStartGathering");
		
		ABP_Base_GatherActor_C_OnStartGathering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_GatherActor.BP_Base_GatherActor_C.OnStopGathering
	 * 		Flags  -> ()
	 */
	void ABP_Base_GatherActor_C::OnStopGathering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_GatherActor.BP_Base_GatherActor_C.OnStopGathering");
		
		ABP_Base_GatherActor_C_OnStopGathering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_GatherActor.BP_Base_GatherActor_C.BndEvt__PlayerGatherComponent_K2Node_ComponentBoundEvent_0_GatherComponentOnCancelled__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_Base_GatherActor_C::BndEvt__PlayerGatherComponent_K2Node_ComponentBoundEvent_0_GatherComponentOnCancelled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_GatherActor.BP_Base_GatherActor_C.BndEvt__PlayerGatherComponent_K2Node_ComponentBoundEvent_0_GatherComponentOnCancelled__DelegateSignature");
		
		ABP_Base_GatherActor_C_BndEvt__PlayerGatherComponent_K2Node_ComponentBoundEvent_0_GatherComponentOnCancelled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_GatherActor.BP_Base_GatherActor_C.ExecuteUbergraph_BP_Base_GatherActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_GatherActor_C::ExecuteUbergraph_BP_Base_GatherActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_GatherActor.BP_Base_GatherActor_C.ExecuteUbergraph_BP_Base_GatherActor");
		
		ABP_Base_GatherActor_C_ExecuteUbergraph_BP_Base_GatherActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_GatherActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_GatherActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_GatherActor.BP_Base_GatherActor_C");
		return ptr;
	}

}


