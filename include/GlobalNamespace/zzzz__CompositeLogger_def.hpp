#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace GlobalNamespace {
class CompositeLogger;
}
// Type: ::CompositeLogger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5983))
// CS Name: CompositeLogger
class CORDL_TYPE CompositeLogger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBeatSaberLogger
constexpr operator  GlobalNamespace::IBeatSaberLogger() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CompositeLogger() = default;

// Ctor Parameters [CppParam { name: "", ty: "CompositeLogger", modifiers: " const&", def_value: None }]
constexpr CompositeLogger(CompositeLogger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CompositeLogger", modifiers: "&&", def_value: None }]
constexpr CompositeLogger(CompositeLogger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CompositeLogger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CompositeLogger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CompositeLogger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CompositeLogger& operator=(CompositeLogger&& o) noexcept = default;
  constexpr CompositeLogger& operator=(CompositeLogger const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::IBeatSaberLogger> __declspec(property(get=__get__loggers, put=__set__loggers))  _loggers;

constexpr void __set__loggers(System::Collections::Generic::List_1<GlobalNamespace::IBeatSaberLogger> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::IBeatSaberLogger> __get__loggers() const;


// Methods

// Ctor Parameters []
explicit CompositeLogger() ;

/// @brief Method .ctor addr 0x21d7170 size 0x80 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "loggers", ty: "System::Collections::Generic::List_1<GlobalNamespace::IBeatSaberLogger>", modifiers: "", def_value: None }]
explicit CompositeLogger(System::Collections::Generic::List_1<GlobalNamespace::IBeatSaberLogger> loggers) ;

/// @brief Method .ctor addr 0x21d71f0 size 0x28 virtual false final false
 void _ctor(System::Collections::Generic::List_1<GlobalNamespace::IBeatSaberLogger> loggers) ;

/// @brief Method AddLogger addr 0x21d7218 size 0xa8 virtual false final false
 void AddLogger(GlobalNamespace::IBeatSaberLogger logger) ;

/// @brief Method Log addr 0x21d72c0 size 0x1b0 virtual true final true
 void Log(::StringW message) ;

/// @brief Method Log addr 0x21d7470 size 0x1c4 virtual true final true
 void Log(::StringW message, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method LogWarning addr 0x21d7634 size 0x1b4 virtual true final true
 void LogWarning(::StringW message) ;

/// @brief Method LogWarning addr 0x21d77e8 size 0x1c4 virtual true final true
 void LogWarning(::StringW message, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method LogError addr 0x21d79ac size 0x1b4 virtual true final true
 void LogError(::StringW message) ;

/// @brief Method LogError addr 0x21d7b60 size 0x1c4 virtual true final true
 void LogError(::StringW message, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method LogException addr 0x21d7d24 size 0x1b4 virtual true final true
 void LogException(System::Exception exception) ;

/// @brief Method LogException addr 0x21d7ed8 size 0x1c4 virtual true final true
 void LogException(System::Exception exception, ::bs_hook::Il2CppWrapperType context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CompositeLogger);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CompositeLogger, "", "CompositeLogger");
