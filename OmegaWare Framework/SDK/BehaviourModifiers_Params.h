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
	 * Function BehaviourModifiers.BehaviourModifier.OnEnd
	 */
	struct UBehaviourModifier_OnEnd_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BehaviourModifiers.BehaviourModifier.OnBegin
	 */
	struct UBehaviourModifier_OnBegin_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BehaviourModifiers.BehaviourModifierComponent.EndBehaviourModifier
	 */
	struct UBehaviourModifierComponent_EndBehaviourModifier_Params
	{
	public:
		class UClass*                                              BehaviourModifierClass;                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BehaviourModifiers.BehaviourModifierComponent.BeginBehaviourModifier
	 */
	struct UBehaviourModifierComponent_BeginBehaviourModifier_Params
	{
	public:
		class UClass*                                              BehaviourModifierClass;                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
