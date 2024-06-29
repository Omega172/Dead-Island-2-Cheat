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
	 * Function BP_Base_EntrySpawnActivity.BP_Base_EntrySpawnActivity_C.On Participant Will Be Received
	 */
	struct ABP_Base_EntrySpawnActivity_C_OnParticipantWillBeReceived_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_EntrySpawnActivity.BP_Base_EntrySpawnActivity_C.On zombie Can Be Released
	 */
	struct ABP_Base_EntrySpawnActivity_C_OnzombieCanBeReleased_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_EntrySpawnActivity.BP_Base_EntrySpawnActivity_C.ParticipantReceived
	 */
	struct ABP_Base_EntrySpawnActivity_C_ParticipantReceived_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_EntrySpawnActivity.BP_Base_EntrySpawnActivity_C.ExecuteUbergraph_BP_Base_EntrySpawnActivity
	 */
	struct ABP_Base_EntrySpawnActivity_C_ExecuteUbergraph_BP_Base_EntrySpawnActivity_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JS34[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
