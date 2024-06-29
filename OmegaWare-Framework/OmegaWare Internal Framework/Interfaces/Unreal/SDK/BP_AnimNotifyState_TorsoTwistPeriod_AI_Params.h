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
	 * Function BP_AnimNotifyState_TorsoTwistPeriod_AI.BP_AnimNotifyState_TorsoTwistPeriod_AI_C.FetchVariables
	 */
	struct UBP_AnimNotifyState_TorsoTwistPeriod_AI_C_FetchVariables_Params
	{
	public:
		class UActorComponent*                                     MeshComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBPC_AnimationCoordinator_AI_C*                      AnimationComponent;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              CombatTarget;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AnimNotifyState_TorsoTwistPeriod_AI.BP_AnimNotifyState_TorsoTwistPeriod_AI_C.Received_NotifyEnd
	 */
	struct UBP_AnimNotifyState_TorsoTwistPeriod_AI_C_Received_NotifyEnd_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4UXC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_AnimNotifyState_TorsoTwistPeriod_AI.BP_AnimNotifyState_TorsoTwistPeriod_AI_C.Received_NotifyBegin
	 */
	struct UBP_AnimNotifyState_TorsoTwistPeriod_AI_C_Received_NotifyBegin_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TotalDuration;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NB27[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_AnimNotifyState_TorsoTwistPeriod_AI.BP_AnimNotifyState_TorsoTwistPeriod_AI_C.GetNotifyName
	 */
	struct UBP_AnimNotifyState_TorsoTwistPeriod_AI_C_GetNotifyName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif