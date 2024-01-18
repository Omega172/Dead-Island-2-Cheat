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
	 * BlueprintGeneratedClass BPC_Base_Distraction_AI.BPC_Base_Distraction_AI_C
	 * Size -> 0x0110 (FullSize[0x0238] - InheritedSize[0x0128])
	 */
	class UBPC_Base_Distraction_AI_C : public UDistractionComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0128(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TMap<class UStimTemplate*, float>                          GlobalCooldownList;                                      // 0x0130(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FName, int32_t>                                 DistractionWanderPriorities;                             // 0x0180(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<struct FGuid, struct FSDistractionWanderParams>       CurrentWanderDistractions;                               // 0x01D0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnDistractionWanderChanged;                              // 0x0220(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool HasValidDistractionWander();
		void GetHighestDistractionWander(bool* Success, struct FGuid* DistractionWanderID, struct FSDistractionWanderParams* Interest);
		void RemoveDistractionWander(const struct FGuid& WanderInterestID);
		void AddDistractionWander(const struct FSDistractionWanderParams& InterestParams, struct FGuid* WanderInterestID);
		float GetStimGlobalCooldownTimeStamp(class UStimTemplate* StimTemplate);
		void AddStimToGlobalCooldownList(class UStimTemplate* StimTemplate, float Timestamp);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPC_Base_Distraction_AI(int32_t EntryPoint);
		void OnDistractionWanderChanged__DelegateSignature(bool HasValidDistractionWander);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
