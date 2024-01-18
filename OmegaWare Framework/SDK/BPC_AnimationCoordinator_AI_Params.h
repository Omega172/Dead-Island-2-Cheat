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
	 * Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.GetBodyPartsHeight
	 */
	struct UBPC_AnimationCoordinator_AI_C_GetBodyPartsHeight_Params
	{
	public:
		class USceneComponent*                                     Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterBodyPartHeights                                  BodyPartHeight;                                          // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XRTU[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue_Location_Z;                                  // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.GetBodyPartWorldSpaceHeight
	 */
	struct UBPC_AnimationCoordinator_AI_C_GetBodyPartWorldSpaceHeight_Params
	{
	public:
		ECharacterBodyPartHeights                                  BodyPartHeight;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8LVT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.GetTorsoTwistParamsByName
	 */
	struct UBPC_AnimationCoordinator_AI_C_GetTorsoTwistParamsByName_Params
	{
	public:
		class FName                                                TorsoTwistName;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSTorsoTwistParams                                  ReturnValue;                                             // 0x0008(0x0024)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		unsigned char                                              UnknownData_74DW[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.GetTorsoTwistParamsByActor
	 */
	struct UBPC_AnimationCoordinator_AI_C_GetTorsoTwistParamsByActor_Params
	{
	public:
		class AActor*                                              TorsoTwistTarget;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSTorsoTwistParams                                  ReturnValue;                                             // 0x0008(0x0024)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		unsigned char                                              UnknownData_82NL[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.OnTorsoTwistTargetEndPlay
	 */
	struct UBPC_AnimationCoordinator_AI_C_OnTorsoTwistTargetEndPlay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_230H[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.GetHighestPriorityTorsoTwistTarget
	 */
	struct UBPC_AnimationCoordinator_AI_C_GetHighestPriorityTorsoTwistTarget_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.RemoveTorsoTwistTarget
	 */
	struct UBPC_AnimationCoordinator_AI_C_RemoveTorsoTwistTarget_Params
	{
	public:
		class FName                                                TorsoTwistName;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AnimationCoordinator_AI.BPC_AnimationCoordinator_AI_C.AddTorsoTwistTarget
	 */
	struct UBPC_AnimationCoordinator_AI_C_AddTorsoTwistTarget_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                TorsoTwistName;                                          // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSTorsoTwistParams                                  TorsoTwistParams;                                        // 0x0010(0x0024)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
