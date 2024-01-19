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
	 * UserDefinedStruct SQuestDeliveryParams.SQuestDeliveryParams
	 * Size -> 0x001A
	 */
	struct FSQuestDeliveryParams
	{
	public:
		class UAnimSetData*                                        TalkAnimSet_2_E002586F4590627F0A13C3B87C3DB8F6;          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSetData*                                        ListenAnimSet_4_B72B8F1646DE3511080EA2B65E4C87DC;        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIPlayerCharacter*                                  Player_7_DB962E4240D16FF4FB8E0F95DA4EC015;               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ELookAtType                                                LookAtType_10_8D8A5E0B48784E8A4EB081B73E9F6517;          // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BindPlayer_14_9A1848024060BB7B357D2DABA11B9F96;          // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
