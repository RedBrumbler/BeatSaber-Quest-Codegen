#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class NamedPreset;
}
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset;
}
// Type: ::Preset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4461))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4449))
// CS Name: BloomPrePassGraphicsSettingsPresetsSO::Preset
class CORDL_TYPE GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset : public GlobalNamespace::NamedPreset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset(GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset(GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset(void* ptr) noexcept : GlobalNamespace::NamedPreset(ptr) {
}


  constexpr GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset& operator=(GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset&& o) noexcept = default;
  constexpr GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset& operator=(GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BloomPrePassEffectSO __declspec(property(get=__get_bloomPrePassEffect, put=__set_bloomPrePassEffect))  bloomPrePassEffect;

constexpr void __set_bloomPrePassEffect(GlobalNamespace::BloomPrePassEffectSO value) ;

constexpr GlobalNamespace::BloomPrePassEffectSO __get_bloomPrePassEffect() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset() ;

/// @brief Method .ctor addr 0x2227d84 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BloomPrePassGraphicsSettingsPresetsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4462))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4450))
// CS Name: BloomPrePassGraphicsSettingsPresetsSO
class CORDL_TYPE BloomPrePassGraphicsSettingsPresetsSO : public GlobalNamespace::NamedPresetsSO {
public:
// Declarations
using Preset = GlobalNamespace::GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BloomPrePassGraphicsSettingsPresetsSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassGraphicsSettingsPresetsSO", modifiers: " const&", def_value: None }]
constexpr BloomPrePassGraphicsSettingsPresetsSO(BloomPrePassGraphicsSettingsPresetsSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassGraphicsSettingsPresetsSO", modifiers: "&&", def_value: None }]
constexpr BloomPrePassGraphicsSettingsPresetsSO(BloomPrePassGraphicsSettingsPresetsSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassGraphicsSettingsPresetsSO(void* ptr) noexcept : GlobalNamespace::NamedPresetsSO(ptr) {
}


  constexpr BloomPrePassGraphicsSettingsPresetsSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassGraphicsSettingsPresetsSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassGraphicsSettingsPresetsSO& operator=(BloomPrePassGraphicsSettingsPresetsSO&& o) noexcept = default;
  constexpr BloomPrePassGraphicsSettingsPresetsSO& operator=(BloomPrePassGraphicsSettingsPresetsSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset> __declspec(property(get=__get__presets, put=__set__presets))  _presets;

constexpr void __set__presets(::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset> __get__presets() const;


// Properties

 ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset> __declspec(property(get=get_presets))  presets;

 ::ArrayW<GlobalNamespace::NamedPreset> __declspec(property(get=get_namedPresets))  namedPresets;


// Methods

/// @brief Method get_presets addr 0x2227d6c size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset> get_presets() ;

/// @brief Method get_namedPresets addr 0x2227d74 size 0x8 virtual true final false
 ::ArrayW<GlobalNamespace::NamedPreset> get_namedPresets() ;

// Ctor Parameters []
explicit BloomPrePassGraphicsSettingsPresetsSO() ;

/// @brief Method .ctor addr 0x2227d7c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO, "", "BloomPrePassGraphicsSettingsPresetsSO");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BloomPrePassGraphicsSettingsPresetsSO__Preset, "", "BloomPrePassGraphicsSettingsPresetsSO/Preset");
