#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class Grounding;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__Grounding__Leg;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class Grounder;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__Grounder__GrounderDelegate;
}
// Type: ::GrounderDelegate
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12478))
// CS Name: RootMotion.FinalIK.Grounder::GrounderDelegate
class CORDL_TYPE RootMotion__FinalIK__Grounder__GrounderDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~RootMotion__FinalIK__Grounder__GrounderDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Grounder__GrounderDelegate", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__Grounder__GrounderDelegate(RootMotion__FinalIK__Grounder__GrounderDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Grounder__GrounderDelegate", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__Grounder__GrounderDelegate(RootMotion__FinalIK__Grounder__GrounderDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__Grounder__GrounderDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr RootMotion__FinalIK__Grounder__GrounderDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__Grounder__GrounderDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__Grounder__GrounderDelegate& operator=(RootMotion__FinalIK__Grounder__GrounderDelegate&& o) noexcept = default;
  constexpr RootMotion__FinalIK__Grounder__GrounderDelegate& operator=(RootMotion__FinalIK__Grounder__GrounderDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit RootMotion__FinalIK__Grounder__GrounderDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x11c72ec size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x11c73a8 size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x11c73bc size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x11c73dc size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::Grounder
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12479))
// CS Name: RootMotion.FinalIK.Grounder
class CORDL_TYPE Grounder : public UnityEngine::MonoBehaviour {
public:
// Declarations
using GrounderDelegate = RootMotion::FinalIK::RootMotion__FinalIK__Grounder__GrounderDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Grounder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Grounder", modifiers: " const&", def_value: None }]
constexpr Grounder(Grounder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Grounder", modifiers: "&&", def_value: None }]
constexpr Grounder(Grounder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Grounder(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr Grounder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Grounder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Grounder& operator=(Grounder&& o) noexcept = default;
  constexpr Grounder& operator=(Grounder const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 RootMotion::FinalIK::Grounding __declspec(property(get=__get_solver, put=__set_solver))  solver;

constexpr void __set_solver(RootMotion::FinalIK::Grounding value) ;

constexpr RootMotion::FinalIK::Grounding __get_solver() const;

 RootMotion::FinalIK::RootMotion__FinalIK__Grounder__GrounderDelegate __declspec(property(get=__get_OnPreGrounder, put=__set_OnPreGrounder))  OnPreGrounder;

constexpr void __set_OnPreGrounder(RootMotion::FinalIK::RootMotion__FinalIK__Grounder__GrounderDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__Grounder__GrounderDelegate __get_OnPreGrounder() const;

 RootMotion::FinalIK::RootMotion__FinalIK__Grounder__GrounderDelegate __declspec(property(get=__get_OnPostGrounder, put=__set_OnPostGrounder))  OnPostGrounder;

constexpr void __set_OnPostGrounder(RootMotion::FinalIK::RootMotion__FinalIK__Grounder__GrounderDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__Grounder__GrounderDelegate __get_OnPostGrounder() const;

 bool __declspec(property(get=__get__initiated_k__BackingField, put=__set__initiated_k__BackingField))  _initiated_k__BackingField;

constexpr void __set__initiated_k__BackingField(bool value) ;

constexpr bool __get__initiated_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_initiated, put=set_initiated))  initiated;


// Methods

/// @brief Method ResetPosition addr 0x0 size 0xffffffffffffffff virtual true final false
 void ResetPosition() ;

/// @brief Method get_initiated addr 0x11c6e20 size 0x8 virtual false final false
 bool get_initiated() ;

/// @brief Method set_initiated addr 0x11c6e28 size 0xc virtual false final false
 void set_initiated(bool value) ;

/// @brief Method GetSpineOffsetTarget addr 0x11c6e34 size 0xc4 virtual false final false
 UnityEngine::Vector3 GetSpineOffsetTarget() ;

/// @brief Method LogWarning addr 0x11c70e4 size 0x24 virtual false final false
 void LogWarning(::StringW message) ;

/// @brief Method GetLegSpineBendVector addr 0x11c6ef8 size 0x1ec virtual false final false
 UnityEngine::Vector3 GetLegSpineBendVector(RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Leg leg) ;

/// @brief Method GetLegSpineTangent addr 0x11c7108 size 0x174 virtual false final false
 UnityEngine::Vector3 GetLegSpineTangent(RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Leg leg) ;

/// @brief Method OpenUserManual addr 0x0 size 0xffffffffffffffff virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x0 size 0xffffffffffffffff virtual true final false
 void OpenScriptReference() ;

// Ctor Parameters []
explicit Grounder() ;

/// @brief Method .ctor addr 0x11c727c size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::Grounder);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Grounder, "RootMotion.FinalIK", "Grounder");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__Grounder__GrounderDelegate);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__Grounder__GrounderDelegate, "RootMotion.FinalIK", "Grounder/GrounderDelegate");
