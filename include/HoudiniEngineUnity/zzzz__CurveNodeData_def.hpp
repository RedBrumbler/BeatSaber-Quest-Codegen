#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class CurveNodeData;
}
// Type: HoudiniEngineUnity::CurveNodeData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9579))
// CS Name: HoudiniEngineUnity.CurveNodeData
class CORDL_TYPE CurveNodeData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::CurveNodeData>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::CurveNodeData>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~CurveNodeData() = default;

// Ctor Parameters [CppParam { name: "", ty: "CurveNodeData", modifiers: " const&", def_value: None }]
constexpr CurveNodeData(CurveNodeData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CurveNodeData", modifiers: "&&", def_value: None }]
constexpr CurveNodeData(CurveNodeData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CurveNodeData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CurveNodeData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CurveNodeData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CurveNodeData& operator=(CurveNodeData&& o) noexcept = default;
  constexpr CurveNodeData& operator=(CurveNodeData const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_position() const;

 UnityEngine::Vector3 __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_rotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_scale() const;


// Methods

// Ctor Parameters []
explicit CurveNodeData() ;

/// @brief Method .ctor addr 0x2016858 size 0xa8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
explicit CurveNodeData(UnityEngine::Vector3 position) ;

/// @brief Method .ctor addr 0x2016900 size 0xd0 virtual false final false
 void _ctor(UnityEngine::Vector3 position) ;

// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }]
explicit CurveNodeData(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) ;

/// @brief Method .ctor addr 0x20169d0 size 0x12c virtual false final false
 void _ctor(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) ;

// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
explicit CurveNodeData(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Vector3 scale) ;

/// @brief Method .ctor addr 0x2016afc size 0x138 virtual false final false
 void _ctor(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Vector3 scale) ;

// Ctor Parameters [CppParam { name: "other", ty: "HoudiniEngineUnity::CurveNodeData", modifiers: "", def_value: None }]
explicit CurveNodeData(HoudiniEngineUnity::CurveNodeData other) ;

/// @brief Method .ctor addr 0x2016c34 size 0xf0 virtual false final false
 void _ctor(HoudiniEngineUnity::CurveNodeData other) ;

/// @brief Method GetRotation addr 0x2016d24 size 0x24 virtual false final false
 UnityEngine::Quaternion GetRotation() ;

/// @brief Method IsEquivalentTo addr 0x2016d48 size 0x1ac virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::CurveNodeData other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::CurveNodeData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::CurveNodeData, "HoudiniEngineUnity", "CurveNodeData");
