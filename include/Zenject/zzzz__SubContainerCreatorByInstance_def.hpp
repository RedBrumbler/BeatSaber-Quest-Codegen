#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByInstance;
}
// Type: Zenject::SubContainerCreatorByInstance
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11205))
// CS Name: Zenject.SubContainerCreatorByInstance
class CORDL_TYPE SubContainerCreatorByInstance : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::ISubContainerCreator
constexpr operator  Zenject::ISubContainerCreator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SubContainerCreatorByInstance() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstance", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByInstance(SubContainerCreatorByInstance const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstance", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByInstance(SubContainerCreatorByInstance&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByInstance(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubContainerCreatorByInstance& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByInstance& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByInstance& operator=(SubContainerCreatorByInstance&& o) noexcept = default;
  constexpr SubContainerCreatorByInstance& operator=(SubContainerCreatorByInstance const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__subcontainer, put=__set__subcontainer))  _subcontainer;

constexpr void __set__subcontainer(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__subcontainer() const;


// Methods

// Ctor Parameters [CppParam { name: "subcontainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }]
explicit SubContainerCreatorByInstance(Zenject::DiContainer subcontainer) ;

/// @brief Method .ctor addr 0x2dc4280 size 0x28 virtual false final false
 void _ctor(Zenject::DiContainer subcontainer) ;

/// @brief Method CreateSubContainer addr 0x2dc42a8 size 0x68 virtual true final true
 Zenject::DiContainer CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SubContainerCreatorByInstance);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByInstance, "Zenject", "SubContainerCreatorByInstance");
