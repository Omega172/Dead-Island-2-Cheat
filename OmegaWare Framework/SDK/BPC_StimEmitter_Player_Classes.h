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
	 * BlueprintGeneratedClass BPC_StimEmitter_Player.BPC_StimEmitter_Player_C
	 * Size -> 0x0018 (FullSize[0x0390] - InheritedSize[0x0378])
	 */
	class UBPC_StimEmitter_Player_C : public UBPC_Base_StimEmitter_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0378(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCharacterActionComponent*                           CharacterActionComponent;                                // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDIObservableComponent*                              Observable;                                              // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Unpossessed(class AController* OldController);
		void Possessed(class AController* NewController);
		void GetPlayerID(int32_t* PlayerID);
		void UpdateIgnorePlayer(bool NewIgnorePlayer, int32_t PlayerID);
		void DoJump();
		void SetEmitterActivationByName(bool bActive, struct FStimChooser* StimName);
		void DoLowerBody(const class FName& Action);
		void EndAction(const struct FGuid& RequestId, const class FName& ActionType, ECharacterActionEndedReason Reason);
		void OnIgnorePlayerChanged(bool Value, int32_t PlayerID);
		void BeginAction(const struct FGuid& RequestId, const class FName& ActionType);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPC_StimEmitter_Player(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
