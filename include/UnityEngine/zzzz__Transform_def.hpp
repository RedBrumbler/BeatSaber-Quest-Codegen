#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct RotationOrder;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Space;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class UnityEngine__Transform__Enumerator;
}
// Type: ::Enumerator
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10235))
// CS Name: UnityEngine.Transform::Enumerator
class CORDL_TYPE UnityEngine__Transform__Enumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__Transform__Enumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Transform__Enumerator", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Transform__Enumerator(UnityEngine__Transform__Enumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Transform__Enumerator", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Transform__Enumerator(UnityEngine__Transform__Enumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Transform__Enumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Transform__Enumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Transform__Enumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Transform__Enumerator& operator=(UnityEngine__Transform__Enumerator&& o) noexcept = default;
  constexpr UnityEngine__Transform__Enumerator& operator=(UnityEngine__Transform__Enumerator const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_outer, put=__set_outer))  outer;

constexpr void __set_outer(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_outer() const;

 int32_t __declspec(property(get=__get_currentIndex, put=__set_currentIndex))  currentIndex;

constexpr void __set_currentIndex(int32_t value) ;

constexpr int32_t __get_currentIndex() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

// Ctor Parameters [CppParam { name: "outer", ty: "UnityEngine::Transform", modifiers: "", def_value: None }]
explicit UnityEngine__Transform__Enumerator(UnityEngine::Transform outer) ;

/// @brief Method .ctor addr 0x2b9cd3c size 0x30 virtual false final false
 void _ctor(UnityEngine::Transform outer) ;

/// @brief Method get_Current addr 0x2b9d210 size 0x4c virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method MoveNext addr 0x2b9d25c size 0x60 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x2b9d2bc size 0xc virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::Transform
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10198))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10236))
// CS Name: UnityEngine.Transform
class CORDL_TYPE Transform : public UnityEngine::Component {
public:
// Declarations
using Enumerator = UnityEngine::UnityEngine__Transform__Enumerator;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Transform() = default;

// Ctor Parameters [CppParam { name: "", ty: "Transform", modifiers: " const&", def_value: None }]
constexpr Transform(Transform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Transform", modifiers: "&&", def_value: None }]
constexpr Transform(Transform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Transform(void* ptr) noexcept : UnityEngine::Component(ptr) {
}


  constexpr Transform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Transform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Transform& operator=(Transform&& o) noexcept = default;
  constexpr Transform& operator=(Transform const& o) noexcept = default;
                


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_position, put=set_position))  position;

 UnityEngine::Vector3 __declspec(property(get=get_localPosition, put=set_localPosition))  localPosition;

 UnityEngine::Vector3 __declspec(property(get=get_eulerAngles, put=set_eulerAngles))  eulerAngles;

 UnityEngine::Vector3 __declspec(property(get=get_localEulerAngles, put=set_localEulerAngles))  localEulerAngles;

 UnityEngine::Vector3 __declspec(property(get=get_right, put=set_right))  right;

 UnityEngine::Vector3 __declspec(property(get=get_up, put=set_up))  up;

 UnityEngine::Vector3 __declspec(property(get=get_forward, put=set_forward))  forward;

 UnityEngine::Quaternion __declspec(property(get=get_rotation, put=set_rotation))  rotation;

 UnityEngine::Quaternion __declspec(property(get=get_localRotation, put=set_localRotation))  localRotation;

 UnityEngine::RotationOrder __declspec(property(get=get_rotationOrder, put=set_rotationOrder))  rotationOrder;

 UnityEngine::Vector3 __declspec(property(get=get_localScale, put=set_localScale))  localScale;

 UnityEngine::Transform __declspec(property(get=get_parent, put=set_parent))  parent;

 UnityEngine::Transform __declspec(property(get=get_parentInternal, put=set_parentInternal))  parentInternal;

 UnityEngine::Matrix4x4 __declspec(property(get=get_worldToLocalMatrix))  worldToLocalMatrix;

