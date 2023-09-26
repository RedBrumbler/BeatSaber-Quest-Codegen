#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class ScriptableObjectInstallerUtil;
}
// Type: Zenject::ScriptableObjectInstallerUtil
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11114))
// CS Name: Zenject.ScriptableObjectInstallerUtil
class CORDL_TYPE ScriptableObjectInstallerUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ScriptableObjectInstallerUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstallerUtil", modifiers: " const&", def_value: None }]
constexpr ScriptableObjectInstallerUtil(ScriptableObjectInstallerUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstallerUtil", modifiers: "&&", def_value: None }]
constexpr ScriptableObjectInstallerUtil(ScriptableObjectInstallerUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScriptableObjectInstallerUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScriptableObjectInstallerUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScriptableObjectInstallerUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScriptableObjectInstallerUtil& operator=(ScriptableObjectInstallerUtil&& o) noexcept = default;
  constexpr ScriptableObjectInstallerUtil& operator=(ScriptableObjectInstallerUtil const& o) noexcept = default;
                


// Methods

/// @brief Method GetDefaultResourcePath addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
static ::StringW GetDefaultResourcePath() ;

/// @brief Method CreateInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
static TInstaller CreateInstaller(::StringW resourcePath, Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ScriptableObjectInstallerUtil);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScriptableObjectInstallerUtil, "Zenject", "ScriptableObjectInstallerUtil");
