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
	 * BlueprintGeneratedClass BP_BTTask_SetBlackboardValueAsBool.BP_BTTask_SetBlackboardValueAsBool_C
	 * Size -> 0x0031 (FullSize[0x00D9] - InheritedSize[0x00A8])
	 */
	class UBP_BTTask_SetBlackboardValueAsBool_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              Blackboard;                                              // 0x00B0(0x0028) Edit, BlueprintVisible
		bool                                                       Value;                                                   // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_BP_BTTask_SetBlackboardValueAsBool(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
