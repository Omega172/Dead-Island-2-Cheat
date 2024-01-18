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
	 * BlueprintGeneratedClass BP_Action_MeleeSubAction_Attack_AI.BP_Action_MeleeSubAction_Attack_AI_C
	 * Size -> 0x0018 (FullSize[0x0430] - InheritedSize[0x0418])
	 */
	class UBP_Action_MeleeSubAction_Attack_AI_C : public UAIMeleeSubAction_Attack
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             EnemyHitDelegate;                                        // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ReceiveProcessHit(const struct FMeleeAttackLine& AttackLine, class ADICharacter* Target, bool bGeneratedHit, const struct FHitResult& HitResult);
		void ExecuteUbergraph_BP_Action_MeleeSubAction_Attack_AI(int32_t EntryPoint);
		void EnemyHitDelegate__DelegateSignature(const struct FMeleeAttackLine& AttackLine, const struct FHitResult& HitResult);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
