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
	 * BlueprintGeneratedClass BPFL_UIEventSystem.BPFL_UIEventSystem_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_UIEventSystem_C : public UBlueprintFunctionLibrary
	{
	public:
		bool IsInteractorLocallyControlled(class UTriggerInteractorComponent* Interactor, class UObject* __WorldContext);
		void SetPlayerInAreaHideIconReasonOnObjective(class ADIObjectiveActor* ObjectiveActor, class UTriggerInteractorComponent* Interactor, bool Hidden, bool AllPlayers, class UObject* __WorldContext, bool* Success);
		void STATIC_AddUIIcon(class AActor* Actor, class UClass* Icon, class UObject* __WorldContext);
		void STATIC_HideUIIcons(class AActor* Actor, class UObject* __WorldContext);
		void STATIC_CallLocalCharacterOnFuryUpdated(class ADIPlayerCharacter* PlayerCharacter, float FuryMeter, bool FuryMode, class UObject* __WorldContext);
		void STATIC_GetBPEventDispatcher(class UObject* __WorldContext, class UBP_UIEventDispatcher_C** BPEventDispatcher);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
