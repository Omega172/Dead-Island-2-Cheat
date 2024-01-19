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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.UnbindCrawlerStateActionDelegates
	 */
	struct UBP_Action_Crawler_Zombie_C_UnbindCrawlerStateActionDelegates_Params
	{	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.RequestCrawlerStateAction
	 */
	struct UBP_Action_Crawler_Zombie_C_RequestCrawlerStateAction_Params
	{	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.UnbindBlendIn
	 */
	struct UBP_Action_Crawler_Zombie_C_UnbindBlendIn_Params
	{	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.UnbindCrawlerTransitionActionDelegates
	 */
	struct UBP_Action_Crawler_Zombie_C_UnbindCrawlerTransitionActionDelegates_Params
	{	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.RetryCrawlerTransitionAction
	 */
	struct UBP_Action_Crawler_Zombie_C_RetryCrawlerTransitionAction_Params
	{	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.UnbindActionDelegates
	 */
	struct UBP_Action_Crawler_Zombie_C_UnbindActionDelegates_Params
	{
	public:
		class UCharacterActionRequestHelper*                       ActionHelper;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      OnActionResolved;                                        // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnActionCancelled;                                       // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnActionEnded;                                           // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.BindActionDelegates
	 */
	struct UBP_Action_Crawler_Zombie_C_BindActionDelegates_Params
	{
	public:
		class UCharacterActionRequestHelper*                       ActionHelper;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      OnActionResolved;                                        // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnActionCancelled;                                       // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnActionEnded;                                           // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.LoadAnimSetCollection
	 */
	struct UBP_Action_Crawler_Zombie_C_LoadAnimSetCollection_Params
	{
	public:
		bool                                                       Load;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.OnTransitionFinished
	 */
	struct UBP_Action_Crawler_Zombie_C_OnTransitionFinished_Params
	{	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.TryRequestCrawlerTransitionAction
	 */
	struct UBP_Action_Crawler_Zombie_C_TryRequestCrawlerTransitionAction_Params
	{	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.OnResolved
	 */
	struct UBP_Action_Crawler_Zombie_C_OnResolved_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnResolvedParams                    Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.OnTransitionActionCancelled
	 */
	struct UBP_Action_Crawler_Zombie_C_OnTransitionActionCancelled_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnCancelledParams                   Params;                                                  // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.OnTransitionActionEnd
	 */
	struct UBP_Action_Crawler_Zombie_C_OnTransitionActionEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.OnEnd
	 */
	struct UBP_Action_Crawler_Zombie_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.OnTransitionActionResolved
	 */
	struct UBP_Action_Crawler_Zombie_C_OnTransitionActionResolved_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnResolvedParams                    Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.OnTransitionActionMontageBlendedIn
	 */
	struct UBP_Action_Crawler_Zombie_C_OnTransitionActionMontageBlendedIn_Params
	{	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.OnBegin
	 */
	struct UBP_Action_Crawler_Zombie_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.OnConstruct
	 */
	struct UBP_Action_Crawler_Zombie_C_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.OnStateActionResolved
	 */
	struct UBP_Action_Crawler_Zombie_C_OnStateActionResolved_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnResolvedParams                    Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.OnStateActionCancelled
	 */
	struct UBP_Action_Crawler_Zombie_C_OnStateActionCancelled_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnCancelledParams                   Params;                                                  // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.OnStateActionEnd
	 */
	struct UBP_Action_Crawler_Zombie_C_OnStateActionEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Crawler_Zombie.BP_Action_Crawler_Zombie_C.ExecuteUbergraph_BP_Action_Crawler_Zombie
	 */
	struct UBP_Action_Crawler_Zombie_C_ExecuteUbergraph_BP_Action_Crawler_Zombie_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
