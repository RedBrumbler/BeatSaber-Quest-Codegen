#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Array;
}
namespace UnityEngine {
class AndroidJavaProxy;
}
namespace UnityEngine {
struct jvalue;
}
namespace UnityEngine {
class AndroidJavaObject;
}
namespace UnityEngine {
class AndroidJavaRunnable;
}
// Forward declare root types
namespace UnityEngine {
class _AndroidJNIHelper;
}
// Type: UnityEngine::_AndroidJNIHelper
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14904))
// CS Name: UnityEngine._AndroidJNIHelper
class CORDL_TYPE _AndroidJNIHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~_AndroidJNIHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "_AndroidJNIHelper", modifiers: " const&", def_value: None }]
constexpr _AndroidJNIHelper(_AndroidJNIHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "_AndroidJNIHelper", modifiers: "&&", def_value: None }]
constexpr _AndroidJNIHelper(_AndroidJNIHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit _AndroidJNIHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr _AndroidJNIHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr _AndroidJNIHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr _AndroidJNIHelper& operator=(_AndroidJNIHelper&& o) noexcept = default;
  constexpr _AndroidJNIHelper& operator=(_AndroidJNIHelper const& o) noexcept = default;
                


// Methods

/// @brief Method CreateJavaProxy addr 0x2b44840 size 0x78 virtual false final false
static ::cordl_internals::intptr_t CreateJavaProxy(::cordl_internals::intptr_t delegateHandle, UnityEngine::AndroidJavaProxy proxy) ;

/// @brief Method CreateJavaRunnable addr 0x2b448b8 size 0x60 virtual false final false
static ::cordl_internals::intptr_t CreateJavaRunnable(UnityEngine::AndroidJavaRunnable jrunnable) ;

/// @brief Method InvokeJavaProxyMethod addr 0x2b44918 size 0x498 virtual false final false
static ::cordl_internals::intptr_t InvokeJavaProxyMethod(UnityEngine::AndroidJavaProxy proxy, ::cordl_internals::intptr_t jmethodName, ::cordl_internals::intptr_t jargs) ;

/// @brief Method CreateJNIArgArray addr 0x2b44db0 size 0x60c virtual false final false
static ::ArrayW<UnityEngine::jvalue> CreateJNIArgArray(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method UnboxArray addr 0x2b45d74 size 0x698 virtual false final false
static ::bs_hook::Il2CppWrapperType UnboxArray(UnityEngine::AndroidJavaObject obj) ;

/// @brief Method Unbox addr 0x2b41b10 size 0x8f8 virtual false final false
static ::bs_hook::Il2CppWrapperType Unbox(UnityEngine::AndroidJavaObject obj) ;

/// @brief Method Box addr 0x2b40e04 size 0x958 virtual false final false
static UnityEngine::AndroidJavaObject Box(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method DeleteJNIArgArray addr 0x2b4640c size 0x160 virtual false final false
static void DeleteJNIArgArray(::ArrayW<::bs_hook::Il2CppWrapperType> args, ::ArrayW<UnityEngine::jvalue> jniArgs) ;

/// @brief Method ConvertToJNIArray addr 0x2b453bc size 0x9b4 virtual false final false
static ::cordl_internals::intptr_t ConvertToJNIArray(System::Array array) ;

/// @brief Method ConvertFromJNIArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ArrayType>
static ArrayType ConvertFromJNIArray(::cordl_internals::intptr_t array) ;

/// @brief Method GetConstructorID addr 0x2b46614 size 0x20 virtual false final false
static ::cordl_internals::intptr_t GetConstructorID(::cordl_internals::intptr_t jclass, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method GetMethodID addr 0x2b4672c size 0x38 virtual false final false
static ::cordl_internals::intptr_t GetMethodID(::cordl_internals::intptr_t jclass, ::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args, bool isStatic) ;

/// @brief Method GetMethodID addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
static ::cordl_internals::intptr_t GetMethodID(::cordl_internals::intptr_t jclass, ::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args, bool isStatic) ;

/// @brief Method GetFieldID addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
static ::cordl_internals::intptr_t GetFieldID(::cordl_internals::intptr_t jclass, ::StringW fieldName, bool isStatic) ;

/// @brief Method GetConstructorID addr 0x2b46764 size 0x200 virtual false final false
static ::cordl_internals::intptr_t GetConstructorID(::cordl_internals::intptr_t jclass, ::StringW signature) ;

/// @brief Method GetMethodID addr 0x2b46964 size 0x210 virtual false final false
static ::cordl_internals::intptr_t GetMethodID(::cordl_internals::intptr_t jclass, ::StringW methodName, ::StringW signature, bool isStatic) ;

/// @brief Method GetMethodIDFallback addr 0x2b46b74 size 0xfc virtual false final false
static ::cordl_internals::intptr_t GetMethodIDFallback(::cordl_internals::intptr_t jclass, ::StringW methodName, ::StringW signature, bool isStatic) ;

/// @brief Method GetFieldID addr 0x2b46c70 size 0x318 virtual false final false
static ::cordl_internals::intptr_t GetFieldID(::cordl_internals::intptr_t jclass, ::StringW fieldName, ::StringW signature, bool isStatic) ;

/// @brief Method GetSignature addr 0x2b46fc4 size 0xe74 virtual false final false
static ::StringW GetSignature(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetSignature addr 0x2b46634 size 0xf4 virtual false final false
static ::StringW GetSignature(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method GetSignature addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
static ::StringW GetSignature(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

// Ctor Parameters []
explicit _AndroidJNIHelper() ;

/// @brief Method .ctor addr 0x2b47e38 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::_AndroidJNIHelper);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::_AndroidJNIHelper, "UnityEngine", "_AndroidJNIHelper");
