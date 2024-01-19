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
	 * BlueprintGeneratedClass BP_CardGenerator_Base_Polling.BP_CardGenerator_Base_Polling_C
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UBP_CardGenerator_Base_Polling_C : public UCardGenerator_BlueprintPollingDecorator
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0048(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_AIController_C*                             AIController;                                            // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnInitialise();
		void ExecuteUbergraph_BP_CardGenerator_Base_Polling(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
