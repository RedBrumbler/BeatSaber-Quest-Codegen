#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
namespace BGNet::Logging {
class BGNet__Logging__Debug__ILogger;
}
// Forward declare root types
namespace BGNet::Logging {
class UnityLogger;
}
// Type: BGNet.Logging::UnityLogger
namespace BGNet::Logging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16076))
// CS Name: BGNet.Logging.UnityLogger
class CORDL_TYPE UnityLogger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to BGNet::Logging::BGNet__Logging__Debug__ILogger
constexpr operator  BGNet::Logging::BGNet__Logging__Debug__ILogger() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityLogger() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityLogger", modifiers: " const&", def_value: None }]
constexpr UnityLogger(UnityLogger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityLogger", modifiers: "&&", def_value: None }]
constexpr UnityLogger(UnityLogger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityLogger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityLogger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityLogger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityLogger& operator=(UnityLogger&& o) noexcept = default;
  constexpr UnityLogger& operator=(UnityLogger const& o) noexcept = default;
                


// Methods

/// @brief Method LogInfo addr 0xde5900 size 0x4 virtual true final true
 void LogInfo(::StringW message) ;

/// @brief Method LogError addr 0xde5904 size 0x58 virtual true final true
 void LogError(::StringW message) ;

/// @brief Method LogException addr 0xde595c size 0x88 virtual true final true
 void LogException(System::Exception exception, ::StringW message) ;

/// @brief Method LogWarning addr 0xde59e4 size 0x58 virtual true final true
 void LogWarning(::StringW message) ;

// Ctor Parameters []
explicit UnityLogger() ;

/// @brief Method .ctor addr 0xde50b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Logging
NEED_NO_BOX(BGNet::Logging::UnityLogger);
DEFINE_IL2CPP_ARG_TYPE(BGNet::Logging::UnityLogger, "BGNet.Logging", "UnityLogger");
