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
	 * 		Name   -> Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.CalculateDoorBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDoorDataAsset*                              DoorDataAsset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Center                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Extents                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DoorConstruction_C::CalculateDoorBounds(class AActor* Door, class UDoorDataAsset* DoorDataAsset, class UObject* __WorldContext, struct FVector* Center, struct FVector* Extents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.CalculateDoorBounds");
		
		UBPFL_DoorConstruction_C_CalculateDoorBounds_Params params {};
		params.Door = Door;
		params.DoorDataAsset = DoorDataAsset;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Center != nullptr)
			*Center = params.Center;
		if (Extents != nullptr)
			*Extents = params.Extents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.RemoveSideSpecificComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDoorSides                                         DoorSide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DoorConstruction_C::RemoveSideSpecificComponents(class AActor** Actor, EDoorSides DoorSide, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.RemoveSideSpecificComponents");
		
		UBPFL_DoorConstruction_C_RemoveSideSpecificComponents_Params params {};
		params.DoorSide = DoorSide;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.GetBillboardDescriptorName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        DescriptorComponentName                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DoorConstruction_C::GetBillboardDescriptorName(class UObject* __WorldContext, class FName* DescriptorComponentName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.GetBillboardDescriptorName");
		
		UBPFL_DoorConstruction_C_GetBillboardDescriptorName_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DescriptorComponentName != nullptr)
			*DescriptorComponentName = params.DescriptorComponentName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.GetBillboardComponentName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BillboardComponentName                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DoorConstruction_C::GetBillboardComponentName(class UObject* __WorldContext, class FName* BillboardComponentName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.GetBillboardComponentName");
		
		UBPFL_DoorConstruction_C_GetBillboardComponentName_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BillboardComponentName != nullptr)
			*BillboardComponentName = params.BillboardComponentName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.RemoveMarkedAsStaticBillboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DoorConstruction_C::RemoveMarkedAsStaticBillboard(class AActor* ActorRef, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.RemoveMarkedAsStaticBillboard");
		
		UBPFL_DoorConstruction_C_RemoveMarkedAsStaticBillboard_Params params {};
		params.ActorRef = ActorRef;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.AddMarkedAsStaticBillboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actorroot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDoorDataAsset*                              DoorDataAsset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AdditionalHeightOffset                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OptionalDescriptor                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBillboardComponent*                         BillboardComponent                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DoorConstruction_C::AddMarkedAsStaticBillboard(class AActor* Actorroot, class UDoorDataAsset* DoorDataAsset, float AdditionalHeightOffset, const class FText& OptionalDescriptor, class UObject* __WorldContext, class UBillboardComponent** BillboardComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.AddMarkedAsStaticBillboard");
		
		UBPFL_DoorConstruction_C_AddMarkedAsStaticBillboard_Params params {};
		params.Actorroot = Actorroot;
		params.DoorDataAsset = DoorDataAsset;
		params.AdditionalHeightOffset = AdditionalHeightOffset;
		params.OptionalDescriptor = OptionalDescriptor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BillboardComponent != nullptr)
			*BillboardComponent = params.BillboardComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.Set Material Colour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ElementIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Colour                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DoorConstruction_C::SetMaterialColour(int32_t ElementIndex, class UStaticMeshComponent* Mesh, const struct FLinearColor& Colour, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.Set Material Colour");
		
		UBPFL_DoorConstruction_C_SetMaterialColour_Params params {};
		params.ElementIndex = ElementIndex;
		params.Mesh = Mesh;
		params.Colour = Colour;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.Calculate Frame Position
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDoorDataAsset*                              DoorDataAsset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDoorSides                                         DoorOrientation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     FramePos                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DoorConstruction_C::CalculateFramePosition(class UDoorDataAsset* DoorDataAsset, EDoorSides DoorOrientation, class UObject* __WorldContext, struct FVector* FramePos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.Calculate Frame Position");
		
		UBPFL_DoorConstruction_C_CalculateFramePosition_Params params {};
		params.DoorDataAsset = DoorDataAsset;
		params.DoorOrientation = DoorOrientation;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FramePos != nullptr)
			*FramePos = params.FramePos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.DestroyComponentByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ComponentName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DoorConstruction_C::DestroyComponentByName(const class FName& ComponentName, class AActor** Actor, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.DestroyComponentByName");
		
		UBPFL_DoorConstruction_C_DestroyComponentByName_Params params {};
		params.ComponentName = ComponentName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.Add Door
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             RootComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDoorDataAsset*                              DoorDataAsset                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDoorInstanceConfig                         DoorInstancedData                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        LeftDoor                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        RightDoor                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        Frame                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DoorConstruction_C::AddDoor(class USceneComponent** RootComponent, class UDoorDataAsset** DoorDataAsset, const struct FDoorInstanceConfig& DoorInstancedData, class UObject* __WorldContext, class UStaticMeshComponent** LeftDoor, class UStaticMeshComponent** RightDoor, class UStaticMeshComponent** Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.Add Door");
		
		UBPFL_DoorConstruction_C_AddDoor_Params params {};
		params.DoorInstancedData = DoorInstancedData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RootComponent != nullptr)
			*RootComponent = params.RootComponent;
		if (DoorDataAsset != nullptr)
			*DoorDataAsset = params.DoorDataAsset;
		if (LeftDoor != nullptr)
			*LeftDoor = params.LeftDoor;
		if (RightDoor != nullptr)
			*RightDoor = params.RightDoor;
		if (Frame != nullptr)
			*Frame = params.Frame;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.FindOrAddComponentOfTypeWithName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ClassType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ComponentName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             ParentComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             RequestedComponent                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DoorConstruction_C::FindOrAddComponentOfTypeWithName(class UClass* ClassType, const class FName& ComponentName, class USceneComponent** ParentComponent, class UObject* __WorldContext, class USceneComponent** RequestedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.FindOrAddComponentOfTypeWithName");
		
		UBPFL_DoorConstruction_C_FindOrAddComponentOfTypeWithName_Params params {};
		params.ClassType = ClassType;
		params.ComponentName = ComponentName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParentComponent != nullptr)
			*ParentComponent = params.ParentComponent;
		if (RequestedComponent != nullptr)
			*RequestedComponent = params.RequestedComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.Set Up Door Scene Components
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             RootComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDoorDataAsset*                              DoorDataAsset                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDoorInstanceConfig                         InstanceData                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        LeftDoor                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        RightDoor                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DoorConstruction_C::SetUpDoorSceneComponents(class USceneComponent** RootComponent, class UDoorDataAsset** DoorDataAsset, struct FDoorInstanceConfig* InstanceData, class UObject* __WorldContext, class UStaticMeshComponent** LeftDoor, class UStaticMeshComponent** RightDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.Set Up Door Scene Components");
		
		UBPFL_DoorConstruction_C_SetUpDoorSceneComponents_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RootComponent != nullptr)
			*RootComponent = params.RootComponent;
		if (DoorDataAsset != nullptr)
			*DoorDataAsset = params.DoorDataAsset;
		if (InstanceData != nullptr)
			*InstanceData = params.InstanceData;
		if (LeftDoor != nullptr)
			*LeftDoor = params.LeftDoor;
		if (RightDoor != nullptr)
			*RightDoor = params.RightDoor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.Position Door Pivots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDoorDataAsset*                              DoorDataAsset                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             LeftPivot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             RightPivot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DoorConstruction_C::PositionDoorPivots(class UDoorDataAsset** DoorDataAsset, class USceneComponent** LeftPivot, class USceneComponent** RightPivot, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.Position Door Pivots");
		
		UBPFL_DoorConstruction_C_PositionDoorPivots_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DoorDataAsset != nullptr)
			*DoorDataAsset = params.DoorDataAsset;
		if (LeftPivot != nullptr)
			*LeftPivot = params.LeftPivot;
		if (RightPivot != nullptr)
			*RightPivot = params.RightPivot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.GetDoorMeshFromDataAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDoorDataAsset*                              DoorDataAsset                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDoorSides                                         DoorSide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Mirrored                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UStaticMesh*                                 Doormesh                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DoorConstruction_C::GetDoorMeshFromDataAsset(class UDoorDataAsset** DoorDataAsset, EDoorSides DoorSide, class UObject* __WorldContext, bool* Mirrored, class UStaticMesh** Doormesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.GetDoorMeshFromDataAsset");
		
		UBPFL_DoorConstruction_C_GetDoorMeshFromDataAsset_Params params {};
		params.DoorSide = DoorSide;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DoorDataAsset != nullptr)
			*DoorDataAsset = params.DoorDataAsset;
		if (Mirrored != nullptr)
			*Mirrored = params.Mirrored;
		if (Doormesh != nullptr)
			*Doormesh = params.Doormesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.SetupFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDoorDataAsset*                              DoorDataAsset                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDoorInstanceConfig                         InstanceData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class USceneComponent*                             RootComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        FrameComponent                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DoorConstruction_C::SetupFrame(class UDoorDataAsset** DoorDataAsset, const struct FDoorInstanceConfig& InstanceData, class USceneComponent* RootComponent, class UObject* __WorldContext, class UStaticMeshComponent** FrameComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.SetupFrame");
		
		UBPFL_DoorConstruction_C_SetupFrame_Params params {};
		params.InstanceData = InstanceData;
		params.RootComponent = RootComponent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DoorDataAsset != nullptr)
			*DoorDataAsset = params.DoorDataAsset;
		if (FrameComponent != nullptr)
			*FrameComponent = params.FrameComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.AddDoorElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDoorDataAsset*                              DoorDataAsset                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDoorSides                                         DoorSide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        DoorMeshComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDoorInstanceConfig                         DoorInstancedata                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_DoorConstruction_C::AddDoorElement(class UDoorDataAsset** DoorDataAsset, EDoorSides DoorSide, class UStaticMeshComponent** DoorMeshComponent, struct FDoorInstanceConfig* DoorInstancedata, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_DoorConstruction.BPFL_DoorConstruction_C.AddDoorElement");
		
		UBPFL_DoorConstruction_C_AddDoorElement_Params params {};
		params.DoorSide = DoorSide;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DoorDataAsset != nullptr)
			*DoorDataAsset = params.DoorDataAsset;
		if (DoorMeshComponent != nullptr)
			*DoorMeshComponent = params.DoorMeshComponent;
		if (DoorInstancedata != nullptr)
			*DoorInstancedata = params.DoorInstancedata;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_DoorConstruction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_DoorConstruction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_DoorConstruction.BPFL_DoorConstruction_C");
		return ptr;
	}

}


