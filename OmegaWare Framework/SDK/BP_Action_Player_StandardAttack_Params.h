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
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnSectionChanged
	 */
	struct UBP_Action_Player_StandardAttack_C_OnSectionChanged_Params
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.CacheSharedVariables
	 */
	struct UBP_Action_Player_StandardAttack_C_CacheSharedVariables_Params
	{	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.CleanRepeatRelatedFacts
	 */
	struct UBP_Action_Player_StandardAttack_C_CleanRepeatRelatedFacts_Params
	{
	public:
		class UKnowledgeBaseComponent*                             PlayerKBComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.ToggleStartingHand
	 */
	struct UBP_Action_Player_StandardAttack_C_ToggleStartingHand_Params
	{	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.GetChainStartingHand
	 */
	struct UBP_Action_Player_StandardAttack_C_GetChainStartingHand_Params
	{
	public:
		class FString                                              ChainStartingHand;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.IncreaseRepeatCounter
	 */
	struct UBP_Action_Player_StandardAttack_C_IncreaseRepeatCounter_Params
	{	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.ResolveRepeatMontage
	 */
	struct UBP_Action_Player_StandardAttack_C_ResolveRepeatMontage_Params
	{
	public:
		bool                                                       MontageFound;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O3BN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        RepeatMontage;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.SkipRepeat
	 */
	struct UBP_Action_Player_StandardAttack_C_SkipRepeat_Params
	{
	public:
		bool                                                       Skip;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.CallReticlePulse
	 */
	struct UBP_Action_Player_StandardAttack_C_CallReticlePulse_Params
	{	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.FindMontageInAnimSet
	 */
	struct UBP_Action_Player_StandardAttack_C_FindMontageInAnimSet_Params
	{
	public:
		class FName                                                AssetName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage*                                        ResolvedMontage;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.GetActionRelevantMontages
	 */
	struct UBP_Action_Player_StandardAttack_C_GetActionRelevantMontages_Params
	{
	public:
		class UDIAnimInstance*                                     PlayerAnimInstance;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                StandardAttackAnimSetName;                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                StandardAttackMontageAsset;                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                StandardAttackAnticMontageAsset;                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                HeavyAttackAnticMontageAsset;                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5B03[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        StandardAttackMontage;                                   // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage*                                        StandardAttackAnticMontage;                              // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage*                                        HeavyAttackAnticMontage;                                 // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.IsInChain
	 */
	struct UBP_Action_Player_StandardAttack_C_IsInChain_Params
	{
	public:
		bool                                                       InChain;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBeginEarly
	 */
	struct UBP_Action_Player_StandardAttack_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.CacheVariables
	 */
	struct UBP_Action_Player_StandardAttack_C_CacheVariables_Params
	{
	public:
		bool                                                       CanContinue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NZC5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.Resolve
	 */
	struct UBP_Action_Player_StandardAttack_C_Resolve_Params
	{
	public:
		struct FCharacterActionResolveParams                       Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		ECharacterActionResolution                                 OutResolution;                                           // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5PQK[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OutQueuedTimeout;                                        // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnFailedToPlay_139D106441E71098568BCF853FD3020C
	 */
	struct UBP_Action_Player_StandardAttack_C_OnFailedToPlay_139D106441E71098568BCF853FD3020C_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnSectionChanged_139D106441E71098568BCF853FD3020C
	 */
	struct UBP_Action_Player_StandardAttack_C_OnSectionChanged_139D106441E71098568BCF853FD3020C_Params
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyEnd_139D106441E71098568BCF853FD3020C
	 */
	struct UBP_Action_Player_StandardAttack_C_OnNotifyEnd_139D106441E71098568BCF853FD3020C_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyBegin_139D106441E71098568BCF853FD3020C
	 */
	struct UBP_Action_Player_StandardAttack_C_OnNotifyBegin_139D106441E71098568BCF853FD3020C_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnInterrupted_139D106441E71098568BCF853FD3020C
	 */
	struct UBP_Action_Player_StandardAttack_C_OnInterrupted_139D106441E71098568BCF853FD3020C_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBlendOut_139D106441E71098568BCF853FD3020C
	 */
	struct UBP_Action_Player_StandardAttack_C_OnBlendOut_139D106441E71098568BCF853FD3020C_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnCompleted_139D106441E71098568BCF853FD3020C
	 */
	struct UBP_Action_Player_StandardAttack_C_OnCompleted_139D106441E71098568BCF853FD3020C_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnFailedToPlay_F233E8AD47904CC1F37A9692233AD991
	 */
	struct UBP_Action_Player_StandardAttack_C_OnFailedToPlay_F233E8AD47904CC1F37A9692233AD991_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnSectionChanged_F233E8AD47904CC1F37A9692233AD991
	 */
	struct UBP_Action_Player_StandardAttack_C_OnSectionChanged_F233E8AD47904CC1F37A9692233AD991_Params
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyEnd_F233E8AD47904CC1F37A9692233AD991
	 */
	struct UBP_Action_Player_StandardAttack_C_OnNotifyEnd_F233E8AD47904CC1F37A9692233AD991_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyBegin_F233E8AD47904CC1F37A9692233AD991
	 */
	struct UBP_Action_Player_StandardAttack_C_OnNotifyBegin_F233E8AD47904CC1F37A9692233AD991_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnInterrupted_F233E8AD47904CC1F37A9692233AD991
	 */
	struct UBP_Action_Player_StandardAttack_C_OnInterrupted_F233E8AD47904CC1F37A9692233AD991_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBlendOut_F233E8AD47904CC1F37A9692233AD991
	 */
	struct UBP_Action_Player_StandardAttack_C_OnBlendOut_F233E8AD47904CC1F37A9692233AD991_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnCompleted_F233E8AD47904CC1F37A9692233AD991
	 */
	struct UBP_Action_Player_StandardAttack_C_OnCompleted_F233E8AD47904CC1F37A9692233AD991_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnFailedToPlay_E1A1DDFE4DCCE2EF357289BF63770AFE
	 */
	struct UBP_Action_Player_StandardAttack_C_OnFailedToPlay_E1A1DDFE4DCCE2EF357289BF63770AFE_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnSectionChanged_E1A1DDFE4DCCE2EF357289BF63770AFE
	 */
	struct UBP_Action_Player_StandardAttack_C_OnSectionChanged_E1A1DDFE4DCCE2EF357289BF63770AFE_Params
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyEnd_E1A1DDFE4DCCE2EF357289BF63770AFE
	 */
	struct UBP_Action_Player_StandardAttack_C_OnNotifyEnd_E1A1DDFE4DCCE2EF357289BF63770AFE_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyBegin_E1A1DDFE4DCCE2EF357289BF63770AFE
	 */
	struct UBP_Action_Player_StandardAttack_C_OnNotifyBegin_E1A1DDFE4DCCE2EF357289BF63770AFE_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnInterrupted_E1A1DDFE4DCCE2EF357289BF63770AFE
	 */
	struct UBP_Action_Player_StandardAttack_C_OnInterrupted_E1A1DDFE4DCCE2EF357289BF63770AFE_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBlendOut_E1A1DDFE4DCCE2EF357289BF63770AFE
	 */
	struct UBP_Action_Player_StandardAttack_C_OnBlendOut_E1A1DDFE4DCCE2EF357289BF63770AFE_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnCompleted_E1A1DDFE4DCCE2EF357289BF63770AFE
	 */
	struct UBP_Action_Player_StandardAttack_C_OnCompleted_E1A1DDFE4DCCE2EF357289BF63770AFE_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnFailedToPlay_2C92C94A4CEE5F8D0F1A8CACB22A346A
	 */
	struct UBP_Action_Player_StandardAttack_C_OnFailedToPlay_2C92C94A4CEE5F8D0F1A8CACB22A346A_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnSectionChanged_2C92C94A4CEE5F8D0F1A8CACB22A346A
	 */
	struct UBP_Action_Player_StandardAttack_C_OnSectionChanged_2C92C94A4CEE5F8D0F1A8CACB22A346A_Params
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyEnd_2C92C94A4CEE5F8D0F1A8CACB22A346A
	 */
	struct UBP_Action_Player_StandardAttack_C_OnNotifyEnd_2C92C94A4CEE5F8D0F1A8CACB22A346A_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnNotifyBegin_2C92C94A4CEE5F8D0F1A8CACB22A346A
	 */
	struct UBP_Action_Player_StandardAttack_C_OnNotifyBegin_2C92C94A4CEE5F8D0F1A8CACB22A346A_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnInterrupted_2C92C94A4CEE5F8D0F1A8CACB22A346A
	 */
	struct UBP_Action_Player_StandardAttack_C_OnInterrupted_2C92C94A4CEE5F8D0F1A8CACB22A346A_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBlendOut_2C92C94A4CEE5F8D0F1A8CACB22A346A
	 */
	struct UBP_Action_Player_StandardAttack_C_OnBlendOut_2C92C94A4CEE5F8D0F1A8CACB22A346A_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnCompleted_2C92C94A4CEE5F8D0F1A8CACB22A346A
	 */
	struct UBP_Action_Player_StandardAttack_C_OnCompleted_2C92C94A4CEE5F8D0F1A8CACB22A346A_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnConstruct
	 */
	struct UBP_Action_Player_StandardAttack_C_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnEnd
	 */
	struct UBP_Action_Player_StandardAttack_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.OnBegin
	 */
	struct UBP_Action_Player_StandardAttack_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_StandardAttack.BP_Action_Player_StandardAttack_C.ExecuteUbergraph_BP_Action_Player_StandardAttack
	 */
	struct UBP_Action_Player_StandardAttack_C_ExecuteUbergraph_BP_Action_Player_StandardAttack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
