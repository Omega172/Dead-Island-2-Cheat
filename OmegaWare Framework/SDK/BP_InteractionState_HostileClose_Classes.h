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
	 * BlueprintGeneratedClass BP_InteractionState_HostileClose.BP_InteractionState_HostileClose_C
	 * Size -> 0x000C (FullSize[0x0124] - InheritedSize[0x0118])
	 */
	class UBP_InteractionState_HostileClose_C : public UBP_Base_InteractionState_Player_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0118(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    HostileTrackingID;                                       // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserExitedRange(class APawn* User);
		void UserEnteredRange(class APawn* User);
		void OnHostileTrackingUpdated(const struct FVector& OriginLocation, bool bHostilesInArea);
		void Uninitialize();
		void ExecuteUbergraph_BP_InteractionState_HostileClose(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
