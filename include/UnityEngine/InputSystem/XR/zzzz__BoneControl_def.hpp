#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__Bone_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::XR {
struct Bone;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class BoneControl;
}
// Type: UnityEngine.InputSystem.XR::BoneControl
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6439)), TypeDefinitionIndex(TypeDefinitionIndex(6318)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6318), inst: 3758 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6441))
// CS Name: UnityEngine.InputSystem.XR.BoneControl
class CORDL_TYPE BoneControl : public UnityEngine::InputSystem::InputControl_1<UnityEngine::InputSystem::XR::Bone> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x108};

virtual ~BoneControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "BoneControl", modifiers: " const&", def_value: None }]
constexpr BoneControl(BoneControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BoneControl", modifiers: "&&", def_value: None }]
constexpr BoneControl(BoneControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BoneControl(void* ptr) noexcept : UnityEngine::InputSystem::InputControl_1<UnityEngine::InputSystem::XR::Bone>(ptr) {
}


  constexpr BoneControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BoneControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BoneControl& operator=(BoneControl&& o) noexcept = default;
  constexpr BoneControl& operator=(BoneControl const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=__get__parentBoneIndex_k__BackingField, put=__set__parentBoneIndex_k__BackingField))  _parentBoneIndex_k__BackingField;

constexpr void __set__parentBoneIndex_k__BackingField(UnityEngine::InputSystem::Controls::IntegerControl value) ;

constexpr UnityEngine::InputSystem::Controls::IntegerControl __get__parentBoneIndex_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__position_k__BackingField, put=__set__position_k__BackingField))  _position_k__BackingField;

constexpr void __set__position_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__position_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__rotation_k__BackingField, put=__set__rotation_k__BackingField))  _rotation_k__BackingField;

constexpr void __set__rotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__rotation_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=get_parentBoneIndex, put=set_parentBoneIndex))  parentBoneIndex;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_position, put=set_position))  position;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_rotation, put=set_rotation))  rotation;


// Methods

/// @brief Method get_parentBoneIndex addr 0x2965c3c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl get_parentBoneIndex() ;

/// @brief Method set_parentBoneIndex addr 0x2965c44 size 0x8 virtual false final false
 void set_parentBoneIndex(UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_position addr 0x2965c4c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_position() ;

/// @brief Method set_position addr 0x2965c54 size 0x8 virtual false final false
 void set_position(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_rotation addr 0x2965c5c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_rotation() ;

/// @brief Method set_rotation addr 0x2965c64 size 0x8 virtual false final false
 void set_rotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method FinishSetup addr 0x2965c6c size 0x100 virtual true final false
 void FinishSetup() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x2965d6c size 0xb4 virtual true final false
 UnityEngine::InputSystem::XR::Bone ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x2965e20 size 0x84 virtual true final false
 void WriteValueIntoState(UnityEngine::InputSystem::XR::Bone value, void* statePtr) ;

// Ctor Parameters []
explicit BoneControl() ;

/// @brief Method .ctor addr 0x2965ea4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
NEED_NO_BOX(UnityEngine::InputSystem::XR::BoneControl);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::BoneControl, "UnityEngine.InputSystem.XR", "BoneControl");
