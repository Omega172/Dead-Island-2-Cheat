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
	 * BlueprintGeneratedClass BPC_ThresholdTracking_AI.BPC_ThresholdTracking_AI_C
	 * Size -> 0x0010 (FullSize[0x0170] - InheritedSize[0x0160])
	 */
	class UBPC_ThresholdTracking_AI_C : public UThresholdTrackingComponent
	{
	public:
		class FScriptMulticastDelegate                             ListenForDamageOverTimeDelegate;                         // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ListenForDamageOverTimeDelegate__DelegateSignature(const struct FGuid& TrackingGuid);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
