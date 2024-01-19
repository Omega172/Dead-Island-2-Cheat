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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function PipesExternal.ScriptedSequenceExitCondition_PipeFlowStarted.OnPipeFlowStarted
	 */
	struct UScriptedSequenceExitCondition_PipeFlowStarted_OnPipeFlowStarted_Params
	{
	public:
		class ABasePipe*                                           Pipe;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PipesExternal.ScriptedSequenceExitCondition_PipeFlowStopped.OnPipeFlowStopped
	 */
	struct UScriptedSequenceExitCondition_PipeFlowStopped_OnPipeFlowStopped_Params
	{
	public:
		class ABasePipe*                                           Pipe;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
