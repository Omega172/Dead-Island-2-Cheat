﻿#pragma once

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
	 * Class PipesExternal.GameEventResponse_StartPipeFlow
	 * Size -> 0x0078 (FullSize[0x00B8] - InheritedSize[0x0040])
	 */
	class UGameEventResponse_StartPipeFlow : public UGameEventResponse
	{
	public:
		struct FDSActorPicker                                      PipeOriginToStartViaPicker;                              // 0x0040(0x0078) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PipesExternal.GameEventResponse_StopPipeFlow
	 * Size -> 0x0078 (FullSize[0x00B8] - InheritedSize[0x0040])
	 */
	class UGameEventResponse_StopPipeFlow : public UGameEventResponse
	{
	public:
		struct FDSActorPicker                                      PipeOriginToStopViaPicker;                               // 0x0040(0x0078) Edit, NativeAccessSpecifierPublic

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
		unsigned char                                              UnknownData_8D4G[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_MFNT[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnPipeFlowStopped(class ABasePipe* Pipe);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
