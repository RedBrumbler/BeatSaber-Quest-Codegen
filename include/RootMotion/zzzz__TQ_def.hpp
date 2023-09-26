#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion {
class TQ;
}
// Type: RootMotion::TQ
namespace RootMotion {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12434))
// CS Name: RootMotion.TQ
class CORDL_TYPE TQ : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TQ() = default;

// Ctor Parameters [CppParam { name: "", ty: "TQ", modifiers: " const&", def_value: None }]
constexpr TQ(TQ const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TQ", modifiers: "&&", def_value: None }]
constexpr TQ(TQ&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TQ(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TQ& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TQ& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TQ& operator=(TQ&& o) noexcept = default;
  constexpr TQ& operator=(TQ const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_t, put=__set_t))  t;

constexpr void __set_t(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_t() const;

 UnityEngine::Quaternion __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_q() const;


// Methods

// Ctor Parameters [CppParam { name: "translation", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }]
explicit TQ(UnityEngine::Vector3 translation, UnityEngine::Quaternion rotation) ;

/// @brief Method .ctor addr 0x11b47a0 size 0x64 virtual false final false
 void _ctor(UnityEngine::Vector3 translation, UnityEngine::Quaternion rotation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
NEED_NO_BOX(RootMotion::TQ);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::TQ, "RootMotion", "TQ");
