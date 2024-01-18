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
	 * BlueprintGeneratedClass BPFL_Audio.BPFL_Audio_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_Audio_C : public UBlueprintFunctionLibrary
	{
	public:
		struct FPlayAtLocationResult PostAudioAtLocationAdvanced(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, TArray<struct FAudioSwitchGroupNameSwitchStateSimplePair> SwitchGroupsAndSwitchStates, TArray<struct FAudioRTPCNameRTPCValueSimplePair> RTPCNamesAndValues, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, class UObject* __WorldContext);
		struct FPlayAtLocationResult PostAudioAtLocationWithCallback(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, class UObject* __WorldContext);
		struct FPlayAtLocationResult PostAudioAtLocationSimple(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, class UObject* __WorldContext);
		void StopAudioByPlayingID(int32_t PlayingID, class UObject* __WorldContext);
		int32_t CreateAudioAtLocation(class UObject* Owner, class UAkComponent* AudioSourceIn, class UAkAudioEvent* AkEvent, class UAkAuxBus* EarlyReflectionsBus, const struct FVector& Location, const struct FRotator& Orientation, bool AutoDestroy, class UObject* __WorldContext, class UAkComponent** AudioSourceOut);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
