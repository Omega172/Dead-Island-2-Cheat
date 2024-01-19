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
	 * 		Name   -> Function BP_CardGenerator_Latent_SetBoolFactOnDraw.BP_CardGenerator_Latent_SetBoolFactOnDraw_C.GetBlueprintDescription
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UBP_CardGenerator_Latent_SetBoolFactOnDraw_C::GetBlueprintDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_SetBoolFactOnDraw.BP_CardGenerator_Latent_SetBoolFactOnDraw_C.GetBlueprintDescription");
		
		UBP_CardGenerator_Latent_SetBoolFactOnDraw_C_GetBlueprintDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Latent_SetBoolFactOnDraw.BP_CardGenerator_Latent_SetBoolFactOnDraw_C.OnCardDrawn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResultReturnedCard                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_CardGenerator_Latent_SetBoolFactOnDraw_C::OnCardDrawn(bool bResultReturnedCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_SetBoolFactOnDraw.BP_CardGenerator_Latent_SetBoolFactOnDraw_C.OnCardDrawn");
		
		UBP_CardGenerator_Latent_SetBoolFactOnDraw_C_OnCardDrawn_Params params {};
		params.bResultReturnedCard = bResultReturnedCard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Latent_SetBoolFactOnDraw.BP_CardGenerator_Latent_SetBoolFactOnDraw_C.OnInitialise
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_CardGenerator_Latent_SetBoolFactOnDraw_C::OnInitialise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_SetBoolFactOnDraw.BP_CardGenerator_Latent_SetBoolFactOnDraw_C.OnInitialise");
		
		UBP_CardGenerator_Latent_SetBoolFactOnDraw_C_OnInitialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Latent_SetBoolFactOnDraw.BP_CardGenerator_Latent_SetBoolFactOnDraw_C.ExecuteUbergraph_BP_CardGenerator_Latent_SetBoolFactOnDraw
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CardGenerator_Latent_SetBoolFactOnDraw_C::ExecuteUbergraph_BP_CardGenerator_Latent_SetBoolFactOnDraw(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_SetBoolFactOnDraw.BP_CardGenerator_Latent_SetBoolFactOnDraw_C.ExecuteUbergraph_BP_CardGenerator_Latent_SetBoolFactOnDraw");
		
		UBP_CardGenerator_Latent_SetBoolFactOnDraw_C_ExecuteUbergraph_BP_CardGenerator_Latent_SetBoolFactOnDraw_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CardGenerator_Latent_SetBoolFactOnDraw_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CardGenerator_Latent_SetBoolFactOnDraw_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CardGenerator_Latent_SetBoolFactOnDraw.BP_CardGenerator_Latent_SetBoolFactOnDraw_C");
		return ptr;
	}

}


