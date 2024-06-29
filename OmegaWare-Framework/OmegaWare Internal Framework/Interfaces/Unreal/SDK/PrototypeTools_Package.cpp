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
	 * 		RVA    -> 0x00BD3C90
	 * 		Name   -> Function PrototypeTools.PrototypeAreaActor.OnEndOverlap
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UTriggerInteractorComponent*                 Interactor                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APrototypeAreaActor::OnEndOverlap(class UTriggerInteractorComponent* Interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrototypeTools.PrototypeAreaActor.OnEndOverlap");
		
		APrototypeAreaActor_OnEndOverlap_Params params {};
		params.Interactor = Interactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD3C10
	 * 		Name   -> Function PrototypeTools.PrototypeAreaActor.OnBeginOverlap
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UTriggerInteractorComponent*                 Interactor                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APrototypeAreaActor::OnBeginOverlap(class UTriggerInteractorComponent* Interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrototypeTools.PrototypeAreaActor.OnBeginOverlap");
		
		APrototypeAreaActor_OnBeginOverlap_Params params {};
		params.Interactor = Interactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrototypeAreaActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrototypeAreaActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrototypeTools.PrototypeAreaActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrototypeAreaUIWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrototypeAreaUIWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrototypeTools.PrototypeAreaUIWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrototypeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrototypeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrototypeTools.PrototypeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrototypeObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrototypeObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrototypeTools.PrototypeObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrototypeToolsManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrototypeToolsManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrototypeTools.PrototypeToolsManager");
		return ptr;
	}

}


