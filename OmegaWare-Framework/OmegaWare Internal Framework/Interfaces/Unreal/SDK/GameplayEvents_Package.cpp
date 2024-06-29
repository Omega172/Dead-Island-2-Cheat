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
	 * 		RVA    -> 0x00A91F20
	 * 		Name   -> Function GameplayEvents.GameplayEventComponent.ServerMulticastDispatchEvent
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FGameplayEvent                              GameplayEvent                                              (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGameplayEventComponent::ServerMulticastDispatchEvent(const struct FGameplayEvent& GameplayEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayEvents.GameplayEventComponent.ServerMulticastDispatchEvent");
		
		UGameplayEventComponent_ServerMulticastDispatchEvent_Params params {};
		params.GameplayEvent = GameplayEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A91E30
	 * 		Name   -> Function GameplayEvents.GameplayEventComponent.ServerDispatchEvent
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FGameplayEvent                              GameplayEvent                                              (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGameplayEventComponent::ServerDispatchEvent(const struct FGameplayEvent& GameplayEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayEvents.GameplayEventComponent.ServerDispatchEvent");
		
		UGameplayEventComponent_ServerDispatchEvent_Params params {};
		params.GameplayEvent = GameplayEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A91D20
	 * 		Name   -> Function GameplayEvents.GameplayEventComponent.NetMulticastDispatchEvent
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		struct FGameplayEvent                              GameplayEvent                                              (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EGameplayEventInstigator                           Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayEventComponent::NetMulticastDispatchEvent(const struct FGameplayEvent& GameplayEvent, EGameplayEventInstigator Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayEvents.GameplayEventComponent.NetMulticastDispatchEvent");
		
		UGameplayEventComponent_NetMulticastDispatchEvent_Params params {};
		params.GameplayEvent = GameplayEvent;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A91C50
	 * 		Name   -> Function GameplayEvents.GameplayEventComponent.ClientDispatchEvent
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 * Parameters:
	 * 		struct FGameplayEvent                              GameplayEvent                                              (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGameplayEventComponent::ClientDispatchEvent(const struct FGameplayEvent& GameplayEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayEvents.GameplayEventComponent.ClientDispatchEvent");
		
		UGameplayEventComponent_ClientDispatchEvent_Params params {};
		params.GameplayEvent = GameplayEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayEventComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayEventComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayEvents.GameplayEventComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameplayEventManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameplayEventManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayEvents.GameplayEventManager");
		return ptr;
	}

}


