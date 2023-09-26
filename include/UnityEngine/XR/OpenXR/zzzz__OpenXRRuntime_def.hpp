#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRRuntime;
}
// Type: UnityEngine.XR.OpenXR::OpenXRRuntime
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14194))
// CS Name: UnityEngine.XR.OpenXR.OpenXRRuntime
class CORDL_TYPE OpenXRRuntime : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OpenXRRuntime() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRRuntime", modifiers: " const&", def_value: None }]
constexpr OpenXRRuntime(OpenXRRuntime const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRRuntime", modifiers: "&&", def_value: None }]
constexpr OpenXRRuntime(OpenXRRuntime&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenXRRuntime(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OpenXRRuntime& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenXRRuntime& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenXRRuntime& operator=(OpenXRRuntime&& o) noexcept = default;
  constexpr OpenXRRuntime& operator=(OpenXRRuntime const& o) noexcept = default;
                


// Fields

static System::Func_1<bool> __declspec(property(get=__get_wantsToQuit, put=__set_wantsToQuit))  wantsToQuit;

static void __set_wantsToQuit(System::Func_1<bool> value) ;

static System::Func_1<bool> __get_wantsToQuit() ;

static System::Func_1<bool> __declspec(property(get=__get_wantsToRestart, put=__set_wantsToRestart))  wantsToRestart;

static void __set_wantsToRestart(System::Func_1<bool> value) ;

static System::Func_1<bool> __get_wantsToRestart() ;

/// @brief Field LibraryName offset 0
static constexpr ::ConstString  LibraryName{u"UnityOpenXR"};


// Properties

static ::StringW __declspec(property(get=get_name))  name;

static ::StringW __declspec(property(get=get_version))  version;

static ::StringW __declspec(property(get=get_apiVersion))  apiVersion;

static ::StringW __declspec(property(get=get_pluginVersion))  pluginVersion;

static bool __declspec(property(get=get_retryInitializationOnFormFactorErrors, put=set_retryInitializationOnFormFactorErrors))  retryInitializationOnFormFactorErrors;


// Methods

/// @brief Method get_name addr 0x2b1e564 size 0x88 virtual false final false
static ::StringW get_name() ;

/// @brief Method get_version addr 0x2b1e670 size 0x110 virtual false final false
static ::StringW get_version() ;

/// @brief Method get_apiVersion addr 0x2b1e81c size 0x110 virtual false final false
static ::StringW get_apiVersion() ;

/// @brief Method get_pluginVersion addr 0x2b1e9c8 size 0x88 virtual false final false
static ::StringW get_pluginVersion() ;

/// @brief Method IsExtensionEnabled addr 0x2b1ead4 size 0x4 virtual false final false
static bool IsExtensionEnabled(::StringW extensionName) ;

/// @brief Method GetExtensionVersion addr 0x2b1c6e8 size 0x4 virtual false final false
static uint32_t GetExtensionVersion(::StringW extensionName) ;

/// @brief Method GetEnabledExtensions addr 0x2b1c5ec size 0xfc virtual false final false
static ::ArrayW<::StringW> GetEnabledExtensions() ;

/// @brief Method GetAvailableExtensions addr 0x2b1ed18 size 0xfc virtual false final false
static ::ArrayW<::StringW> GetAvailableExtensions() ;

/// @brief Method add_wantsToQuit addr 0x2b1ef28 size 0xcc virtual false final false
static void add_wantsToQuit(System::Func_1<bool> value) ;

/// @brief Method remove_wantsToQuit addr 0x2b1eff4 size 0xcc virtual false final false
static void remove_wantsToQuit(System::Func_1<bool> value) ;

/// @brief Method add_wantsToRestart addr 0x2b1f0c0 size 0xd0 virtual false final false
static void add_wantsToRestart(System::Func_1<bool> value) ;

/// @brief Method remove_wantsToRestart addr 0x2b1f190 size 0xd0 virtual false final false
static void remove_wantsToRestart(System::Func_1<bool> value) ;

/// @brief Method get_retryInitializationOnFormFactorErrors addr 0x2b1f260 size 0x4 virtual false final false
static bool get_retryInitializationOnFormFactorErrors() ;

/// @brief Method set_retryInitializationOnFormFactorErrors addr 0x2b1f2d4 size 0x8 virtual false final false
static void set_retryInitializationOnFormFactorErrors(bool value) ;

/// @brief Method InvokeEvent addr 0x2b1f358 size 0x1ac virtual false final false
static bool InvokeEvent(System::Func_1<bool> func) ;

/// @brief Method ShouldQuit addr 0x2b1e48c size 0x48 virtual false final false
static bool ShouldQuit() ;

/// @brief Method ShouldRestart addr 0x2b1e444 size 0x48 virtual false final false
static bool ShouldRestart() ;

/// @brief Method Internal_GetRuntimeName addr 0x2b1e5ec size 0x84 virtual false final false
static bool Internal_GetRuntimeName(ByRef<::cordl_internals::intptr_t> runtimeNamePtr) ;

/// @brief Method Internal_GetRuntimeVersion addr 0x2b1e780 size 0x9c virtual false final false
static bool Internal_GetRuntimeVersion(ByRef<uint16_t> major, ByRef<uint16_t> minor, ByRef<uint32_t> patch) ;

/// @brief Method Internal_GetAPIVersion addr 0x2b1e92c size 0x9c virtual false final false
static bool Internal_GetAPIVersion(ByRef<uint16_t> major, ByRef<uint16_t> minor, ByRef<uint32_t> patch) ;

/// @brief Method Internal_GetPluginVersion addr 0x2b1ea50 size 0x84 virtual false final false
static bool Internal_GetPluginVersion(ByRef<::cordl_internals::intptr_t> pluginVersionPtr) ;

/// @brief Method Internal_IsExtensionEnabled addr 0x2b1ead8 size 0x98 virtual false final false
static bool Internal_IsExtensionEnabled(::StringW extensionName) ;

/// @brief Method Internal_GetExtensionVersion addr 0x2b1eb70 size 0x94 virtual false final false
static uint32_t Internal_GetExtensionVersion(::StringW extensionName) ;

/// @brief Method Internal_GetEnabledExtensionCount addr 0x2b1ec04 size 0x68 virtual false final false
static uint32_t Internal_GetEnabledExtensionCount() ;

/// @brief Method Internal_GetEnabledExtensionNamePtr addr 0x2b1f504 size 0x84 virtual false final false
static bool Internal_GetEnabledExtensionNamePtr(uint32_t index, ByRef<::cordl_internals::intptr_t> outName) ;

/// @brief Method Internal_SetSoftRestartLoopAtInitialization addr 0x2b1f2dc size 0x7c virtual false final false
static void Internal_SetSoftRestartLoopAtInitialization(bool value) ;

/// @brief Method Internal_GetSoftRestartLoopAtInitialization addr 0x2b1f264 size 0x70 virtual false final false
static bool Internal_GetSoftRestartLoopAtInitialization() ;

/// @brief Method Internal_GetEnabledExtensionName addr 0x2b1ec6c size 0xac virtual false final false
static bool Internal_GetEnabledExtensionName(uint32_t index, ByRef<::StringW> extensionName) ;

/// @brief Method Internal_GetAvailableExtensionCount addr 0x2b1ee14 size 0x68 virtual false final false
static uint32_t Internal_GetAvailableExtensionCount() ;

/// @brief Method Internal_GetAvailableExtensionNamePtr addr 0x2b1f588 size 0x84 virtual false final false
static bool Internal_GetAvailableExtensionNamePtr(uint32_t index, ByRef<::cordl_internals::intptr_t> extensionName) ;

/// @brief Method Internal_GetAvailableExtensionName addr 0x2b1ee7c size 0xac virtual false final false
static bool Internal_GetAvailableExtensionName(uint32_t index, ByRef<::StringW> extensionName) ;

/// @brief Method Internal_GetLastError addr 0x2b1f60c size 0x7c virtual false final false
static bool Internal_GetLastError(ByRef<::cordl_internals::intptr_t> error) ;

/// @brief Method GetLastError addr 0x2b1f688 size 0x9c virtual false final false
static bool GetLastError(ByRef<::StringW> error) ;

/// @brief Method LogLastError addr 0x2b1f724 size 0x6c virtual false final false
static void LogLastError() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
NEED_NO_BOX(UnityEngine::XR::OpenXR::OpenXRRuntime);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::OpenXRRuntime, "UnityEngine.XR.OpenXR", "OpenXRRuntime");
