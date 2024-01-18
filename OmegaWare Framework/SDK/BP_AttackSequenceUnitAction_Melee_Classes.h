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
	 * BlueprintGeneratedClass BP_AttackSequenceUnitAction_Melee.BP_AttackSequenceUnitAction_Melee_C
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	class UBP_AttackSequenceUnitAction_Melee_C : public UAttackSequenceUnit_MeleeAction
	{
	public:
		struct FModifierAndValue                                   EffectivenessModifier;                                   // 0x00C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FModifierAndValue                                   HitDistanceModifier;                                     // 0x00D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void RemoveModifier(const struct FModifierAndValue& ModifierAndValue, class ADICharacter* Target, const struct FGuid& RegisteredGUID);
		void ApplyModifier(const struct FModifierAndValue& ModifierAndValue, class ADICharacter* Target, bool* Success, struct FGuid* ModifierRef);
		void ReceiveEndUnit(bool bSuccess, class UAttackSequenceUnitState* State);
		void ReceiveBeginUnit(class UAttackSequenceUnitState* State);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
