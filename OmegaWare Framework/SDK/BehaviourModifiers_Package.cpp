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
	 * 		Name   -> Function BehaviourModifiers.BehaviourModifier.OnEnd
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BehaviourModifiers.BehaviourModifier.OnBegin
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BehaviourModifiers.BehaviourModifierComponent.EndBehaviourModifier
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BehaviourModifiers.BehaviourModifierComponent.BeginBehaviourModifier
	 * 		Flags  -> ()
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


