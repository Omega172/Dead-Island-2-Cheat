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
	 * BlueprintGeneratedClass BP_InteractionState_SnackBarCheck.BP_InteractionState_SnackBarCheck_C
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	class UBP_InteractionState_SnackBarCheck_C : public UInteractionStateBlockable
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0108(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_InstantUsePickup_C*                         Item;                                                    // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_Player_C*                                   Player;                                                  // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsPlayerHealthAtMax(class AActor** Player, bool* IsHealthAtMax);
		void CheckInteraction(class AActor** User, bool* IsBlocked);
		void Initialize(class UInteractiveComponent* InInteractiveComponent);
		void OnInteractionComplete_Local(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void OnInteractionComplete_Server(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void UpdatedHealth(class AActor* DamagedActor, float LastHealth, float CurrentHealth);
		void OnEnterRangeOrFocus_Local(class APawn* User);
		void OnLeaveRangeAndFocus_Local(class APawn* User);
		void ExecuteUbergraph_BP_InteractionState_SnackBarCheck(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
