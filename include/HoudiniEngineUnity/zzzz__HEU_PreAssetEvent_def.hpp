#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PreAssetEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_PreAssetEvent;
}
// Type: HoudiniEngineUnity::HEU_PreAssetEvent
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9559)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10420), inst: 5070 }), TypeDefinitionIndex(TypeDefinitionIndex(10420))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9566))
// CS Name: HoudiniEngineUnity.HEU_PreAssetEvent
class CORDL_TYPE HEU_PreAssetEvent : public UnityEngine::Events::UnityEvent_1<HoudiniEngineUnity::HEU_PreAssetEventData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_PreAssetEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PreAssetEvent", modifiers: " const&", def_value: None }]
constexpr HEU_PreAssetEvent(HEU_PreAssetEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PreAssetEvent", modifiers: "&&", def_value: None }]
constexpr HEU_PreAssetEvent(HEU_PreAssetEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_PreAssetEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<HoudiniEngineUnity::HEU_PreAssetEventData>(ptr) {
}


  constexpr HEU_PreAssetEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_PreAssetEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_PreAssetEvent& operator=(HEU_PreAssetEvent&& o) noexcept = default;
  constexpr HEU_PreAssetEvent& operator=(HEU_PreAssetEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HEU_PreAssetEvent() ;

/// @brief Method .ctor addr 0x20142e0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_PreAssetEvent);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_PreAssetEvent, "HoudiniEngineUnity", "HEU_PreAssetEvent");
