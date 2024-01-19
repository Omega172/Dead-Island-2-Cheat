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
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.ToggleScreen
	 */
	struct ABP_Base_PlayerController_C_ToggleScreen_Params
	{
	public:
		class FName                                                OpeningScreen;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.OpenMenuInternal
	 */
	struct ABP_Base_PlayerController_C_OpenMenuInternal_Params
	{
	public:
		class FName                                                OpeningScreen;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.SetForceFeedbackEnabledForControlScheme
	 */
	struct ABP_Base_PlayerController_C_SetForceFeedbackEnabledForControlScheme_Params
	{
	public:
		EControlSchemeType                                         ControlScheme;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.InpMapActEvt_ToggleGameMenu_InputMapperActionEventNode_3
	 */
	struct ABP_Base_PlayerController_C_InpMapActEvt_ToggleGameMenu_InputMapperActionEventNode_3_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JSPW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.InpMapActEvt_ShowGameMenu_InputMapperActionEventNode_2
	 */
	struct ABP_Base_PlayerController_C_InpMapActEvt_ShowGameMenu_InputMapperActionEventNode_2_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0EAH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.InpMapActEvt_VoiceCommandListenHold_InputMapperActionEventNode_1
	 */
	struct ABP_Base_PlayerController_C_InpMapActEvt_VoiceCommandListenHold_InputMapperActionEventNode_1_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TDL7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.ReceiveBeginPlay
	 */
	struct ABP_Base_PlayerController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnControlSchemeChanged
	 */
	struct ABP_Base_PlayerController_C_OnControlSchemeChanged_Params
	{
	public:
		EControlSchemeType                                         CurrentControlScheme;                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControlSchemeType                                         LastControlScheme;                                       // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenPlayerMenuInputEvent_Event
	 */
	struct ABP_Base_PlayerController_C_OnOpenPlayerMenuInputEvent_Event_Params
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputActionEventType                                      Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RFJJ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.ReceiveEndPlay
	 */
	struct ABP_Base_PlayerController_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenQuestLogInputEvent_Event
	 */
	struct ABP_Base_PlayerController_C_OnOpenQuestLogInputEvent_Event_Params
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputActionEventType                                      Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7ZVG[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenCharacterInputEvent_Event
	 */
	struct ABP_Base_PlayerController_C_OnOpenCharacterInputEvent_Event_Params
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputActionEventType                                      Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZPFS[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenInventoryInputEvent_Event
	 */
	struct ABP_Base_PlayerController_C_OnOpenInventoryInputEvent_Event_Params
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputActionEventType                                      Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I5HC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenMapInputEvent_Event
	 */
	struct ABP_Base_PlayerController_C_OnOpenMapInputEvent_Event_Params
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputActionEventType                                      Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WUE2[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnTogglePlayerMenuInputEvent_Event
	 */
	struct ABP_Base_PlayerController_C_OnTogglePlayerMenuInputEvent_Event_Params
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputActionEventType                                      Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_025G[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnPostHUDInitialised
	 */
	struct ABP_Base_PlayerController_C_OnPostHUDInitialised_Params
	{
	public:
		class ADIHUD*                                              HUD;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnPreHUDDestroyed
	 */
	struct ABP_Base_PlayerController_C_OnPreHUDDestroyed_Params
	{
	public:
		class ADIHUD*                                              HUD;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.ExecuteUbergraph_BP_Base_PlayerController
	 */
	struct ABP_Base_PlayerController_C_ExecuteUbergraph_BP_Base_PlayerController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.PlayerLootedCarTrunk__DelegateSignature
	 */
	struct ABP_Base_PlayerController_C_PlayerLootedCarTrunk__DelegateSignature_Params
	{
	public:
		ELootContainerMapDiscoveryType                             LootContainerType;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnTogglePlayerMenuInputEvent__DelegateSignature
	 */
	struct ABP_Base_PlayerController_C_OnTogglePlayerMenuInputEvent__DelegateSignature_Params
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputActionEventType                                      Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HHD6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenMapInputEvent__DelegateSignature
	 */
	struct ABP_Base_PlayerController_C_OnOpenMapInputEvent__DelegateSignature_Params
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputActionEventType                                      Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VD1Z[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenInventoryInputEvent__DelegateSignature
	 */
	struct ABP_Base_PlayerController_C_OnOpenInventoryInputEvent__DelegateSignature_Params
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputActionEventType                                      Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4B2Y[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenCharacterInputEvent__DelegateSignature
	 */
	struct ABP_Base_PlayerController_C_OnOpenCharacterInputEvent__DelegateSignature_Params
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputActionEventType                                      Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0SOW[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenQuestLogInputEvent__DelegateSignature
	 */
	struct ABP_Base_PlayerController_C_OnOpenQuestLogInputEvent__DelegateSignature_Params
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputActionEventType                                      Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BRSR[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenPlayerMenuInputEvent__DelegateSignature
	 */
	struct ABP_Base_PlayerController_C_OnOpenPlayerMenuInputEvent__DelegateSignature_Params
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInputActionEventType                                      Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TZXF[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
