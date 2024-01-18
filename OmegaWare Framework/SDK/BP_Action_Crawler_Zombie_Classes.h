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
	 * BlueprintGeneratedClass BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C
	 * Size -> 0x008A (FullSize[0x0162] - InheritedSize[0x00D8])
	 */
	class UBP_Action_Crawler_Zombie_C : public UAICrawlerAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ADIAICharacter*                                      Zombie;                                                  // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            CrawlerBodyPartExpressionRequiredToLive;                 // 0x00E8(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       CrawlerTransitionActionRequestHelper;                    // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       CrawlerStateActionRequestHelper;                         // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 DSLogger;                                                // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDINPCAnimInstance*                                  AnimInstance;                                            // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSetCollection*                                  CrawlerAnimSetCollection;                                // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CrawlerAnimSetID;                                        // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CE68[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        CrawlerTransitionActionRetryTimer;                       // 0x0150(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimSetAction*                                      AnimSetAction;                                           // 0x0158(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RequiresTransition;                                      // 0x0160(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LeftLegDismembered;                                      // 0x0161(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UnbindCrawlerStateActionDelegates();
		void RequestCrawlerStateAction();
		void UnbindBlendIn();
		void UnbindCrawlerTransitionActionDelegates();
		void RetryCrawlerTransitionAction();
		void UnbindActionDelegates(class UCharacterActionRequestHelper* ActionHelper, const class FScriptDelegate& OnActionResolved, const class FScriptDelegate& OnActionCancelled, const class FScriptDelegate& OnActionEnded);
		void BindActionDelegates(class UCharacterActionRequestHelper* ActionHelper, const class FScriptDelegate& OnActionResolved, const class FScriptDelegate& OnActionCancelled, const class FScriptDelegate& OnActionEnded);
		void LoadAnimSetCollection(bool Load);
		void OnTransitionFinished();
		void TryRequestCrawlerTransitionAction();
		void OnResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params);
		void OnTransitionActionCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params);
		void OnTransitionActionEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnTransitionActionResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params);
		void OnTransitionActionMontageBlendedIn();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void OnStateActionResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params);
		void OnStateActionCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params);
		void OnStateActionEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_Crawler_Zombie(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
