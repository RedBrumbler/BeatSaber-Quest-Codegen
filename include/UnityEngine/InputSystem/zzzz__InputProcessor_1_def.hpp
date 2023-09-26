#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct Int32Enum;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine::InputSystem::XR {
struct Bone;
}
namespace UnityEngine::InputSystem::XR {
struct Eyes;
}
namespace UnityEngine::InputSystem::XR {
struct PoseState;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::XR::OpenXR::Input {
struct Haptic;
}
namespace UnityEngine::XR::OpenXR::Input {
struct Pose;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
template<typename TValue>
class InputProcessor_1;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<System::Int32Enum>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<UnityEngine::InputSystem::XR::Bone>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<UnityEngine::Quaternion>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<UnityEngine::Vector2>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<UnityEngine::Vector3>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<bool>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<double_t>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<float_t>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<int32_t>;
}
namespace UnityEngine::InputSystem {
template<>
class InputProcessor_1<uint32_t>;
}
// Type: UnityEngine.InputSystem::InputProcessor`1
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6338)), TypeDefinitionIndex(TypeDefinitionIndex(6337))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6338), inst: 92 })
// CS Name: UnityEngine.InputSystem.InputProcessor`1
class CORDL_TYPE InputProcessor_1<int32_t> : public UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputProcessor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: " const&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputProcessor_1(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor(ptr) {
}


  constexpr InputProcessor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputProcessor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputProcessor_1& operator=(InputProcessor_1&& o) noexcept = default;
  constexpr InputProcessor_1& operator=(InputProcessor_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Process(int32_t value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit InputProcessor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6338)), TypeDefinitionIndex(TypeDefinitionIndex(6337))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6338), inst: 99 })
// CS Name: UnityEngine.InputSystem.InputProcessor`1
class CORDL_TYPE InputProcessor_1<bool> : public UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputProcessor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: " const&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputProcessor_1(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor(ptr) {
}


  constexpr InputProcessor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputProcessor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputProcessor_1& operator=(InputProcessor_1&& o) noexcept = default;
  constexpr InputProcessor_1& operator=(InputProcessor_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Process(bool value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit InputProcessor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6338)), TypeDefinitionIndex(TypeDefinitionIndex(6337))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6338), inst: 374 })
// CS Name: UnityEngine.InputSystem.InputProcessor`1
class CORDL_TYPE InputProcessor_1<float_t> : public UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputProcessor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: " const&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputProcessor_1(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor(ptr) {
}


  constexpr InputProcessor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputProcessor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputProcessor_1& operator=(InputProcessor_1&& o) noexcept = default;
  constexpr InputProcessor_1& operator=(InputProcessor_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t Process(float_t value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit InputProcessor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6338)), TypeDefinitionIndex(TypeDefinitionIndex(6337))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6338), inst: 393 })
// CS Name: UnityEngine.InputSystem.InputProcessor`1
class CORDL_TYPE InputProcessor_1<UnityEngine::Vector2> : public UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputProcessor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: " const&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputProcessor_1(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor(ptr) {
}


  constexpr InputProcessor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputProcessor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputProcessor_1& operator=(InputProcessor_1&& o) noexcept = default;
  constexpr InputProcessor_1& operator=(InputProcessor_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector2 Process(UnityEngine::Vector2 value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit InputProcessor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6338)), TypeDefinitionIndex(TypeDefinitionIndex(6337))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6338), inst: 394 })
// CS Name: UnityEngine.InputSystem.InputProcessor`1
class CORDL_TYPE InputProcessor_1<UnityEngine::Vector3> : public UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputProcessor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: " const&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputProcessor_1(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor(ptr) {
}


  constexpr InputProcessor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputProcessor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputProcessor_1& operator=(InputProcessor_1&& o) noexcept = default;
  constexpr InputProcessor_1& operator=(InputProcessor_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector3 Process(UnityEngine::Vector3 value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit InputProcessor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6337)), TypeDefinitionIndex(TypeDefinitionIndex(6338))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6338), inst: 730 })
// CS Name: UnityEngine.InputSystem.InputProcessor`1
class CORDL_TYPE InputProcessor_1<uint32_t> : public UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputProcessor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: " const&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputProcessor_1(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor(ptr) {
}


  constexpr InputProcessor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputProcessor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputProcessor_1& operator=(InputProcessor_1&& o) noexcept = default;
  constexpr InputProcessor_1& operator=(InputProcessor_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 uint32_t Process(uint32_t value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit InputProcessor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6338)), TypeDefinitionIndex(TypeDefinitionIndex(6337))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6338), inst: 2602 })
// CS Name: UnityEngine.InputSystem.InputProcessor`1
class CORDL_TYPE InputProcessor_1<double_t> : public UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputProcessor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: " const&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputProcessor_1(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor(ptr) {
}


  constexpr InputProcessor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputProcessor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputProcessor_1& operator=(InputProcessor_1&& o) noexcept = default;
  constexpr InputProcessor_1& operator=(InputProcessor_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t Process(double_t value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit InputProcessor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6337)), TypeDefinitionIndex(TypeDefinitionIndex(6338))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6338), inst: 3226 })
