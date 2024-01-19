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
	 * BlueprintGeneratedClass BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C
	 * Size -> 0x0131 (FullSize[0x0201] - InheritedSize[0x00D0])
	 */
	class UBP_Action_Distraction_AnimStateMachine_AI_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      MaxSearchDistanceInFrontOfOwner;                         // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RMDX[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADIAIController*                                     Controller;                                              // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIAICharacter*                                      Character;                                               // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       AnimSetActionHelper;                                     // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMeatbaitAnimStates                                        CurrentState;                                            // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5K8K[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        AnimSetSpacingTimer;                                     // 0x0100(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UBP_ActionParams_Distraction_AnimStateMachine_AI_C*  Params;                                                  // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               AnimSetActionID;                                         // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AnimSetName;                                             // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIMovementComponent*                                AIMovementComponent;                                     // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EMeatbaitAnimStates, EMeatbaitAnimStates>             StateTransitions;                                        // 0x0130(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FKnowledgeBaseExpression                            AnimSetSpacingMultiplierExpression;                      // 0x0180(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class UBPC_Distraction_GroupCoordinator_C*                 GroupCoordinatorComponent;                               // 0x01B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        InterestTimer;                                           // 0x01C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       HasLostInterest;                                         // 0x01C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EMeatbaitAnimStates                                        InterestedState;                                         // 0x01C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMeatbaitAnimStates                                        LostInterestState;                                       // 0x01CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8VPV[0x5];                                   // 0x01CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBPC_AnimationCoordinator_AI_C*                      AnimationCoordinator;                                    // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TorsoTwistName;                                          // 0x01D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSetActionParams*                                CurrentAnimSetParams;                                    // 0x01E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              DebugTagString;                                          // 0x01E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugEnabled;                                            // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool FaceTargetStateCondition(EMeatbaitAnimStates PotentialNewState, EMeatbaitAnimStates* NextState);
		void AddDSLog(const class FString& DebugText, EDSLogVerbosity Verbosity, bool Condition);
		void SetupDistractionLogger();
		void GetTorsoTwistTarget(class AActor** TargetActor, struct FVector* RelativeLocation);
		void RemoveTorsoTwistTarget();
		void AddTorsoTwistTarget(bool* Success);
		float GetInterestDuration();
		void OnAnimSetSpacingStateFinished();
		void GoToState(EMeatbaitAnimStates CurrentState);
		void InterestLost();
		void StartInterestTimer();
		struct FVector GetMoveTargetDirection();
		void OnMoveTargetEvent(EMoveTargetEvent Event);
		void EndFaceTargetState();
		void BeginFaceTargetState();
		void OnAnimSetActionEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		bool OnBeginEarly();
		void EndAnimSetSpacingState();
		void BeginAnimSetSpacingState();
		void EndAnimSetActionState();
		void BeginAnimSetActionState();
		bool GetNextState(EMeatbaitAnimStates* NextState);
		void EndState();
		void GoToNextState();
		void BeginState();
		void GetDistanceInFrontOfCharacter(float* Distance);
		void GetTargetData(float* VerticalDegrees, float* Distance2D);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_Distraction_AnimStateMachine_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
