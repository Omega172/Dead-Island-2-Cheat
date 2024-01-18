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
	 * Function BP_Death_Meatpile.BP_Death_Meatpile_C.OnMeatpileUsed
	 */
	struct ABP_Death_Meatpile_C_OnMeatpileUsed_Params
	{	};

	/**
	 * Function BP_Death_Meatpile.BP_Death_Meatpile_C.UpdateMeatpileIndex
	 */
	struct ABP_Death_Meatpile_C_UpdateMeatpileIndex_Params
	{
	public:
		int32_t                                                    MeatpilesToRemove;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Death_Meatpile.BP_Death_Meatpile_C.OnMeatpileCountChanged
	 */
	struct ABP_Death_Meatpile_C_OnMeatpileCountChanged_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YULI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EKnowledgeBaseFactChangeType                               FactChangeType;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QD6A[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Death_Meatpile.BP_Death_Meatpile_C.RemoveMeatpileCountListener
	 */
	struct ABP_Death_Meatpile_C_RemoveMeatpileCountListener_Params
	{	};

	/**
	 * Function BP_Death_Meatpile.BP_Death_Meatpile_C.AddMeatpileCountListener
	 */
	struct ABP_Death_Meatpile_C_AddMeatpileCountListener_Params
	{	};

	/**
	 * Function BP_Death_Meatpile.BP_Death_Meatpile_C.DecrementMeatpileCount
	 */
	struct ABP_Death_Meatpile_C_DecrementMeatpileCount_Params
	{	};

	/**
	 * Function BP_Death_Meatpile.BP_Death_Meatpile_C.IncrementMeatpileCount
	 */
	struct ABP_Death_Meatpile_C_IncrementMeatpileCount_Params
	{	};

	/**
	 * Function BP_Death_Meatpile.BP_Death_Meatpile_C.SetDecalFadeOut
	 */
	struct ABP_Death_Meatpile_C_SetDecalFadeOut_Params
	{
	public:
		float                                                      StartDelay;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Death_Meatpile.BP_Death_Meatpile_C.UserConstructionScript
	 */
	struct ABP_Death_Meatpile_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Death_Meatpile.BP_Death_Meatpile_C.BindUnpossess
	 */
	struct ABP_Death_Meatpile_C_BindUnpossess_Params
	{
	public:
		class ADIPlayerCharacter*                                  DIPlayer;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Death_Meatpile.BP_Death_Meatpile_C.SetMeshAsVisible
	 */
	struct ABP_Death_Meatpile_C_SetMeshAsVisible_Params
	{	};

	/**
	 * Function BP_Death_Meatpile.BP_Death_Meatpile_C.ReceiveBeginPlay
	 */
	struct ABP_Death_Meatpile_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Death_Meatpile.BP_Death_Meatpile_C.ReceiveEndPlay
	 */
	struct ABP_Death_Meatpile_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Death_Meatpile.BP_Death_Meatpile_C.ExecuteUbergraph_BP_Death_Meatpile
	 */
	struct ABP_Death_Meatpile_C_ExecuteUbergraph_BP_Death_Meatpile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
