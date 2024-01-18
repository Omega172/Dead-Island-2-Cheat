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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ScriptedSequences.ScriptedState
	 * Size -> 0x0068
	 */
	struct FScriptedState
	{
	public:
		struct FScopedKnowledgeBaseExpressionListener              ActiveExpression;                                        // 0x0000(0x0060) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UScriptedSequenceStage*                              Stage;                                                   // 0x0060(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ScriptedSequences.ScriptedTransitionData
	 * Size -> 0x0010
	 */
	struct FScriptedTransitionData
	{
	public:
		class FName                                                SourceState;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DestinationState;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ScriptedSequences.ScriptedTransitionState
	 * Size -> 0x0018
	 */
	struct FScriptedTransitionState
	{
	public:
		TArray<struct FScriptedTransitionData>                     TransitionData;                                          // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UScriptedSequenceStage*                              Stage;                                                   // 0x0010(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
