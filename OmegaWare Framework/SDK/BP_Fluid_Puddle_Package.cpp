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
	 * 		Name   -> Function BP_Fluid_Puddle.BP_Fluid_Puddle_C.InitPreviewDecal
	 * 		Flags  -> ()
	 */
	void ABP_Fluid_Puddle_C::InitPreviewDecal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fluid_Puddle.BP_Fluid_Puddle_C.InitPreviewDecal");
		
		ABP_Fluid_Puddle_C_InitPreviewDecal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fluid_Puddle.BP_Fluid_Puddle_C.InitTextRender
	 * 		Flags  -> ()
	 */
	void ABP_Fluid_Puddle_C::InitTextRender()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fluid_Puddle.BP_Fluid_Puddle_C.InitTextRender");
		
		ABP_Fluid_Puddle_C_InitTextRender_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fluid_Puddle.BP_Fluid_Puddle_C.DrawPuddleCircles
	 * 		Flags  -> ()
	 */
	void ABP_Fluid_Puddle_C::DrawPuddleCircles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fluid_Puddle.BP_Fluid_Puddle_C.DrawPuddleCircles");
		
		ABP_Fluid_Puddle_C_DrawPuddleCircles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fluid_Puddle.BP_Fluid_Puddle_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Fluid_Puddle_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fluid_Puddle.BP_Fluid_Puddle_C.UserConstructionScript");
		
		ABP_Fluid_Puddle_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fluid_Puddle.BP_Fluid_Puddle_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Fluid_Puddle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fluid_Puddle.BP_Fluid_Puddle_C.ReceiveBeginPlay");
		
		ABP_Fluid_Puddle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fluid_Puddle.BP_Fluid_Puddle_C.ExecuteUbergraph_BP_Fluid_Puddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Fluid_Puddle_C::ExecuteUbergraph_BP_Fluid_Puddle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fluid_Puddle.BP_Fluid_Puddle_C.ExecuteUbergraph_BP_Fluid_Puddle");
		
		ABP_Fluid_Puddle_C_ExecuteUbergraph_BP_Fluid_Puddle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Fluid_Puddle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Fluid_Puddle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Fluid_Puddle.BP_Fluid_Puddle_C");
		return ptr;
	}

}


