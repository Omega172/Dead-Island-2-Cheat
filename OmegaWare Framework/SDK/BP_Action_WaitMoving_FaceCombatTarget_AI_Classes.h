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
	 * BlueprintGeneratedClass BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C
	 * Size -> 0x0018 (FullSize[0x01F0] - InheritedSize[0x01D8])
	 */
	class UBP_Action_WaitMoving_FaceCombatTarget_AI_C : public UBP_Action_WaitMoving_AI_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                MoveTargetName;                                          // 0x01E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        MoveTargetUpdateTimer;                                   // 0x01E8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void TryRemoveAgainstWallFact();
		void RemoveMovement();
		void AddMovement();
		void RemoveMoveTarget();
		void UpdateMoveTarget();
		void CombatTargetChanged(class UCombatTargetComponent* NewTarget);
		void ExecuteUbergraph_BP_Action_WaitMoving_FaceCombatTarget_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
