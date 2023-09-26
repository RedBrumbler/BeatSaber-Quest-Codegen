#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__CompensateDirectionProcessor_def.hpp"
#include <cmath>
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
class AndroidCompensateDirectionProcessor;
}
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidCompensateDirectionProcessor
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6684))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6560))
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidCompensateDirectionProcessor
class CORDL_TYPE AndroidCompensateDirectionProcessor : public UnityEngine::InputSystem::Processors::CompensateDirectionProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AndroidCompensateDirectionProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidCompensateDirectionProcessor", modifiers: " const&", def_value: None }]
constexpr AndroidCompensateDirectionProcessor(AndroidCompensateDirectionProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidCompensateDirectionProcessor", modifiers: "&&", def_value: None }]
constexpr AndroidCompensateDirectionProcessor(AndroidCompensateDirectionProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidCompensateDirectionProcessor(void* ptr) noexcept : UnityEngine::InputSystem::Processors::CompensateDirectionProcessor(ptr) {
}


  constexpr AndroidCompensateDirectionProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidCompensateDirectionProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidCompensateDirectionProcessor& operator=(AndroidCompensateDirectionProcessor&& o) noexcept = default;
  constexpr AndroidCompensateDirectionProcessor& operator=(AndroidCompensateDirectionProcessor const& o) noexcept = default;
                


// Fields

/// @brief Field kSensorStandardGravity offset 0
static constexpr float_t  kSensorStandardGravity{9.80665};

/// @brief Field kAccelerationMultiplier offset 0
static constexpr float_t  kAccelerationMultiplier{-0.10197162};


// Methods

/// @brief Method Process addr 0x298476c size 0x1c virtual true final false
 UnityEngine::Vector3 Process(UnityEngine::Vector3 vector, UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit AndroidCompensateDirectionProcessor() ;

/// @brief Method .ctor addr 0x2984788 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android::LowLevel
NEED_NO_BOX(UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor, "UnityEngine.InputSystem.Android.LowLevel", "AndroidCompensateDirectionProcessor");
