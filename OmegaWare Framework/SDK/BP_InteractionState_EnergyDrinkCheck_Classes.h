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
	 * BlueprintGeneratedClass BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C
	 * Size -> 0x0028 (FullSize[0x0130] - InheritedSize[0x0108])
	 */
	class UBP_InteractionState_EnergyDrinkCheck_C : public UInteractionStateBlockable
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0108(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_InstantUsePickup_C*                         Item;                                                    // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                               LocalPlayer;                                             // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_Player_C*                                   Player;                                                  // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIPlayerController*                                 DIPlayerController;                                      // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetFuryValuesComponent(class APawn** Player, class UFuryValuesComponent** FuryValuesComponent);
		void IsFuryUnlocked(class APawn** Player, bool* IsUnlocked);
		void CheckInteraction(class APawn** User, bool* IsBlocked);
		void IsPlayerHealthAtMax(class APawn** Player, bool* IsHealthAtMax);
		void IsPlayerFuryAtMax(class APawn** Player, bool* IsFuryAtMax);
		void OnInteractionComplete_Local(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void OnInteractionComplete_Server(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void Initialize(class UInteractiveComponent* InInteractiveComponent);
		void HealthUpdated(class AActor* DamagedActor, float LastHealth, float CurrentHealth);
		void OnFuryUpdate(float NewValue, float PreviousValue);
		void OnEnterRangeOrFocus_Local(class APawn* User);
		void OnLeaveRangeAndFocus_Local(class APawn* User);
		void ExecuteUbergraph_BP_InteractionState_EnergyDrinkCheck(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
