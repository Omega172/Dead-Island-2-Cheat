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
	 * BlueprintGeneratedClass BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C
	 * Size -> 0x00ED (FullSize[0x043D] - InheritedSize[0x0350])
	 */
	class UBP_Action_DistractionWander_AI_C : public UBP_Action_Base_AreaMovement_AI_C
	{
	public:
		class UBPC_Base_Distraction_AI_C*                          DistractionComponent;                                    // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               CurrentDistractionID;                                    // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSDistractionWanderParams                           CurrentWanderDistractionStim;                            // 0x0368(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               DistractionWanderLocationFact;                           // 0x0430(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       DistractionWanderLocationFactAdded;                      // 0x043C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnEarlyEndMovement();
		void SetQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery);
		void TryRemoveDistractionWanderFact();
		void AddDistractionWanderFact();
		void RemoveMovement();
		void TrySetDistractionWanderTarget(bool* Success);
		void AddMovement();
		bool OnBeginEarly();
		float GetAreaRadius();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
