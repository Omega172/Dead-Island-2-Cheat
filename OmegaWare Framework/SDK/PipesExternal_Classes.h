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
	 * Class PipesExternal.GameEventResponse_StartPipeFlow
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UGameEventResponse_StartPipeFlow : public UGameEventResponse
	{
	public:
		struct FDSActorPicker                                      PipeOriginToStartViaPicker;                              // 0x0038(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PipesExternal.GameEventResponse_StopPipeFlow
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UGameEventResponse_StopPipeFlow : public UGameEventResponse
	{
	public:
		struct FDSActorPicker                                      PipeOriginToStopViaPicker;                               // 0x0038(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PipesExternal.ScriptedSequenceExitCondition_PipeFlowStarted
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UScriptedSequenceExitCondition_PipeFlowStarted : public UScriptedSequenceExitCondition
	{
	public:
		class ABasePipe*                                           PipeToCheck;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_763Q[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnPipeFlowStarted(class ABasePipe* Pipe);
		static UClass* StaticClass();
	};

	/**
	 * Class PipesExternal.ScriptedSequenceExitCondition_PipeFlowStopped
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UScriptedSequenceExitCondition_PipeFlowStopped : public UScriptedSequenceExitCondition
	{
	public:
		class ABasePipe*                                           PipeToCheck;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C87E[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnPipeFlowStopped(class ABasePipe* Pipe);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
