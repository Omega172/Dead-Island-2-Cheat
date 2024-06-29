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
	 * BlueprintGeneratedClass BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C
	 * Size -> 0x0028 (FullSize[0x0798] - InheritedSize[0x0770])
	 */
	class UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C : public UBPC_Base_AOE_StatusEffect_ArcFromSource_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0770(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      FacingTargetAngleAffectArea;                             // 0x0778(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCosmeticEffectsID                                  CosmeticEffectID;                                        // 0x077C(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class ADIAICharacter*>                              AIWithinScreamCone;                                      // 0x0780(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      MaxAffectingZombies;                                     // 0x0790(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfAIWithinCone;                                    // 0x0794(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsActorWithinScreamCone(class AActor* AffectedActor, bool* Result);
		void SetNumberOfAIWithinScreamCone(bool Add, class ADIAICharacter* AffectedDIAICharacter);
		void CreateParticle(class AActor* AffectedActor, const struct FVector& TargetLocation, const struct FVector& OwnerLocation);
		void GetOwnersLocationAndBoneName(struct FVector* Location, class FName* BoneName);
		bool MeetsDirectArcConditions(class AActor* AffectedActor);
		void OnActorEnter(class AActor* Actor);
		void OnActorExit(class AActor* Actor);
		void ExecuteUbergraph_BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
