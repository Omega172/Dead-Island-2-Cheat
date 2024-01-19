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
	 * 		RVA    -> 0x00C89BD0
	 * 		Name   -> Function BehaviourModifiers.BehaviourModifier.OnEnd
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBehaviourModifier::OnEnd(class AController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BehaviourModifiers.BehaviourModifier.OnEnd");
		
		UBehaviourModifier_OnEnd_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCC4B0
	 * 		Name   -> Function BehaviourModifiers.BehaviourModifier.OnBegin
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBehaviourModifier::OnBegin(class AController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BehaviourModifiers.BehaviourModifier.OnBegin");
		
		UBehaviourModifier_OnBegin_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBehaviourModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBehaviourModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BehaviourModifiers.BehaviourModifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C89B50
	 * 		Name   -> Function BehaviourModifiers.BehaviourModifierComponent.EndBehaviourModifier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      BehaviourModifierClass                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBehaviourModifierComponent::EndBehaviourModifier(class UClass* BehaviourModifierClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BehaviourModifiers.BehaviourModifierComponent.EndBehaviourModifier");
		
		UBehaviourModifierComponent_EndBehaviourModifier_Params params {};
		params.BehaviourModifierClass = BehaviourModifierClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C89AD0
	 * 		Name   -> Function BehaviourModifiers.BehaviourModifierComponent.BeginBehaviourModifier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      BehaviourModifierClass                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBehaviourModifierComponent::BeginBehaviourModifier(class UClass* BehaviourModifierClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BehaviourModifiers.BehaviourModifierComponent.BeginBehaviourModifier");
		
		UBehaviourModifierComponent_BeginBehaviourModifier_Params params {};
		params.BehaviourModifierClass = BehaviourModifierClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBehaviourModifierComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBehaviourModifierComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BehaviourModifiers.BehaviourModifierComponent");
		return ptr;
	}

}


