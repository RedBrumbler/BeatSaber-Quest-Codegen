#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class PlayerData;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelStatsView;
}
// Type: ::LevelStatsView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5889))
// CS Name: LevelStatsView
class CORDL_TYPE LevelStatsView : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LevelStatsView() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelStatsView", modifiers: " const&", def_value: None }]
constexpr LevelStatsView(LevelStatsView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelStatsView", modifiers: "&&", def_value: None }]
constexpr LevelStatsView(LevelStatsView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelStatsView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LevelStatsView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelStatsView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelStatsView& operator=(LevelStatsView&& o) noexcept = default;
  constexpr LevelStatsView& operator=(LevelStatsView const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__highScoreText, put=__set__highScoreText))  _highScoreText;

constexpr void __set__highScoreText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__highScoreText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__maxComboText, put=__set__maxComboText))  _maxComboText;

constexpr void __set__maxComboText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__maxComboText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__maxRankText, put=__set__maxRankText))  _maxRankText;

constexpr void __set__maxRankText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__maxRankText() const;


// Methods

/// @brief Method Hide addr 0x21c3110 size 0x24 virtual false final false
 void Hide() ;

/// @brief Method ShowStats addr 0x21c3134 size 0x3b4 virtual false final false
 void ShowStats(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::PlayerData playerData) ;

// Ctor Parameters []
explicit LevelStatsView() ;

/// @brief Method .ctor addr 0x21c34e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LevelStatsView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelStatsView, "", "LevelStatsView");
