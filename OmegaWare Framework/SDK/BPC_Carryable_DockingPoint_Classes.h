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
	 * BlueprintGeneratedClass BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C
	 * Size -> 0x00B0 (FullSize[0x0A60] - InheritedSize[0x09B0])
	 */
	class UBPC_Carryable_DockingPoint_C : public UDockComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UClass*>                                      CarryableClassesAllowedToDock;                           // 0x09B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       DisableDockAfterUse;                                     // 0x09C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JZYG[0x7];                                   // 0x09C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ActorDocked;                                             // 0x09D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       DockingPointActive;                                      // 0x09E0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YJXF[0x7];                                   // 0x09E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      ChildActors;                                             // 0x09E8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		unsigned char                                              UnknownData_P0Z5[0x8];                                   // 0x09F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          MeshOffset;                                              // 0x0A00(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FText                                                BlockedDisplayNameOverride;                              // 0x0A30(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                BlockedDisplayActionOverride;                            // 0x0A48(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

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
