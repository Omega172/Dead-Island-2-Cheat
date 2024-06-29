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
	 * Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.OnRep_Inventorypopulated
	 */
	struct ABP_Base_DebugVendor_C_OnRep_Inventorypopulated_Params
	{	};

	/**
	 * Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.OnItemCreated
	 */
	struct ABP_Base_DebugVendor_C_OnItemCreated_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZJN0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AItemActor*                                          Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItemSpecification*                                  ItemSpecification;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.PopulateInventory
	 */
	struct ABP_Base_DebugVendor_C_PopulateInventory_Params
	{	};

	/**
	 * Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.UpdateState
	 */
	struct ABP_Base_DebugVendor_C_UpdateState_Params
	{
	public:
		EDebugVendorStates                                         NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.BndEvt__TriggerShape_K2Node_ComponentBoundEvent_0_InteractorEnteredSignature__DelegateSignature
	 */
	struct ABP_Base_DebugVendor_C_BndEvt__TriggerShape_K2Node_ComponentBoundEvent_0_InteractorEnteredSignature__DelegateSignature_Params
	{
	public:
		class UTriggerInteractorComponent*                         Interactor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.BndEvt__TriggerShape_K2Node_ComponentBoundEvent_1_InteractorLeftSignature__DelegateSignature
	 */
	struct ABP_Base_DebugVendor_C_BndEvt__TriggerShape_K2Node_ComponentBoundEvent_1_InteractorLeftSignature__DelegateSignature_Params
	{
	public:
		class UTriggerInteractorComponent*                         Interactor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.StateIdle
	 */
	struct ABP_Base_DebugVendor_C_StateIdle_Params
	{	};

	/**
	 * Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.StateAttract
	 */
	struct ABP_Base_DebugVendor_C_StateAttract_Params
	{	};

	/**
	 * Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.StateInMenu
	 */
	struct ABP_Base_DebugVendor_C_StateInMenu_Params
	{	};

	/**
	 * Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.ReceiveBeginPlay
	 */
	struct ABP_Base_DebugVendor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.BndEvt__Interactive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature
	 */
	struct ABP_Base_DebugVendor_C_BndEvt__Interactive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BSLU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.MenuClosed
	 */
	struct ABP_Base_DebugVendor_C_MenuClosed_Params
	{	};

	/**
	 * Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.BndEvt__Interactive_K2Node_ComponentBoundEvent_3_InteractDelegate__DelegateSignature
	 */
	struct ABP_Base_DebugVendor_C_BndEvt__Interactive_K2Node_ComponentBoundEvent_3_InteractDelegate__DelegateSignature_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TY3H[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.OpenMenu
	 */
	struct ABP_Base_DebugVendor_C_OpenMenu_Params
	{	};

	/**
	 * Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.ExecuteUbergraph_BP_Base_DebugVendor
	 */
	struct ABP_Base_DebugVendor_C_ExecuteUbergraph_BP_Base_DebugVendor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XB9Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
