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
	 * Function BPC_Player_Stamina.BPC_Player_Stamina_C.ReceiveBeginPlay
	 */
	struct UBPC_Player_Stamina_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Player_Stamina.BPC_Player_Stamina_C.OnStaminaUpdatedDelegate_Event
	 */
	struct UBPC_Player_Stamina_C_OnStaminaUpdatedDelegate_Event_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStamina;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Stamina;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Player_Stamina.BPC_Player_Stamina_C.ExecuteUbergraph_BPC_Player_Stamina
	 */
	struct UBPC_Player_Stamina_C_ExecuteUbergraph_BPC_Player_Stamina_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
