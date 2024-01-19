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
	 * BlueprintGeneratedClass BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C
	 * Size -> 0x0008 (FullSize[0x0118] - InheritedSize[0x0110])
	 */
	class UBP_Base_InteractionState_Player_C : public UBP_Base_InteractionState_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0110(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserExitedRange(class APawn* User);
		void UserEnteredRange(class APawn* User);
		void OnEnterRangedIconRange_Local(class APawn* User);
		void OnLeaveRangedIconRange_Local(class APawn* User);
		void Initialize(class UInteractiveComponent* InInteractiveComponent);
		void Uninitialize();
		void ExecuteUbergraph_BP_Base_InteractionState_Player(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
