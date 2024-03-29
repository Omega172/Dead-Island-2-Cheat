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
	 * Class DSMatchmaking.PeerMeshNetConnection
	 * Size -> 0x0000 (FullSize[0x1B68] - InheritedSize[0x1B68])
	 */
	class UPeerMeshNetConnection : public UIpConnection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSMatchmaking.PeerMeshNetDriver
	 * Size -> 0x0020 (FullSize[0x09B0] - InheritedSize[0x0990])
	 */
	class UPeerMeshNetDriver : public UIpNetDriver
	{
	public:
		unsigned char                                              UnknownData_7XOW[0x20];                                  // 0x0990(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
