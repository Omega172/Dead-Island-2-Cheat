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
	 * Function BP_CharacterManager.BP_CharacterManager_C.ReceiveBeginPlay
	 */
	struct UBP_CharacterManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CharacterManager.BP_CharacterManager_C.ReceiveTick
	 */
	struct UBP_CharacterManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CharacterManager.BP_CharacterManager_C.ExecuteUbergraph_BP_CharacterManager
	 */
	struct UBP_CharacterManager_C_ExecuteUbergraph_BP_CharacterManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
