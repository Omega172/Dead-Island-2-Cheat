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
	 * BlueprintGeneratedClass BPC_StateTransmitter.BPC_StateTransmitter_C
	 * Size -> 0x0028 (FullSize[0x0698] - InheritedSize[0x0670])
	 */
	class UBPC_StateTransmitter_C : public UStateTransmitterComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0670(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             ServerActivated;                                         // 0x0678(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ServerDeactivated;                                       // 0x0688(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnServerActivated(ETransmittableStatus StatusType, float Strength);
		void OnServerDeactivated(ETransmittableStatus StatusType);
		void ExecuteUbergraph_BPC_StateTransmitter(int32_t EntryPoint);
		void ServerDeactivated__DelegateSignature();
		void ServerActivated__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
