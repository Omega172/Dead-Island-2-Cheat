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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ScriptedSequences.ScriptedSequenceExitCondition.Setup
	 */
	struct UScriptedSequenceExitCondition_Setup_Params
	{
	public:
		class UScriptedSequenceStage*                              InOwningStage;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScriptedSequences.ScriptedSequenceExitCondition.Reset
	 */
	struct UScriptedSequenceExitCondition_Reset_Params
	{	};

	/**
	 * Function ScriptedSequences.ScriptedSequenceExitCondition.IsConditionMet
	 */
	struct UScriptedSequenceExitCondition_IsConditionMet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScriptedSequences.ScriptedSequenceExitCondition.GetLinkedActors
	 */
	struct UScriptedSequenceExitCondition_GetLinkedActors_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScriptedSequences.ScriptedSequenceExitCondition.GetDebuggingText
	 */
	struct UScriptedSequenceExitCondition_GetDebuggingText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScriptedSequences.BaseScriptedSequenceStage.OnTick
	 */
	struct UBaseScriptedSequenceStage_OnTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScriptedSequences.BaseScriptedSequenceStage.OnRequestStartStage
	 */
	struct UBaseScriptedSequenceStage_OnRequestStartStage_Params
	{
	public:
		class AActor*                                              InOwningActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScriptedSequences.BaseScriptedSequenceStage.OnRequestEndStage
	 */
	struct UBaseScriptedSequenceStage_OnRequestEndStage_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScriptedSequences.BaseScriptedSequenceStage.OnGetFactsWithDescriptions
	 */
	struct UBaseScriptedSequenceStage_OnGetFactsWithDescriptions_Params
	{
	public:
		TMap<class FName, class FString>                           ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScriptedSequences.BaseScriptedSequenceStage.OnGetDebuggingText
	 */
	struct UBaseScriptedSequenceStage_OnGetDebuggingText_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScriptedSequences.BaseScriptedSequenceStage.OnCleanUp
	 */
	struct UBaseScriptedSequenceStage_OnCleanUp_Params
	{	};

	/**
	 * Function ScriptedSequences.ScriptedSequenceComponent.RequestStopSequence
	 */
	struct UScriptedSequenceComponent_RequestStopSequence_Params
	{	};

	/**
	 * Function ScriptedSequences.ScriptedSequenceComponent.RequestStartSequence
	 */
	struct UScriptedSequenceComponent_RequestStartSequence_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScriptedSequences.ScriptedSequenceComponent.IsSequenceActive
	 */
	struct UScriptedSequenceComponent_IsSequenceActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScriptedSequences.ScriptedSequenceComponent.HasOverriddenStages
	 */
	struct UScriptedSequenceComponent_HasOverriddenStages_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ScriptedSequences.ScriptedSequenceComponent.GatherComponentBlueprintLinks
	 */
	struct UScriptedSequenceComponent_GatherComponentBlueprintLinks_Params
	{
	public:
		TArray<struct FComponentLinkInformation>                   ComponentLinks;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
