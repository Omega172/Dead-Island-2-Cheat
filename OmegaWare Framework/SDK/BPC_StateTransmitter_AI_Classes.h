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
	 * BlueprintGeneratedClass BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C
	 * Size -> 0x0068 (FullSize[0x0688] - InheritedSize[0x0620])
	 */
	class UBPC_StateTransmitter_AI_C : public UStateTransmitterComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0620(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStateTransmitterConfig*                             DefaultSparkTransmitter;                                 // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStateTransmitterConfig*                             ScreamerSparkTransmitter;                                // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<ETransmittableStatus, class UStateTransmitterConfig*> DefaultStateConfig;                                      // 0x0638(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ResetState(ETransmittableStatus StateType);
		void SetState(ETransmittableStatus StateType, class UStateTransmitterConfig* Relay);
		void OnServerActivated(ETransmittableStatus StatusType, float Strength);
		void OnServerDeactivated(ETransmittableStatus StatusType);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPC_StateTransmitter_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
