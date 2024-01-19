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
	 * 		Name   -> PredefinedFunction AWorldAlignmentInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWorldAlignmentInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WorldMap.WorldAlignmentInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldMapStaticMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldMapStaticMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WorldMap.WorldMapStaticMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWorldMapInstancedActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWorldMapInstancedActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WorldMap.WorldMapInstancedActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7CF0
	 * 		Name   -> Function WorldMap.WorldMapActor.RevealMeshesWithID
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ID                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRevealedByLocalPlayer                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWorldMapActor::RevealMeshesWithID(const class FName& ID, bool bRevealedByLocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapActor.RevealMeshesWithID");
		
		AWorldMapActor_RevealMeshesWithID_Params params {};
		params.ID = ID;
		params.bRevealedByLocalPlayer = bRevealedByLocalPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7CC0
	 * 		Name   -> Function WorldMap.WorldMapActor.IsMapVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AWorldMapActor::IsMapVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapActor.IsMapVisible");
		
		AWorldMapActor_IsMapVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7C40
	 * 		Name   -> Function WorldMap.WorldMapActor.GetWorldMapActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AWorldMapActor* AWorldMapActor::STATIC_GetWorldMapActor(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapActor.GetWorldMapActor");
		
		AWorldMapActor_GetWorldMapActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7C10
	 * 		Name   -> Function WorldMap.WorldMapActor.GetCameraFocusComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class USceneComponent* AWorldMapActor::GetCameraFocusComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapActor.GetCameraFocusComponent");
		
		AWorldMapActor_GetCameraFocusComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7BC0
	 * 		Name   -> Function WorldMap.WorldMapActor.GetCameraFocusBounds
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FBox AWorldMapActor::GetCameraFocusBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapActor.GetCameraFocusBounds");
		
		AWorldMapActor_GetCameraFocusBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7B90
	 * 		Name   -> Function WorldMap.WorldMapActor.GetCameraComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UCameraComponent* AWorldMapActor::GetCameraComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapActor.GetCameraComponent");
		
		AWorldMapActor_GetCameraComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7B70
	 * 		Name   -> Function WorldMap.WorldMapActor.ExitWorldMap
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWorldMapActor::ExitWorldMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapActor.ExitWorldMap");
		
		AWorldMapActor_ExitWorldMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7B50
	 * 		Name   -> Function WorldMap.WorldMapActor.EnterWorldMap
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWorldMapActor::EnterWorldMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapActor.EnterWorldMap");
		
		AWorldMapActor_EnterWorldMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7B30
	 * 		Name   -> Function WorldMap.WorldMapActor.CreateWorldMap
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWorldMapActor::CreateWorldMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapActor.CreateWorldMap");
		
		AWorldMapActor_CreateWorldMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7B10
	 * 		Name   -> Function WorldMap.WorldMapActor.CleanWorldMap
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWorldMapActor::CleanWorldMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapActor.CleanWorldMap");
		
		AWorldMapActor_CleanWorldMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7AF0
	 * 		Name   -> Function WorldMap.WorldMapActor.BeginDestroyMap
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWorldMapActor::BeginDestroyMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapActor.BeginDestroyMap");
		
		AWorldMapActor_BeginDestroyMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB7AD0
	 * 		Name   -> Function WorldMap.WorldMapActor.BeginCreatedMap
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWorldMapActor::BeginCreatedMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldMap.WorldMapActor.BeginCreatedMap");
		
		AWorldMapActor_BeginCreatedMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWorldMapActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWorldMapActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WorldMap.WorldMapActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldMapInstanceDatabase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldMapInstanceDatabase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WorldMap.WorldMapInstanceDatabase");
		return ptr;
	}

}


