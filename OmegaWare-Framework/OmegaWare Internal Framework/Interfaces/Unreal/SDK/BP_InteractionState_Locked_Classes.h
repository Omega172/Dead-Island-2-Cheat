﻿#pragma once

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
	 * BlueprintGeneratedClass BP_InteractionState_Locked.BP_InteractionState_Locked_C
	 * Size -> 0x0008 (FullSize[0x0118] - InheritedSize[0x0110])
	 */
	class UBP_InteractionState_Locked_C : public UBP_Base_InteractionState_C
	{
	public:
		class ULockComponent*                                      LockComponent;                                           // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCurrentState(bool* bStateActive);
		void OnLockStateUpdated(bool bIsLocked);
		void UnbindToStateDelegates();
		void CacheRequiredComponents(class AActor* Target);
		void BindToStateDelegates();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
