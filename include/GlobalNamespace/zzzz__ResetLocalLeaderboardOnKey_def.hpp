#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class LocalLeaderboardsModel;
}
namespace UnityEngine {
struct KeyCode;
}
namespace GlobalNamespace {
class ISaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class ResetLocalLeaderboardOnKey;
}
// Type: ::ResetLocalLeaderboardOnKey
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4786))
// CS Name: ResetLocalLeaderboardOnKey
class CORDL_TYPE ResetLocalLeaderboardOnKey : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ResetLocalLeaderboardOnKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResetLocalLeaderboardOnKey", modifiers: " const&", def_value: None }]
constexpr ResetLocalLeaderboardOnKey(ResetLocalLeaderboardOnKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResetLocalLeaderboardOnKey", modifiers: "&&", def_value: None }]
constexpr ResetLocalLeaderboardOnKey(ResetLocalLeaderboardOnKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResetLocalLeaderboardOnKey(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ResetLocalLeaderboardOnKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResetLocalLeaderboardOnKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResetLocalLeaderboardOnKey& operator=(ResetLocalLeaderboardOnKey&& o) noexcept = default;
  constexpr ResetLocalLeaderboardOnKey& operator=(ResetLocalLeaderboardOnKey const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LocalLeaderboardsModel __declspec(property(get=__get__localLeaderboardsModel, put=__set__localLeaderboardsModel))  _localLeaderboardsModel;

constexpr void __set__localLeaderboardsModel(GlobalNamespace::LocalLeaderboardsModel value) ;

constexpr GlobalNamespace::LocalLeaderboardsModel __get__localLeaderboardsModel() const;

 UnityEngine::KeyCode __declspec(property(get=__get__keyCode, put=__set__keyCode))  _keyCode;

constexpr void __set__keyCode(UnityEngine::KeyCode value) ;

constexpr UnityEngine::KeyCode __get__keyCode() const;

 GlobalNamespace::ISaveData __declspec(property(get=__get__saveData, put=__set__saveData))  _saveData;

constexpr void __set__saveData(GlobalNamespace::ISaveData value) ;

constexpr GlobalNamespace::ISaveData __get__saveData() const;


// Methods

/// @brief Method Update addr 0x22644cc size 0x40 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit ResetLocalLeaderboardOnKey() ;

/// @brief Method .ctor addr 0x226450c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ResetLocalLeaderboardOnKey);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResetLocalLeaderboardOnKey, "", "ResetLocalLeaderboardOnKey");
