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
	 * 		Name   -> PredefinedFunction AEditorQueryActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEditorQueryActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EditorQuery.EditorQueryActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F16820
	 * 		Name   -> Function EditorQuery.EditorQueryComponent.UpdateActorsInArea
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class AActor*>                              InActors                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              OutActors                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UEditorQueryComponent::UpdateActorsInArea(TArray<class AActor*> InActors, class UClass* Class, TArray<class AActor*>* OutActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditorQuery.EditorQueryComponent.UpdateActorsInArea");
		
		UEditorQueryComponent_UpdateActorsInArea_Params params {};
		params.InActors = InActors;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActors != nullptr)
			*OutActors = params.OutActors;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditorQueryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditorQueryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EditorQuery.EditorQueryComponent");
		return ptr;
	}

}


