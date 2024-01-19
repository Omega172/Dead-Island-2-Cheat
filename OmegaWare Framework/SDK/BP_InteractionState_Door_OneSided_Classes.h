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
	 * BlueprintGeneratedClass BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C
	 * Size -> 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
	 */
	class UBP_InteractionState_Door_OneSided_C : public UBP_Base_InteractionState_C
	{
	public:
		class UOpenableComponent*                                  OpenableComponent;                                       // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DoorInteractionReason;                                   // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCurrentState(bool* bStateActive);
		void UnbindToStateDelegates();
		void OnDoorOpened();
		void OnDoorClosed();
		void OnDoorStateChanged(EOpenableState NewState);
		void BindToStateDelegates();
		void CacheRequiredComponents(class AActor* Target);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
