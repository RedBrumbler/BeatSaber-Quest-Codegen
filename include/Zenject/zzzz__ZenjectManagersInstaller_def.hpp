#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__Installer_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ZenjectManagersInstaller;
}
// Type: Zenject::ZenjectManagersInstaller
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11092)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11092), inst: 3772 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11118))
// CS Name: Zenject.ZenjectManagersInstaller
class CORDL_TYPE ZenjectManagersInstaller : public Zenject::Installer_1<Zenject::ZenjectManagersInstaller> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ZenjectManagersInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectManagersInstaller", modifiers: " const&", def_value: None }]
constexpr ZenjectManagersInstaller(ZenjectManagersInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectManagersInstaller", modifiers: "&&", def_value: None }]
constexpr ZenjectManagersInstaller(ZenjectManagersInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZenjectManagersInstaller(void* ptr) noexcept : Zenject::Installer_1<Zenject::ZenjectManagersInstaller>(ptr) {
}


  constexpr ZenjectManagersInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZenjectManagersInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZenjectManagersInstaller& operator=(ZenjectManagersInstaller&& o) noexcept = default;
  constexpr ZenjectManagersInstaller& operator=(ZenjectManagersInstaller const& o) noexcept = default;
                


// Methods

/// @brief Method InstallBindings addr 0x2daea90 size 0x1bc virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit ZenjectManagersInstaller() ;

/// @brief Method .ctor addr 0x2daec4c size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x2daec94 size 0x58 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2daecec size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ZenjectManagersInstaller);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectManagersInstaller, "Zenject", "ZenjectManagersInstaller");
