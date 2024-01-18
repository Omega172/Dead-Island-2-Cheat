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
	 * Function BP_Frontend_PlayerController.BP_Frontend_PlayerController_C.OnStartFindSession
	 */
	struct ABP_Frontend_PlayerController_C_OnStartFindSession_Params
	{	};

	/**
	 * Function BP_Frontend_PlayerController.BP_Frontend_PlayerController_C.OnStartCreateSession
	 */
	struct ABP_Frontend_PlayerController_C_OnStartCreateSession_Params
	{	};

	/**
	 * Function BP_Frontend_PlayerController.BP_Frontend_PlayerController_C.OpenGameLobbyWidget
	 */
	struct ABP_Frontend_PlayerController_C_OpenGameLobbyWidget_Params
	{
	public:
		EGameType                                                  InGameType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Frontend_PlayerController.BP_Frontend_PlayerController_C.ExecuteUbergraph_BP_Frontend_PlayerController
	 */
	struct ABP_Frontend_PlayerController_C_ExecuteUbergraph_BP_Frontend_PlayerController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KPML[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
