// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Cleanliness_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cleanliness.CleanlinessComponent.OnRep_CleanlinessInfo
// (Final, Native, Private)

void UCleanlinessComponent::OnRep_CleanlinessInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Cleanliness.CleanlinessComponent.OnRep_CleanlinessInfo"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