// CS Name: UnityEngine.InputSystem.InputProcessor`1
class CORDL_TYPE InputProcessor_1<UnityEngine::Quaternion> : public UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputProcessor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: " const&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputProcessor_1(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor(ptr) {
}


  constexpr InputProcessor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputProcessor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputProcessor_1& operator=(InputProcessor_1&& o) noexcept = default;
  constexpr InputProcessor_1& operator=(InputProcessor_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Quaternion Process(UnityEngine::Quaternion value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit InputProcessor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6338)), TypeDefinitionIndex(TypeDefinitionIndex(6337))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6338), inst: 3758 })
// CS Name: UnityEngine.InputSystem.InputProcessor`1
class CORDL_TYPE InputProcessor_1<UnityEngine::InputSystem::XR::Bone> : public UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputProcessor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: " const&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputProcessor_1(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor(ptr) {
}


  constexpr InputProcessor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputProcessor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputProcessor_1& operator=(InputProcessor_1&& o) noexcept = default;
  constexpr InputProcessor_1& operator=(InputProcessor_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::InputSystem::XR::Bone Process(UnityEngine::InputSystem::XR::Bone value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit InputProcessor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6338)), TypeDefinitionIndex(TypeDefinitionIndex(6337))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6338), inst: 3759 })
// CS Name: UnityEngine.InputSystem.InputProcessor`1
class CORDL_TYPE InputProcessor_1<UnityEngine::InputSystem::XR::Eyes> : public UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputProcessor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: " const&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputProcessor_1(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor(ptr) {
}


  constexpr InputProcessor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputProcessor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputProcessor_1& operator=(InputProcessor_1&& o) noexcept = default;
  constexpr InputProcessor_1& operator=(InputProcessor_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::InputSystem::XR::Eyes Process(UnityEngine::InputSystem::XR::Eyes value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit InputProcessor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6337)), TypeDefinitionIndex(TypeDefinitionIndex(6338))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6338), inst: 3760 })
// CS Name: UnityEngine.InputSystem.InputProcessor`1
class CORDL_TYPE InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic> : public UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputProcessor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: " const&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputProcessor_1(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor(ptr) {
}


  constexpr InputProcessor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputProcessor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputProcessor_1& operator=(InputProcessor_1&& o) noexcept = default;
  constexpr InputProcessor_1& operator=(InputProcessor_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::XR::OpenXR::Input::Haptic Process(UnityEngine::XR::OpenXR::Input::Haptic value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit InputProcessor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6338)), TypeDefinitionIndex(TypeDefinitionIndex(6337))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6338), inst: 3761 })
// CS Name: UnityEngine.InputSystem.InputProcessor`1
class CORDL_TYPE InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose> : public UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputProcessor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: " const&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputProcessor_1(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor(ptr) {
}


  constexpr InputProcessor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputProcessor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputProcessor_1& operator=(InputProcessor_1&& o) noexcept = default;
  constexpr InputProcessor_1& operator=(InputProcessor_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::XR::OpenXR::Input::Pose Process(UnityEngine::XR::OpenXR::Input::Pose value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit InputProcessor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6338)), TypeDefinitionIndex(TypeDefinitionIndex(6337))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6338), inst: 3762 })
// CS Name: UnityEngine.InputSystem.InputProcessor`1
class CORDL_TYPE InputProcessor_1<UnityEngine::InputSystem::XR::PoseState> : public UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputProcessor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: " const&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputProcessor_1(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor(ptr) {
}


  constexpr InputProcessor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputProcessor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputProcessor_1& operator=(InputProcessor_1&& o) noexcept = default;
  constexpr InputProcessor_1& operator=(InputProcessor_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::InputSystem::XR::PoseState Process(UnityEngine::InputSystem::XR::PoseState value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit InputProcessor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6337)), TypeDefinitionIndex(TypeDefinitionIndex(6338))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6338), inst: 3764 })
// CS Name: UnityEngine.InputSystem.InputProcessor`1
class CORDL_TYPE InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState> : public UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputProcessor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: " const&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputProcessor_1(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor(ptr) {
}


  constexpr InputProcessor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputProcessor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputProcessor_1& operator=(InputProcessor_1&& o) noexcept = default;
  constexpr InputProcessor_1& operator=(InputProcessor_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::InputSystem::LowLevel::TouchState Process(UnityEngine::InputSystem::LowLevel::TouchState value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit InputProcessor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6337)), TypeDefinitionIndex(TypeDefinitionIndex(6338))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6338), inst: 4831 })
// CS Name: UnityEngine.InputSystem.InputProcessor`1
class CORDL_TYPE InputProcessor_1<System::Int32Enum> : public UnityEngine::InputSystem::InputProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputProcessor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: " const&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
constexpr InputProcessor_1(InputProcessor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputProcessor_1(void* ptr) noexcept : UnityEngine::InputSystem::InputProcessor(ptr) {
}


  constexpr InputProcessor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputProcessor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputProcessor_1& operator=(InputProcessor_1&& o) noexcept = default;
  constexpr InputProcessor_1& operator=(InputProcessor_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Int32Enum Process(System::Int32Enum value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
 void Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control) ;

// Ctor Parameters []
explicit InputProcessor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::InputSystem::InputProcessor_1, "UnityEngine.InputSystem", "InputProcessor`1");
