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
	 * BlueprintGeneratedClass BPC_Goal.BPC_Goal_C
	 * Size -> 0x0050 (FullSize[0x01A8] - InheritedSize[0x0158])
	 */
	class UBPC_Goal_C : public UGoalComponent
	{
	public:
		TMap<class ADICharacter*, struct FVector>                  ParticipantDestinations;                                 // 0x0158(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		TMap<class ADICharacter*, struct FVector> GetActiveParticipantDestinations();
		bool RemoveParticipantLocation(class ADICharacter* AI);
		void AddParticipantLocation(class ADICharacter* AI, const struct FVector& Location);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
