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
	 * Function WBP_HitIndicatorElement.WBP_HitIndicatorElement_C.PlayHitEffect
	 */
	struct UWBP_HitIndicatorElement_C_PlayHitEffect_Params
	{	};

	/**
	 * Function WBP_HitIndicatorElement.WBP_HitIndicatorElement_C.Construct
	 */
	struct UWBP_HitIndicatorElement_C_Construct_Params
	{	};

	/**
	 * Function WBP_HitIndicatorElement.WBP_HitIndicatorElement_C.PreConstruct
	 */
	struct UWBP_HitIndicatorElement_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HitIndicatorElement.WBP_HitIndicatorElement_C.ExecuteUbergraph_WBP_HitIndicatorElement
	 */
	struct UWBP_HitIndicatorElement_C_ExecuteUbergraph_WBP_HitIndicatorElement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
