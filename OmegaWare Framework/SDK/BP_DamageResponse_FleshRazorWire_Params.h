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
	 * Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.IsCollisionValid
	 */
	struct UBP_DamageResponse_FleshRazorWire_C_IsCollisionValid_Params
	{
	public:
		class USimpleCollisionInstanceData*                        SimpleCollisionInstanceData;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7RVX[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.RequestImpactEvent
	 */
	struct UBP_DamageResponse_FleshRazorWire_C_RequestImpactEvent_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FEventInstigator                                    EventInstigator;                                         // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.BloodEffect
	 */
	struct UBP_DamageResponse_FleshRazorWire_C_BloodEffect_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CollisionWorldPosition;                                  // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.HandleCollisionUpdate
	 */
	struct UBP_DamageResponse_FleshRazorWire_C_HandleCollisionUpdate_Params
	{
	public:
		class USimpleCollisionInstanceData*                        SimpleCollisionInstanceData;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      UpdateDeltaTime;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.HandleCollision
	 */
	struct UBP_DamageResponse_FleshRazorWire_C_HandleCollision_Params
	{
	public:
		class UFullCollisionInstanceData*                          FullCollisionInstanceData;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.ExecuteUbergraph_BP_DamageResponse_FleshRazorWire
	 */
	struct UBP_DamageResponse_FleshRazorWire_C_ExecuteUbergraph_BP_DamageResponse_FleshRazorWire_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2RW2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
