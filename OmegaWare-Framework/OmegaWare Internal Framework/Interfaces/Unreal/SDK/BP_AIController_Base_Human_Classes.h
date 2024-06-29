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
	 * BlueprintGeneratedClass BP_AIController_Base_Human.BP_AIController_Base_Human_C
	 * Size -> 0x0018 (FullSize[0x06E0] - InheritedSize[0x06C8])
	 */
	class ABP_AIController_Base_Human_C : public ABP_Base_AIController_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDSLogChannelHandle*                                 DebugPassiveLogger;                                      // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBehaviourModifierComponent*                         BehaviourModifierComponentRef;                           // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void EnableCombat();
		void DisableCombat();
		void ReceiveUnPossess(class APawn* UnpossessedPawn);
		void ReceiveBeginPlay();
		void ReceivePossess(class APawn* PossessedPawn);
		void ExecuteUbergraph_BP_AIController_Base_Human(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
