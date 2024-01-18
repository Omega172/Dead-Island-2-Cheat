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
	 * BlueprintGeneratedClass BP_BTTask_GetDirectionBetweenActors.BP_BTTask_GetDirectionBetweenActors_C
	 * Size -> 0x0080 (FullSize[0x0128] - InheritedSize[0x00A8])
	 */
	class UBP_BTTask_GetDirectionBetweenActors_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              FromActor;                                               // 0x00B0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              ToActor;                                                 // 0x00D8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              Direction;                                               // 0x0100(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BP_BTTask_GetDirectionBetweenActors(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
