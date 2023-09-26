#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class AndroidJavaRunnable;
}
namespace UnityEngine {
class AndroidJavaClass;
}
namespace UnityEngine {
class GlobalJavaObjectRef;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class AndroidJavaProxy;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJavaObject;
}
// Type: UnityEngine::AndroidJavaObject
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14901))
// CS Name: UnityEngine.AndroidJavaObject
class CORDL_TYPE AndroidJavaObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AndroidJavaObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaObject", modifiers: " const&", def_value: None }]
constexpr AndroidJavaObject(AndroidJavaObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaObject", modifiers: "&&", def_value: None }]
constexpr AndroidJavaObject(AndroidJavaObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidJavaObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AndroidJavaObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidJavaObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidJavaObject& operator=(AndroidJavaObject&& o) noexcept = default;
  constexpr AndroidJavaObject& operator=(AndroidJavaObject const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_enableDebugPrints, put=__set_enableDebugPrints))  enableDebugPrints;

static void __set_enableDebugPrints(bool value) ;

static bool __get_enableDebugPrints() ;

 UnityEngine::GlobalJavaObjectRef __declspec(property(get=__get_m_jobject, put=__set_m_jobject))  m_jobject;

constexpr void __set_m_jobject(UnityEngine::GlobalJavaObjectRef value) ;

constexpr UnityEngine::GlobalJavaObjectRef __get_m_jobject() const;

 UnityEngine::GlobalJavaObjectRef __declspec(property(get=__get_m_jclass, put=__set_m_jclass))  m_jclass;

constexpr void __set_m_jclass(UnityEngine::GlobalJavaObjectRef value) ;

constexpr UnityEngine::GlobalJavaObjectRef __get_m_jclass() const;


// Methods

// Ctor Parameters [CppParam { name: "className", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "args", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
explicit AndroidJavaObject(::StringW className, ::ArrayW<::StringW> args) ;

/// @brief Method .ctor addr 0x2b429e8 size 0xb4 virtual false final false
 void _ctor(::StringW className, ::ArrayW<::StringW> args) ;

// Ctor Parameters [CppParam { name: "className", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "args", ty: "::ArrayW<UnityEngine::AndroidJavaObject>", modifiers: "", def_value: None }]
explicit AndroidJavaObject(::StringW className, ::ArrayW<UnityEngine::AndroidJavaObject> args) ;

/// @brief Method .ctor addr 0x2b42ca0 size 0xb4 virtual false final false
 void _ctor(::StringW className, ::ArrayW<UnityEngine::AndroidJavaObject> args) ;

// Ctor Parameters [CppParam { name: "className", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "args", ty: "::ArrayW<UnityEngine::AndroidJavaClass>", modifiers: "", def_value: None }]
explicit AndroidJavaObject(::StringW className, ::ArrayW<UnityEngine::AndroidJavaClass> args) ;

/// @brief Method .ctor addr 0x2b42d54 size 0xb4 virtual false final false
 void _ctor(::StringW className, ::ArrayW<UnityEngine::AndroidJavaClass> args) ;

// Ctor Parameters [CppParam { name: "className", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "args", ty: "::ArrayW<UnityEngine::AndroidJavaProxy>", modifiers: "", def_value: None }]
explicit AndroidJavaObject(::StringW className, ::ArrayW<UnityEngine::AndroidJavaProxy> args) ;

/// @brief Method .ctor addr 0x2b42e08 size 0xb4 virtual false final false
 void _ctor(::StringW className, ::ArrayW<UnityEngine::AndroidJavaProxy> args) ;

// Ctor Parameters [CppParam { name: "className", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "args", ty: "::ArrayW<UnityEngine::AndroidJavaRunnable>", modifiers: "", def_value: None }]
explicit AndroidJavaObject(::StringW className, ::ArrayW<UnityEngine::AndroidJavaRunnable> args) ;

/// @brief Method .ctor addr 0x2b42ebc size 0xb4 virtual false final false
 void _ctor(::StringW className, ::ArrayW<UnityEngine::AndroidJavaRunnable> args) ;

// Ctor Parameters [CppParam { name: "className", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "args", ty: "::ArrayW<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit AndroidJavaObject(::StringW className, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method .ctor addr 0x2b42f70 size 0x34 virtual false final false
 void _ctor(::StringW className, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Dispose addr 0x2b42408 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Call addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void Call(::StringW methodName, ::ArrayW<T> args) ;

/// @brief Method Call addr 0x2b42fa4 size 0x4 virtual false final false
 void Call(::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method CallStatic addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void CallStatic(::StringW methodName, ::ArrayW<T> args) ;

/// @brief Method CallStatic addr 0x2b430e4 size 0x4 virtual false final false
 void CallStatic(::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename FieldType>
 FieldType Get(::StringW fieldName) ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename FieldType>
 void Set(::StringW fieldName, FieldType val) ;

/// @brief Method GetStatic addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename FieldType>
 FieldType GetStatic(::StringW fieldName) ;

/// @brief Method SetStatic addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename FieldType>
 void SetStatic(::StringW fieldName, FieldType val) ;

/// @brief Method GetRawObject addr 0x2b4252c size 0x5c virtual false final false
 ::cordl_internals::intptr_t GetRawObject() ;

/// @brief Method GetRawClass addr 0x2b43280 size 0x1c virtual false final false
 ::cordl_internals::intptr_t GetRawClass() ;

/// @brief Method CloneReference addr 0x2b432b8 size 0x15c virtual false final false
 UnityEngine::AndroidJavaObject CloneReference() ;

/// @brief Method Call addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType,typename T>
 ReturnType Call(::StringW methodName, ::ArrayW<T> args) ;

/// @brief Method Call addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
 ReturnType Call(::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method CallStatic addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType,typename T>
 ReturnType CallStatic(::StringW methodName, ::ArrayW<T> args) ;

/// @brief Method CallStatic addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
 ReturnType CallStatic(::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method DebugPrint addr 0x2b43508 size 0x88 virtual false final false
 void DebugPrint(::StringW msg) ;

/// @brief Method DebugPrint addr 0x2b43590 size 0x358 virtual false final false
 void DebugPrint(::StringW call, ::StringW methodName, ::StringW signature, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method _AndroidJavaObject addr 0x2b42aa4 size 0x1fc virtual false final false
 void _AndroidJavaObject(::StringW className, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

// Ctor Parameters [CppParam { name: "jobject", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit AndroidJavaObject(::cordl_internals::intptr_t jobject) ;

/// @brief Method .ctor addr 0x2b4390c size 0x124 virtual false final false
 void _ctor(::cordl_internals::intptr_t jobject) ;

// Ctor Parameters []
explicit AndroidJavaObject() ;

/// @brief Method .ctor addr 0x2b42a9c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Finalize addr 0x2b43a30 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x2b43ad0 size 0x30 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method _Call addr 0x2b42fa8 size 0x13c virtual false final false
 void _Call(::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method _Call addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
 ReturnType _Call(::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method _Get addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename FieldType>
 FieldType _Get(::StringW fieldName) ;

/// @brief Method _Set addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename FieldType>
 void _Set(::StringW fieldName, FieldType val) ;

/// @brief Method _CallStatic addr 0x2b430e8 size 0x13c virtual false final false
 void _CallStatic(::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method _CallStatic addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
 ReturnType _CallStatic(::StringW methodName, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method _GetStatic addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename FieldType>
 FieldType _GetStatic(::StringW fieldName) ;

/// @brief Method _SetStatic addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename FieldType>
 void _SetStatic(::StringW fieldName, FieldType val) ;

/// @brief Method AndroidJavaObjectDeleteLocalRef addr 0x2b426f0 size 0xc8 virtual false final false
static UnityEngine::AndroidJavaObject AndroidJavaObjectDeleteLocalRef(::cordl_internals::intptr_t jobject) ;

/// @brief Method AndroidJavaClassDeleteLocalRef addr 0x2b43b38 size 0xc8 virtual false final false
static UnityEngine::AndroidJavaClass AndroidJavaClassDeleteLocalRef(::cordl_internals::intptr_t jclass) ;

/// @brief Method FromJavaArrayDeleteLocalRef addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ReturnType>
static ReturnType FromJavaArrayDeleteLocalRef(::cordl_internals::intptr_t jobject) ;

/// @brief Method _GetRawObject addr 0x2b43224 size 0x5c virtual false final false
 ::cordl_internals::intptr_t _GetRawObject() ;

/// @brief Method _GetRawClass addr 0x2b4329c size 0x1c virtual false final false
 ::cordl_internals::intptr_t _GetRawClass() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AndroidJavaObject);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJavaObject, "UnityEngine", "AndroidJavaObject");
