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
	 * BlueprintGeneratedClass BP_Base_ElectricalAOE_TriggeredDischarge.BP_Base_ElectricalAOE_TriggeredDischarge_C
	 * Size -> 0x0038 (FullSize[0x0548] - InheritedSize[0x0510])
	 */
	class ABP_Base_ElectricalAOE_TriggeredDischarge_C : public ABP_Base_ElectricalAOE_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_ArcFromSource_TargetPoint_C*                    BPC_ArcFromSource_TargetPoint;                           // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_AreaOfEffectResponder_ElectricalHazard_C*       BPC_AreaOfEffectResponder_ElectricalHazard;              // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FKnowledgeBaseFactKey>                       NoImpulseFilters;                                        // 0x0528(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FKnowledgeBaseFactKey>                       NoDestructionFilters;                                    // 0x0538(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		TArray<struct FKnowledgeBaseFactKey> GetNoDestructionFilters();
		TArray<struct FKnowledgeBaseFactKey> GetNoImpulseFilters();
		void BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_1_OnRadialImpactEventReceivedDelegate__DelegateSignature(class AActor* Actor, const struct FRadialImpactEventResult& ImpactEvent);
		void AddRadialImpulse(class UPrimitiveComponent* Component, const struct FVector& Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bVelChange);
		void AddImpulseAtLocation(class UPrimitiveComponent* Component, const struct FVector& Impulse, const struct FVector& Location, const class FName& BoneName);
		void ExecuteUbergraph_BP_Base_ElectricalAOE_TriggeredDischarge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
