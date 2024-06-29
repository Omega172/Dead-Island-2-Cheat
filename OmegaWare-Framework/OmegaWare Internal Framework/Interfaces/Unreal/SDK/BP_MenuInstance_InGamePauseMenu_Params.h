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
	 * Function BP_MenuInstance_InGamePauseMenu.BP_MenuInstance_InGamePauseMenu_C.BlueprintOpenMenu
	 */
	struct UBP_MenuInstance_InGamePauseMenu_C_BlueprintOpenMenu_Params
	{	};

	/**
	 * Function BP_MenuInstance_InGamePauseMenu.BP_MenuInstance_InGamePauseMenu_C.BlueprintCloseMenu
	 */
	struct UBP_MenuInstance_InGamePauseMenu_C_BlueprintCloseMenu_Params
	{	};

	/**
	 * Function BP_MenuInstance_InGamePauseMenu.BP_MenuInstance_InGamePauseMenu_C.OnLocalPlayerFailStateSet_Event
	 */
	struct UBP_MenuInstance_InGamePauseMenu_C_OnLocalPlayerFailStateSet_Event_Params
	{
	public:
		class UFailState*                                          FailState;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuInstance_InGamePauseMenu.BP_MenuInstance_InGamePauseMenu_C.ExecuteUbergraph_BP_MenuInstance_InGamePauseMenu
	 */
	struct UBP_MenuInstance_InGamePauseMenu_C_ExecuteUbergraph_BP_MenuInstance_InGamePauseMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EPKY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
