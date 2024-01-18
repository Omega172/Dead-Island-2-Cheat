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
	 * 		Name   -> Function Gateway.AirlockActor.RequestGatewayOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        GatewayName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAirlockActor::RequestGatewayOpen(const class FName& GatewayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gateway.AirlockActor.RequestGatewayOpen");
		
		AAirlockActor_RequestGatewayOpen_Params params {};
		params.GatewayName = GatewayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gateway.AirlockActor.OpenGateway
	 * 		Flags  -> ()
	 */
	void AAirlockActor::OpenGateway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gateway.AirlockActor.OpenGateway");
		
		AAirlockActor_OpenGateway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Gateway.AirlockActor.GatherBlueprintLinks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              ActorsToPointTo                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void AAirlockActor::GatherBlueprintLinks(TArray<class AActor*>* ActorsToPointTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gateway.AirlockActor.GatherBlueprintLinks");
		
		AAirlockActor_GatherBlueprintLinks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorsToPointTo != nullptr)
			*ActorsToPointTo = params.ActorsToPointTo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAirlockActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAirlockActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gateway.AirlockActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGatewayComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGatewayComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gateway.GatewayComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGatewayDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGatewayDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gateway.GatewayDataAsset");
		return ptr;
	}

}


