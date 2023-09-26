#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/unityw.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct HideFlags;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Object;
}
// Type: UnityEngine::Object
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10161))
// CS Name: UnityEngine.Object
class CORDL_TYPE Object : public bs_hook::UnityW {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Object() = default;

// Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: " const&", def_value: None }]
constexpr Object(Object const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "&&", def_value: None }]
constexpr Object(Object&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Object(void* ptr) noexcept : UnityW(ptr) {
}


  constexpr Object& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Object& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Object& operator=(Object&& o) noexcept = default;
  constexpr Object& operator=(Object const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_CachedPtr, put=__set_m_CachedPtr))  m_CachedPtr;

constexpr void __set_m_CachedPtr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_CachedPtr() const;

static int32_t __declspec(property(get=__get_OffsetOfInstanceIDInCPlusPlusObject, put=__set_OffsetOfInstanceIDInCPlusPlusObject))  OffsetOfInstanceIDInCPlusPlusObject;

static void __set_OffsetOfInstanceIDInCPlusPlusObject(int32_t value) ;

static int32_t __get_OffsetOfInstanceIDInCPlusPlusObject() ;

/// @brief Field objectIsNullMessage offset 0
static constexpr ::ConstString  objectIsNullMessage{u"The Object you want to instantiate is null."};

/// @brief Field cloneDestroyedMessage offset 0
static constexpr ::ConstString  cloneDestroyedMessage{u"Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake."};


// Properties

 ::StringW __declspec(property(get=get_name, put=set_name))  name;

 UnityEngine::HideFlags __declspec(property(get=get_hideFlags, put=set_hideFlags))  hideFlags;


// Methods

/// @brief Method GetInstanceID addr 0x2b7f6e8 size 0x134 virtual false final false
 int32_t GetInstanceID() ;

/// @brief Method GetHashCode addr 0x2b89e88 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b89e90 size 0xfc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method op_Implicit addr 0x2b8a090 size 0x64 virtual false final false
static bool op_Implicit_bool(UnityEngine::Object exists) ;

/// @brief Method CompareBaseObjects addr 0x2b89ff0 size 0xa0 virtual false final false
static bool CompareBaseObjects(UnityEngine::Object lhs, UnityEngine::Object rhs) ;

/// @brief Method EnsureRunningOnMainThread addr 0x2b8a150 size 0xc0 virtual false final false
 void EnsureRunningOnMainThread() ;

/// @brief Method IsNativeObjectAlive addr 0x2b8a0f4 size 0x5c virtual false final false
static bool IsNativeObjectAlive(UnityEngine::Object o) ;

/// @brief Method GetCachedPtr addr 0x2b8a238 size 0x8 virtual false final false
 ::cordl_internals::intptr_t GetCachedPtr() ;

/// @brief Method get_name addr 0x2b8a240 size 0x74 virtual false final false
 ::StringW get_name() ;

/// @brief Method set_name addr 0x2b8a2f0 size 0x84 virtual false final false
 void set_name(::StringW value) ;

/// @brief Method Instantiate addr 0x2b8a3b8 size 0x1b8 virtual false final false
static UnityEngine::Object Instantiate(UnityEngine::Object original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) ;

/// @brief Method Instantiate addr 0x2b8a6d4 size 0x1a8 virtual false final false
static UnityEngine::Object Instantiate(UnityEngine::Object original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parent) ;

/// @brief Method Instantiate addr 0x2b8a924 size 0xf4 virtual false final false
static UnityEngine::Object Instantiate(UnityEngine::Object original) ;

/// @brief Method Instantiate addr 0x2b8aa54 size 0x68 virtual false final false
static UnityEngine::Object Instantiate(UnityEngine::Object original, UnityEngine::Transform parent) ;

