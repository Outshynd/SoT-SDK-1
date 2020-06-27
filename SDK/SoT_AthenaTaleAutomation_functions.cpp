// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaTaleAutomation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaTaleAutomation.TaleQuestAutomationService.GetPuppet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AAthenaPlayerCharacter*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AAthenaPlayerCharacter* UTaleQuestAutomationService::GetPuppet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTaleAutomation.TaleQuestAutomationService.GetPuppet");

	UTaleQuestAutomationService_GetPuppet_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif