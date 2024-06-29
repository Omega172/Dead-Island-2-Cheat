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
	 * 		RVA    -> 0x00F15F60
	 * 		Name   -> Function DSEventSystem.DSEventSystemBlueprintFunctionLibrary.DSEventSubscribeToSubject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Outer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Subject                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      EventClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDSEventHandle* UDSEventSystemBlueprintFunctionLibrary::STATIC_DSEventSubscribeToSubject(class UObject* Outer, class UObject* Subject, class UClass* EventClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSEventSystem.DSEventSystemBlueprintFunctionLibrary.DSEventSubscribeToSubject");
		
		UDSEventSystemBlueprintFunctionLibrary_DSEventSubscribeToSubject_Params params {};
		params.Outer = Outer;
		params.Subject = Subject;
		params.EventClass = EventClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F15EA0
	 * 		Name   -> Function DSEventSystem.DSEventSystemBlueprintFunctionLibrary.DSEventSubscribeToAnySubject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Outer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      EventClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDSEventHandle* UDSEventSystemBlueprintFunctionLibrary::STATIC_DSEventSubscribeToAnySubject(class UObject* Outer, class UClass* EventClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSEventSystem.DSEventSystemBlueprintFunctionLibrary.DSEventSubscribeToAnySubject");
		
		UDSEventSystemBlueprintFunctionLibrary_DSEventSubscribeToAnySubject_Params params {};
		params.Outer = Outer;
		params.EventClass = EventClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F15DE0
	 * 		Name   -> Function DSEventSystem.DSEventSystemBlueprintFunctionLibrary.DSEventSubscribe
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Outer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      EventClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDSEventHandle* UDSEventSystemBlueprintFunctionLibrary::STATIC_DSEventSubscribe(class UObject* Outer, class UClass* EventClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSEventSystem.DSEventSystemBlueprintFunctionLibrary.DSEventSubscribe");
		
		UDSEventSystemBlueprintFunctionLibrary_DSEventSubscribe_Params params {};
		params.Outer = Outer;
		params.EventClass = EventClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F15D20
	 * 		Name   -> Function DSEventSystem.DSEventSystemBlueprintFunctionLibrary.DSEventCreateBroadcaster
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Outer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      EventClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDSEventBroadcaster* UDSEventSystemBlueprintFunctionLibrary::STATIC_DSEventCreateBroadcaster(class UObject* Outer, class UClass* EventClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSEventSystem.DSEventSystemBlueprintFunctionLibrary.DSEventCreateBroadcaster");
		
		UDSEventSystemBlueprintFunctionLibrary_DSEventCreateBroadcaster_Params params {};
		params.Outer = Outer;
		params.EventClass = EventClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSEventSystemBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSEventSystemBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSEventSystem.DSEventSystemBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F16150
	 * 		Name   -> Function DSEventSystem.DSEventHandle.Unsubscribe
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDSEventHandle::Unsubscribe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSEventSystem.DSEventHandle.Unsubscribe");
		
		UDSEventHandle_Unsubscribe_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSEventHandle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSEventHandle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSEventSystem.DSEventHandle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSEventBroadcaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSEventBroadcaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSEventSystem.DSEventBroadcaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F16050
	 * 		Name   -> Function DSEventSystem.DSNetEventComponent.ServerBroadcast
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FDSNetEventWrapper                          NetEventWrapper                                            (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDSNetEventComponent::ServerBroadcast(const struct FDSNetEventWrapper& NetEventWrapper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSEventSystem.DSNetEventComponent.ServerBroadcast");
		
		UDSNetEventComponent_ServerBroadcast_Params params {};
		params.NetEventWrapper = NetEventWrapper;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F15C40
	 * 		Name   -> Function DSEventSystem.DSNetEventComponent.ClientBroadcast
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		struct FDSNetEventWrapper                          NetEventWrapper                                            (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDSNetEventComponent::ClientBroadcast(const struct FDSNetEventWrapper& NetEventWrapper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSEventSystem.DSNetEventComponent.ClientBroadcast");
		
		UDSNetEventComponent_ClientBroadcast_Params params {};
		params.NetEventWrapper = NetEventWrapper;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSNetEventComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSNetEventComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSEventSystem.DSNetEventComponent");
		return ptr;
	}

}