 UnityEngine::Matrix4x4 __declspec(property(get=get_localToWorldMatrix))  localToWorldMatrix;

 UnityEngine::Transform __declspec(property(get=get_root))  root;

 int32_t __declspec(property(get=get_childCount))  childCount;

 UnityEngine::Vector3 __declspec(property(get=get_lossyScale))  lossyScale;

 bool __declspec(property(get=get_hasChanged, put=set_hasChanged))  hasChanged;

 int32_t __declspec(property(get=get_hierarchyCapacity, put=set_hierarchyCapacity))  hierarchyCapacity;

 int32_t __declspec(property(get=get_hierarchyCount))  hierarchyCount;

 bool __declspec(property(get=get_constrainProportionsScale, put=set_constrainProportionsScale))  constrainProportionsScale;


// Methods

// Ctor Parameters []
explicit Transform() ;

/// @brief Method .ctor addr 0x2b9a90c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_position addr 0x2b9a914 size 0x5c virtual false final false
 UnityEngine::Vector3 get_position() ;

/// @brief Method set_position addr 0x2b9a9b4 size 0x54 virtual false final false
 void set_position(UnityEngine::Vector3 value) ;

/// @brief Method get_localPosition addr 0x2b9aa4c size 0x5c virtual false final false
 UnityEngine::Vector3 get_localPosition() ;

/// @brief Method set_localPosition addr 0x2b9aaec size 0x54 virtual false final false
 void set_localPosition(UnityEngine::Vector3 value) ;

/// @brief Method GetLocalEulerAngles addr 0x2b9ab84 size 0x64 virtual false final false
 UnityEngine::Vector3 GetLocalEulerAngles(UnityEngine::RotationOrder order) ;

/// @brief Method SetLocalEulerAngles addr 0x2b9ac3c size 0x5c virtual false final false
 void SetLocalEulerAngles(UnityEngine::Vector3 euler, UnityEngine::RotationOrder order) ;

/// @brief Method SetLocalEulerHint addr 0x2b9acec size 0x54 virtual false final false
 void SetLocalEulerHint(UnityEngine::Vector3 euler) ;

/// @brief Method get_eulerAngles addr 0x2b9ad84 size 0x28 virtual false final false
 UnityEngine::Vector3 get_eulerAngles() ;

/// @brief Method set_eulerAngles addr 0x2b9ae04 size 0x2c virtual false final false
 void set_eulerAngles(UnityEngine::Vector3 value) ;

/// @brief Method get_localEulerAngles addr 0x2b9ae84 size 0x28 virtual false final false
 UnityEngine::Vector3 get_localEulerAngles() ;

/// @brief Method set_localEulerAngles addr 0x2b9af04 size 0x2c virtual false final false
 void set_localEulerAngles(UnityEngine::Vector3 value) ;

/// @brief Method get_right addr 0x2b9af84 size 0x78 virtual false final false
 UnityEngine::Vector3 get_right() ;

/// @brief Method set_right addr 0x2b9affc size 0x80 virtual false final false
 void set_right(UnityEngine::Vector3 value) ;

/// @brief Method get_up addr 0x2b9b07c size 0x78 virtual false final false
 UnityEngine::Vector3 get_up() ;

/// @brief Method set_up addr 0x2b9b0f4 size 0x80 virtual false final false
 void set_up(UnityEngine::Vector3 value) ;

/// @brief Method get_forward addr 0x2b9b174 size 0x78 virtual false final false
 UnityEngine::Vector3 get_forward() ;

/// @brief Method set_forward addr 0x2b9b1ec size 0x18 virtual false final false
 void set_forward(UnityEngine::Vector3 value) ;

/// @brief Method get_rotation addr 0x2b9adac size 0x58 virtual false final false
 UnityEngine::Quaternion get_rotation() ;

/// @brief Method set_rotation addr 0x2b9ae30 size 0x54 virtual false final false
 void set_rotation(UnityEngine::Quaternion value) ;

/// @brief Method get_localRotation addr 0x2b9aeac size 0x58 virtual false final false
 UnityEngine::Quaternion get_localRotation() ;

/// @brief Method set_localRotation addr 0x2b9af30 size 0x54 virtual false final false
 void set_localRotation(UnityEngine::Quaternion value) ;

/// @brief Method get_rotationOrder addr 0x2b9b314 size 0x3c virtual false final false
 UnityEngine::RotationOrder get_rotationOrder() ;

/// @brief Method set_rotationOrder addr 0x2b9b38c size 0x44 virtual false final false
 void set_rotationOrder(UnityEngine::RotationOrder value) ;

/// @brief Method GetRotationOrderInternal addr 0x2b9b350 size 0x3c virtual false final false
 int32_t GetRotationOrderInternal() ;

/// @brief Method SetRotationOrderInternal addr 0x2b9b3d0 size 0x44 virtual false final false
 void SetRotationOrderInternal(UnityEngine::RotationOrder rotationOrder) ;

/// @brief Method get_localScale addr 0x2b9b414 size 0x5c virtual false final false
 UnityEngine::Vector3 get_localScale() ;

/// @brief Method set_localScale addr 0x2b9b4b4 size 0x54 virtual false final false
 void set_localScale(UnityEngine::Vector3 value) ;

/// @brief Method get_parent addr 0x2b9b54c size 0x3c virtual false final false
 UnityEngine::Transform get_parent() ;

/// @brief Method set_parent addr 0x2b9b5c4 size 0xcc virtual false final false
 void set_parent(UnityEngine::Transform value) ;

/// @brief Method get_parentInternal addr 0x2b9b588 size 0x3c virtual false final false
 UnityEngine::Transform get_parentInternal() ;

/// @brief Method set_parentInternal addr 0x2b9b690 size 0x48 virtual false final false
 void set_parentInternal(UnityEngine::Transform value) ;

/// @brief Method GetParent addr 0x2b9b6d8 size 0x3c virtual false final false
 UnityEngine::Transform GetParent() ;

/// @brief Method SetParent addr 0x2b9b714 size 0x48 virtual false final false
 void SetParent(UnityEngine::Transform p) ;

/// @brief Method SetParent addr 0x2b9b75c size 0x54 virtual false final false
 void SetParent(UnityEngine::Transform parent, bool worldPositionStays) ;

/// @brief Method get_worldToLocalMatrix addr 0x2b9b7b0 size 0x6c virtual false final false
 UnityEngine::Matrix4x4 get_worldToLocalMatrix() ;

/// @brief Method get_localToWorldMatrix addr 0x2b9b860 size 0x6c virtual false final false
 UnityEngine::Matrix4x4 get_localToWorldMatrix() ;

/// @brief Method SetPositionAndRotation addr 0x2b9b910 size 0x60 virtual false final false
 void SetPositionAndRotation(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) ;

/// @brief Method SetLocalPositionAndRotation addr 0x2b9b9c4 size 0x60 virtual false final false
 void SetLocalPositionAndRotation(UnityEngine::Vector3 localPosition, UnityEngine::Quaternion localRotation) ;

/// @brief Method Translate addr 0x2b9ba78 size 0x88 virtual false final false
 void Translate(UnityEngine::Vector3 translation, UnityEngine::Space relativeTo) ;

/// @brief Method Translate addr 0x2b9bb68 size 0x8 virtual false final false
 void Translate(UnityEngine::Vector3 translation) ;

/// @brief Method Translate addr 0x2b9bb70 size 0x4 virtual false final false
 void Translate(float_t x, float_t y, float_t z, UnityEngine::Space relativeTo) ;

/// @brief Method Translate addr 0x2b9bb74 size 0x8 virtual false final false
 void Translate(float_t x, float_t y, float_t z) ;

/// @brief Method Translate addr 0x2b9bb7c size 0xe4 virtual false final false
 void Translate(UnityEngine::Vector3 translation, UnityEngine::Transform relativeTo) ;

/// @brief Method Translate addr 0x2b9bc60 size 0x4 virtual false final false
 void Translate(float_t x, float_t y, float_t z, UnityEngine::Transform relativeTo) ;

/// @brief Method Rotate addr 0x2b9bc64 size 0x280 virtual false final false
 void Rotate(UnityEngine::Vector3 eulers, UnityEngine::Space relativeTo) ;

/// @brief Method Rotate addr 0x2b9bee4 size 0x8 virtual false final false
 void Rotate(UnityEngine::Vector3 eulers) ;

/// @brief Method Rotate addr 0x2b9beec size 0x4 virtual false final false
 void Rotate(float_t xAngle, float_t yAngle, float_t zAngle, UnityEngine::Space relativeTo) ;

/// @brief Method Rotate addr 0x2b9bef0 size 0x8 virtual false final false
 void Rotate(float_t xAngle, float_t yAngle, float_t zAngle) ;

/// @brief Method RotateAroundInternal addr 0x2b9bef8 size 0x64 virtual false final false
 void RotateAroundInternal(UnityEngine::Vector3 axis, float_t angle) ;

/// @brief Method Rotate addr 0x2b9bfb0 size 0x8c virtual false final false
 void Rotate(UnityEngine::Vector3 axis, float_t angle, UnityEngine::Space relativeTo) ;

/// @brief Method Rotate addr 0x2b9c03c size 0x8 virtual false final false
 void Rotate(UnityEngine::Vector3 axis, float_t angle) ;

/// @brief Method RotateAround addr 0x2b9c044 size 0xbc virtual false final false
 void RotateAround(UnityEngine::Vector3 point, UnityEngine::Vector3 axis, float_t angle) ;

/// @brief Method LookAt addr 0x2b9c100 size 0xc0 virtual false final false
 void LookAt(UnityEngine::Transform target, UnityEngine::Vector3 worldUp) ;

/// @brief Method LookAt addr 0x2b9c1c4 size 0xf8 virtual false final false
 void LookAt(UnityEngine::Transform target) ;

/// @brief Method LookAt addr 0x2b9c1c0 size 0x4 virtual false final false
 void LookAt(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp) ;

/// @brief Method LookAt addr 0x2b9c31c size 0x7c virtual false final false
 void LookAt(UnityEngine::Vector3 worldPosition) ;

/// @brief Method Internal_LookAt addr 0x2b9c2bc size 0x60 virtual false final false
 void Internal_LookAt(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp) ;

/// @brief Method TransformDirection addr 0x2b9bb00 size 0x68 virtual false final false
 UnityEngine::Vector3 TransformDirection(UnityEngine::Vector3 direction) ;

/// @brief Method TransformDirection addr 0x2b9c440 size 0x4 virtual false final false
 UnityEngine::Vector3 TransformDirection(float_t x, float_t y, float_t z) ;

/// @brief Method InverseTransformDirection addr 0x2b9c444 size 0x68 virtual false final false
 UnityEngine::Vector3 InverseTransformDirection(UnityEngine::Vector3 direction) ;

/// @brief Method InverseTransformDirection addr 0x2b9c500 size 0x4 virtual false final false
 UnityEngine::Vector3 InverseTransformDirection(float_t x, float_t y, float_t z) ;

/// @brief Method TransformVector addr 0x2b9c504 size 0x68 virtual false final false
 UnityEngine::Vector3 TransformVector(UnityEngine::Vector3 vector) ;

/// @brief Method TransformVector addr 0x2b9c5c0 size 0x4 virtual false final false
 UnityEngine::Vector3 TransformVector(float_t x, float_t y, float_t z) ;

/// @brief Method InverseTransformVector addr 0x2b9c5c4 size 0x68 virtual false final false
 UnityEngine::Vector3 InverseTransformVector(UnityEngine::Vector3 vector) ;

/// @brief Method InverseTransformVector addr 0x2b9c680 size 0x4 virtual false final false
 UnityEngine::Vector3 InverseTransformVector(float_t x, float_t y, float_t z) ;

/// @brief Method TransformPoint addr 0x2b9c684 size 0x68 virtual false final false
 UnityEngine::Vector3 TransformPoint(UnityEngine::Vector3 position) ;

/// @brief Method TransformPoint addr 0x2b9c740 size 0x4 virtual false final false
 UnityEngine::Vector3 TransformPoint(float_t x, float_t y, float_t z) ;

/// @brief Method InverseTransformPoint addr 0x2b9c744 size 0x68 virtual false final false
 UnityEngine::Vector3 InverseTransformPoint(UnityEngine::Vector3 position) ;

/// @brief Method InverseTransformPoint addr 0x2b9c800 size 0x4 virtual false final false
 UnityEngine::Vector3 InverseTransformPoint(float_t x, float_t y, float_t z) ;

/// @brief Method get_root addr 0x2b9c804 size 0x3c virtual false final false
 UnityEngine::Transform get_root() ;

/// @brief Method GetRoot addr 0x2b9c840 size 0x3c virtual false final false
 UnityEngine::Transform GetRoot() ;

/// @brief Method get_childCount addr 0x2b9c87c size 0x3c virtual false final false
 int32_t get_childCount() ;

/// @brief Method DetachChildren addr 0x2b9c8b8 size 0x3c virtual false final false
 void DetachChildren() ;

/// @brief Method SetAsFirstSibling addr 0x2b9c8f4 size 0x3c virtual false final false
 void SetAsFirstSibling() ;

/// @brief Method SetAsLastSibling addr 0x2b9c930 size 0x3c virtual false final false
 void SetAsLastSibling() ;

/// @brief Method SetSiblingIndex addr 0x2b9c96c size 0x44 virtual false final false
 void SetSiblingIndex(int32_t index) ;

/// @brief Method MoveAfterSibling addr 0x2b9c9b0 size 0x54 virtual false final false
 void MoveAfterSibling(UnityEngine::Transform transform, bool notifyEditorAndMarkDirty) ;

/// @brief Method GetSiblingIndex addr 0x2b9ca04 size 0x3c virtual false final false
 int32_t GetSiblingIndex() ;

/// @brief Method FindRelativeTransformWithPath addr 0x2b9ca40 size 0x54 virtual false final false
static UnityEngine::Transform FindRelativeTransformWithPath(UnityEngine::Transform transform, ::StringW path, bool isActiveOnly) ;

/// @brief Method Find addr 0x2b9ca94 size 0x98 virtual false final false
 UnityEngine::Transform Find(::StringW n) ;

/// @brief Method SendTransformChangedScale addr 0x2b9cb2c size 0x3c virtual false final false
 void SendTransformChangedScale() ;

/// @brief Method get_lossyScale addr 0x2b9cb68 size 0x5c virtual false final false
 UnityEngine::Vector3 get_lossyScale() ;

/// @brief Method IsChildOf addr 0x2b9cc08 size 0x44 virtual false final false
 bool IsChildOf(UnityEngine::Transform parent) ;

/// @brief Method get_hasChanged addr 0x2b9cc4c size 0x3c virtual false final false
 bool get_hasChanged() ;

/// @brief Method set_hasChanged addr 0x2b9cc88 size 0x44 virtual false final false
 void set_hasChanged(bool value) ;

/// @brief Method FindChild addr 0x2b9cccc size 0x4 virtual false final false
 UnityEngine::Transform FindChild(::StringW n) ;

/// @brief Method GetEnumerator addr 0x2b9ccd0 size 0x6c virtual true final true
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method RotateAround addr 0x2b9cd6c size 0x64 virtual false final false
 void RotateAround(UnityEngine::Vector3 axis, float_t angle) ;

/// @brief Method RotateAroundLocal addr 0x2b9ce24 size 0x64 virtual false final false
 void RotateAroundLocal(UnityEngine::Vector3 axis, float_t angle) ;

/// @brief Method GetChild addr 0x2b9cedc size 0x44 virtual false final false
 UnityEngine::Transform GetChild(int32_t index) ;

/// @brief Method GetChildCount addr 0x2b9cf20 size 0x3c virtual false final false
 int32_t GetChildCount() ;

/// @brief Method get_hierarchyCapacity addr 0x2b9cf5c size 0x3c virtual false final false
 int32_t get_hierarchyCapacity() ;

/// @brief Method set_hierarchyCapacity addr 0x2b9cfd4 size 0x44 virtual false final false
 void set_hierarchyCapacity(int32_t value) ;

/// @brief Method internal_getHierarchyCapacity addr 0x2b9cf98 size 0x3c virtual false final false
 int32_t internal_getHierarchyCapacity() ;

/// @brief Method internal_setHierarchyCapacity addr 0x2b9d018 size 0x44 virtual false final false
 void internal_setHierarchyCapacity(int32_t value) ;

/// @brief Method get_hierarchyCount addr 0x2b9d05c size 0x3c virtual false final false
 int32_t get_hierarchyCount() ;

/// @brief Method internal_getHierarchyCount addr 0x2b9d098 size 0x3c virtual false final false
 int32_t internal_getHierarchyCount() ;

/// @brief Method IsNonUniformScaleTransform addr 0x2b9d0d4 size 0x3c virtual false final false
 bool IsNonUniformScaleTransform() ;

/// @brief Method get_constrainProportionsScale addr 0x2b9d110 size 0x3c virtual false final false
 bool get_constrainProportionsScale() ;

/// @brief Method set_constrainProportionsScale addr 0x2b9d188 size 0x44 virtual false final false
 void set_constrainProportionsScale(bool value) ;

/// @brief Method SetConstrainProportionsScale addr 0x2b9d1cc size 0x44 virtual false final false
 void SetConstrainProportionsScale(bool isLinked) ;

/// @brief Method IsConstrainProportionsScale addr 0x2b9d14c size 0x3c virtual false final false
 bool IsConstrainProportionsScale() ;

/// @brief Method get_position_Injected addr 0x2b9a970 size 0x44 virtual false final false
 void get_position_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method set_position_Injected addr 0x2b9aa08 size 0x44 virtual false final false
 void set_position_Injected(ByRef<UnityEngine::Vector3> value) ;

/// @brief Method get_localPosition_Injected addr 0x2b9aaa8 size 0x44 virtual false final false
 void get_localPosition_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method set_localPosition_Injected addr 0x2b9ab40 size 0x44 virtual false final false
 void set_localPosition_Injected(ByRef<UnityEngine::Vector3> value) ;

/// @brief Method GetLocalEulerAngles_Injected addr 0x2b9abe8 size 0x54 virtual false final false
 void GetLocalEulerAngles_Injected(UnityEngine::RotationOrder order, ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method SetLocalEulerAngles_Injected addr 0x2b9ac98 size 0x54 virtual false final false
 void SetLocalEulerAngles_Injected(ByRef<UnityEngine::Vector3> euler, UnityEngine::RotationOrder order) ;

/// @brief Method SetLocalEulerHint_Injected addr 0x2b9ad40 size 0x44 virtual false final false
 void SetLocalEulerHint_Injected(ByRef<UnityEngine::Vector3> euler) ;

/// @brief Method get_rotation_Injected addr 0x2b9b204 size 0x44 virtual false final false
 void get_rotation_Injected(ByRef<UnityEngine::Quaternion> ret) ;

/// @brief Method set_rotation_Injected addr 0x2b9b248 size 0x44 virtual false final false
 void set_rotation_Injected(ByRef<UnityEngine::Quaternion> value) ;

/// @brief Method get_localRotation_Injected addr 0x2b9b28c size 0x44 virtual false final false
 void get_localRotation_Injected(ByRef<UnityEngine::Quaternion> ret) ;

/// @brief Method set_localRotation_Injected addr 0x2b9b2d0 size 0x44 virtual false final false
 void set_localRotation_Injected(ByRef<UnityEngine::Quaternion> value) ;

/// @brief Method get_localScale_Injected addr 0x2b9b470 size 0x44 virtual false final false
 void get_localScale_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method set_localScale_Injected addr 0x2b9b508 size 0x44 virtual false final false
 void set_localScale_Injected(ByRef<UnityEngine::Vector3> value) ;

/// @brief Method get_worldToLocalMatrix_Injected addr 0x2b9b81c size 0x44 virtual false final false
 void get_worldToLocalMatrix_Injected(ByRef<UnityEngine::Matrix4x4> ret) ;

/// @brief Method get_localToWorldMatrix_Injected addr 0x2b9b8cc size 0x44 virtual false final false
 void get_localToWorldMatrix_Injected(ByRef<UnityEngine::Matrix4x4> ret) ;

/// @brief Method SetPositionAndRotation_Injected addr 0x2b9b970 size 0x54 virtual false final false
 void SetPositionAndRotation_Injected(ByRef<UnityEngine::Vector3> position, ByRef<UnityEngine::Quaternion> rotation) ;

/// @brief Method SetLocalPositionAndRotation_Injected addr 0x2b9ba24 size 0x54 virtual false final false
 void SetLocalPositionAndRotation_Injected(ByRef<UnityEngine::Vector3> localPosition, ByRef<UnityEngine::Quaternion> localRotation) ;

/// @brief Method RotateAroundInternal_Injected addr 0x2b9bf5c size 0x54 virtual false final false
 void RotateAroundInternal_Injected(ByRef<UnityEngine::Vector3> axis, float_t angle) ;

/// @brief Method Internal_LookAt_Injected addr 0x2b9c398 size 0x54 virtual false final false
 void Internal_LookAt_Injected(ByRef<UnityEngine::Vector3> worldPosition, ByRef<UnityEngine::Vector3> worldUp) ;

/// @brief Method TransformDirection_Injected addr 0x2b9c3ec size 0x54 virtual false final false
 void TransformDirection_Injected(ByRef<UnityEngine::Vector3> direction, ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method InverseTransformDirection_Injected addr 0x2b9c4ac size 0x54 virtual false final false
 void InverseTransformDirection_Injected(ByRef<UnityEngine::Vector3> direction, ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method TransformVector_Injected addr 0x2b9c56c size 0x54 virtual false final false
 void TransformVector_Injected(ByRef<UnityEngine::Vector3> vector, ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method InverseTransformVector_Injected addr 0x2b9c62c size 0x54 virtual false final false
 void InverseTransformVector_Injected(ByRef<UnityEngine::Vector3> vector, ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method TransformPoint_Injected addr 0x2b9c6ec size 0x54 virtual false final false
 void TransformPoint_Injected(ByRef<UnityEngine::Vector3> position, ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method InverseTransformPoint_Injected addr 0x2b9c7ac size 0x54 virtual false final false
 void InverseTransformPoint_Injected(ByRef<UnityEngine::Vector3> position, ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method get_lossyScale_Injected addr 0x2b9cbc4 size 0x44 virtual false final false
 void get_lossyScale_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method RotateAround_Injected addr 0x2b9cdd0 size 0x54 virtual false final false
 void RotateAround_Injected(ByRef<UnityEngine::Vector3> axis, float_t angle) ;

/// @brief Method RotateAroundLocal_Injected addr 0x2b9ce88 size 0x54 virtual false final false
 void RotateAroundLocal_Injected(ByRef<UnityEngine::Vector3> axis, float_t angle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Transform);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Transform, "UnityEngine", "Transform");
NEED_NO_BOX(UnityEngine::UnityEngine__Transform__Enumerator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Transform__Enumerator, "UnityEngine", "Transform/Enumerator");
