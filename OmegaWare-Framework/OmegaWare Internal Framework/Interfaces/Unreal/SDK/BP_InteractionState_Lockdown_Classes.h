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
	 * BlueprintGeneratedClass BP_InteractionState_Lockdown.BP_InteractionState_Lockdown_C
	 * Size -> 0x0020 (FullSize[0x0130] - InheritedSize[0x0110])
	 */
	class UBP_InteractionState_Lockdown_C : public UBP_Base_InteractionState_C
	{
	public:
		struct FFixedDataTableEditableRowHandle                    DTRow;                                                   // 0x0110(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UBPC_Lockdown_C*                                     LockdownComponent;                                       // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCurrentState(bool* bStateActive);
		void UnbindToStateDelegates();
		void BindToStateDelegates();
		void CacheRequiredComponents(class AActor* Target);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
