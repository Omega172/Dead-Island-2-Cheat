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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Base_PlayerController.BP_Base_PlayerController_C
	 * Size -> 0x00E0 (FullSize[0x0C78] - InheritedSize[0x0B98])
	 */
	class ABP_Base_PlayerController_C : public ADIPlayerController
	{
	public:
		unsigned char                                              UnknownData_HTKF[0x8];                                   // 0x0B98(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0BA0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UKnowledgeBaseComponent*                             KnowledgeBase;                                           // 0x0BA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UObjectSetComponent*                                 ObjectSet;                                               // 0x0BB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_BaseStatsComponent_C*                           BPC_BaseStatsComponent;                                  // 0x0BB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerMinigameComponent*                            PlayerMinigame;                                          // 0x0BC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		EDrawDebugTrace                                            TraceType;                                               // 0x0BC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UW91[0x3];                                   // 0x0BC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HotKey;                                                  // 0x0BCC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DebugChekpointTextID;                                    // 0x0BD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J3ZX[0x4];                                   // 0x0BD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMenuType*                                           PlayerMenuType;                                          // 0x0BD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnOpenPlayerMenuInputEvent;                              // 0x0BE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOpenQuestLogInputEvent;                                // 0x0BF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOpenCharacterInputEvent;                               // 0x0C00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOpenInventoryInputEvent;                               // 0x0C10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOpenMapInputEvent;                                     // 0x0C20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UContextualHUDInputActionInstance*                   OpenQuestLogInstance;                                    // 0x0C30(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UContextualHUDInputActionInstance*                   OpenInventoryInstance;                                   // 0x0C38(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UContextualHUDInputActionInstance*                   OpenCharacterInstance;                                   // 0x0C40(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UContextualHUDInputActionInstance*                   OpenMapInstance;                                         // 0x0C48(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnTogglePlayerMenuInputEvent;                            // 0x0C50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UContextualHUDInputManager*                          ContextualInputManager;                                  // 0x0C60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             PlayerLootedCarTrunk;                                    // 0x0C68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ToggleScreen(const class FName& OpeningScreen);
		void OpenMenuInternal(const class FName& OpeningScreen);
		void SetForceFeedbackEnabledForControlScheme(EControlSchemeType ControlScheme);
		void InpMapActEvt_ToggleGameMenu_InputMapperActionEventNode_3(EInputActionEventType Type, float Value);
		void InpMapActEvt_ShowGameMenu_InputMapperActionEventNode_2(EInputActionEventType Type, float Value);
		void InpMapActEvt_VoiceCommandListenHold_InputMapperActionEventNode_1(EInputActionEventType Type, float Value);
		void ReceiveBeginPlay();
		void OnControlSchemeChanged(EControlSchemeType CurrentControlScheme, EControlSchemeType LastControlScheme);
		void OnOpenPlayerMenuInputEvent_Event(class UInputMapperAction* Action, EInputActionEventType Type, float Value);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnOpenQuestLogInputEvent_Event(class UInputMapperAction* Action, EInputActionEventType Type, float Value);
		void OnOpenCharacterInputEvent_Event(class UInputMapperAction* Action, EInputActionEventType Type, float Value);
		void OnOpenInventoryInputEvent_Event(class UInputMapperAction* Action, EInputActionEventType Type, float Value);
		void OnOpenMapInputEvent_Event(class UInputMapperAction* Action, EInputActionEventType Type, float Value);
		void OnTogglePlayerMenuInputEvent_Event(class UInputMapperAction* Action, EInputActionEventType Type, float Value);
		void OnPostHUDInitialised(class ADIHUD* HUD);
		void OnPreHUDDestroyed(class ADIHUD* HUD);
		void ExecuteUbergraph_BP_Base_PlayerController(int32_t EntryPoint);
		void PlayerLootedCarTrunk__DelegateSignature(ELootContainerMapDiscoveryType LootContainerType);
		void OnTogglePlayerMenuInputEvent__DelegateSignature(class UInputMapperAction* Action, EInputActionEventType Type, float Value);
		void OnOpenMapInputEvent__DelegateSignature(class UInputMapperAction* Action, EInputActionEventType Type, float Value);
		void OnOpenInventoryInputEvent__DelegateSignature(class UInputMapperAction* Action, EInputActionEventType Type, float Value);
		void OnOpenCharacterInputEvent__DelegateSignature(class UInputMapperAction* Action, EInputActionEventType Type, float Value);
		void OnOpenQuestLogInputEvent__DelegateSignature(class UInputMapperAction* Action, EInputActionEventType Type, float Value);
		void OnOpenPlayerMenuInputEvent__DelegateSignature(class UInputMapperAction* Action, EInputActionEventType Type, float Value);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
