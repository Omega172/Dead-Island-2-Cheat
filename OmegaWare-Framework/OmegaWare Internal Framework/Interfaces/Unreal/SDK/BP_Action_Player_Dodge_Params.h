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
	 * Function BP_Action_Player_Dodge.BP_Action_Player_Dodge_C.OnRequestFailed_45D7E82D41CC35818E2D11B2D45D6840
	 */
	struct UBP_Action_Player_Dodge_C_OnRequestFailed_45D7E82D41CC35818E2D11B2D45D6840_Params
	{	};

	/**
	 * Function BP_Action_Player_Dodge.BP_Action_Player_Dodge_C.OnCustomSignal_45D7E82D41CC35818E2D11B2D45D6840
	 */
	struct UBP_Action_Player_Dodge_C_OnCustomSignal_45D7E82D41CC35818E2D11B2D45D6840_Params
	{
	public:
		struct FCharacterActionOnCustomSignalParams                CustomSignalParams;                                      // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_Dodge.BP_Action_Player_Dodge_C.OnEnd_45D7E82D41CC35818E2D11B2D45D6840
	 */
	struct UBP_Action_Player_Dodge_C_OnEnd_45D7E82D41CC35818E2D11B2D45D6840_Params
	{
	public:
		struct FCharacterActionOnEndParams                         EndParams;                                               // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_Dodge.BP_Action_Player_Dodge_C.OnBegin_45D7E82D41CC35818E2D11B2D45D6840
	 */
	struct UBP_Action_Player_Dodge_C_OnBegin_45D7E82D41CC35818E2D11B2D45D6840_Params
	{
	public:
		struct FCharacterActionOnBeginParams                       BeginParams;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_Dodge.BP_Action_Player_Dodge_C.OnCancelled_45D7E82D41CC35818E2D11B2D45D6840
	 */
	struct UBP_Action_Player_Dodge_C_OnCancelled_45D7E82D41CC35818E2D11B2D45D6840_Params
	{
	public:
		struct FCharacterActionOnCancelledParams                   CancelledParams;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_Dodge.BP_Action_Player_Dodge_C.OnResolved_45D7E82D41CC35818E2D11B2D45D6840
	 */
	struct UBP_Action_Player_Dodge_C_OnResolved_45D7E82D41CC35818E2D11B2D45D6840_Params
	{
	public:
		struct FCharacterActionOnResolvedParams                    ResolvedParams;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_Dodge.BP_Action_Player_Dodge_C.OnEnd
	 */
	struct UBP_Action_Player_Dodge_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_Dodge.BP_Action_Player_Dodge_C.ExecuteUbergraph_BP_Action_Player_Dodge
	 */
	struct UBP_Action_Player_Dodge_C_ExecuteUbergraph_BP_Action_Player_Dodge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
