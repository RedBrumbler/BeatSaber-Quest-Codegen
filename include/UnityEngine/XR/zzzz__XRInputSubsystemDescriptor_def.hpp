#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_1_def.hpp"
// Forward declare root types
namespace UnityEngine::XR {
class XRInputSubsystemDescriptor;
}
// Type: UnityEngine.XR::XRInputSubsystemDescriptor
namespace UnityEngine::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15865)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15865), inst: 398 }), TypeDefinitionIndex(TypeDefinitionIndex(15602))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15600))
// CS Name: UnityEngine.XR.XRInputSubsystemDescriptor
class CORDL_TYPE XRInputSubsystemDescriptor : public UnityEngine::IntegratedSubsystemDescriptor_1<UnityEngine::XR::XRInputSubsystem> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XRInputSubsystemDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRInputSubsystemDescriptor", modifiers: " const&", def_value: None }]
constexpr XRInputSubsystemDescriptor(XRInputSubsystemDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRInputSubsystemDescriptor", modifiers: "&&", def_value: None }]
constexpr XRInputSubsystemDescriptor(XRInputSubsystemDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRInputSubsystemDescriptor(void* ptr) noexcept : UnityEngine::IntegratedSubsystemDescriptor_1<UnityEngine::XR::XRInputSubsystem>(ptr) {
}


  constexpr XRInputSubsystemDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRInputSubsystemDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRInputSubsystemDescriptor& operator=(XRInputSubsystemDescriptor&& o) noexcept = default;
  constexpr XRInputSubsystemDescriptor& operator=(XRInputSubsystemDescriptor const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit XRInputSubsystemDescriptor() ;

/// @brief Method .ctor addr 0x2d6bdb0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
NEED_NO_BOX(UnityEngine::XR::XRInputSubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRInputSubsystemDescriptor, "UnityEngine.XR", "XRInputSubsystemDescriptor");
