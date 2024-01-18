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
	 * 		Name   -> Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.Update Glass State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBroken                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_VEH_Glass_Base_C::UpdateGlassState(bool IsBroken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.Update Glass State");
		
		ABP_VEH_Glass_Base_C_UpdateGlassState_Params params {};
		params.IsBroken = IsBroken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.GetGlassExplosionBySize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCosmeticEffectsDefinition*                  Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VEH_Glass_Base_C::GetGlassExplosionBySize(class UCosmeticEffectsDefinition** Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.GetGlassExplosionBySize");
		
		ABP_VEH_Glass_Base_C_GetGlassExplosionBySize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_VEH_Glass_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.UserConstructionScript");
		
		ABP_VEH_Glass_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.BndEvt__ImpactEvent1_K2Node_ComponentBoundEvent_0_OnPointImpactEventReceivedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPointImpactEventResult                     ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ABP_VEH_Glass_Base_C::BndEvt__ImpactEvent1_K2Node_ComponentBoundEvent_0_OnPointImpactEventReceivedDelegate__DelegateSignature(class AActor* Actor, const struct FPointImpactEventResult& ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.BndEvt__ImpactEvent1_K2Node_ComponentBoundEvent_0_OnPointImpactEventReceivedDelegate__DelegateSignature");
		
		ABP_VEH_Glass_Base_C_BndEvt__ImpactEvent1_K2Node_ComponentBoundEvent_0_OnPointImpactEventReceivedDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.ExecuteUbergraph_BP_VEH_Glass_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VEH_Glass_Base_C::ExecuteUbergraph_BP_VEH_Glass_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.ExecuteUbergraph_BP_VEH_Glass_Base");
		
		ABP_VEH_Glass_Base_C_ExecuteUbergraph_BP_VEH_Glass_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.OnGlassHit__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_VEH_Glass_Base_C*                        GlassActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VEH_Glass_Base_C::OnGlassHit__DelegateSignature(class ABP_VEH_Glass_Base_C* GlassActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.OnGlassHit__DelegateSignature");
		
		ABP_VEH_Glass_Base_C_OnGlassHit__DelegateSignature_Params params {};
		params.GlassActor = GlassActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_VEH_Glass_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VEH_Glass_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VEH_Glass_Base.BP_VEH_Glass_Base_C");
		return ptr;
	}

}


