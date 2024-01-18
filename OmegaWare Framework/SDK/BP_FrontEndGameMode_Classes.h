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
	 * BlueprintGeneratedClass BP_FrontEndGameMode.BP_FrontEndGameMode_C
	 * Size -> 0x0062 (FullSize[0x06F2] - InheritedSize[0x0690])
	 */
	class ABP_FrontEndGameMode_C : public AFrontEndGameMode
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0690(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMediaPlayer*                                        BackgroundVideoPlayer;                                   // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               FrontEndAudioStateId;                                    // 0x06A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMenuType*                                           FEMenuType;                                              // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                UserSignInProfileScreen;                                 // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MainMenuScreenName;                                      // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                GameLobbyScreenName;                                     // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMenuOpeningParams                                  ScheduledFrontendMenuOpeningParams;                      // 0x06D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       IsBackgroundVideoOpen;                                   // 0x06F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOpenFrontendMenuScheduled;                             // 0x06F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OpenEntryScreen();
		void ScheduleOpenFrontendMenu(const struct FMenuOpeningParams& MenuOpeningParams);
		void ExecuteOpenFrontendMenu();
		void OpenUserSignIn();
		void OpenGameLobby(EGameType GameType);
		void CloseBackgroundVideo();
		void OpenBackgroundVideo();
		void OpenMapBrowser(EGameType GameType);
		void OpenMainMenu();
		void OpenTitleScreen();
		void OnBackToTitleScreen();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnEnterSplash();
		void OnEnterUserSignIn();
		void OnEnterFrontEnd();
		void OnEnterJoinPartyGame();
		void OnMenuClosed(class UMenuInstance* MenuInstance);
		void ReceiveBeginPlay();
		void OnEnterEntry();
		void ExecuteUbergraph_BP_FrontEndGameMode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
