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
	 * BlueprintGeneratedClass BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C
	 * Size -> 0x00B0 (FullSize[0x0B00] - InheritedSize[0x0A50])
	 */
	class UBPC_Carryable_DockingPoint_C : public UDockComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UClass*>                                      CarryableClassesAllowedToDock;                           // 0x0A58(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       DisableDockAfterUse;                                     // 0x0A68(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O13B[0x7];                                   // 0x0A69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ActorDocked;                                             // 0x0A70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       DockingPointActive;                                      // 0x0A80(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J60B[0x7];                                   // 0x0A81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      ChildActors;                                             // 0x0A88(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		unsigned char                                              UnknownData_7AHH[0x8];                                   // 0x0A98(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          MeshOffset;                                              // 0x0AA0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FText                                                BlockedDisplayNameOverride;                              // 0x0AD0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                BlockedDisplayActionOverride;                            // 0x0AE8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool AllowInteraction(class APawn* User, class UInteractiveComponent* InteractiveComponent);
		class UClass* GetInteractIconClass(class UInteractiveComponent* InteractiveComponent);
		bool ShouldLockDockable();
		struct FTransform GetMeshOffset();
		void SetDockingPointActive(bool Active);
		void ReceiveBeginPlay();
		void BlueprintOnDocked(class AActor* Dockable);
		void ExecuteUbergraph_BPC_Carryable_DockingPoint(int32_t EntryPoint);
		void ActorDocked__DelegateSignature(class AActor* DockedActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
