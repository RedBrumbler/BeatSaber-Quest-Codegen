#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace HMUI {
class CurvedTextMeshPro;
}
namespace System::Text {
class StringBuilder;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class SongPackMasksModel;
}
namespace GlobalNamespace {
class GameServersFilter;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServersFilterText;
}
// Type: ::GameServersFilterText
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5877))
// CS Name: GameServersFilterText
class CORDL_TYPE GameServersFilterText : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GameServersFilterText() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServersFilterText", modifiers: " const&", def_value: None }]
constexpr GameServersFilterText(GameServersFilterText const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServersFilterText", modifiers: "&&", def_value: None }]
constexpr GameServersFilterText(GameServersFilterText&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameServersFilterText(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GameServersFilterText& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameServersFilterText& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameServersFilterText& operator=(GameServersFilterText&& o) noexcept = default;
  constexpr GameServersFilterText& operator=(GameServersFilterText const& o) noexcept = default;
                


// Fields

 HMUI::CurvedTextMeshPro __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(HMUI::CurvedTextMeshPro value) ;

constexpr HMUI::CurvedTextMeshPro __get__text() const;

 GlobalNamespace::SongPackMasksModel __declspec(property(get=__get__songPackMasksModel, put=__set__songPackMasksModel))  _songPackMasksModel;

constexpr void __set__songPackMasksModel(GlobalNamespace::SongPackMasksModel value) ;

constexpr GlobalNamespace::SongPackMasksModel __get__songPackMasksModel() const;

 System::Text::StringBuilder __declspec(property(get=__get__stringBuilder, put=__set__stringBuilder))  _stringBuilder;

constexpr void __set__stringBuilder(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get__stringBuilder() const;


// Methods

/// @brief Method Setup addr 0x21be6b4 size 0x24c virtual false final false
 void Setup(GlobalNamespace::GameServersFilter filter, bool visible) ;

/// @brief Method Setup addr 0x21be900 size 0x1f8 virtual false final false
 void Setup(GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, GlobalNamespace::SongPackMask songPackMask, bool visible) ;

// Ctor Parameters []
explicit GameServersFilterText() ;

/// @brief Method .ctor addr 0x21beaf8 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameServersFilterText);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServersFilterText, "", "GameServersFilterText");
