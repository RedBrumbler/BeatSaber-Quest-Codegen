#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
class TimeMsFunction;
}
// Type: UnityEngine.UIElements::TimeMsFunction
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6977))
// CS Name: UnityEngine.UIElements.TimeMsFunction
class CORDL_TYPE TimeMsFunction : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~TimeMsFunction() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeMsFunction", modifiers: " const&", def_value: None }]
constexpr TimeMsFunction(TimeMsFunction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeMsFunction", modifiers: "&&", def_value: None }]
constexpr TimeMsFunction(TimeMsFunction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeMsFunction(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr TimeMsFunction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeMsFunction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeMsFunction& operator=(TimeMsFunction&& o) noexcept = default;
  constexpr TimeMsFunction& operator=(TimeMsFunction const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit TimeMsFunction(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2c82f78 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2c83034 size 0x14 virtual true final false
 int64_t Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::TimeMsFunction);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TimeMsFunction, "UnityEngine.UIElements", "TimeMsFunction");
