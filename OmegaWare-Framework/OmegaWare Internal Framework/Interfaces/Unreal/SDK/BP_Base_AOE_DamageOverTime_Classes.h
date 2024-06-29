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
	 * BlueprintGeneratedClass BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C
	 * Size -> 0x0045 (FullSize[0x03E5] - InheritedSize[0x03A0])
	 */
	class UBP_Base_AOE_DamageOverTime_C : public UDamageAOEDamageOverTime
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FKnowledgeBaseFactKey                               IgnoreDamageKbFact;                                      // 0x03A8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      HazardDamageToApply;                                     // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAccumulatingEffectArray                            AccumulatingEffectsToUpdate;                             // 0x03B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              DamageType;                                              // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FStateTransmissionSettings>                  EnvMessages;                                             // 0x03D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      StatusEffectScalar;                                      // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowFriendlyFire;                                       // 0x03E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CanAffectTarget(class AActor* TargetActor, bool* IsTrue);
		void IsTargetActorAlive(class AActor* TargetActor, bool* IsAlive);
		void CanApplyDamage(bool* IsTrue);
		void RequestImpactOnTarget();
		void IsTargetActorAlsoOwner(class AActor* TargetActor, bool* IsTrue);
		void UpdateActorAffected(class AActor* Actor);
		void ExecuteUbergraph_BP_Base_AOE_DamageOverTime(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
