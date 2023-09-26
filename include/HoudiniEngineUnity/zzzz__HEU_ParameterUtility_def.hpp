#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmInfo;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ParameterUtility;
}
// Type: HoudiniEngineUnity::HEU_ParameterUtility
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9725))
// CS Name: HoudiniEngineUnity.HEU_ParameterUtility
class CORDL_TYPE HEU_ParameterUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_ParameterUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ParameterUtility", modifiers: " const&", def_value: None }]
constexpr HEU_ParameterUtility(HEU_ParameterUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ParameterUtility", modifiers: "&&", def_value: None }]
constexpr HEU_ParameterUtility(HEU_ParameterUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ParameterUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_ParameterUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ParameterUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ParameterUtility& operator=(HEU_ParameterUtility&& o) noexcept = default;
  constexpr HEU_ParameterUtility& operator=(HEU_ParameterUtility const& o) noexcept = default;
                


// Methods

/// @brief Method GetToggle addr 0x205d7e4 size 0x128 virtual false final false
static bool GetToggle(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW paramName, ByRef<bool> outValue) ;

/// @brief Method SetToggle addr 0x205d90c size 0x124 virtual false final false
static bool SetToggle(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW paramName, bool setValue) ;

/// @brief Method GetInt addr 0x205da30 size 0x134 virtual false final false
static bool GetInt(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW paramName, ByRef<int32_t> outValue) ;

/// @brief Method SetInt addr 0x205db64 size 0x12c virtual false final false
static bool SetInt(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW paramName, int32_t setValue) ;

/// @brief Method GetFloat addr 0x205dc90 size 0x138 virtual false final false
static bool GetFloat(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW paramName, ByRef<float_t> outValue) ;

/// @brief Method GetFloats addr 0x205ddc8 size 0x148 virtual false final false
static bool GetFloats(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW paramName, ByRef<::ArrayW<float_t>> outValues) ;

/// @brief Method SetFloat addr 0x205df10 size 0x130 virtual false final false
static bool SetFloat(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW paramName, float_t setValue) ;

/// @brief Method SetFloats addr 0x205e040 size 0x120 virtual false final false
static bool SetFloats(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW paramName, ::ArrayW<float_t> setValues) ;

/// @brief Method GetString addr 0x205e160 size 0x13c virtual false final false
static bool GetString(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW paramName, ByRef<::StringW> outValue) ;

/// @brief Method SetString addr 0x205e29c size 0x14c virtual false final false
static bool SetString(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW paramName, ::StringW setValue) ;

/// @brief Method SetChoice addr 0x205e3e8 size 0x184 virtual false final false
static bool SetChoice(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW paramName, int32_t setValue) ;

/// @brief Method GetChoice addr 0x205e56c size 0x168 virtual false final false
static bool GetChoice(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW paramName, ByRef<int32_t> outValue) ;

/// @brief Method SetInputNode addr 0x205e6d4 size 0x1b0 virtual false final false
static bool SetInputNode(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW paramName, UnityEngine::GameObject obj, int32_t index) ;

/// @brief Method GetInputNode addr 0x205e884 size 0x1a4 virtual false final false
static bool GetInputNode(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW paramName, int32_t index, ByRef<UnityEngine::GameObject> obj) ;

/// @brief Method GetColor addr 0x205ea28 size 0x12c virtual false final false
static bool GetColor(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW paramName, ByRef<UnityEngine::Color> getValue) ;

/// @brief Method SetColor addr 0x205eb54 size 0x138 virtual false final false
static bool SetColor(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW paramName, UnityEngine::Color setValue) ;

/// @brief Method GetParameterIndexFromName addr 0x205ec8c size 0xf0 virtual false final false
static int32_t GetParameterIndexFromName(HoudiniEngineUnity::HEU_SessionBase session, ::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo> parameters, ::StringW parameterName) ;

/// @brief Method GetParameterIndexFromNameOrTag addr 0x205ed7c size 0x70 virtual false final false
static int32_t GetParameterIndexFromNameOrTag(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, ::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo> parameters, ::StringW parameterName) ;

/// @brief Method FindTextureParamByNameOrTag addr 0x205edec size 0x1c0 virtual false final false
static int32_t FindTextureParamByNameOrTag(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, ::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo> parameters, ::StringW parameterName, ::StringW useTextureParmName) ;

/// @brief Method GetParameterFloatValue addr 0x205efac size 0x10c virtual false final false
static bool GetParameterFloatValue(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, ::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo> parameters, ::StringW parameterName, float_t defaultValue, ByRef<float_t> returnValue) ;

/// @brief Method GetParameterColor3Value addr 0x205f0b8 size 0x17c virtual false final false
static bool GetParameterColor3Value(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, ::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo> parameters, ::StringW parameterName, UnityEngine::Color defaultValue, ByRef<UnityEngine::Color> outputColor) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_ParameterUtility);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_ParameterUtility, "HoudiniEngineUnity", "HEU_ParameterUtility");
