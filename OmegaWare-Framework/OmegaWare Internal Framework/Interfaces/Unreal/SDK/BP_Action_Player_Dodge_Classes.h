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
	 * BlueprintGeneratedClass BP_Action_Player_Dodge.BP_Action_Player_Dodge_C
	 * Size -> 0x0008 (FullSize[0x0190] - InheritedSize[0x0188])
	 */
	class UBP_Action_Player_Dodge_C : public UDodgeCharacterAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0188(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnRequestFailed_45D7E82D41CC35818E2D11B2D45D6840();
		void OnCustomSignal_45D7E82D41CC35818E2D11B2D45D6840(const struct FCharacterActionOnCustomSignalParams& CustomSignalParams);
		void OnEnd_45D7E82D41CC35818E2D11B2D45D6840(const struct FCharacterActionOnEndParams& EndParams);
		void OnBegin_45D7E82D41CC35818E2D11B2D45D6840(const struct FCharacterActionOnBeginParams& BeginParams);
		void OnCancelled_45D7E82D41CC35818E2D11B2D45D6840(const struct FCharacterActionOnCancelledParams& CancelledParams);
		void OnResolved_45D7E82D41CC35818E2D11B2D45D6840(const struct FCharacterActionOnResolvedParams& ResolvedParams);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_Player_Dodge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
