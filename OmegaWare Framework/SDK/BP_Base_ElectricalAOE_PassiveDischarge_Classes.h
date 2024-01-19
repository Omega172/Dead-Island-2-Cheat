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
	 * BlueprintGeneratedClass BP_Base_ElectricalAOE_PassiveDischarge.BP_Base_ElectricalAOE_PassiveDischarge_C
	 * Size -> 0x0048 (FullSize[0x0468] - InheritedSize[0x0420])
	 */
	class ABP_Base_ElectricalAOE_PassiveDischarge_C : public AEnvironmentalHazard
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_Hazard_StimEmitter_C*                           BPC_Hazard_StimEmitter;                                  // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_ArcFromSource_TargetPoint_C*                    BPC_ArcFromSource_TargetPoint;                           // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_AreaOfEffectResponder_ElectricalHazard_C*       BPC_AreaOfEffectResponder_ElectricalHazard;              // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FKnowledgeBaseFactKey>                       NoImpulseFilters;                                        // 0x0448(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FKnowledgeBaseFactKey>                       NoDestructionFilters;                                    // 0x0458(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		TArray<struct FKnowledgeBaseFactKey> GetNoDestructionFilters();
		TArray<struct FKnowledgeBaseFactKey> GetNoImpulseFilters();
		void AddRadialImpulse(class UPrimitiveComponent* Component, const struct FVector& Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bVelChange);
		void AddImpulseAtLocation(class UPrimitiveComponent* Component, const struct FVector& Impulse, const struct FVector& Location, const class FName& BoneName);
		void ExecuteUbergraph_BP_Base_ElectricalAOE_PassiveDischarge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
