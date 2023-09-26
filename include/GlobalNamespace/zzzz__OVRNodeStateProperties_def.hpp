#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace UnityEngine::XR {
struct XRNodeState;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Step;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Node;
}
namespace GlobalNamespace {
struct NodeStatePropertyType;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRNodeStateProperties;
}
// Type: ::OVRNodeStateProperties
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8472))
// CS Name: OVRNodeStateProperties
class CORDL_TYPE OVRNodeStateProperties : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRNodeStateProperties() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRNodeStateProperties", modifiers: " const&", def_value: None }]
constexpr OVRNodeStateProperties(OVRNodeStateProperties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRNodeStateProperties", modifiers: "&&", def_value: None }]
constexpr OVRNodeStateProperties(OVRNodeStateProperties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRNodeStateProperties(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRNodeStateProperties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRNodeStateProperties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRNodeStateProperties& operator=(OVRNodeStateProperties&& o) noexcept = default;
  constexpr OVRNodeStateProperties& operator=(OVRNodeStateProperties const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState> __declspec(property(get=__get_nodeStateList, put=__set_nodeStateList))  nodeStateList;

static void __set_nodeStateList(System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState> value) ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState> __get_nodeStateList() ;


// Methods

/// @brief Method IsHmdPresent addr 0x25daeb8 size 0xd8 virtual false final false
static bool IsHmdPresent() ;

/// @brief Method GetNodeStatePropertyVector3 addr 0x25daf90 size 0x32c virtual false final false
static bool GetNodeStatePropertyVector3(UnityEngine::XR::XRNode nodeType, GlobalNamespace::NodeStatePropertyType propertyType, GlobalNamespace::GlobalNamespace__OVRPlugin__Node ovrpNodeType, GlobalNamespace::GlobalNamespace__OVRPlugin__Step stepType, ByRef<UnityEngine::Vector3> retVec) ;

/// @brief Method GetNodeStatePropertyQuaternion addr 0x25db2bc size 0x160 virtual false final false
static bool GetNodeStatePropertyQuaternion(UnityEngine::XR::XRNode nodeType, GlobalNamespace::NodeStatePropertyType propertyType, GlobalNamespace::GlobalNamespace__OVRPlugin__Node ovrpNodeType, GlobalNamespace::GlobalNamespace__OVRPlugin__Step stepType, ByRef<UnityEngine::Quaternion> retQuat) ;

/// @brief Method ValidateProperty addr 0x25dd4a0 size 0x204 virtual false final false
static bool ValidateProperty(UnityEngine::XR::XRNode nodeType, ByRef<UnityEngine::XR::XRNodeState> requestedNodeState) ;

/// @brief Method GetUnityXRNodeStateVector3 addr 0x25dd230 size 0x178 virtual false final false
static bool GetUnityXRNodeStateVector3(UnityEngine::XR::XRNode nodeType, GlobalNamespace::NodeStatePropertyType propertyType, ByRef<UnityEngine::Vector3> retVec) ;

/// @brief Method GetUnityXRNodeStateQuaternion addr 0x25dd3a8 size 0xf8 virtual false final false
static bool GetUnityXRNodeStateQuaternion(UnityEngine::XR::XRNode nodeType, GlobalNamespace::NodeStatePropertyType propertyType, ByRef<UnityEngine::Quaternion> retQuat) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRNodeStateProperties);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRNodeStateProperties, "", "OVRNodeStateProperties");
