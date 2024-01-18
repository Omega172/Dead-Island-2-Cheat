/**
 * Name: Dead_Island_2
 * Version: Cracked
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.GetPerkSourceName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAttachmentPieceSettings                    AttachmentPieceSettings                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	class FName UBPC_AttachmentSettings_AI_C::GetPerkSourceName(const struct FAttachmentPieceSettings& AttachmentPieceSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.GetPerkSourceName");
		
		UBPC_AttachmentSettings_AI_C_GetPerkSourceName_Params params {};
		params.AttachmentPieceSettings = AttachmentPieceSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.CharacterActionParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterActionRequestParams               CharacterActionRequestParams                               (Parm, OutParm, NoDestructor)
	 */
	void UBPC_AttachmentSettings_AI_C::CharacterActionParams(struct FCharacterActionRequestParams* CharacterActionRequestParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.CharacterActionParams");
		
		UBPC_AttachmentSettings_AI_C_CharacterActionParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CharacterActionRequestParams != nullptr)
			*CharacterActionRequestParams = params.CharacterActionRequestParams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ImpactsToIgnore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAttachmentPieceSettings                    AttachmentSettings                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               HasImpactBeenBlocked                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_AttachmentSettings_AI_C::ImpactsToIgnore(const struct FAttachmentPieceSettings& AttachmentSettings, bool* HasImpactBeenBlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ImpactsToIgnore");
		
		UBPC_AttachmentSettings_AI_C_ImpactsToIgnore_Params params {};
		params.AttachmentSettings = AttachmentSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasImpactBeenBlocked != nullptr)
			*HasImpactBeenBlocked = params.HasImpactBeenBlocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.IsDSLogInValidKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAttachmentPieceSettings                    AttachmentSettings                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPC_AttachmentSettings_AI_C::IsDSLogInValidKey(const struct FAttachmentPieceSettings& AttachmentSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.IsDSLogInValidKey");
		
		UBPC_AttachmentSettings_AI_C_IsDSLogInValidKey_Params params {};
		params.AttachmentSettings = AttachmentSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.SetUpAttachmentFact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAttachmentPieceSettings                    AttachmentSettings                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_AttachmentSettings_AI_C::SetUpAttachmentFact(const struct FKnowledgeBaseFactKey& FactKey, struct FAttachmentPieceSettings* AttachmentSettings, bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.SetUpAttachmentFact");
		
		UBPC_AttachmentSettings_AI_C_SetUpAttachmentFact_Params params {};
		params.FactKey = FactKey;
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttachmentSettings != nullptr)
			*AttachmentSettings = params.AttachmentSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ExternalFactAlteration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ImpactsRequired                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAttachmentPieceSettings                    AttachmentSettings                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPC_AttachmentSettings_AI_C::ExternalFactAlteration(float Health, int32_t ImpactsRequired, const struct FAttachmentPieceSettings& AttachmentSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ExternalFactAlteration");
		
		UBPC_AttachmentSettings_AI_C_ExternalFactAlteration_Params params {};
		params.Health = Health;
		params.ImpactsRequired = ImpactsRequired;
		params.AttachmentSettings = AttachmentSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.EnableFactReplication
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		EKnowledgeBaseFactType                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AttachmentSettings_AI_C::EnableFactReplication(const struct FKnowledgeBaseFactKey& InKey, EKnowledgeBaseFactType Type, struct FKnowledgeBaseFactKey* FactKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.EnableFactReplication");
		
		UBPC_AttachmentSettings_AI_C_EnableFactReplication_Params params {};
		params.InKey = InKey;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactKey != nullptr)
			*FactKey = params.FactKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.SetUpFactReplicationInitialisation
	 * 		Flags  -> ()
	 */
	void UBPC_AttachmentSettings_AI_C::SetUpFactReplicationInitialisation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.SetUpFactReplicationInitialisation");
		
		UBPC_AttachmentSettings_AI_C_SetUpFactReplicationInitialisation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.GetRequiredFuryForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       AttachedFact                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RequiredForceValue                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AttachmentSettings_AI_C::GetRequiredFuryForce(const struct FKnowledgeBaseFactKey& AttachedFact, float* RequiredForceValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.GetRequiredFuryForce");
		
		UBPC_AttachmentSettings_AI_C_GetRequiredFuryForce_Params params {};
		params.AttachedFact = AttachedFact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RequiredForceValue != nullptr)
			*RequiredForceValue = params.RequiredForceValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.GetRequiredFuryDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       AttachedFact                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RequiredDamageValue                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AttachmentSettings_AI_C::GetRequiredFuryDamage(const struct FKnowledgeBaseFactKey& AttachedFact, float* RequiredDamageValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.GetRequiredFuryDamage");
		
		UBPC_AttachmentSettings_AI_C_GetRequiredFuryDamage_Params params {};
		params.AttachedFact = AttachedFact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RequiredDamageValue != nullptr)
			*RequiredDamageValue = params.RequiredDamageValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.FuryDamageRequirement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAttachmentPieceSettings                    AttachmentSettings                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              OwnersMaxHealth                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UBPC_AttachmentSettings_AI_C::FuryDamageRequirement(const struct FAttachmentPieceSettings& AttachmentSettings, float OwnersMaxHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.FuryDamageRequirement");
		
		UBPC_AttachmentSettings_AI_C_FuryDamageRequirement_Params params {};
		params.AttachmentSettings = AttachmentSettings;
		params.OwnersMaxHealth = OwnersMaxHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ClampImpactsRequired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Min                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ValueClamped                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t UBPC_AttachmentSettings_AI_C::ClampImpactsRequired(int32_t Value, int32_t Min, int32_t Max, bool* ValueClamped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ClampImpactsRequired");
		
		UBPC_AttachmentSettings_AI_C_ClampImpactsRequired_Params params {};
		params.Value = Value;
		params.Min = Min;
		params.Max = Max;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValueClamped != nullptr)
			*ValueClamped = params.ValueClamped;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ClampDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Min                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ValueClamped                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UBPC_AttachmentSettings_AI_C::ClampDamage(float Value, float Min, float Max, bool* ValueClamped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ClampDamage");
		
		UBPC_AttachmentSettings_AI_C_ClampDamage_Params params {};
		params.Value = Value;
		params.Min = Min;
		params.Max = Max;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValueClamped != nullptr)
			*ValueClamped = params.ValueClamped;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.RemoveUniquePerks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       AttachedFact                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AttachmentSettings_AI_C::RemoveUniquePerks(const struct FKnowledgeBaseFactKey& AttachedFact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.RemoveUniquePerks");
		
		UBPC_AttachmentSettings_AI_C_RemoveUniquePerks_Params params {};
		params.AttachedFact = AttachedFact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.AddUniquePerks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAttachmentPieceSettings                    AttachmentSettings                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPC_AttachmentSettings_AI_C::AddUniquePerks(const struct FAttachmentPieceSettings& AttachmentSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.AddUniquePerks");
		
		UBPC_AttachmentSettings_AI_C_AddUniquePerks_Params params {};
		params.AttachmentSettings = AttachmentSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.RemoveFactOnBrokenAttachment
	 * 		Flags  -> ()
	 */
	void UBPC_AttachmentSettings_AI_C::RemoveFactOnBrokenAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.RemoveFactOnBrokenAttachment");
		
		UBPC_AttachmentSettings_AI_C_RemoveFactOnBrokenAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.AttachmentImpactResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAttachmentPieceSettings                    AttachmentSettings                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPC_AttachmentSettings_AI_C::AttachmentImpactResult(const struct FAttachmentPieceSettings& AttachmentSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.AttachmentImpactResult");
		
		UBPC_AttachmentSettings_AI_C_AttachmentImpactResult_Params params {};
		params.AttachmentSettings = AttachmentSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.InitialiseRequiredImpacts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAttachmentPieceSettings                    AttachmentSettings                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPC_AttachmentSettings_AI_C::InitialiseRequiredImpacts(const struct FAttachmentPieceSettings& AttachmentSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.InitialiseRequiredImpacts");
		
		UBPC_AttachmentSettings_AI_C_InitialiseRequiredImpacts_Params params {};
		params.AttachmentSettings = AttachmentSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.UpdateHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAttachmentPieceSettings                    AttachmentSettings                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              UpdatedMaxHealth                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AttachmentSettings_AI_C::UpdateHealth(const struct FAttachmentPieceSettings& AttachmentSettings, float UpdatedMaxHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.UpdateHealth");
		
		UBPC_AttachmentSettings_AI_C_UpdateHealth_Params params {};
		params.AttachmentSettings = AttachmentSettings;
		params.UpdatedMaxHealth = UpdatedMaxHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.AttachmentHealthAndImpactsRequiredLevelScaling
	 * 		Flags  -> ()
	 */
	void UBPC_AttachmentSettings_AI_C::AttachmentHealthAndImpactsRequiredLevelScaling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.AttachmentHealthAndImpactsRequiredLevelScaling");
		
		UBPC_AttachmentSettings_AI_C_AttachmentHealthAndImpactsRequiredLevelScaling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_AttachmentSettings_AI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ReceiveBeginPlay");
		
		UBPC_AttachmentSettings_AI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.AnyImpactRecieved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AttachmentSettings_AI_C::AnyImpactRecieved(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.AnyImpactRecieved");
		
		UBPC_AttachmentSettings_AI_C_AnyImpactRecieved_Params params {};
		params.Actor = Actor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.PostImpact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImpactEventComponent*                       ImpactEventComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AttachmentSettings_AI_C::PostImpact(class AActor* Actor, class UImpactEventComponent* ImpactEventComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.PostImpact");
		
		UBPC_AttachmentSettings_AI_C_PostImpact_Params params {};
		params.Actor = Actor;
		params.ImpactEventComponent = ImpactEventComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.MaxHealthChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EKnowledgeBaseFactChangeType                       FactChangeType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AttachmentSettings_AI_C::MaxHealthChanged(const struct FKnowledgeBaseFactKey& FactKey, class UKnowledgeBaseComponent* KnowledgeBaseComponent, EKnowledgeBaseFactChangeType FactChangeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.MaxHealthChanged");
		
		UBPC_AttachmentSettings_AI_C_MaxHealthChanged_Params params {};
		params.FactKey = FactKey;
		params.KnowledgeBaseComponent = KnowledgeBaseComponent;
		params.FactChangeType = FactChangeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.RequestChangeAttachmentVariables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ImpactsRequired                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AttachmentSettings_AI_C::RequestChangeAttachmentVariables(const struct FKnowledgeBaseFactKey& Key, float Health, int32_t ImpactsRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.RequestChangeAttachmentVariables");
		
		UBPC_AttachmentSettings_AI_C_RequestChangeAttachmentVariables_Params params {};
		params.Key = Key;
		params.Health = Health;
		params.ImpactsRequired = ImpactsRequired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AttachmentSettings_AI_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ReceiveEndPlay");
		
		UBPC_AttachmentSettings_AI_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ExecuteUbergraph_BPC_AttachmentSettings_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AttachmentSettings_AI_C::ExecuteUbergraph_BPC_AttachmentSettings_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C.ExecuteUbergraph_BPC_AttachmentSettings_AI");
		
		UBPC_AttachmentSettings_AI_C_ExecuteUbergraph_BPC_AttachmentSettings_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_AttachmentSettings_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_AttachmentSettings_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_AttachmentSettings_AI.BPC_AttachmentSettings_AI_C");
		return ptr;
	}

}


