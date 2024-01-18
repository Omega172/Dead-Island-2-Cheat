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
	 * 		Name   -> Function WBP_GraidentIndicatorElement.WBP_GraidentIndicatorElement_C.SetBrushMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FuryEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GraidentIndicatorElement_C::SetBrushMaterial(bool FuryEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GraidentIndicatorElement.WBP_GraidentIndicatorElement_C.SetBrushMaterial");
		
		UWBP_GraidentIndicatorElement_C_SetBrushMaterial_Params params {};
		params.FuryEnabled = FuryEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GraidentIndicatorElement.WBP_GraidentIndicatorElement_C.PlayHitEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FuryEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GraidentIndicatorElement_C::PlayHitEffect(bool FuryEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GraidentIndicatorElement.WBP_GraidentIndicatorElement_C.PlayHitEffect");
		
		UWBP_GraidentIndicatorElement_C_PlayHitEffect_Params params {};
		params.FuryEnabled = FuryEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GraidentIndicatorElement.WBP_GraidentIndicatorElement_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_GraidentIndicatorElement_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GraidentIndicatorElement.WBP_GraidentIndicatorElement_C.Construct");
		
		UWBP_GraidentIndicatorElement_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GraidentIndicatorElement.WBP_GraidentIndicatorElement_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GraidentIndicatorElement_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GraidentIndicatorElement.WBP_GraidentIndicatorElement_C.PreConstruct");
		
		UWBP_GraidentIndicatorElement_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GraidentIndicatorElement.WBP_GraidentIndicatorElement_C.ExecuteUbergraph_WBP_GraidentIndicatorElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GraidentIndicatorElement_C::ExecuteUbergraph_WBP_GraidentIndicatorElement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GraidentIndicatorElement.WBP_GraidentIndicatorElement_C.ExecuteUbergraph_WBP_GraidentIndicatorElement");
		
		UWBP_GraidentIndicatorElement_C_ExecuteUbergraph_WBP_GraidentIndicatorElement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_GraidentIndicatorElement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_GraidentIndicatorElement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GraidentIndicatorElement.WBP_GraidentIndicatorElement_C");
		return ptr;
	}

}


