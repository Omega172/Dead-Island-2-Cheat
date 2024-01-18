#pragma once

/**
 * Name: Dead_Island_2
 * Version: Cracked
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
		void CalculateDoorBounds(class AActor* Door, class UDoorDataAsset* DoorDataAsset, class UObject* __WorldContext, struct FVector* Center, struct FVector* Extents);
		void RemoveSideSpecificComponents(class AActor** Actor, EDoorSides DoorSide, class UObject* __WorldContext);
		void GetBillboardDescriptorName(class UObject* __WorldContext, class FName* DescriptorComponentName);
		void GetBillboardComponentName(class UObject* __WorldContext, class FName* BillboardComponentName);
		void RemoveMarkedAsStaticBillboard(class AActor* ActorRef, class UObject* __WorldContext);
		void AddMarkedAsStaticBillboard(class AActor* Actorroot, class UDoorDataAsset* DoorDataAsset, float AdditionalHeightOffset, const class FText& OptionalDescriptor, class UObject* __WorldContext, class UBillboardComponent** BillboardComponent);
		void SetMaterialColour(int32_t ElementIndex, class UStaticMeshComponent* Mesh, const struct FLinearColor& Colour, class UObject* __WorldContext);
		void CalculateFramePosition(class UDoorDataAsset* DoorDataAsset, EDoorSides DoorOrientation, class UObject* __WorldContext, struct FVector* FramePos);
		void DestroyComponentByName(const class FName& ComponentName, class AActor** Actor, class UObject* __WorldContext);
		void AddDoor(class USceneComponent** RootComponent, class UDoorDataAsset** DoorDataAsset, const struct FDoorInstanceConfig& DoorInstancedData, class UObject* __WorldContext, class UStaticMeshComponent** LeftDoor, class UStaticMeshComponent** RightDoor, class UStaticMeshComponent** Frame);
		void FindOrAddComponentOfTypeWithName(class UClass* ClassType, const class FName& ComponentName, class USceneComponent** ParentComponent, class UObject* __WorldContext, class USceneComponent** RequestedComponent);
		void SetUpDoorSceneComponents(class USceneComponent** RootComponent, class UDoorDataAsset** DoorDataAsset, struct FDoorInstanceConfig* InstanceData, class UObject* __WorldContext, class UStaticMeshComponent** LeftDoor, class UStaticMeshComponent** RightDoor);
		void PositionDoorPivots(class UDoorDataAsset** DoorDataAsset, class USceneComponent** LeftPivot, class USceneComponent** RightPivot, class UObject* __WorldContext);
		void GetDoorMeshFromDataAsset(class UDoorDataAsset** DoorDataAsset, EDoorSides DoorSide, class UObject* __WorldContext, bool* Mirrored, class UStaticMesh** Doormesh);
		void SetupFrame(class UDoorDataAsset** DoorDataAsset, const struct FDoorInstanceConfig& InstanceData, class USceneComponent* RootComponent, class UObject* __WorldContext, class UStaticMeshComponent** FrameComponent);
		void AddDoorElement(class UDoorDataAsset** DoorDataAsset, EDoorSides DoorSide, class UStaticMeshComponent** DoorMeshComponent, struct FDoorInstanceConfig* DoorInstancedata, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
