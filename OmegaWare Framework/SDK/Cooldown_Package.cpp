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
	 * 		Name   -> PredefinedFunction UCooldownConditionPersistentDataCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCooldownConditionPersistentDataCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooldown.CooldownConditionPersistentDataCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cooldown.BaseCooldownCondition.OnStartCooldown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseCooldownCondition::OnStartCooldown(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cooldown.BaseCooldownCondition.OnStartCooldown");
		
		UBaseCooldownCondition_OnStartCooldown_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cooldown.BaseCooldownCondition.OnReset
	 * 		Flags  -> ()
	 */
	void UBaseCooldownCondition::OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cooldown.BaseCooldownCondition.OnReset");
		
		UBaseCooldownCondition_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cooldown.BaseCooldownCondition.InformCooldownCompleted
	 * 		Flags  -> ()
	 */
	void UBaseCooldownCondition::InformCooldownCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cooldown.BaseCooldownCondition.InformCooldownCompleted");
		
		UBaseCooldownCondition_InformCooldownCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseCooldownCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseCooldownCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooldown.BaseCooldownCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCooldownCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCooldownCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooldown.CooldownCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCooldownCondition_Distance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCooldownCondition_Distance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooldown.CooldownCondition_Distance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCooldownCondition_DoOnce.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCooldownCondition_DoOnce::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooldown.CooldownCondition_DoOnce");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCooldownCondition_Time.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCooldownCondition_Time::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooldown.CooldownCondition_Time");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCooldownPersistentDataCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCooldownPersistentDataCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooldown.CooldownPersistentDataCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cooldown.UniversalCooldownDataAsset.GenerateCooldownObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Outer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUniversalCooldownObject* UUniversalCooldownDataAsset::GenerateCooldownObject(class UObject* Outer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cooldown.UniversalCooldownDataAsset.GenerateCooldownObject");
		
		UUniversalCooldownDataAsset_GenerateCooldownObject_Params params {};
		params.Outer = Outer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUniversalCooldownDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUniversalCooldownDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooldown.UniversalCooldownDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cooldown.UniversalCooldownObject.StartCooldown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              InCooldownCallback                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUniversalCooldownObject::StartCooldown(const class FScriptDelegate& InCooldownCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cooldown.UniversalCooldownObject.StartCooldown");
		
		UUniversalCooldownObject_StartCooldown_Params params {};
		params.InCooldownCallback = InCooldownCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cooldown.UniversalCooldownObject.SetupPersistence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              InCooldownCallback                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUniversalCooldownObject::SetupPersistence(const class FScriptDelegate& InCooldownCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cooldown.UniversalCooldownObject.SetupPersistence");
		
		UUniversalCooldownObject_SetupPersistence_Params params {};
		params.InCooldownCallback = InCooldownCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cooldown.UniversalCooldownObject.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOwnerActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUniversalCooldownObject::Setup(class AActor* InOwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cooldown.UniversalCooldownObject.Setup");
		
		UUniversalCooldownObject_Setup_Params params {};
		params.InOwnerActor = InOwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cooldown.UniversalCooldownObject.Reset
	 * 		Flags  -> ()
	 */
	void UUniversalCooldownObject::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cooldown.UniversalCooldownObject.Reset");
		
		UUniversalCooldownObject_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Cooldown.UniversalCooldownObject.EndPlay
	 * 		Flags  -> ()
	 */
	void UUniversalCooldownObject::EndPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cooldown.UniversalCooldownObject.EndPlay");
		
		UUniversalCooldownObject_EndPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUniversalCooldownObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUniversalCooldownObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Cooldown.UniversalCooldownObject");
		return ptr;
	}

}


