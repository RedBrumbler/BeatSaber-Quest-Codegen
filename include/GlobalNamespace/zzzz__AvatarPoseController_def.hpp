#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class HeadBodyOffsetSO;
}
namespace UnityEngine {
class Transform;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarPoseController;
}
namespace GlobalNamespace {
class GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate;
}
namespace GlobalNamespace {
class GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate;
}
namespace GlobalNamespace {
class GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate;
}
// Type: ::PositionsWillBeSetDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4073))
// CS Name: AvatarPoseController::PositionsWillBeSetDelegate
class CORDL_TYPE GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate(GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate(GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate& operator=(GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate&& o) noexcept = default;
  constexpr GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate& operator=(GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x20f74cc size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x20f7590 size 0x24 virtual true final false
 void Invoke(UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, ByRef<UnityEngine::Vector3> newHeadPosition, ByRef<UnityEngine::Vector3> newLeftHandPosition, ByRef<UnityEngine::Vector3> newRightHandPosition) ;

/// @brief Method BeginInvoke addr 0x20f75b4 size 0x120 virtual true final false
 System::IAsyncResult BeginInvoke(UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, ByRef<UnityEngine::Vector3> newHeadPosition, ByRef<UnityEngine::Vector3> newLeftHandPosition, ByRef<UnityEngine::Vector3> newRightHandPosition, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x20f76d4 size 0x24 virtual true final false
 void EndInvoke(ByRef<UnityEngine::Vector3> newHeadPosition, ByRef<UnityEngine::Vector3> newLeftHandPosition, ByRef<UnityEngine::Vector3> newRightHandPosition, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LatePositionsWillBeSetDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4074))
// CS Name: AvatarPoseController::LatePositionsWillBeSetDelegate
class CORDL_TYPE GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate(GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate(GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate& operator=(GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate&& o) noexcept = default;
  constexpr GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate& operator=(GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x20f76f8 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x20f77bc size 0x34 virtual true final false
 void Invoke(UnityEngine::Quaternion headRotation, UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, ByRef<UnityEngine::Vector3> newHeadPosition, ByRef<UnityEngine::Vector3> newLeftHandPosition, ByRef<UnityEngine::Vector3> newRightHandPosition) ;

/// @brief Method BeginInvoke addr 0x20f77f0 size 0x158 virtual true final false
 System::IAsyncResult BeginInvoke(UnityEngine::Quaternion headRotation, UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, ByRef<UnityEngine::Vector3> newHeadPosition, ByRef<UnityEngine::Vector3> newLeftHandPosition, ByRef<UnityEngine::Vector3> newRightHandPosition, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x20f7948 size 0x24 virtual true final false
 void EndInvoke(ByRef<UnityEngine::Vector3> newHeadPosition, ByRef<UnityEngine::Vector3> newLeftHandPosition, ByRef<UnityEngine::Vector3> newRightHandPosition, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RotationsWillBeSetDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4075))
// CS Name: AvatarPoseController::RotationsWillBeSetDelegate
class CORDL_TYPE GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate(GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate(GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate& operator=(GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate&& o) noexcept = default;
  constexpr GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate& operator=(GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x20f796c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x20f7a30 size 0x28 virtual true final false
 void Invoke(UnityEngine::Quaternion headRotation, UnityEngine::Quaternion leftHandRotation, UnityEngine::Quaternion rightHandRotation, ByRef<UnityEngine::Quaternion> newHeadRotation, ByRef<UnityEngine::Quaternion> newLeftHandRotation, ByRef<UnityEngine::Quaternion> newRightHandRotation) ;

/// @brief Method BeginInvoke addr 0x20f7a58 size 0x118 virtual true final false
 System::IAsyncResult BeginInvoke(UnityEngine::Quaternion headRotation, UnityEngine::Quaternion leftHandRotation, UnityEngine::Quaternion rightHandRotation, ByRef<UnityEngine::Quaternion> newHeadRotation, ByRef<UnityEngine::Quaternion> newLeftHandRotation, ByRef<UnityEngine::Quaternion> newRightHandRotation, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x20f7b70 size 0x24 virtual true final false
 void EndInvoke(ByRef<UnityEngine::Quaternion> newHeadRotation, ByRef<UnityEngine::Quaternion> newLeftHandRotation, ByRef<UnityEngine::Quaternion> newRightHandRotation, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AvatarPoseController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4076))
// CS Name: AvatarPoseController
class CORDL_TYPE AvatarPoseController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using RotationsWillBeSetDelegate = GlobalNamespace::GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate;

using LatePositionsWillBeSetDelegate = GlobalNamespace::GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate;

using PositionsWillBeSetDelegate = GlobalNamespace::GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~AvatarPoseController() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPoseController", modifiers: " const&", def_value: None }]
constexpr AvatarPoseController(AvatarPoseController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPoseController", modifiers: "&&", def_value: None }]
constexpr AvatarPoseController(AvatarPoseController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarPoseController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AvatarPoseController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarPoseController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarPoseController& operator=(AvatarPoseController&& o) noexcept = default;
  constexpr AvatarPoseController& operator=(AvatarPoseController const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__headTransform, put=__set__headTransform))  _headTransform;

constexpr void __set__headTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__headTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__leftHandTransform, put=__set__leftHandTransform))  _leftHandTransform;

constexpr void __set__leftHandTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__leftHandTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__rightHandTransform, put=__set__rightHandTransform))  _rightHandTransform;

constexpr void __set__rightHandTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__rightHandTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__bodyTransform, put=__set__bodyTransform))  _bodyTransform;

constexpr void __set__bodyTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__bodyTransform() const;

 GlobalNamespace::HeadBodyOffsetSO __declspec(property(get=__get__headBodyOffset, put=__set__headBodyOffset))  _headBodyOffset;

constexpr void __set__headBodyOffset(GlobalNamespace::HeadBodyOffsetSO value) ;

constexpr GlobalNamespace::HeadBodyOffsetSO __get__headBodyOffset() const;

 GlobalNamespace::GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate __declspec(property(get=__get__earlyPositionsWillBeSetCallback_k__BackingField, put=__set__earlyPositionsWillBeSetCallback_k__BackingField))  _earlyPositionsWillBeSetCallback_k__BackingField;

constexpr void __set__earlyPositionsWillBeSetCallback_k__BackingField(GlobalNamespace::GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate value) ;

constexpr GlobalNamespace::GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate __get__earlyPositionsWillBeSetCallback_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate __declspec(property(get=__get__latePositionsWillBeSetCallback_k__BackingField, put=__set__latePositionsWillBeSetCallback_k__BackingField))  _latePositionsWillBeSetCallback_k__BackingField;

constexpr void __set__latePositionsWillBeSetCallback_k__BackingField(GlobalNamespace::GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate value) ;

constexpr GlobalNamespace::GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate __get__latePositionsWillBeSetCallback_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate __declspec(property(get=__get__earlyRotationsWillBeSetCallback_k__BackingField, put=__set__earlyRotationsWillBeSetCallback_k__BackingField))  _earlyRotationsWillBeSetCallback_k__BackingField;

constexpr void __set__earlyRotationsWillBeSetCallback_k__BackingField(GlobalNamespace::GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate value) ;

constexpr GlobalNamespace::GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate __get__earlyRotationsWillBeSetCallback_k__BackingField() const;

 System::Action_1<UnityEngine::Vector3> __declspec(property(get=__get_didUpdatePoseEvent, put=__set_didUpdatePoseEvent))  didUpdatePoseEvent;

constexpr void __set_didUpdatePoseEvent(System::Action_1<UnityEngine::Vector3> value) ;

constexpr System::Action_1<UnityEngine::Vector3> __get_didUpdatePoseEvent() const;


// Properties

 GlobalNamespace::GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate __declspec(property(get=get_earlyPositionsWillBeSetCallback, put=set_earlyPositionsWillBeSetCallback))  earlyPositionsWillBeSetCallback;

 GlobalNamespace::GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate __declspec(property(get=get_latePositionsWillBeSetCallback, put=set_latePositionsWillBeSetCallback))  latePositionsWillBeSetCallback;

 GlobalNamespace::GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate __declspec(property(get=get_earlyRotationsWillBeSetCallback, put=set_earlyRotationsWillBeSetCallback))  earlyRotationsWillBeSetCallback;


// Methods

/// @brief Method get_earlyPositionsWillBeSetCallback addr 0x20f72f4 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate get_earlyPositionsWillBeSetCallback() ;

/// @brief Method set_earlyPositionsWillBeSetCallback addr 0x20f72fc size 0x8 virtual false final false
 void set_earlyPositionsWillBeSetCallback(GlobalNamespace::GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate value) ;

/// @brief Method get_latePositionsWillBeSetCallback addr 0x20f7304 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate get_latePositionsWillBeSetCallback() ;

/// @brief Method set_latePositionsWillBeSetCallback addr 0x20f730c size 0x8 virtual false final false
 void set_latePositionsWillBeSetCallback(GlobalNamespace::GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate value) ;

/// @brief Method get_earlyRotationsWillBeSetCallback addr 0x20f7314 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate get_earlyRotationsWillBeSetCallback() ;

/// @brief Method set_earlyRotationsWillBeSetCallback addr 0x20f731c size 0x8 virtual false final false
 void set_earlyRotationsWillBeSetCallback(GlobalNamespace::GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate value) ;

/// @brief Method add_didUpdatePoseEvent addr 0x20f7058 size 0xb0 virtual false final false
 void add_didUpdatePoseEvent(System::Action_1<UnityEngine::Vector3> value) ;

/// @brief Method remove_didUpdatePoseEvent addr 0x20f71d8 size 0xb0 virtual false final false
 void remove_didUpdatePoseEvent(System::Action_1<UnityEngine::Vector3> value) ;

/// @brief Method UpdateTransforms addr 0x20f7324 size 0x1a0 virtual false final false
 void UpdateTransforms(UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, UnityEngine::Quaternion headRotation, UnityEngine::Quaternion leftHandRotation, UnityEngine::Quaternion rightHandRotation) ;

/// @brief Method UpdateBodyPosition addr 0x20f6cf0 size 0x1b0 virtual false final false
 void UpdateBodyPosition() ;

// Ctor Parameters []
explicit AvatarPoseController() ;

/// @brief Method .ctor addr 0x20f74c4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AvatarPoseController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPoseController, "", "AvatarPoseController");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AvatarPoseController__LatePositionsWillBeSetDelegate, "", "AvatarPoseController/LatePositionsWillBeSetDelegate");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AvatarPoseController__PositionsWillBeSetDelegate, "", "AvatarPoseController/PositionsWillBeSetDelegate");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AvatarPoseController__RotationsWillBeSetDelegate, "", "AvatarPoseController/RotationsWillBeSetDelegate");
