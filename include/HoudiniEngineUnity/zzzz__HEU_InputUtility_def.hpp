#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_InputInterface;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_InputHDAInfo;
}
namespace System {
class Type;
}
namespace HoudiniEngineUnity {
class HEU_InputNode;
}
namespace HoudiniEngineUnity {
class HEU_InputObjectInfo;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputUtility;
}
// Type: HoudiniEngineUnity::HEU_InputUtility
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9809))
// CS Name: HoudiniEngineUnity.HEU_InputUtility
class CORDL_TYPE HEU_InputUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_InputUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputUtility", modifiers: " const&", def_value: None }]
constexpr HEU_InputUtility(HEU_InputUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputUtility", modifiers: "&&", def_value: None }]
constexpr HEU_InputUtility(HEU_InputUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_InputUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_InputUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_InputUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_InputUtility& operator=(HEU_InputUtility&& o) noexcept = default;
  constexpr HEU_InputUtility& operator=(HEU_InputUtility const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputInterface> __declspec(property(get=__get__inputInterfaces, put=__set__inputInterfaces))  _inputInterfaces;

static void __set__inputInterfaces(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputInterface> value) ;

static System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputInterface> __get__inputInterfaces() ;


// Methods

/// @brief Method GetHighestPriority addr 0x20946b0 size 0xcc virtual false final false
static int32_t GetHighestPriority() ;

/// @brief Method RegisterInputInterface addr 0x209477c size 0x29c virtual false final false
static void RegisterInputInterface(HoudiniEngineUnity::HEU_InputInterface inputInterface) ;

/// @brief Method UnregisterInputInterface addr 0x2094b70 size 0x80 virtual false final false
static void UnregisterInputInterface(HoudiniEngineUnity::HEU_InputInterface inputInterface) ;

/// @brief Method GetInputInterfaceByType addr 0x2094a18 size 0x158 virtual false final false
static HoudiniEngineUnity::HEU_InputInterface GetInputInterfaceByType(System::Type type) ;

/// @brief Method GetInputInterface addr 0x2094bf0 size 0x118 virtual false final false
static HoudiniEngineUnity::HEU_InputInterface GetInputInterface(UnityEngine::GameObject inputObject) ;

/// @brief Method GetInputInterface addr 0x2094d08 size 0xe0 virtual false final false
static HoudiniEngineUnity::HEU_InputInterface GetInputInterface(HoudiniEngineUnity::HEU_InputObjectInfo inputObjectInfo) ;

/// @brief Method CreateInputNodeWithMultiObjects addr 0x2094de8 size 0x5d0 virtual false final false
static bool CreateInputNodeWithMultiObjects(HoudiniEngineUnity::HEU_SessionBase session, int32_t assetID, ByRef<int32_t> connectMergeID, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectInfo>> inputObjects, ByRef<System::Collections::Generic::List_1<int32_t>> inputObjectsConnectedAssetIDs, HoudiniEngineUnity::HEU_InputNode inputNode) ;

/// @brief Method CreateInputNodeWithMultiAssets addr 0x20956e0 size 0x3c4 virtual false final false
static bool CreateInputNodeWithMultiAssets(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset, ByRef<int32_t> connectMergeID, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputHDAInfo>> inputAssetInfos, bool bKeepWorldTransform, int32_t mergeParentID) ;

/// @brief Method UploadInputObjectTransform addr 0x20953b8 size 0x328 virtual false final false
static bool UploadInputObjectTransform(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_InputObjectInfo inputObject, int32_t inputNodeID, bool bKeepWorldTransform) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_InputUtility);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_InputUtility, "HoudiniEngineUnity", "HEU_InputUtility");
