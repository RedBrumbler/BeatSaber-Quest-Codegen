#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class GlobalJavaObjectRef;
}
namespace UnityEngine {
class AndroidJavaClass;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJavaProxy;
}
// Type: UnityEngine::AndroidJavaProxy
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14900))
// CS Name: UnityEngine.AndroidJavaProxy
class CORDL_TYPE AndroidJavaProxy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AndroidJavaProxy() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaProxy", modifiers: " const&", def_value: None }]
constexpr AndroidJavaProxy(AndroidJavaProxy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaProxy", modifiers: "&&", def_value: None }]
constexpr AndroidJavaProxy(AndroidJavaProxy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidJavaProxy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AndroidJavaProxy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidJavaProxy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidJavaProxy& operator=(AndroidJavaProxy&& o) noexcept = default;
  constexpr AndroidJavaProxy& operator=(AndroidJavaProxy const& o) noexcept = default;
                


// Fields

 UnityEngine::AndroidJavaClass __declspec(property(get=__get_javaInterface, put=__set_javaInterface))  javaInterface;

constexpr void __set_javaInterface(UnityEngine::AndroidJavaClass value) ;

constexpr UnityEngine::AndroidJavaClass __get_javaInterface() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_proxyObject, put=__set_proxyObject))  proxyObject;

constexpr void __set_proxyObject(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_proxyObject() const;

static UnityEngine::GlobalJavaObjectRef __declspec(property(get=__get_s_JavaLangSystemClass, put=__set_s_JavaLangSystemClass))  s_JavaLangSystemClass;

static void __set_s_JavaLangSystemClass(UnityEngine::GlobalJavaObjectRef value) ;

static UnityEngine::GlobalJavaObjectRef __get_s_JavaLangSystemClass() ;

static ::cordl_internals::intptr_t __declspec(property(get=__get_s_HashCodeMethodID, put=__set_s_HashCodeMethodID))  s_HashCodeMethodID;

static void __set_s_HashCodeMethodID(::cordl_internals::intptr_t value) ;

static ::cordl_internals::intptr_t __get_s_HashCodeMethodID() ;


// Methods

// Ctor Parameters [CppParam { name: "javaInterface", ty: "::StringW", modifiers: "", def_value: None }]
explicit AndroidJavaProxy(::StringW javaInterface) ;

/// @brief Method .ctor addr 0x2b4050c size 0x7c virtual false final false
 void _ctor(::StringW javaInterface) ;

// Ctor Parameters [CppParam { name: "javaInterface", ty: "UnityEngine::AndroidJavaClass", modifiers: "", def_value: None }]
explicit AndroidJavaProxy(UnityEngine::AndroidJavaClass javaInterface) ;

/// @brief Method .ctor addr 0x2b405d8 size 0x6c virtual false final false
 void _ctor(UnityEngine::AndroidJavaClass javaInterface) ;

/// @brief Method Finalize addr 0x2b40644 size 0x98 virtual true final false
 void Finalize() ;

/// @brief Method Invoke addr 0x2b406dc size 0x728 virtual true final false
 UnityEngine::AndroidJavaObject Invoke(::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Invoke addr 0x2b419ac size 0x164 virtual true final false
 UnityEngine::AndroidJavaObject Invoke(::StringW methodName, ::ArrayW<UnityEngine::AndroidJavaObject> javaArgs) ;

/// @brief Method equals addr 0x2b42474 size 0xb8 virtual true final false
 bool equals(UnityEngine::AndroidJavaObject obj) ;

/// @brief Method hashCode addr 0x2b425cc size 0xb0 virtual true final false
 int32_t hashCode() ;

/// @brief Method toString addr 0x2b4267c size 0x64 virtual true final false
 ::StringW toString() ;

/// @brief Method GetProxyObject addr 0x2b426e0 size 0x10 virtual false final false
 UnityEngine::AndroidJavaObject GetProxyObject() ;

/// @brief Method GetRawProxy addr 0x2b4175c size 0x144 virtual false final false
 ::cordl_internals::intptr_t GetRawProxy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AndroidJavaProxy);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJavaProxy, "UnityEngine", "AndroidJavaProxy");
