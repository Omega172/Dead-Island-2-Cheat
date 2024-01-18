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
	 * BlueprintGeneratedClass BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C
	 * Size -> 0x0078 (FullSize[0x06A0] - InheritedSize[0x0628])
	 */
	class ABP_MeleeWeapon_LegendaryMachete_C : public ABP_Base_MeleeWeapon_WithImpactResponse_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0628(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       UpdateEffect;                                            // 0x0630(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OP33[0x3];                                   // 0x0631(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCosmeticEffectsID                                  LegendaryMacheteCEID;                                    // 0x0634(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            ImpactRequirement;                                       // 0x0638(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		int32_t                                                    CurrentStack;                                            // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxStack;                                                // 0x0674(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ParameterToUpdate;                                       // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EffectDuration;                                          // 0x0680(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SocketToAttachCE;                                        // 0x0684(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ITB6[0x4];                                   // 0x068C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticEffectsDefinition*                          LegendaryMacheteCE;                                      // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Weapon_LegendaryMachete_C*                       CastedLegendaryMachete;                                  // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void StartCE(const struct FVector& LocationOffset, const struct FRotator& RotationOffset);
		void ImpactInstigated(const struct FPointImpactEventResult& RecordedImpact);
		void EffectEnded();
		void ReceiveTick(float DeltaSeconds);
		void ClearEffect();
		void DeferredBeginPlay();
		void FactChanged(bool bResult);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_MeleeWeapon_LegendaryMachete(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
