#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AD_FirstPerson_PlayerPirate_Male_Athletic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AD_FirstPerson_PlayerPirate_Male_Athletic.AD_FirstPerson_PlayerPirate_Male_Athletic_C
// 0x0000 (0x0448 - 0x0448)
class UAD_FirstPerson_PlayerPirate_Male_Athletic_C : public UAD_FirstPerson_PlayerPirate_Male_Default_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AD_FirstPerson_PlayerPirate_Male_Athletic.AD_FirstPerson_PlayerPirate_Male_Athletic_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif