#pragma once

/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPFL_DoorConstruction.BPFL_DoorConstruction_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_DoorConstruction_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_CalculateDoorBounds(class AActor* Door, class UDoorDataAsset* DoorDataAsset, class UObject* __WorldContext, struct FVector* Center, struct FVector* Extents);
		void STATIC_RemoveSideSpecificComponents(class AActor** Actor, EDoorSides DoorSide, class UObject* __WorldContext);
		void STATIC_GetBillboardDescriptorName(class UObject* __WorldContext, class FName* DescriptorComponentName);
		void STATIC_GetBillboardComponentName(class UObject* __WorldContext, class FName* BillboardComponentName);
		void STATIC_RemoveMarkedAsStaticBillboard(class AActor* ActorRef, class UObject* __WorldContext);
		void STATIC_AddMarkedAsStaticBillboard(class AActor* Actorroot, class UDoorDataAsset* DoorDataAsset, float AdditionalHeightOffset, const class FText& OptionalDescriptor, class UObject* __WorldContext, class UBillboardComponent** BillboardComponent);
		void STATIC_SetMaterialColour(int32_t ElementIndex, class UStaticMeshComponent* Mesh, const struct FLinearColor& Colour, class UObject* __WorldContext);
		void STATIC_CalculateFramePosition(class UDoorDataAsset* DoorDataAsset, EDoorSides DoorOrientation, class UObject* __WorldContext, struct FVector* FramePos);
		void STATIC_DestroyComponentByName(const class FName& ComponentName, class AActor** Actor, class UObject* __WorldContext);
		void STATIC_AddDoor(class USceneComponent** RootComponent, class UDoorDataAsset** DoorDataAsset, const struct FDoorInstanceConfig& DoorInstancedData, class UObject* __WorldContext, class UStaticMeshComponent** LeftDoor, class UStaticMeshComponent** RightDoor, class UStaticMeshComponent** Frame);
		void STATIC_FindOrAddComponentOfTypeWithName(class UClass* ClassType, const class FName& ComponentName, class USceneComponent** ParentComponent, class UObject* __WorldContext, class USceneComponent** RequestedComponent);
		void STATIC_SetUpDoorSceneComponents(class USceneComponent** RootComponent, class UDoorDataAsset** DoorDataAsset, struct FDoorInstanceConfig* InstanceData, class UObject* __WorldContext, class UStaticMeshComponent** LeftDoor, class UStaticMeshComponent** RightDoor);
		void STATIC_PositionDoorPivots(class UDoorDataAsset** DoorDataAsset, class USceneComponent** LeftPivot, class USceneComponent** RightPivot, class UObject* __WorldContext);
		void STATIC_GetDoorMeshFromDataAsset(class UDoorDataAsset** DoorDataAsset, EDoorSides DoorSide, class UObject* __WorldContext, bool* Mirrored, class UStaticMesh** Doormesh);
		void STATIC_SetupFrame(class UDoorDataAsset** DoorDataAsset, const struct FDoorInstanceConfig& InstanceData, class USceneComponent* RootComponent, class UObject* __WorldContext, class UStaticMeshComponent** FrameComponent);
		void STATIC_AddDoorElement(class UDoorDataAsset** DoorDataAsset, EDoorSides DoorSide, class UStaticMeshComponent** DoorMeshComponent, struct FDoorInstanceConfig* DoorInstancedata, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
