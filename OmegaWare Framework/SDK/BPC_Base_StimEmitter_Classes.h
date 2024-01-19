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
	 * BlueprintGeneratedClass BPC_Base_StimEmitter.BPC_Base_StimEmitter_C
	 * Size -> 0x00C8 (FullSize[0x0378] - InheritedSize[0x02B0])
	 */
	class UBPC_Base_StimEmitter_C : public UStimEmitterComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FStimChooser                                        Stim_HearWalk;                                           // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FStimChooser                                        Stim_HearRun;                                            // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FStimChooser                                        Stim_HearJump;                                           // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UCombatAggroComponent*                               AggroComponent;                                          // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStimManager*                                        StimManager;                                             // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStimID                                             FeelAllyCombatantCloseStimRef;                           // 0x02F8(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0HHX[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADIAIController*                                     OwnerController;                                         // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIAICharacter*                                      OwnerCharacter;                                          // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AddedFeelAllyCombatantCloseStim;                         // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JL31[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStimTemplate*                                       FeelCombatantAllyCloseStim;                              // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStimTemplate*                                       FeelCalmAllyCloseStim;                                   // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<struct FStimID, float>                                StimCooldownList;                                        // 0x0328(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void RemoveFeelAllyCloseStim();
		void AddFeelAllyCloseStim(class UStimTemplate* StimTemplate);
		void OnCombatStateChanged(ECombatState NewState);
		void OnCharacterUnpossessed();
		void OnCharacterPossessed(class AController* PlayerController);
		void UninitialiseFeelAllyCloseStim();
		void IntialiseFeelAllyCloseStim();
		void SetAlive(bool Alive);
		void OnResurrect();
		void OnDeath();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BPC_Base_StimEmitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
