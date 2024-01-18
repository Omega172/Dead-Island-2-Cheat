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
	 * BlueprintGeneratedClass BP_ActionParams_Distraction_StateMachine_AI.BP_ActionParams_Distraction_StateMachine_AI_C
	 * Size -> 0x0190 (FullSize[0x0280] - InheritedSize[0x00F0])
	 */
	class UBP_ActionParams_Distraction_StateMachine_AI_C : public UDistractionActionParams
	{
	public:
		float                                                      TravelToDistractionDurationScalar;                       // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		EDistractionSpeed                                          MovementSpeed;                                           // 0x00F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_ADCU[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActionDefinition*                                   MovementActionDefinition;                                // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TMap<EDistractionStates, EDistractionStates>               StateTransitions;                                        // 0x0100(0x0050) Edit, BlueprintVisible, ExposeOnSpawn
		float                                                      LookAtDurationScalar;                                    // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      LookAtDurationMaxTimeLimit;                              // 0x0154(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       FocusLookAtOnDistraction;                                // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IG81[0x3];                                   // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LookAtRequester;                                         // 0x015C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       UseFriendsCombatTargetAsDistractionFocus;                // 0x0164(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CancelIfStimFriendlyStimOwnerLosesCombatTarget;          // 0x0165(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3K5V[0x2];                                   // 0x0166(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_ActionParams_Distraction_Movement_AI_C*          MovementParams;                                          // 0x0168(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      InvestigationDurationScalar;                             // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_XFA6[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActionDefinition*                                   ActivityActionDefinition;                                // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            ActivityExpression;                                      // 0x0180(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		class UActionDefinition*                                   InvestigationActionDefinition;                           // 0x01B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCustomActionParamsBase*                             InvestigationActionParams;                               // 0x01C0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       FallbackToCannotReachTargetAction;                       // 0x01C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YLF9[0x7];                                   // 0x01C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActionDefinition*                                   CannotReachTargetInvestigationActionDefinition;          // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCustomActionParamsBase*                             CannotReachTargetInvestigationActionParams;              // 0x01D8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<EDistractionStates, EDistractionStates>               FailedStateTransitions;                                  // 0x01E0(0x0050) Edit, BlueprintVisible, ExposeOnSpawn
		TMap<EDistractionStates, struct FSKnowledgeBaseFacts>      StateBasedFacts;                                         // 0x0230(0x0050) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
