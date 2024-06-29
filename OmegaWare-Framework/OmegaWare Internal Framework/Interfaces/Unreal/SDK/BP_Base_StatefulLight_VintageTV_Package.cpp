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
	 * 		Name   -> Function BP_Base_StatefulLight_VintageTV.BP_Base_StatefulLight_VintageTV_C.RemoveInteriorMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_StatefulLight_VintageTV_C::RemoveInteriorMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatefulLight_VintageTV.BP_Base_StatefulLight_VintageTV_C.RemoveInteriorMesh");
		
		ABP_Base_StatefulLight_VintageTV_C_RemoveInteriorMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_StatefulLight_VintageTV.BP_Base_StatefulLight_VintageTV_C.AddInteriorMesh
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_StatefulLight_VintageTV_C::AddInteriorMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatefulLight_VintageTV.BP_Base_StatefulLight_VintageTV_C.AddInteriorMesh");
		
		ABP_Base_StatefulLight_VintageTV_C_AddInteriorMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_StatefulLight_VintageTV.BP_Base_StatefulLight_VintageTV_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_StatefulLight_VintageTV_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatefulLight_VintageTV.BP_Base_StatefulLight_VintageTV_C.UserConstructionScript");
		
		ABP_Base_StatefulLight_VintageTV_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_StatefulLight_VintageTV.BP_Base_StatefulLight_VintageTV_C.BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnPointImpactEventReceivedDelegate__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPointImpactEventResult                     ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ABP_Base_StatefulLight_VintageTV_C::BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnPointImpactEventReceivedDelegate__DelegateSignature(class AActor* Actor, const struct FPointImpactEventResult& ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatefulLight_VintageTV.BP_Base_StatefulLight_VintageTV_C.BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnPointImpactEventReceivedDelegate__DelegateSignature");
		
		ABP_Base_StatefulLight_VintageTV_C_BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnPointImpactEventReceivedDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_StatefulLight_VintageTV.BP_Base_StatefulLight_VintageTV_C.ExecuteUbergraph_BP_Base_StatefulLight_VintageTV
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_StatefulLight_VintageTV_C::ExecuteUbergraph_BP_Base_StatefulLight_VintageTV(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_StatefulLight_VintageTV.BP_Base_StatefulLight_VintageTV_C.ExecuteUbergraph_BP_Base_StatefulLight_VintageTV");
		
		ABP_Base_StatefulLight_VintageTV_C_ExecuteUbergraph_BP_Base_StatefulLight_VintageTV_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_StatefulLight_VintageTV_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_StatefulLight_VintageTV_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_StatefulLight_VintageTV.BP_Base_StatefulLight_VintageTV_C");
		return ptr;
	}

}


