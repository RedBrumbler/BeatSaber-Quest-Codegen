#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class SonyPublisherSKUSettingsSO;
}
// Type: ::SonyPublisherSKUSettingsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13835))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4691))
// CS Name: SonyPublisherSKUSettingsSO
class CORDL_TYPE SonyPublisherSKUSettingsSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SonyPublisherSKUSettingsSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyPublisherSKUSettingsSO", modifiers: " const&", def_value: None }]
constexpr SonyPublisherSKUSettingsSO(SonyPublisherSKUSettingsSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyPublisherSKUSettingsSO", modifiers: "&&", def_value: None }]
constexpr SonyPublisherSKUSettingsSO(SonyPublisherSKUSettingsSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SonyPublisherSKUSettingsSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr SonyPublisherSKUSettingsSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SonyPublisherSKUSettingsSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SonyPublisherSKUSettingsSO& operator=(SonyPublisherSKUSettingsSO&& o) noexcept = default;
  constexpr SonyPublisherSKUSettingsSO& operator=(SonyPublisherSKUSettingsSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__skuName, put=__set__skuName))  _skuName;

constexpr void __set__skuName(::StringW value) ;

constexpr ::StringW __get__skuName() const;

 ::StringW __declspec(property(get=__get__serviceIdPrefix, put=__set__serviceIdPrefix))  _serviceIdPrefix;

constexpr void __set__serviceIdPrefix(::StringW value) ;

constexpr ::StringW __get__serviceIdPrefix() const;

 ::StringW __declspec(property(get=__get__titleId, put=__set__titleId))  _titleId;

constexpr void __set__titleId(::StringW value) ;

constexpr ::StringW __get__titleId() const;

 ::StringW __declspec(property(get=__get__productLabel, put=__set__productLabel))  _productLabel;

constexpr void __set__productLabel(::StringW value) ;

constexpr ::StringW __get__productLabel() const;


// Properties

 ::StringW __declspec(property(get=get_skuName))  skuName;

 ::StringW __declspec(property(get=get_serviceIdPrefix))  serviceIdPrefix;

 ::StringW __declspec(property(get=get_titleId))  titleId;

 ::StringW __declspec(property(get=get_productLabel))  productLabel;


// Methods

/// @brief Method get_skuName addr 0x2255acc size 0x8 virtual false final false
 ::StringW get_skuName() ;

/// @brief Method get_serviceIdPrefix addr 0x2255ad4 size 0x8 virtual false final false
 ::StringW get_serviceIdPrefix() ;

/// @brief Method get_titleId addr 0x2255adc size 0x8 virtual false final false
 ::StringW get_titleId() ;

/// @brief Method get_productLabel addr 0x2255ae4 size 0x8 virtual false final false
 ::StringW get_productLabel() ;

// Ctor Parameters []
explicit SonyPublisherSKUSettingsSO() ;

/// @brief Method .ctor addr 0x2253f98 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SonyPublisherSKUSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SonyPublisherSKUSettingsSO, "", "SonyPublisherSKUSettingsSO");
