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
	 * BlueprintGeneratedClass BPFL_WeaponFunctions.BPFL_WeaponFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_WeaponFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_IsActorWeapon(class AActor* Actor, class UObject* __WorldContext, bool* IsWeapon, class AWeaponItemActor** Weapon);
		void STATIC_GetWeaponItemEquippableComponent(class AActor* Actor, class UObject* __WorldContext, class UWeaponEquippableComponent** EquippableComponent, bool* ComponentFound);
		void STATIC_IsHeldWeaponUsingWeaponPose(class AActor* Owner, class UObject* __WorldContext, bool* IsUsingAdditive);
		void STATIC_ResetAttackAnticMontages(class AActor* Player, class UObject* __WorldContext);
		void STATIC_SetInChainFact(class ADICharacter* Character, bool FactValue, class UObject* __WorldContext, bool* Success);
		void STATIC_UpdateAIWeaponPose(ECosmeticCombatState CombatState, class ADICharacter* Character, class UObject* Weapon, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
