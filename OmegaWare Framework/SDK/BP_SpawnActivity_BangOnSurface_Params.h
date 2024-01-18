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
	 * Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.OnOpenableStateChanged
	 */
	struct ABP_SpawnActivity_BangOnSurface_C_OnOpenableStateChanged_Params
	{
	public:
		EOpenableState                                             NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5BZ0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.OnTriggerEvent
	 */
	struct ABP_SpawnActivity_BangOnSurface_C_OnTriggerEvent_Params
	{
	public:
		unsigned char                                              Event;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.SetRelatedActor
	 */
	struct ABP_SpawnActivity_BangOnSurface_C_SetRelatedActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.ReceiveBeginPlay
	 */
	struct ABP_SpawnActivity_BangOnSurface_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.ReceiveEndPlay
	 */
	struct ABP_SpawnActivity_BangOnSurface_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.ExecuteUbergraph_BP_SpawnActivity_BangOnSurface
	 */
	struct ABP_SpawnActivity_BangOnSurface_C_ExecuteUbergraph_BP_SpawnActivity_BangOnSurface_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
