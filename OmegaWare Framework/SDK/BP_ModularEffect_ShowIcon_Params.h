﻿#pragma once

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
	 * Function BP_ModularEffect_ShowIcon.BP_ModularEffect_ShowIcon_C.On Removed Modular Effect Icon
	 */
	struct UBP_ModularEffect_ShowIcon_C_OnRemovedModularEffectIcon_Params
	{
	public:
		class UHUDIconBase*                                        Icon;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularEffect_ShowIcon.BP_ModularEffect_ShowIcon_C.PerformEffect
	 */
	struct UBP_ModularEffect_ShowIcon_C_PerformEffect_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UModularEffectParams*                                ModularEffectParams;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularEffect_ShowIcon.BP_ModularEffect_ShowIcon_C.OnEnd
	 */
	struct UBP_ModularEffect_ShowIcon_C_OnEnd_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularEffect_ShowIcon.BP_ModularEffect_ShowIcon_C.ExecuteUbergraph_BP_ModularEffect_ShowIcon
	 */
	struct UBP_ModularEffect_ShowIcon_C_ExecuteUbergraph_BP_ModularEffect_ShowIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
