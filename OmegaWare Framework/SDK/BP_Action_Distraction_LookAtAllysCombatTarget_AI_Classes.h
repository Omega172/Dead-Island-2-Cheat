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
	 * BlueprintGeneratedClass BP_Action_Distraction_LookAtAllysCombatTarget_AI.BP_Action_Distraction_LookAtAllysCombatTarget_AI_C
	 * Size -> 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
	 */
	class UBP_Action_Distraction_LookAtAllysCombatTarget_AI_C : public UBP_Action_Distraction_LookAt_AI_C
	{
	public:
		class UCombatAggroComponent*                               AllysAggroComponent;                                     // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              AllysCombatTarget;                                       // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetAllysController(class ADIAIController** AsDIAIController);
		void GetLookAtTarget(bool* FoundLookAtTarget, class USceneComponent** GetLookAtComponent, struct FVector* GetLookatLocation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
