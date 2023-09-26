#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class FrameCounter;
}
// Type: ::FrameCounter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13821))
// CS Name: FrameCounter
class CORDL_TYPE FrameCounter : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~FrameCounter() = default;

// Ctor Parameters [CppParam { name: "", ty: "FrameCounter", modifiers: " const&", def_value: None }]
constexpr FrameCounter(FrameCounter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FrameCounter", modifiers: "&&", def_value: None }]
constexpr FrameCounter(FrameCounter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FrameCounter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FrameCounter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FrameCounter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FrameCounter& operator=(FrameCounter&& o) noexcept = default;
  constexpr FrameCounter& operator=(FrameCounter const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__numberOfFrames, put=__set__numberOfFrames))  _numberOfFrames;

constexpr void __set__numberOfFrames(int32_t value) ;

constexpr int32_t __get__numberOfFrames() const;


// Methods

/// @brief Method Update addr 0x1fb38b4 size 0x10 virtual false final false
 void Update() ;

/// @brief Method OnDestroy addr 0x1fb38c4 size 0x9c virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit FrameCounter() ;

/// @brief Method .ctor addr 0x1fb3960 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FrameCounter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FrameCounter, "", "FrameCounter");
