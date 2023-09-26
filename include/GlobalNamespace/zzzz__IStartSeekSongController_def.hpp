#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace UnityEngine {
class WaitUntil;
}
// Forward declare root types
namespace GlobalNamespace {
class IStartSeekSongController;
}
// Type: ::IStartSeekSongController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5427))
// CS Name: IStartSeekSongController
class CORDL_TYPE IStartSeekSongController : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IStartSeekSongController() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IStartSeekSongController(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 UnityEngine::WaitUntil __declspec(property(get=get_waitUntilIsReadyToStartTheSong))  waitUntilIsReadyToStartTheSong;


// Methods

/// @brief Method get_waitUntilIsReadyToStartTheSong addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::WaitUntil get_waitUntilIsReadyToStartTheSong() ;

/// @brief Method StartSong addr 0x0 size 0xffffffffffffffff virtual true final false
 void StartSong(float_t offsetTime) ;

/// @brief Method SeekTo addr 0x0 size 0xffffffffffffffff virtual true final false
 void SeekTo(float_t songTime) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IStartSeekSongController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IStartSeekSongController, "", "IStartSeekSongController");
