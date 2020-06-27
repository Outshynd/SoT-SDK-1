// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ItemPreview_Lighting_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemPreview_Lighting_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.UserConstructionScript");

	ABP_ItemPreview_Lighting_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.PreviewReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewReadyEvent Data                           (Parm)

void ABP_ItemPreview_Lighting_C::PreviewReady__DelegateSignature(const struct FPiratePreviewReadyEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.PreviewReady__DelegateSignature");

	ABP_ItemPreview_Lighting_C_PreviewReady__DelegateSignature_Params params;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.PreviewBusy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPiratePreviewBusyEvent Data                           (Parm)

void ABP_ItemPreview_Lighting_C::PreviewBusy__DelegateSignature(const struct FPiratePreviewBusyEvent& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.PreviewBusy__DelegateSignature");

	ABP_ItemPreview_Lighting_C_PreviewBusy__DelegateSignature_Params params;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif