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
	 * BlueprintGeneratedClass BP_StatefulLight_VintageTV_02.BP_StatefulLight_VintageTV_02_C
	 * Size -> 0x0020 (FullSize[0x0510] - InheritedSize[0x04F0])
	 */
	class ABP_StatefulLight_VintageTV_02_C : public ABP_Base_StatefulLight_VintageTV_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              BPC_ActivityGenerator[0x8];                              // 0x04F8(0x0008) UNKNOWN PROPERTY: ObjectProperty
		class UStaticMeshComponent*                                SM_GPL_TelevisionOldA_02;                                // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight;                                               // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void BndEvt__BPC_ActivityGenerator_K2Node_ComponentBoundEvent_0_OnActivityGenerated__DelegateSignature();
		void BndEvt__BPC_ActivityGenerator_K2Node_ComponentBoundEvent_1_OnActivityDestroyed__DelegateSignature();
		void BndEvt__BPC_ActivityGenerator_K2Node_ComponentBoundEvent_2_OnActorDataResynced__DelegateSignature();
		void ExecuteUbergraph_BP_StatefulLight_VintageTV_02(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
