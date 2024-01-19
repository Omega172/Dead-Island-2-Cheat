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
	 * BlueprintGeneratedClass BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C
	 * Size -> 0x00D2 (FullSize[0x01A2] - InheritedSize[0x00D0])
	 */
	class UBP_Action_BasePlayLevelSequence_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ADIAICharacter*                                      Actor;                                                   // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_ActionParams_BasePlayLevelSequence_C*            PlayLevelSequenceParams;                                 // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULevelSequence*                                      CachedLevelSequence;                                     // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        SpawnHiddenTimer;                                        // 0x00F0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UDIAnimInstance*                                     CharacterAnimInstance;                                   // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        ActionsToInterrupt;                                      // 0x0100(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        ActionsToRunUncontested;                                 // 0x0110(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      PlaybackSpeed;                                           // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanCapsuleIntersectWorld;                                // 0x0124(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8XKZ[0x3];                                   // 0x0125(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CollisionProfileForIntersectingWorld;                    // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                IntersectWorldMovementModeRequestReason;                 // 0x0130(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               IntersectWorldMovementModeRequest;                       // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                IntersectWorldCollisionRequestReason;                    // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               IntersectWorldCollisionRequest;                          // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGameSequence*                                       GameSequence;                                            // 0x0160(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            ClientInterruptAndBlockGameSequenceExpression;           // 0x0168(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		bool                                                       ClientGameSequenceBlocked;                               // 0x01A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ClientGameSequenceReady;                                 // 0x01A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetLifetimeFacts(bool Increment);
		void OnSequenceTimeRemaining(float TimeRequested);
		void UnbindClientInterruptAndBlockExpression();
		void BindClientInterruptAndBlockExpression();
		void PlayGameSequence();
		void CleanUpGameSequence();
		bool GatherPrerequisites();
		void SetEndCollisionAndMovementMode();
		void SetBeginCollisionAndMovementMode();
		void Resolve(const struct FCharacterActionResolveParams& Params, ECharacterActionResolution* OutResolution, float* OutQueuedTimeout);
		void UnloadCachedVariables();
		void UnhideCharacter();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnGameSequenceStopped();
		void OnClientInterruptAndBlockExpressionChanged(bool bResult);
		void ExecuteUbergraph_BP_Action_BasePlayLevelSequence(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
