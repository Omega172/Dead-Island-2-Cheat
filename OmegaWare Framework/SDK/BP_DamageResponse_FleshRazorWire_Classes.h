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
	 * BlueprintGeneratedClass BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C
	 * Size -> 0x0039 (FullSize[0x0071] - InheritedSize[0x0038])
	 */
	class UBP_DamageResponse_FleshRazorWire_C : public UGameCollisionResponse
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              DamageType;                                              // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HazardDamageToApply;                                     // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Strength;                                                // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FStateTransmissionSettings>                  EnvMessages;                                             // 0x0050(0x0010) Edit, BlueprintVisible
		struct FAccumulatingEffectArray                            AccumulatingEffectsToUpdate;                             // 0x0060(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       ShouldApplyDamage;                                       // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool IsCollisionValid(class USimpleCollisionInstanceData* SimpleCollisionInstanceData);
		void RequestImpactEvent(class AActor* DamagedActor, const struct FEventInstigator& EventInstigator);
		void BloodEffect(class AActor* Actor, const struct FVector& CollisionWorldPosition);
		void HandleCollisionUpdate(class USimpleCollisionInstanceData* SimpleCollisionInstanceData, float UpdateDeltaTime);
		void HandleCollision(class UFullCollisionInstanceData* FullCollisionInstanceData);
		void ExecuteUbergraph_BP_DamageResponse_FleshRazorWire(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
