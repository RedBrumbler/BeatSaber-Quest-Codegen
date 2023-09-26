#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine {
class AndroidJavaException;
}
// Type: UnityEngine::AndroidJavaException
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14897))
// CS Name: UnityEngine.AndroidJavaException
class CORDL_TYPE AndroidJavaException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~AndroidJavaException() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaException", modifiers: " const&", def_value: None }]
constexpr AndroidJavaException(AndroidJavaException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaException", modifiers: "&&", def_value: None }]
constexpr AndroidJavaException(AndroidJavaException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidJavaException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr AndroidJavaException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidJavaException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidJavaException& operator=(AndroidJavaException&& o) noexcept = default;
  constexpr AndroidJavaException& operator=(AndroidJavaException const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_mJavaStackTrace, put=__set_mJavaStackTrace))  mJavaStackTrace;

constexpr void __set_mJavaStackTrace(::StringW value) ;

constexpr ::StringW __get_mJavaStackTrace() const;


// Properties

 ::StringW __declspec(property(get=get_StackTrace))  StackTrace;


// Methods

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "javaStackTrace", ty: "::StringW", modifiers: "", def_value: None }]
explicit AndroidJavaException(::StringW message, ::StringW javaStackTrace) ;

/// @brief Method .ctor addr 0x2b3a56c size 0x74 virtual false final false
 void _ctor(::StringW message, ::StringW javaStackTrace) ;

/// @brief Method get_StackTrace addr 0x2b40250 size 0x24 virtual true final false
 ::StringW get_StackTrace() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AndroidJavaException);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJavaException, "UnityEngine", "AndroidJavaException");
