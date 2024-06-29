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
	 * BlueprintGeneratedClass BPFL_Carryables.BPFL_Carryables_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_Carryables_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UpdateCarryableImpactData(struct FEventInstigator* Instigator, class UImpactOnCollisionDetectionComponent* ImpactOnCollisionDetection, const struct FGuid& HitDetectionGUID, const struct FGuid& OverlapDetectionGUID, class UObject* __WorldContext, bool* InstigatorSet);
		void STATIC_EnableImpactsOnCarryable(class UImpactOnCollisionDetectionComponent* CarryableImpactOnCollisionDetection, struct FGuid* DisableRequestID, class UObject* __WorldContext);
		void STATIC_DisableImpactsOnCarryable(class UImpactOnCollisionDetectionComponent* CarryableImpactOnCollisionDetection, const class FName& Reason, struct FGuid* DisableRequestGUID, class UObject* __WorldContext, struct FGuid* DisableRequestID);
		void STATIC_SetupCarryableImpactOnCollisionDetection(class UBPC_Carryable_C* CarryableComponent, class UBPC_CarryableImpactOnCollisionDetection_C* CarryableImpactOnCollisionDetectionComponent, class UPrimitiveComponent* PrimitiveComponent, class USphereComponent* OverlapSphere, float OverlapSphereExtraRadius, const class FName& DisableImpactsReason, struct FGuid* DisableRequestGUID, class UObject* __WorldContext, struct FGuid* HitDetectionGUID, struct FGuid* OverlapDetectionGUID, struct FGuid* DisableRequestID);
		void IsCarrierLocal(class UCarryableComponent* CarryableComponent, class AActor* ContextualActor, class UObject* __WorldContext, bool* bOutIsLocal);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