/// @brief Method Instantiate addr 0x2b8aabc size 0x14c virtual false final false
static UnityEngine::Object Instantiate(UnityEngine::Object original, UnityEngine::Transform parent, bool instantiateInWorldSpace) ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Instantiate(T original) ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Instantiate(T original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Instantiate(T original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parent) ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Instantiate(T original, UnityEngine::Transform parent) ;

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Instantiate(T original, UnityEngine::Transform parent, bool worldPositionStays) ;

/// @brief Method Destroy addr 0x2b8ac5c size 0x4c virtual false final false
static void Destroy(UnityEngine::Object obj, float_t t) ;

/// @brief Method Destroy addr 0x2b8aca8 size 0x78 virtual false final false
static void Destroy(UnityEngine::Object obj) ;

/// @brief Method DestroyImmediate addr 0x2b8ad20 size 0x44 virtual false final false
static void DestroyImmediate(UnityEngine::Object obj, bool allowDestroyingAssets) ;

/// @brief Method DestroyImmediate addr 0x2b8ad64 size 0x78 virtual false final false
static void DestroyImmediate(UnityEngine::Object obj) ;

/// @brief Method FindObjectsOfType addr 0x2b8addc size 0x78 virtual false final false
static ::ArrayW<UnityEngine::Object> FindObjectsOfType(System::Type type) ;

/// @brief Method FindObjectsOfType addr 0x2b8ae54 size 0x44 virtual false final false
static ::ArrayW<UnityEngine::Object> FindObjectsOfType(System::Type type, bool includeInactive) ;

/// @brief Method DontDestroyOnLoad addr 0x2b8ae98 size 0x3c virtual false final false
static void DontDestroyOnLoad(UnityEngine::Object target) ;

/// @brief Method get_hideFlags addr 0x2b8aed4 size 0x3c virtual false final false
 UnityEngine::HideFlags get_hideFlags() ;

/// @brief Method set_hideFlags addr 0x2b8af10 size 0x44 virtual false final false
 void set_hideFlags(UnityEngine::HideFlags value) ;

/// @brief Method DestroyObject addr 0x2b8af54 size 0x84 virtual false final false
static void DestroyObject(UnityEngine::Object obj, float_t t) ;

/// @brief Method DestroyObject addr 0x2b8afd8 size 0x78 virtual false final false
static void DestroyObject(UnityEngine::Object obj) ;

/// @brief Method FindSceneObjectsOfType addr 0x2b8b050 size 0x54 virtual false final false
static ::ArrayW<UnityEngine::Object> FindSceneObjectsOfType(System::Type type) ;

/// @brief Method FindObjectsOfTypeIncludingAssets addr 0x2b8b0a4 size 0x3c virtual false final false
static ::ArrayW<UnityEngine::Object> FindObjectsOfTypeIncludingAssets(System::Type type) ;

/// @brief Method FindObjectsOfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> FindObjectsOfType() ;

/// @brief Method FindObjectsOfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> FindObjectsOfType(bool includeInactive) ;

/// @brief Method FindObjectOfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T FindObjectOfType() ;

/// @brief Method FindObjectOfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T FindObjectOfType(bool includeInactive) ;

/// @brief Method FindObjectsOfTypeAll addr 0x2b8b0e0 size 0x8 virtual false final false
static ::ArrayW<UnityEngine::Object> FindObjectsOfTypeAll(System::Type type) ;

/// @brief Method CheckNullArgument addr 0x2b8a570 size 0x54 virtual false final false
static void CheckNullArgument(::bs_hook::Il2CppWrapperType arg, ::StringW message) ;

/// @brief Method FindObjectOfType addr 0x2b8b0e8 size 0x98 virtual false final false
static UnityEngine::Object FindObjectOfType(System::Type type) ;

/// @brief Method FindObjectOfType addr 0x2b8b180 size 0xa4 virtual false final false
static UnityEngine::Object FindObjectOfType(System::Type type, bool includeInactive) ;

/// @brief Method ToString addr 0x2b8b224 size 0x74 virtual true final false
 ::StringW ToString() ;

/// @brief Method op_Equality addr 0x2b89f8c size 0x64 virtual false final false
static bool op_Equality(UnityEngine::Object x, UnityEngine::Object y) ;

/// @brief Method op_Inequality addr 0x2b7f678 size 0x70 virtual false final false
static bool op_Inequality(UnityEngine::Object x, UnityEngine::Object y) ;

/// @brief Method GetOffsetOfInstanceIDInCPlusPlusObject addr 0x2b89e60 size 0x28 virtual false final false
static int32_t GetOffsetOfInstanceIDInCPlusPlusObject() ;

/// @brief Method CurrentThreadIsMainThread addr 0x2b8a210 size 0x28 virtual false final false
static bool CurrentThreadIsMainThread() ;

/// @brief Method Internal_CloneSingle addr 0x2b8aa18 size 0x3c virtual false final false
static UnityEngine::Object Internal_CloneSingle(UnityEngine::Object data) ;

/// @brief Method Internal_CloneSingleWithParent addr 0x2b8ac08 size 0x54 virtual false final false
static UnityEngine::Object Internal_CloneSingleWithParent(UnityEngine::Object data, UnityEngine::Transform parent, bool worldPositionStays) ;

/// @brief Method Internal_InstantiateSingle addr 0x2b8a5c4 size 0x98 virtual false final false
static UnityEngine::Object Internal_InstantiateSingle(UnityEngine::Object data, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot) ;

/// @brief Method Internal_InstantiateSingleWithParent addr 0x2b8a87c size 0xa8 virtual false final false
static UnityEngine::Object Internal_InstantiateSingleWithParent(UnityEngine::Object data, UnityEngine::Transform parent, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot) ;

/// @brief Method ToString addr 0x2b8b298 size 0x3c virtual false final false
static ::StringW ToString(UnityEngine::Object obj) ;

/// @brief Method GetName addr 0x2b8a2b4 size 0x3c virtual false final false
static ::StringW GetName(UnityEngine::Object obj) ;

/// @brief Method IsPersistent addr 0x2b8b384 size 0x3c virtual false final false
static bool IsPersistent(UnityEngine::Object obj) ;

/// @brief Method SetName addr 0x2b8a374 size 0x44 virtual false final false
static void SetName(UnityEngine::Object obj, ::StringW name) ;

/// @brief Method DoesObjectWithInstanceIDExist addr 0x2b8b3c0 size 0x3c virtual false final false
static bool DoesObjectWithInstanceIDExist(int32_t instanceID) ;

/// @brief Method FindObjectFromInstanceID addr 0x2b8b3fc size 0x3c virtual false final false
static UnityEngine::Object FindObjectFromInstanceID(int32_t instanceID) ;

/// @brief Method ForceLoadFromInstanceID addr 0x2b8b438 size 0x3c virtual false final false
static UnityEngine::Object ForceLoadFromInstanceID(int32_t instanceID) ;

// Ctor Parameters []
explicit Object() ;

/// @brief Method .ctor addr 0x2b89b00 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Internal_InstantiateSingle_Injected addr 0x2b8b2d4 size 0x54 virtual false final false
static UnityEngine::Object Internal_InstantiateSingle_Injected(UnityEngine::Object data, ByRef<UnityEngine::Vector3> pos, ByRef<UnityEngine::Quaternion> rot) ;

/// @brief Method Internal_InstantiateSingleWithParent_Injected addr 0x2b8b328 size 0x5c virtual false final false
static UnityEngine::Object Internal_InstantiateSingleWithParent_Injected(UnityEngine::Object data, UnityEngine::Transform parent, ByRef<UnityEngine::Vector3> pos, ByRef<UnityEngine::Quaternion> rot) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Object);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Object, "UnityEngine", "Object");
