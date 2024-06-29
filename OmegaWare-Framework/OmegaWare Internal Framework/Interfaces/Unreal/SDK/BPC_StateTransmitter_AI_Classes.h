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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPC_StateTransmitter_AI.BPC_StateTransmitter_AI_C
	 * Size -> 0x0068 (FullSize[0x06D8] - InheritedSize[0x0670])
	 */
	class UBPC_StateTransmitter_AI_C : public UStateTransmitterComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0670(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStateTransmitterConfig*                             DefaultSparkTransmitter;                                 // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStateTransmitterConfig*                             ScreamerSparkTransmitter;                                // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<ETransmittableStatus, class UStateTransmitterConfig*> DefaultStateConfig;                                      // 0x0688(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

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
