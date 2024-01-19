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
	 * Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.OnRep_IsBroken_Delayed
	 */
	struct UBPC_BreakableGlassPane_C_OnRep_IsBroken_Delayed_Params
	{	};

	/**
	 * Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.OnRep_IsBroken
	 */
	struct UBPC_BreakableGlassPane_C_OnRep_IsBroken_Params
	{	};

	/**
	 * Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.RemoveUnbrokenMesh
	 */
	struct UBPC_BreakableGlassPane_C_RemoveUnbrokenMesh_Params
	{	};

	/**
	 * Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.CalculateWorldUVsAndNormals
	 */
	struct UBPC_BreakableGlassPane_C_CalculateWorldUVsAndNormals_Params
	{	};

	/**
	 * Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.DrawDebug
	 */
	struct UBPC_BreakableGlassPane_C_DrawDebug_Params
	{	};

	/**
	 * Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.Find Or Add Component
	 */
	struct UBPC_BreakableGlassPane_C_FindOrAddComponent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InClass;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UActorComponent*                                     Component;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.Get Pane Hit Loc From World Hit Loc
	 */
	struct UBPC_BreakableGlassPane_C_GetPaneHitLocFromWorldHitLoc_Params
	{
	public:
		struct FVector                                             Impulse;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             WorldHitLocInPlane;                                      // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.Setup Pane Data
	 */
	struct UBPC_BreakableGlassPane_C_SetupPaneData_Params
	{	};

	/**
	 * Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.Generate Shards
	 */
	struct UBPC_BreakableGlassPane_C_GenerateShards_Params
	{	};

	/**
	 * Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.GetRandomPositionInPane
	 */
	struct UBPC_BreakableGlassPane_C_GetRandomPositionInPane_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.TriggerMeshShatter
	 */
	struct UBPC_BreakableGlassPane_C_TriggerMeshShatter_Params
	{
	public:
		struct FVector                                             ImpactLocation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ImpactVector;                                            // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.OnAnyImpactReceived
	 */
	struct UBPC_BreakableGlassPane_C_OnAnyImpactReceived_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseImpactEventResultWrapper*                       ImpactEvent;                                             // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.ReceiveBeginPlay
	 */
	struct UBPC_BreakableGlassPane_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.ExecuteUbergraph_BPC_BreakableGlassPane
	 */
	struct UBPC_BreakableGlassPane_C_ExecuteUbergraph_BPC_BreakableGlassPane_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1QBY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.Impact Received__DelegateSignature
	 */
	struct UBPC_BreakableGlassPane_C_ImpactReceived__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseImpactEventResultWrapper*                       ImpactEvent;                                             // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.GlassBroken__DelegateSignature
	 */
	struct UBPC_BreakableGlassPane_C_GlassBroken__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
