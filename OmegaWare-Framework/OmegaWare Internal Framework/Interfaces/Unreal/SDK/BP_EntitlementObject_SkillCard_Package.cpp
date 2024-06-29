/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_EntitlementObject_SkillCard.BP_EntitlementObject_SkillCard_C.GetEntitlementDisplayName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Entitlement                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               EntitlementFoundInRegistry                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        DisplayName                                                (Parm, OutParm)
	 */
	void ABP_EntitlementObject_SkillCard_C::GetEntitlementDisplayName(const struct FDataTableRowHandle& Entitlement, bool* EntitlementFoundInRegistry, class FText* DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EntitlementObject_SkillCard.BP_EntitlementObject_SkillCard_C.GetEntitlementDisplayName");
		
		ABP_EntitlementObject_SkillCard_C_GetEntitlementDisplayName_Params params {};
		params.Entitlement = Entitlement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntitlementFoundInRegistry != nullptr)
			*EntitlementFoundInRegistry = params.EntitlementFoundInRegistry;
		if (DisplayName != nullptr)
			*DisplayName = params.DisplayName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_EntitlementObject_SkillCard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EntitlementObject_SkillCard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EntitlementObject_SkillCard.BP_EntitlementObject_SkillCard_C");
		return ptr;
	}

}


