#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncVoipAttenuationValue_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class NetSyncVoipAttenuationValueList;
}
// Type: Oculus.Platform.Models::NetSyncVoipAttenuationValueList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13429)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13429), inst: 1146 }), TypeDefinitionIndex(TypeDefinitionIndex(13471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13472))
// CS Name: Oculus.Platform.Models.NetSyncVoipAttenuationValueList
class CORDL_TYPE NetSyncVoipAttenuationValueList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::NetSyncVoipAttenuationValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NetSyncVoipAttenuationValueList() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncVoipAttenuationValueList", modifiers: " const&", def_value: None }]
constexpr NetSyncVoipAttenuationValueList(NetSyncVoipAttenuationValueList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncVoipAttenuationValueList", modifiers: "&&", def_value: None }]
constexpr NetSyncVoipAttenuationValueList(NetSyncVoipAttenuationValueList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetSyncVoipAttenuationValueList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::NetSyncVoipAttenuationValue>(ptr) {
}


  constexpr NetSyncVoipAttenuationValueList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetSyncVoipAttenuationValueList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetSyncVoipAttenuationValueList& operator=(NetSyncVoipAttenuationValueList&& o) noexcept = default;
  constexpr NetSyncVoipAttenuationValueList& operator=(NetSyncVoipAttenuationValueList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit NetSyncVoipAttenuationValueList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x25d170c size 0x23c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::NetSyncVoipAttenuationValueList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::NetSyncVoipAttenuationValueList, "Oculus.Platform.Models", "NetSyncVoipAttenuationValueList");
