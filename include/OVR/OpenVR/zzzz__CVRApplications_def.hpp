#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace OVR::OpenVR {
struct IVRApplications;
}
namespace OVR::OpenVR {
struct AppOverrideKeys_t;
}
namespace OVR::OpenVR {
struct EVRApplicationTransitionState;
}
namespace OVR::OpenVR {
struct EVRApplicationProperty;
}
namespace OVR::OpenVR {
struct EVRApplicationError;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRApplications;
}
// Type: OVR.OpenVR::CVRApplications
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9363))
// CS Name: OVR.OpenVR.CVRApplications
class CORDL_TYPE CVRApplications : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x108};

virtual ~CVRApplications() = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRApplications", modifiers: " const&", def_value: None }]
constexpr CVRApplications(CVRApplications const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRApplications", modifiers: "&&", def_value: None }]
constexpr CVRApplications(CVRApplications&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CVRApplications(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CVRApplications& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CVRApplications& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CVRApplications& operator=(CVRApplications&& o) noexcept = default;
  constexpr CVRApplications& operator=(CVRApplications const& o) noexcept = default;
                


// Fields

 OVR::OpenVR::IVRApplications __declspec(property(get=__get_FnTable, put=__set_FnTable))  FnTable;

constexpr void __set_FnTable(OVR::OpenVR::IVRApplications value) ;

constexpr OVR::OpenVR::IVRApplications __get_FnTable() const;


// Methods

// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CVRApplications(::cordl_internals::intptr_t pInterface) ;

/// @brief Method .ctor addr 0x2694840 size 0x114 virtual false final false
 void _ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method AddApplicationManifest addr 0x2694954 size 0x28 virtual false final false
 OVR::OpenVR::EVRApplicationError AddApplicationManifest(::StringW pchApplicationManifestFullPath, bool bTemporary) ;

/// @brief Method RemoveApplicationManifest addr 0x269497c size 0x24 virtual false final false
 OVR::OpenVR::EVRApplicationError RemoveApplicationManifest(::StringW pchApplicationManifestFullPath) ;

/// @brief Method IsApplicationInstalled addr 0x26949a0 size 0x24 virtual false final false
 bool IsApplicationInstalled(::StringW pchAppKey) ;

/// @brief Method GetApplicationCount addr 0x26949c4 size 0x24 virtual false final false
 uint32_t GetApplicationCount() ;

/// @brief Method GetApplicationKeyByIndex addr 0x26949e8 size 0x24 virtual false final false
 OVR::OpenVR::EVRApplicationError GetApplicationKeyByIndex(uint32_t unApplicationIndex, System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen) ;

/// @brief Method GetApplicationKeyByProcessId addr 0x2694a0c size 0x24 virtual false final false
 OVR::OpenVR::EVRApplicationError GetApplicationKeyByProcessId(uint32_t unProcessId, System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen) ;

/// @brief Method LaunchApplication addr 0x2694a30 size 0x24 virtual false final false
 OVR::OpenVR::EVRApplicationError LaunchApplication(::StringW pchAppKey) ;

/// @brief Method LaunchTemplateApplication addr 0x2694a54 size 0x2c virtual false final false
 OVR::OpenVR::EVRApplicationError LaunchTemplateApplication(::StringW pchTemplateAppKey, ::StringW pchNewAppKey, ::ArrayW<OVR::OpenVR::AppOverrideKeys_t> pKeys) ;

/// @brief Method LaunchApplicationFromMimeType addr 0x2694a80 size 0x24 virtual false final false
 OVR::OpenVR::EVRApplicationError LaunchApplicationFromMimeType(::StringW pchMimeType, ::StringW pchArgs) ;

/// @brief Method LaunchDashboardOverlay addr 0x2694aa4 size 0x24 virtual false final false
 OVR::OpenVR::EVRApplicationError LaunchDashboardOverlay(::StringW pchAppKey) ;

/// @brief Method CancelApplicationLaunch addr 0x2694ac8 size 0x24 virtual false final false
 bool CancelApplicationLaunch(::StringW pchAppKey) ;

/// @brief Method IdentifyApplication addr 0x2694aec size 0x24 virtual false final false
 OVR::OpenVR::EVRApplicationError IdentifyApplication(uint32_t unProcessId, ::StringW pchAppKey) ;

/// @brief Method GetApplicationProcessId addr 0x2694b10 size 0x24 virtual false final false
 uint32_t GetApplicationProcessId(::StringW pchAppKey) ;

/// @brief Method GetApplicationsErrorNameFromEnum addr 0x2694b34 size 0x84 virtual false final false
 ::StringW GetApplicationsErrorNameFromEnum(OVR::OpenVR::EVRApplicationError error) ;

/// @brief Method GetApplicationPropertyString addr 0x2694bb8 size 0x24 virtual false final false
 uint32_t GetApplicationPropertyString(::StringW pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, System::Text::StringBuilder pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, ByRef<OVR::OpenVR::EVRApplicationError> peError) ;

/// @brief Method GetApplicationPropertyBool addr 0x2694bdc size 0x24 virtual false final false
 bool GetApplicationPropertyBool(::StringW pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<OVR::OpenVR::EVRApplicationError> peError) ;

/// @brief Method GetApplicationPropertyUint64 addr 0x2694c00 size 0x24 virtual false final false
 uint64_t GetApplicationPropertyUint64(::StringW pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<OVR::OpenVR::EVRApplicationError> peError) ;

/// @brief Method SetApplicationAutoLaunch addr 0x2694c24 size 0x28 virtual false final false
 OVR::OpenVR::EVRApplicationError SetApplicationAutoLaunch(::StringW pchAppKey, bool bAutoLaunch) ;

/// @brief Method GetApplicationAutoLaunch addr 0x2694c4c size 0x24 virtual false final false
 bool GetApplicationAutoLaunch(::StringW pchAppKey) ;

/// @brief Method SetDefaultApplicationForMimeType addr 0x2694c70 size 0x24 virtual false final false
 OVR::OpenVR::EVRApplicationError SetDefaultApplicationForMimeType(::StringW pchAppKey, ::StringW pchMimeType) ;

/// @brief Method GetDefaultApplicationForMimeType addr 0x2694c94 size 0x24 virtual false final false
 bool GetDefaultApplicationForMimeType(::StringW pchMimeType, System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen) ;

/// @brief Method GetApplicationSupportedMimeTypes addr 0x2694cb8 size 0x24 virtual false final false
 bool GetApplicationSupportedMimeTypes(::StringW pchAppKey, System::Text::StringBuilder pchMimeTypesBuffer, uint32_t unMimeTypesBuffer) ;

/// @brief Method GetApplicationsThatSupportMimeType addr 0x2694cdc size 0x24 virtual false final false
 uint32_t GetApplicationsThatSupportMimeType(::StringW pchMimeType, System::Text::StringBuilder pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer) ;

/// @brief Method GetApplicationLaunchArguments addr 0x2694d00 size 0x24 virtual false final false
 uint32_t GetApplicationLaunchArguments(uint32_t unHandle, System::Text::StringBuilder pchArgs, uint32_t unArgs) ;

/// @brief Method GetStartingApplication addr 0x2694d24 size 0x24 virtual false final false
 OVR::OpenVR::EVRApplicationError GetStartingApplication(System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen) ;

/// @brief Method GetTransitionState addr 0x2694d48 size 0x24 virtual false final false
 OVR::OpenVR::EVRApplicationTransitionState GetTransitionState() ;

/// @brief Method PerformApplicationPrelaunchCheck addr 0x2694d6c size 0x24 virtual false final false
 OVR::OpenVR::EVRApplicationError PerformApplicationPrelaunchCheck(::StringW pchAppKey) ;

/// @brief Method GetApplicationsTransitionStateNameFromEnum addr 0x2694d90 size 0x84 virtual false final false
 ::StringW GetApplicationsTransitionStateNameFromEnum(OVR::OpenVR::EVRApplicationTransitionState state) ;

/// @brief Method IsQuitUserPromptRequested addr 0x2694e14 size 0x24 virtual false final false
 bool IsQuitUserPromptRequested() ;

/// @brief Method LaunchInternalProcess addr 0x2694e38 size 0x24 virtual false final false
 OVR::OpenVR::EVRApplicationError LaunchInternalProcess(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory) ;

/// @brief Method GetCurrentSceneProcessId addr 0x2694e5c size 0x24 virtual false final false
 uint32_t GetCurrentSceneProcessId() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::CVRApplications);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRApplications, "OVR.OpenVR", "CVRApplications");
