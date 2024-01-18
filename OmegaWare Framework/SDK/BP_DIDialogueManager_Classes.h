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
	 * BlueprintGeneratedClass BP_DIDialogueManager.BP_DIDialogueManager_C
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UBP_DIDialogueManager_C : public UDIDialogueManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDSLogChannelHandle*                                 LoggerHandle;                                            // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HandleNamedEventReturn2(const struct FDialogueKey& EventName, EDialogueRuntimeEventType EventType, class UDialogueComponent* DialogueComponent, EDialogueRuntimeEventHandlerResponse* Response);
		void HandleNamedEventTwoRefParamToReturn(const struct FDialogueKey& EventName, class UDialogueComponent* DialogueComponent, const struct FDialogueKey& BaseVoiceSetName, const struct FDialogueKey& TriggerName, int32_t SessionId, int32_t ExecutionId, unsigned char* Response, unsigned char* Response2);
		void HandleNamedEventReturnTwoResponses(const struct FDialogueKey& EventName, class UDialogueComponent* DialogueComponent, const struct FDialogueKey& BaseVoiceSetName, const struct FDialogueKey& TriggerName, int32_t SessionId, int32_t ExecutionId, unsigned char* Response, unsigned char* Response2);
		void HandleNamedEventRefParamToReturn(const struct FDialogueKey& EventName, class UDialogueComponent* DialogueComponent, const struct FDialogueKey& BaseVoiceSetName, const struct FDialogueKey& TriggerName, int32_t SessionId, int32_t ExecutionId, unsigned char* Response);
		void HandleNamedEventReturn1(const struct FDialogueKey& EventName, EDialogueRuntimeEventType EventType, class UDialogueComponent* DialogueComponent, EDialogueRuntimeEventHandlerResponse* Response);
		void BlueprintInit();
		void ExecuteUbergraph_BP_DIDialogueManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
