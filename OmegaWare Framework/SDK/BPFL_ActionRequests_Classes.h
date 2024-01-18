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
	 * BlueprintGeneratedClass BPFL_ActionRequests.BPFL_ActionRequests_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_ActionRequests_C : public UBlueprintFunctionLibrary
	{
	public:
		void RequestExplosion(class UObject* Outer, class UExplosionActionArchetype* ExplosionArchetype, class AActor* Causer, class AController* InstigatorController, const struct FVector& Position, const struct FRotator& Rotation, bool IgnoreInstigator, class AActor* EquippedWeapon, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
