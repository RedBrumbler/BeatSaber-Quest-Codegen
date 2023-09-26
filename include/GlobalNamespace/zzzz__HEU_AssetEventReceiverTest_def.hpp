#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class HEU_AssetEventReceiverTest;
}
// Type: ::HEU_AssetEventReceiverTest
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9553))
// CS Name: HEU_AssetEventReceiverTest
class CORDL_TYPE HEU_AssetEventReceiverTest : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HEU_AssetEventReceiverTest() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetEventReceiverTest", modifiers: " const&", def_value: None }]
constexpr HEU_AssetEventReceiverTest(HEU_AssetEventReceiverTest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetEventReceiverTest", modifiers: "&&", def_value: None }]
constexpr HEU_AssetEventReceiverTest(HEU_AssetEventReceiverTest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_AssetEventReceiverTest(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HEU_AssetEventReceiverTest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_AssetEventReceiverTest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_AssetEventReceiverTest& operator=(HEU_AssetEventReceiverTest&& o) noexcept = default;
  constexpr HEU_AssetEventReceiverTest& operator=(HEU_AssetEventReceiverTest const& o) noexcept = default;
                


// Methods

/// @brief Method ReloadCallback addr 0x2013ab8 size 0x1ac virtual false final false
 void ReloadCallback(HoudiniEngineUnity::HEU_HoudiniAsset asset, bool success, System::Collections::Generic::List_1<UnityEngine::GameObject> outputList) ;

/// @brief Method CookedCallback addr 0x2013c64 size 0x1ac virtual false final false
 void CookedCallback(HoudiniEngineUnity::HEU_HoudiniAsset asset, bool success, System::Collections::Generic::List_1<UnityEngine::GameObject> outputList) ;

/// @brief Method BakedCallback addr 0x2013e10 size 0x1ac virtual false final false
 void BakedCallback(HoudiniEngineUnity::HEU_HoudiniAsset asset, bool success, System::Collections::Generic::List_1<UnityEngine::GameObject> outputList) ;

// Ctor Parameters []
explicit HEU_AssetEventReceiverTest() ;

/// @brief Method .ctor addr 0x2013fbc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HEU_AssetEventReceiverTest);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HEU_AssetEventReceiverTest, "", "HEU_AssetEventReceiverTest");
