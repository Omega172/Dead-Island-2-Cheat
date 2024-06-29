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
	 * Function BP_Action_Player_Aim.BP_Action_Player_Aim_C.OnBeginEarly
	 */
	struct UBP_Action_Player_Aim_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E86Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Player_Aim.BP_Action_Player_Aim_C.Init
	 */
	struct UBP_Action_Player_Aim_C_Init_Params
	{	};

	/**
	 * Function BP_Action_Player_Aim.BP_Action_Player_Aim_C.OnFailedToPlay_92671E564B602D3CDE275489C45CFA7E
	 */
	struct UBP_Action_Player_Aim_C_OnFailedToPlay_92671E564B602D3CDE275489C45CFA7E_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Aim.BP_Action_Player_Aim_C.OnSectionChanged_92671E564B602D3CDE275489C45CFA7E
	 */
	struct UBP_Action_Player_Aim_C_OnSectionChanged_92671E564B602D3CDE275489C45CFA7E_Params
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Aim.BP_Action_Player_Aim_C.OnNotifyEnd_92671E564B602D3CDE275489C45CFA7E
	 */
	struct UBP_Action_Player_Aim_C_OnNotifyEnd_92671E564B602D3CDE275489C45CFA7E_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Aim.BP_Action_Player_Aim_C.OnNotifyBegin_92671E564B602D3CDE275489C45CFA7E
	 */
	struct UBP_Action_Player_Aim_C_OnNotifyBegin_92671E564B602D3CDE275489C45CFA7E_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Aim.BP_Action_Player_Aim_C.OnInterrupted_92671E564B602D3CDE275489C45CFA7E
	 */
	struct UBP_Action_Player_Aim_C_OnInterrupted_92671E564B602D3CDE275489C45CFA7E_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Aim.BP_Action_Player_Aim_C.OnBlendOut_92671E564B602D3CDE275489C45CFA7E
	 */
	struct UBP_Action_Player_Aim_C_OnBlendOut_92671E564B602D3CDE275489C45CFA7E_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Aim.BP_Action_Player_Aim_C.OnCompleted_92671E564B602D3CDE275489C45CFA7E
	 */
	struct UBP_Action_Player_Aim_C_OnCompleted_92671E564B602D3CDE275489C45CFA7E_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Aim.BP_Action_Player_Aim_C.OnBegin
	 */
	struct UBP_Action_Player_Aim_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_Aim.BP_Action_Player_Aim_C.OnEnd
	 */
	struct UBP_Action_Player_Aim_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_Aim.BP_Action_Player_Aim_C.OnConstruct
	 */
	struct UBP_Action_Player_Aim_C_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Aim.BP_Action_Player_Aim_C.StartAimAnims
	 */
	struct UBP_Action_Player_Aim_C_StartAimAnims_Params
	{	};

	/**
	 * Function BP_Action_Player_Aim.BP_Action_Player_Aim_C.ExecuteUbergraph_BP_Action_Player_Aim
	 */
	struct UBP_Action_Player_Aim_C_ExecuteUbergraph_BP_Action_Player_Aim_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
