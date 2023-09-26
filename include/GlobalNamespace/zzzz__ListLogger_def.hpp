#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class Exception;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__ListLogger__LogType;
}
namespace GlobalNamespace {
class GlobalNamespace__ListLogger__LogMessage;
}
namespace GlobalNamespace {
class ListLogger;
}
// Type: ::LogType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5985))
// CS Name: ListLogger::LogType
struct CORDL_TYPE GlobalNamespace__ListLogger__LogType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__ListLogger__LogType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__ListLogger__LogType(GlobalNamespace__ListLogger__LogType const&) = default;
                    constexpr GlobalNamespace__ListLogger__LogType(GlobalNamespace__ListLogger__LogType&&) = default;
                    constexpr GlobalNamespace__ListLogger__LogType& operator=(GlobalNamespace__ListLogger__LogType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__ListLogger__LogType& operator=(GlobalNamespace__ListLogger__LogType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ListLogger__LogType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__ListLogger__LogType_Unwrapped : int32_t {
__Info = 0,
__Warning = 1,
__Error = 2,
__Exception = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__ListLogger__LogType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__ListLogger__LogType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Info offset 0
static GlobalNamespace::GlobalNamespace__ListLogger__LogType const Info;

/// @brief Field Warning offset 0
static GlobalNamespace::GlobalNamespace__ListLogger__LogType const Warning;

/// @brief Field Error offset 0
static GlobalNamespace::GlobalNamespace__ListLogger__LogType const Error;

/// @brief Field Exception offset 0
static GlobalNamespace::GlobalNamespace__ListLogger__LogType const Exception;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LogMessage
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5986))
// CS Name: ListLogger::LogMessage
class CORDL_TYPE GlobalNamespace__ListLogger__LogMessage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__ListLogger__LogMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ListLogger__LogMessage", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ListLogger__LogMessage(GlobalNamespace__ListLogger__LogMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ListLogger__LogMessage", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ListLogger__LogMessage(GlobalNamespace__ListLogger__LogMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ListLogger__LogMessage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ListLogger__LogMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ListLogger__LogMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ListLogger__LogMessage& operator=(GlobalNamespace__ListLogger__LogMessage&& o) noexcept = default;
  constexpr GlobalNamespace__ListLogger__LogMessage& operator=(GlobalNamespace__ListLogger__LogMessage const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__ListLogger__LogType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(GlobalNamespace::GlobalNamespace__ListLogger__LogType value) ;

constexpr GlobalNamespace::GlobalNamespace__ListLogger__LogType __get_type() const;

 ::StringW __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(::StringW value) ;

constexpr ::StringW __get_message() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_context() const;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "GlobalNamespace::GlobalNamespace__ListLogger__LogType", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit GlobalNamespace__ListLogger__LogMessage(GlobalNamespace::GlobalNamespace__ListLogger__LogType type, ::StringW message, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method .ctor addr 0x21d821c size 0x3c virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__ListLogger__LogType type, ::StringW message, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method ToString addr 0x21d8568 size 0x88 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ListLogger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5987))
// CS Name: ListLogger
class CORDL_TYPE ListLogger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LogMessage = GlobalNamespace::GlobalNamespace__ListLogger__LogMessage;

using LogType = GlobalNamespace::GlobalNamespace__ListLogger__LogType;

/// @brief Convert operator to GlobalNamespace::IBeatSaberLogger
constexpr operator  GlobalNamespace::IBeatSaberLogger() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ListLogger() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListLogger", modifiers: " const&", def_value: None }]
constexpr ListLogger(ListLogger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListLogger", modifiers: "&&", def_value: None }]
constexpr ListLogger(ListLogger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListLogger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ListLogger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListLogger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListLogger& operator=(ListLogger&& o) noexcept = default;
  constexpr ListLogger& operator=(ListLogger const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ListLogger__LogMessage> __declspec(property(get=__get__messages, put=__set__messages))  _messages;

constexpr void __set__messages(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ListLogger__LogMessage> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ListLogger__LogMessage> __get__messages() const;


// Properties

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ListLogger__LogMessage> __declspec(property(get=get_messages))  messages;


// Methods

/// @brief Method get_messages addr 0x21d809c size 0x8 virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ListLogger__LogMessage> get_messages() ;

// Ctor Parameters []
explicit ListLogger() ;

/// @brief Method .ctor addr 0x21d80a4 size 0x80 virtual false final false
 void _ctor() ;

/// @brief Method Log addr 0x21d8124 size 0x8 virtual true final true
 void Log(::StringW message) ;

/// @brief Method Log addr 0x21d812c size 0xf0 virtual true final true
 void Log(::StringW message, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method LogWarning addr 0x21d8258 size 0x8 virtual true final true
 void LogWarning(::StringW message) ;

/// @brief Method LogWarning addr 0x21d8260 size 0xf4 virtual true final true
 void LogWarning(::StringW message, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method LogError addr 0x21d8354 size 0x8 virtual true final true
 void LogError(::StringW message) ;

/// @brief Method LogError addr 0x21d835c size 0xf4 virtual true final true
 void LogError(::StringW message, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method LogException addr 0x21d8450 size 0x8 virtual true final true
 void LogException(System::Exception exception) ;

/// @brief Method LogException addr 0x21d8458 size 0x110 virtual true final true
 void LogException(System::Exception exception, ::bs_hook::Il2CppWrapperType context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ListLogger__LogType, "", "ListLogger/LogType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ListLogger__LogMessage);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ListLogger__LogMessage, "", "ListLogger/LogMessage");
NEED_NO_BOX(GlobalNamespace::ListLogger);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ListLogger, "", "ListLogger");
