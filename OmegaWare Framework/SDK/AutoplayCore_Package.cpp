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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayDataExtractionMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayDataExtractionMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoplayCore.AutoplayDataExtractionMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function AutoplayCore.AutoplayDataExtractor.GetData
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UObject*                                     DataObject                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UAutoplayDataExtractor::GetData(class UObject* DataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoplayCore.AutoplayDataExtractor.GetData");
		
		UAutoplayDataExtractor_GetData_Params params {};
		params.DataObject = DataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayDataExtractor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayDataExtractor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoplayCore.AutoplayDataExtractor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayMenuInputWhitelist.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayMenuInputWhitelist::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoplayCore.AutoplayMenuInputWhitelist");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutoplayObjectiveProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoplayObjectiveProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoplayCore.AutoplayObjectiveProxy");
		return ptr;
	}

}


