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
	 * BlueprintGeneratedClass BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C
	 * Size -> 0x03B0 (FullSize[0x0770] - InheritedSize[0x03C0])
	 */
	class UBPC_Base_AOE_StatusEffect_ArcFromSource_C : public UDamageAOEArcFromSource
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGeneralImpactEventParams                           ArcShockGeneralImpactEvent;                              // 0x03C8(0x01B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FDSDamageData                                       DSDamageData;                                            // 0x0580(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TMap<class UClass*, struct FSArcFromSourceAffectedActorProperties> AffectedClassesAndProperties;                            // 0x05D8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      ArcShockHitSphereTraceRadius;                            // 0x0628(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T6Z1[0x4];                                   // 0x062C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DamageDropOffCurve;                                      // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    SphereCollision;                                         // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              OwningActor;                                             // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         ForceDropOffCurve;                                       // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowArcInterception;                                    // 0x0650(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MMTM[0x7];                                   // 0x0651(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDamageTypeAndQuantity>                      MaxDamageEventsToApply;                                  // 0x0658(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      MaxForce;                                                // 0x0668(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MTE2[0x4];                                   // 0x066C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          HitResult;                                               // 0x0670(0x00B0) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference
		bool                                                       TargetIntercepted;                                       // 0x0720(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LS3X[0x7];                                   // 0x0721(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      AffectedClasses;                                         // 0x0728(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UParticleSystem*                                     ArcParticle;                                             // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCosmeticEffectsDefinition*                          ImpactCosmeticEffect;                                    // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UFluidTypeInfo*>                              AcceptedFluidTypes;                                      // 0x0748(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              TargetClass;                                             // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EArcFromSourceSelectingAffectedActors                      HowAffectActorAreChosen;                                 // 0x0760(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CSPN[0x3];                                   // 0x0761(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxNumberOfAffectedActors;                               // 0x0764(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        SelectedActorsRandomiserTimer;                           // 0x0768(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void SetRandomisedAffectedActorsSelection();
		bool IsApartOfTheRandomisedAffectedActorsSelection(class AActor* TargetActor);
		bool IsActorWithinComparisonDistance(class AActor* TargetActor, EComparisonOperator Operator);
		struct FEventInstigator GetInstigator();
		bool CanReceiveArc(bool IsInterception);
		void RequestTransmitStatus(const struct FHitResult& HitInfo, class AActor* AffectedActor);
		bool GetTargetActorProperties(struct FSArcFromSourceAffectedActorProperties* Properties);
		bool TraceToAffectedActor(const struct FVector& StartTrace, const struct FVector& EndTrace, float ErrorTolerance, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit);
		void IsAcceptedFluidType(class AActor* AffectedActor, bool* IsFluid, bool* Success);
		struct FVector FindTargetPointLocation(class AActor* TargetActor, bool* Success);
		void DoesActorMeetAliveRequirements(class AActor* Actor, bool* Alive);
		void SetAcceptedClassArrays();
		bool UniversalActorConditions(class AActor* AffectedActor, bool IsInterception);
		void SetMaxForceAndDamage();
		void IsAcceptedClassType(class AActor* AffectedActor, bool* ReturnSuccess, class UClass** ReturnClass);
		void ForceModification(class AActor* TargetActor, float MaxValue, float* DropOffValue);
		void DamageModification(class AActor* TargetActor, float MaxValue, float* DropOffValue);
		void ApplyForceModification(struct FDSDamageData* DSDamageData);
		void ApplyDamageModification(struct FGeneralImpactEventParams* ArcShockGeneralImpactEvent);
		void WasArcIntercepted(const struct FVector& OwnerLocation, const struct FVector& IntialTargetLocation, const class FName& IntialTargetBoneName, float ErrorTolerance, bool* HasValidTarget, struct FVector* NewTargetBoneLocation, class FName* NewTargetBoneName);
		bool MeetsInterceptConditions(class AActor* AffectedActor);
		void GetOwnerAndTargetLocations(class AActor* AffectedActor, struct FVector* OwnerLocation, class FName* OwnerBoneName, struct FVector* TargetLocation, class FName* TargetBoneName);
		void GetOwnersLocationAndBoneName(struct FVector* Location, class FName* BoneName);
		void GetAffectedActorsLocationAndBoneName(class AActor* AffectedActor, struct FVector* Location, class FName* BoneName);
		bool MeetsDirectArcConditions(class AActor* AffectedActor);
		void GetRandomBoneVector(class AActor* DICharacter, bool* Success, struct FVector* Location, class FName* BoneName);
		void CreateParticle(class AActor* AffectedActor, const struct FVector& TargetLocation, const struct FVector& OwnerLocation);
		void SetInstigatorAndOwningCharacter();
		void RequestPointImpactOnTarget(const struct FHitResult& HitInfo, class AActor* AffectedActor);
		void ReceiveBeginPlay();
		void Multicast_CreateParticleEffect(class AActor* AffectedActor, const struct FVector& TargetLocation, const struct FVector& OwnerLocation);
		void UpdateActorAffected(class AActor* Actor);
		void OnActorEnter(class AActor* Actor);
		void OnActorExit(class AActor* Actor);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BPC_Base_AOE_StatusEffect_ArcFromSource(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
