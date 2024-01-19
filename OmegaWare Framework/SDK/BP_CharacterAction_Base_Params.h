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
	 * Function BP_CharacterAction_Base.BP_CharacterAction_Base_C.OnBegin
	 */
	struct UBP_CharacterAction_Base_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_CharacterAction_Base.BP_CharacterAction_Base_C.OnEnd
	 */
	struct UBP_CharacterAction_Base_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_CharacterAction_Base.BP_CharacterAction_Base_C.ExecuteUbergraph_BP_CharacterAction_Base
	 */
	struct UBP_CharacterAction_Base_C_ExecuteUbergraph_BP_CharacterAction_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CharacterAction_Base.BP_CharacterAction_Base_C.ActionEnded__DelegateSignature
	 */
	struct UBP_CharacterAction_Base_C_ActionEnded__DelegateSignature_Params
	{	};

	/**
	 * Function BP_CharacterAction_Base.BP_CharacterAction_Base_C.ActionStarted__DelegateSignature
	 */
	struct UBP_CharacterAction_Base_C_ActionStarted__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
