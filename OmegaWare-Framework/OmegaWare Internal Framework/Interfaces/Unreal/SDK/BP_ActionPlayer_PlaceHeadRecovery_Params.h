﻿#pragma once

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
	 * Function BP_ActionPlayer_PlaceHeadRecovery.BP_ActionPlayer_PlaceHeadRecovery_C.OnBegin
	 */
	struct UBP_ActionPlayer_PlaceHeadRecovery_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_ActionPlayer_PlaceHeadRecovery.BP_ActionPlayer_PlaceHeadRecovery_C.OnEnd
	 */
	struct UBP_ActionPlayer_PlaceHeadRecovery_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_ActionPlayer_PlaceHeadRecovery.BP_ActionPlayer_PlaceHeadRecovery_C.EndRecoveryAction
	 */
	struct UBP_ActionPlayer_PlaceHeadRecovery_C_EndRecoveryAction_Params
	{	};

	/**
	 * Function BP_ActionPlayer_PlaceHeadRecovery.BP_ActionPlayer_PlaceHeadRecovery_C.ExecuteUbergraph_BP_ActionPlayer_PlaceHeadRecovery
	 */
	struct UBP_ActionPlayer_PlaceHeadRecovery_C_ExecuteUbergraph_BP_ActionPlayer_PlaceHeadRecovery_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WNXX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
