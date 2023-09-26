#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color;
}
namespace System {
class Exception;
}
namespace UnityEngine {
class ILogger;
}
// Forward declare root types
namespace UnityEngine {
class Debug;
}
// Type: UnityEngine::Debug
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10006))
// CS Name: UnityEngine.Debug
class CORDL_TYPE Debug : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Debug() = default;

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: " const&", def_value: None }]
constexpr Debug(Debug const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "&&", def_value: None }]
constexpr Debug(Debug&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Debug(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Debug& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Debug& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Debug& operator=(Debug&& o) noexcept = default;
  constexpr Debug& operator=(Debug const& o) noexcept = default;
                


// Fields

static UnityEngine::ILogger __declspec(property(get=__get_s_DefaultLogger, put=__set_s_DefaultLogger))  s_DefaultLogger;

static void __set_s_DefaultLogger(UnityEngine::ILogger value) ;

static UnityEngine::ILogger __get_s_DefaultLogger() ;

static UnityEngine::ILogger __declspec(property(get=__get_s_Logger, put=__set_s_Logger))  s_Logger;

static void __set_s_Logger(UnityEngine::ILogger value) ;

static UnityEngine::ILogger __get_s_Logger() ;


// Properties

static UnityEngine::ILogger __declspec(property(get=get_unityLogger))  unityLogger;

static bool __declspec(property(get=get_isDebugBuild))  isDebugBuild;


// Methods

/// @brief Method get_unityLogger addr 0x2b5bb08 size 0x58 virtual false final false
static UnityEngine::ILogger get_unityLogger() ;

/// @brief Method DrawLine addr 0x2b5bb60 size 0xe8 virtual false final false
static void DrawLine(UnityEngine::Vector3 start, UnityEngine::Vector3 end, UnityEngine::Color color) ;

/// @brief Method DrawLine addr 0x2b5bc48 size 0xb4 virtual false final false
static void DrawLine(UnityEngine::Vector3 start, UnityEngine::Vector3 end, UnityEngine::Color color, float_t duration, bool depthTest) ;

/// @brief Method Break addr 0x2b5bd68 size 0x28 virtual false final false
static void Break() ;

/// @brief Method ExtractStackTraceNoAlloc addr 0x2b5bd90 size 0x54 virtual false final false
static int32_t ExtractStackTraceNoAlloc(void* buffer, int32_t bufferMax, ::StringW projectFolder) ;

/// @brief Method Log addr 0x2b5bde4 size 0x108 virtual false final false
static void Log(::bs_hook::Il2CppWrapperType message) ;

/// @brief Method Log addr 0x2b5beec size 0x118 virtual false final false
static void Log(::bs_hook::Il2CppWrapperType message, UnityEngine::Object context) ;

/// @brief Method LogFormat addr 0x2b5c004 size 0x118 virtual false final false
static void LogFormat(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method LogError addr 0x2b5c11c size 0x108 virtual false final false
static void LogError(::bs_hook::Il2CppWrapperType message) ;

/// @brief Method LogError addr 0x2b5c224 size 0x118 virtual false final false
static void LogError(::bs_hook::Il2CppWrapperType message, UnityEngine::Object context) ;

/// @brief Method LogErrorFormat addr 0x2b5c33c size 0x118 virtual false final false
static void LogErrorFormat(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method LogErrorFormat addr 0x2b5c454 size 0x11c virtual false final false
static void LogErrorFormat(UnityEngine::Object context, ::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method LogException addr 0x2b5c570 size 0x108 virtual false final false
static void LogException(System::Exception exception) ;

/// @brief Method LogException addr 0x2b5c678 size 0x114 virtual false final false
static void LogException(System::Exception exception, UnityEngine::Object context) ;

/// @brief Method LogWarning addr 0x2b5c78c size 0x108 virtual false final false
static void LogWarning(::bs_hook::Il2CppWrapperType message) ;

/// @brief Method LogWarning addr 0x2b5c894 size 0x118 virtual false final false
static void LogWarning(::bs_hook::Il2CppWrapperType message, UnityEngine::Object context) ;

/// @brief Method LogWarningFormat addr 0x2b5c9ac size 0x118 virtual false final false
static void LogWarningFormat(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method LogWarningFormat addr 0x2b5cac4 size 0x11c virtual false final false
static void LogWarningFormat(UnityEngine::Object context, ::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Assert addr 0x2b5cbe0 size 0x130 virtual false final false
static void Assert(bool condition) ;

/// @brief Method Assert addr 0x2b5cd10 size 0x11c virtual false final false
static void Assert(bool condition, ::StringW message) ;

/// @brief Method LogAssertion addr 0x2b5ce2c size 0x108 virtual false final false
static void LogAssertion(::bs_hook::Il2CppWrapperType message) ;

/// @brief Method LogAssertionFormat addr 0x2b5cf34 size 0x118 virtual false final false
static void LogAssertionFormat(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method get_isDebugBuild addr 0x2b5d04c size 0x28 virtual false final false
static bool get_isDebugBuild() ;

/// @brief Method CallOverridenDebugHandler addr 0x2b5d074 size 0x3f8 virtual false final false
static bool CallOverridenDebugHandler(System::Exception exception, UnityEngine::Object obj) ;

/// @brief Method IsLoggingEnabled addr 0x2b5d46c size 0x224 virtual false final false
static bool IsLoggingEnabled() ;

/// @brief Method DrawLine_Injected addr 0x2b5bcfc size 0x6c virtual false final false
static void DrawLine_Injected(ByRef<UnityEngine::Vector3> start, ByRef<UnityEngine::Vector3> end, ByRef<UnityEngine::Color> color, float_t duration, bool depthTest) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Debug);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Debug, "UnityEngine", "Debug");
