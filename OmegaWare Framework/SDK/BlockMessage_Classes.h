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
	 * Class BlockMessage.BlockMessageReceiverComponent
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UBlockMessageReceiverComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnBlockMessageStateChanged;                              // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class URequirementsContainer*                              BlockRequirements;                                       // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnUnblocked();
		void OnBlocked();
		bool IsBlocked();
		static UClass* StaticClass();
	};

	/**
	 * Class BlockMessage.BlockMessengerComponent
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UBlockMessengerComponent : public UActorComponent
	{
	public:
		class UBlockMessageReceiverComponent*                      BlockMessageReceiverComponent;                           // 0x00E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
