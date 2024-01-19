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
	 * 		Name   -> Function BP_Autoplay_MissionSelectionExtractor.BP_Autoplay_MissionSelectionExtractor_C.GetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UObject*                                     DataObject                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UBP_Autoplay_MissionSelectionExtractor_C::GetData(class UObject* DataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Autoplay_MissionSelectionExtractor.BP_Autoplay_MissionSelectionExtractor_C.GetData");
		
		UBP_Autoplay_MissionSelectionExtractor_C_GetData_Params params {};
		params.DataObject = DataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Autoplay_MissionSelectionExtractor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Autoplay_MissionSelectionExtractor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Autoplay_MissionSelectionExtractor.BP_Autoplay_MissionSelectionExtractor_C");
		return ptr;
	}

}


