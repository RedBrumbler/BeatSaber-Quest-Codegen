#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion {
class BipedLimbOrientations;
}
namespace RootMotion {
class RootMotion__BipedLimbOrientations__LimbOrientation;
}
// Type: ::LimbOrientation
namespace RootMotion {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12443))
// CS Name: RootMotion.BipedLimbOrientations::LimbOrientation
class CORDL_TYPE RootMotion__BipedLimbOrientations__LimbOrientation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RootMotion__BipedLimbOrientations__LimbOrientation() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__BipedLimbOrientations__LimbOrientation", modifiers: " const&", def_value: None }]
constexpr RootMotion__BipedLimbOrientations__LimbOrientation(RootMotion__BipedLimbOrientations__LimbOrientation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__BipedLimbOrientations__LimbOrientation", modifiers: "&&", def_value: None }]
constexpr RootMotion__BipedLimbOrientations__LimbOrientation(RootMotion__BipedLimbOrientations__LimbOrientation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__BipedLimbOrientations__LimbOrientation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__BipedLimbOrientations__LimbOrientation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__BipedLimbOrientations__LimbOrientation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__BipedLimbOrientations__LimbOrientation& operator=(RootMotion__BipedLimbOrientations__LimbOrientation&& o) noexcept = default;
  constexpr RootMotion__BipedLimbOrientations__LimbOrientation& operator=(RootMotion__BipedLimbOrientations__LimbOrientation const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_upperBoneForwardAxis, put=__set_upperBoneForwardAxis))  upperBoneForwardAxis;

constexpr void __set_upperBoneForwardAxis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_upperBoneForwardAxis() const;

 UnityEngine::Vector3 __declspec(property(get=__get_lowerBoneForwardAxis, put=__set_lowerBoneForwardAxis))  lowerBoneForwardAxis;

constexpr void __set_lowerBoneForwardAxis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_lowerBoneForwardAxis() const;

 UnityEngine::Vector3 __declspec(property(get=__get_lastBoneLeftAxis, put=__set_lastBoneLeftAxis))  lastBoneLeftAxis;

constexpr void __set_lastBoneLeftAxis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_lastBoneLeftAxis() const;


// Methods

// Ctor Parameters [CppParam { name: "upperBoneForwardAxis", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "lowerBoneForwardAxis", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "lastBoneLeftAxis", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
explicit RootMotion__BipedLimbOrientations__LimbOrientation(UnityEngine::Vector3 upperBoneForwardAxis, UnityEngine::Vector3 lowerBoneForwardAxis, UnityEngine::Vector3 lastBoneLeftAxis) ;

/// @brief Method .ctor addr 0x11b8b8c size 0x74 virtual false final false
 void _ctor(UnityEngine::Vector3 upperBoneForwardAxis, UnityEngine::Vector3 lowerBoneForwardAxis, UnityEngine::Vector3 lastBoneLeftAxis) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
// Type: RootMotion::BipedLimbOrientations
namespace RootMotion {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12444))
// CS Name: RootMotion.BipedLimbOrientations
class CORDL_TYPE BipedLimbOrientations : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LimbOrientation = RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BipedLimbOrientations() = default;

// Ctor Parameters [CppParam { name: "", ty: "BipedLimbOrientations", modifiers: " const&", def_value: None }]
constexpr BipedLimbOrientations(BipedLimbOrientations const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BipedLimbOrientations", modifiers: "&&", def_value: None }]
constexpr BipedLimbOrientations(BipedLimbOrientations&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BipedLimbOrientations(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BipedLimbOrientations& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BipedLimbOrientations& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BipedLimbOrientations& operator=(BipedLimbOrientations&& o) noexcept = default;
  constexpr BipedLimbOrientations& operator=(BipedLimbOrientations const& o) noexcept = default;
                


// Fields

 RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation __declspec(property(get=__get_leftArm, put=__set_leftArm))  leftArm;

constexpr void __set_leftArm(RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation value) ;

constexpr RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation __get_leftArm() const;

 RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation __declspec(property(get=__get_rightArm, put=__set_rightArm))  rightArm;

constexpr void __set_rightArm(RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation value) ;

constexpr RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation __get_rightArm() const;

 RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation __declspec(property(get=__get_leftLeg, put=__set_leftLeg))  leftLeg;

constexpr void __set_leftLeg(RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation value) ;

constexpr RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation __get_leftLeg() const;

 RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation __declspec(property(get=__get_rightLeg, put=__set_rightLeg))  rightLeg;

constexpr void __set_rightLeg(RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation value) ;

constexpr RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation __get_rightLeg() const;


// Properties

static RootMotion::BipedLimbOrientations __declspec(property(get=get_UMA))  UMA;

static RootMotion::BipedLimbOrientations __declspec(property(get=get_MaxBiped))  MaxBiped;


// Methods

// Ctor Parameters [CppParam { name: "leftArm", ty: "RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation", modifiers: "", def_value: None }, CppParam { name: "rightArm", ty: "RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation", modifiers: "", def_value: None }, CppParam { name: "leftLeg", ty: "RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation", modifiers: "", def_value: None }, CppParam { name: "rightLeg", ty: "RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation", modifiers: "", def_value: None }]
explicit BipedLimbOrientations(RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation leftArm, RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation rightArm, RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation leftLeg, RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation rightLeg) ;

/// @brief Method .ctor addr 0x11b8898 size 0x40 virtual false final false
 void _ctor(RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation leftArm, RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation rightArm, RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation leftLeg, RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation rightLeg) ;

/// @brief Method get_UMA addr 0x11b88d8 size 0x2b4 virtual false final false
static RootMotion::BipedLimbOrientations get_UMA() ;

/// @brief Method get_MaxBiped addr 0x11b8c00 size 0x2b4 virtual false final false
static RootMotion::BipedLimbOrientations get_MaxBiped() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
NEED_NO_BOX(RootMotion::BipedLimbOrientations);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BipedLimbOrientations, "RootMotion", "BipedLimbOrientations");
NEED_NO_BOX(RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::RootMotion__BipedLimbOrientations__LimbOrientation, "RootMotion", "BipedLimbOrientations/LimbOrientation");
