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
	 * BlueprintGeneratedClass BP_Action_AttackSequence_AI.BP_Action_AttackSequence_AI_C
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class UBP_Action_AttackSequence_AI_C : public UAttackSequenceAction
	{
	public:
		void GetResolutionForCoopHeavyAttack(ECharacterActionResolution* Resolution);
		void Resolve(const struct FCharacterActionResolveParams& Params, ECharacterActionResolution* OutResolution, float* OutQueuedTimeout);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
