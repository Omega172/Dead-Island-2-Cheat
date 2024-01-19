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
	 * Class EditorQuery.EditorQueryActor
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class AEditorQueryActor : public AActor
	{
	public:
		class UEditorQueryComponent*                               QueryComponent;                                          // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EditorQuery.EditorQueryComponent
	 * Size -> 0x0020 (FullSize[0x05C0] - InheritedSize[0x05A0])
	 */
	class UEditorQueryComponent : public UAreaShapeComponent
	{
	public:
		class FScriptMulticastDelegate                             OnQueryAreaChange;                                       // 0x05A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BLGX[0x10];                                  // 0x05B0(0x0010) MISSED OFFSET (PADDING)

	public:
		bool UpdateActorsInArea(TArray<class AActor*> InActors, class UClass* Class, TArray<class AActor*>* OutActors);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
