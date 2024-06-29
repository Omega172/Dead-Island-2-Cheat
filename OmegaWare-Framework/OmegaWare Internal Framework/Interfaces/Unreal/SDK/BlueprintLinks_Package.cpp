﻿/**
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
	 * 		RVA    -> 0x00BCFE40
	 * 		Name   -> Function BlueprintLinks.BlueprintLinks.AddLinks
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class AActor*>                              ActorsToPointTo                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UBlueprintLinks::AddLinks(TArray<class AActor*> ActorsToPointTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintLinks.BlueprintLinks.AddLinks");
		
		UBlueprintLinks_AddLinks_Params params {};
		params.ActorsToPointTo = ActorsToPointTo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlueprintLinks.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlueprintLinks::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintLinks.BlueprintLinks");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCFFF0
	 * 		Name   -> Function BlueprintLinks.BlueprintLinksInterface.GatherComponentBlueprintLinks
	 * 		Flags  -> (Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<struct FComponentLinkInformation>           ComponentLinks                                             (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UBlueprintLinksInterface::GatherComponentBlueprintLinks(TArray<struct FComponentLinkInformation>* ComponentLinks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintLinks.BlueprintLinksInterface.GatherComponentBlueprintLinks");
		
		UBlueprintLinksInterface_GatherComponentBlueprintLinks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComponentLinks != nullptr)
			*ComponentLinks = params.ComponentLinks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCFF40
	 * 		Name   -> Function BlueprintLinks.BlueprintLinksInterface.GatherBlueprintLinks
	 * 		Flags  -> (Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<class AActor*>                              ActorsToPointTo                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UBlueprintLinksInterface::GatherBlueprintLinks(TArray<class AActor*>* ActorsToPointTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintLinks.BlueprintLinksInterface.GatherBlueprintLinks");
		
		UBlueprintLinksInterface_GatherBlueprintLinks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorsToPointTo != nullptr)
			*ActorsToPointTo = params.ActorsToPointTo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCFEF0
	 * 		Name   -> Function BlueprintLinks.BlueprintLinksInterface.CollectBlueprintLinks
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	TArray<class AActor*> UBlueprintLinksInterface::CollectBlueprintLinks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintLinks.BlueprintLinksInterface.CollectBlueprintLinks");
		
		UBlueprintLinksInterface_CollectBlueprintLinks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlueprintLinksInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlueprintLinksInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueprintLinks.BlueprintLinksInterface");
		return ptr;
	}

}

