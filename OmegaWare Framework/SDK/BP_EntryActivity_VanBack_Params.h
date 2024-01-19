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
	 * Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.GenerateInteriorNavlinks
	 */
	struct ABP_EntryActivity_VanBack_C_GenerateInteriorNavlinks_Params
	{	};

	/**
	 * Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.UserConstructionScript
	 */
	struct ABP_EntryActivity_VanBack_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.OnActivityEnded
	 */
	struct ABP_EntryActivity_VanBack_C_OnActivityEnded_Params
	{
	public:
		class AActivityActor*                                      Activity;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActivityEndedReason                                       EndReason;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.On Participant Will Be Received
	 */
	struct ABP_EntryActivity_VanBack_C_OnParticipantWillBeReceived_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.ParticipantReleasedDelegate
	 */
	struct ABP_EntryActivity_VanBack_C_ParticipantReleasedDelegate_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EntryActivity_VanBack.BP_EntryActivity_VanBack_C.ExecuteUbergraph_BP_EntryActivity_VanBack
	 */
	struct ABP_EntryActivity_VanBack_C_ExecuteUbergraph_BP_EntryActivity_VanBack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
