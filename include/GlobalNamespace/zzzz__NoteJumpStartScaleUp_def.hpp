#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class NoteJump;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteJumpStartScaleUp;
}
// Type: ::NoteJumpStartScaleUp
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4898))
// CS Name: NoteJumpStartScaleUp
class CORDL_TYPE NoteJumpStartScaleUp : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::INoteControllerDidInitEvent
constexpr operator  GlobalNamespace::INoteControllerDidInitEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~NoteJumpStartScaleUp() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteJumpStartScaleUp", modifiers: " const&", def_value: None }]
constexpr NoteJumpStartScaleUp(NoteJumpStartScaleUp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteJumpStartScaleUp", modifiers: "&&", def_value: None }]
constexpr NoteJumpStartScaleUp(NoteJumpStartScaleUp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteJumpStartScaleUp(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteJumpStartScaleUp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteJumpStartScaleUp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteJumpStartScaleUp& operator=(NoteJumpStartScaleUp&& o) noexcept = default;
  constexpr NoteJumpStartScaleUp& operator=(NoteJumpStartScaleUp const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__fullScaleJumpPart, put=__set__fullScaleJumpPart))  _fullScaleJumpPart;

constexpr void __set__fullScaleJumpPart(float_t value) ;

constexpr float_t __get__fullScaleJumpPart() const;

 UnityEngine::Transform __declspec(property(get=__get__targetTransform, put=__set__targetTransform))  _targetTransform;

constexpr void __set__targetTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__targetTransform() const;

 GlobalNamespace::NoteController __declspec(property(get=__get__noteController, put=__set__noteController))  _noteController;

constexpr void __set__noteController(GlobalNamespace::NoteController value) ;

constexpr GlobalNamespace::NoteController __get__noteController() const;

 GlobalNamespace::NoteJump __declspec(property(get=__get__noteJump, put=__set__noteJump))  _noteJump;

constexpr void __set__noteJump(GlobalNamespace::NoteJump value) ;

constexpr GlobalNamespace::NoteJump __get__noteJump() const;


// Methods

/// @brief Method Awake addr 0x227bab8 size 0xc4 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x227bcd4 size 0x188 virtual false final false
 void OnDestroy() ;

/// @brief Method UpdateScale addr 0x227bb7c size 0x158 virtual false final false
 void UpdateScale(float_t progress) ;

/// @brief Method HandleNoteJumpDidUpdateProgress addr 0x227be5c size 0x4 virtual false final false
 void HandleNoteJumpDidUpdateProgress(float_t progress) ;

/// @brief Method HandleNoteControllerDidInit addr 0x227be60 size 0xd0 virtual true final true
 void HandleNoteControllerDidInit(GlobalNamespace::NoteControllerBase noteController) ;

// Ctor Parameters []
explicit NoteJumpStartScaleUp() ;

/// @brief Method .ctor addr 0x227bf30 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoteJumpStartScaleUp);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteJumpStartScaleUp, "", "NoteJumpStartScaleUp");
