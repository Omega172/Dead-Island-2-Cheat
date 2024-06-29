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
	 * BlueprintGeneratedClass BP_PerkCondition_HasTakenDamageFromHostile_Data.BP_PerkCondition_HasTakenDamageFromHostile_Data_C
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UBP_PerkCondition_HasTakenDamageFromHostile_Data_C : public UConditionCustomDataBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDamageableComponent*                                OwnerDamageableComponent;                                // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AreDamageConditionsAreMet(const struct FDSDamageData& DSDamageData, bool* IsTrue);
		void GetFactionReaction(class AActor* DamagedActor, class AActor* DamageCauserActor, EFactionReaction* Reaction);
		void GetActorFactionManager(class AActor* Actor, class UFactionAgentComponent** FactionManagerComponent);
		void OnOwnerTookDamage(class AActor* DamagedActor, float OriginalDamage, float DamageTaken, const struct FDamageEvent& DamageEvent, const struct FEventInstigator& InstigatedBy, class AActor* DamageCauser, const struct FDSDamageData& DSDamageData);
		void ExecuteUbergraph_BP_PerkCondition_HasTakenDamageFromHostile_Data(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
