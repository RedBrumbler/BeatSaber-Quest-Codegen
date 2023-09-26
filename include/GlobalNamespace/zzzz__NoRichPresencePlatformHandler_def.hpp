#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IRichPresencePlatformHandler;
}
namespace GlobalNamespace {
class IRichPresenceData;
}
// Forward declare root types
namespace GlobalNamespace {
class NoRichPresencePlatformHandler;
}
// Type: ::NoRichPresencePlatformHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4790))
// CS Name: NoRichPresencePlatformHandler
class CORDL_TYPE NoRichPresencePlatformHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IRichPresencePlatformHandler
constexpr operator  GlobalNamespace::IRichPresencePlatformHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NoRichPresencePlatformHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoRichPresencePlatformHandler", modifiers: " const&", def_value: None }]
constexpr NoRichPresencePlatformHandler(NoRichPresencePlatformHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoRichPresencePlatformHandler", modifiers: "&&", def_value: None }]
constexpr NoRichPresencePlatformHandler(NoRichPresencePlatformHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoRichPresencePlatformHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NoRichPresencePlatformHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoRichPresencePlatformHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoRichPresencePlatformHandler& operator=(NoRichPresencePlatformHandler&& o) noexcept = default;
  constexpr NoRichPresencePlatformHandler& operator=(NoRichPresencePlatformHandler const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__currentPresenceApiName_k__BackingField, put=__set__currentPresenceApiName_k__BackingField))  _currentPresenceApiName_k__BackingField;

constexpr void __set__currentPresenceApiName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__currentPresenceApiName_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_currentPresenceApiName, put=set_currentPresenceApiName))  currentPresenceApiName;


// Methods

/// @brief Method get_currentPresenceApiName addr 0x22646dc size 0x8 virtual false final false
 ::StringW get_currentPresenceApiName() ;

/// @brief Method set_currentPresenceApiName addr 0x22646e4 size 0x8 virtual false final false
 void set_currentPresenceApiName(::StringW value) ;

/// @brief Method SetPresence addr 0x22646ec size 0xa8 virtual true final true
 void SetPresence(GlobalNamespace::IRichPresenceData richPresenceData) ;

/// @brief Method Clear addr 0x2264794 size 0x50 virtual true final true
 void Clear() ;

// Ctor Parameters []
explicit NoRichPresencePlatformHandler() ;

/// @brief Method .ctor addr 0x22647e4 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoRichPresencePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoRichPresencePlatformHandler, "", "NoRichPresencePlatformHandler");
