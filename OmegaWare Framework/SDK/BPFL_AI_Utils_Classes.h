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
	 * BlueprintGeneratedClass BPFL_AI_Utils.BPFL_AI_Utils_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_AI_Utils_C : public UBlueprintFunctionLibrary
	{
	public:
		TArray<ECollisionChannel> GetAIEnvironmentCollisionChannels(class UObject* __WorldContext);
		void GetHitStimLocation(class AActor* Target, class AController* Instigator, class UObject* __WorldContext, struct FVector* StimLocation);
		void EmitHitStims(class AController* Attacker, class AActor* Target, class UObject* __WorldContext);
		void GetCombatTargetFromActor(class APawn* Actor, class UObject* __WorldContext, class AActor** CombatTarget, class AAIController** AIController);
		void GetCombatTarget(class AAIController* AIController, class UObject* __WorldContext, class AActor** CombatTarget);
		void EmitStimFromAI(class ABP_Base_AI_C* Receiver, class AController* Instigator, float Duration, class UStimTemplate* Stim, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
