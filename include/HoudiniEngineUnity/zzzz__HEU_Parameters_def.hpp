#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_ParameterModifier;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmChoiceInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
struct HAPI_TransformEuler;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace HoudiniEngineUnity {
class HEU_ParameterData;
}
namespace HoudiniEngineUnity {
class HEU_InputNode;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_Parameters;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0;
}
// Type: ::<>c__DisplayClass35_0
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9723))
// CS Name: HoudiniEngineUnity.HEU_Parameters::<>c__DisplayClass35_0
class CORDL_TYPE HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0(HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0(HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0& operator=(HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0& operator=(HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_parentID, put=__set_parentID))  parentID;

constexpr void __set_parentID(int32_t value) ;

constexpr int32_t __get_parentID() const;

 System::Predicate_1<HoudiniEngineUnity::HAPI_ParmInfo> __declspec(property(get=__get___9__0, put=__set___9__0))  __9__0;

constexpr void __set___9__0(System::Predicate_1<HoudiniEngineUnity::HAPI_ParmInfo> value) ;

constexpr System::Predicate_1<HoudiniEngineUnity::HAPI_ParmInfo> __get___9__0() const;


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0() ;

/// @brief Method .ctor addr 0x205ac20 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Initialize>b__0 addr 0x205d7d0 size 0x14 virtual false final false
 bool _Initialize_b__0(HoudiniEngineUnity::HAPI_ParmInfo p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_Parameters
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9724))
// CS Name: HoudiniEngineUnity.HEU_Parameters
class CORDL_TYPE HEU_Parameters : public UnityEngine::ScriptableObject {
public:
// Declarations
using __c__DisplayClass35_0 = HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_Parameters>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_Parameters>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HEU_Parameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Parameters", modifiers: " const&", def_value: None }]
constexpr HEU_Parameters(HEU_Parameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Parameters", modifiers: "&&", def_value: None }]
constexpr HEU_Parameters(HEU_Parameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_Parameters(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr HEU_Parameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_Parameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_Parameters& operator=(HEU_Parameters&& o) noexcept = default;
  constexpr HEU_Parameters& operator=(HEU_Parameters const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__nodeID, put=__set__nodeID))  _nodeID;

constexpr void __set__nodeID(int32_t value) ;

constexpr int32_t __get__nodeID() const;

 ::StringW __declspec(property(get=__get__uiLabel, put=__set__uiLabel))  _uiLabel;

constexpr void __set__uiLabel(::StringW value) ;

constexpr ::StringW __get__uiLabel() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__paramInts, put=__set__paramInts))  _paramInts;

constexpr void __set__paramInts(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__paramInts() const;

 ::ArrayW<float_t> __declspec(property(get=__get__paramFloats, put=__set__paramFloats))  _paramFloats;

constexpr void __set__paramFloats(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__paramFloats() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__paramStrings, put=__set__paramStrings))  _paramStrings;

constexpr void __set__paramStrings(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__paramStrings() const;

 ::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo> __declspec(property(get=__get__paramChoices, put=__set__paramChoices))  _paramChoices;

constexpr void __set__paramChoices(::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo> value) ;

constexpr ::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo> __get__paramChoices() const;

 System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get__rootParameters, put=__set__rootParameters))  _rootParameters;

constexpr void __set__rootParameters(System::Collections::Generic::List_1<int32_t> value) ;

constexpr System::Collections::Generic::List_1<int32_t> __get__rootParameters() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterData> __declspec(property(get=__get__parameterList, put=__set__parameterList))  _parameterList;

constexpr void __set__parameterList(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterData> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterData> __get__parameterList() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier> __declspec(property(get=__get__parameterModifiers, put=__set__parameterModifiers))  _parameterModifiers;

constexpr void __set__parameterModifiers(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier> __get__parameterModifiers() const;

 bool __declspec(property(get=__get__regenerateParameters, put=__set__regenerateParameters))  _regenerateParameters;

constexpr void __set__regenerateParameters(bool value) ;

constexpr bool __get__regenerateParameters() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__presetData, put=__set__presetData))  _presetData;

constexpr void __set__presetData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__presetData() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__defaultPresetData, put=__set__defaultPresetData))  _defaultPresetData;

constexpr void __set__defaultPresetData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__defaultPresetData() const;

 bool __declspec(property(get=__get__validParameters, put=__set__validParameters))  _validParameters;

constexpr void __set__validParameters(bool value) ;

constexpr bool __get__validParameters() const;

 bool __declspec(property(get=__get__showParameters, put=__set__showParameters))  _showParameters;

constexpr void __set__showParameters(bool value) ;

constexpr bool __get__showParameters() const;

 bool __declspec(property(get=__get__recacheUI, put=__set__recacheUI))  _recacheUI;

constexpr void __set__recacheUI(bool value) ;

constexpr bool __get__recacheUI() const;


// Properties

 System::Collections::Generic::List_1<int32_t> __declspec(property(get=get_RootParameters, put=set_RootParameters))  RootParameters;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier> __declspec(property(get=get_ParameterModifiers, put=set_ParameterModifiers))  ParameterModifiers;

 bool __declspec(property(get=get_RequiresRegeneration, put=set_RequiresRegeneration))  RequiresRegeneration;

 bool __declspec(property(get=get_ShowParameters, put=set_ShowParameters))  ShowParameters;

 bool __declspec(property(get=get_RecacheUI, put=set_RecacheUI))  RecacheUI;


// Methods

/// @brief Method get_RootParameters addr 0x2058dd0 size 0x8 virtual false final false
 System::Collections::Generic::List_1<int32_t> get_RootParameters() ;

/// @brief Method set_RootParameters addr 0x2058dd8 size 0x8 virtual false final false
 void set_RootParameters(System::Collections::Generic::List_1<int32_t> value) ;

/// @brief Method get_ParameterModifiers addr 0x2058de0 size 0x8 virtual false final false
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier> get_ParameterModifiers() ;

/// @brief Method set_ParameterModifiers addr 0x2058de8 size 0x8 virtual false final false
 void set_ParameterModifiers(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterModifier> value) ;

/// @brief Method get_RequiresRegeneration addr 0x2058df0 size 0x8 virtual false final false
 bool get_RequiresRegeneration() ;

/// @brief Method set_RequiresRegeneration addr 0x2058df8 size 0xc virtual false final false
 void set_RequiresRegeneration(bool value) ;

/// @brief Method GetPresetData addr 0x2058e04 size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetPresetData() ;

/// @brief Method SetPresetData addr 0x2058e0c size 0x8 virtual false final false
 void SetPresetData(::ArrayW<uint8_t> data) ;

/// @brief Method GetDefaultPresetData addr 0x2058e14 size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetDefaultPresetData() ;

/// @brief Method AreParametersValid addr 0x2058e1c size 0x8 virtual false final false
 bool AreParametersValid() ;

/// @brief Method get_ShowParameters addr 0x2058e24 size 0x8 virtual false final false
 bool get_ShowParameters() ;

/// @brief Method set_ShowParameters addr 0x2058e2c size 0xc virtual false final false
 void set_ShowParameters(bool value) ;

/// @brief Method get_RecacheUI addr 0x2058e38 size 0x8 virtual false final false
 bool get_RecacheUI() ;

/// @brief Method set_RecacheUI addr 0x2058e40 size 0xc virtual false final false
 void set_RecacheUI(bool value) ;

/// @brief Method CleanUp addr 0x2058e4c size 0x29c virtual false final false
 void CleanUp() ;

/// @brief Method Initialize addr 0x20590e8 size 0x1b38 virtual false final false
 bool Initialize(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, ByRef<HoudiniEngineUnity::HAPI_NodeInfo> nodeInfo, System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_ParameterData> previousParamFolders, System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_InputNode> previousParamInputNodes, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset) ;

/// @brief Method SetupRampParameter addr 0x205ac28 size 0x3f0 virtual false final false
 void SetupRampParameter(HoudiniEngineUnity::HEU_ParameterData rampParameter) ;

/// @brief Method GetParameters addr 0x205b018 size 0x8 virtual false final false
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ParameterData> GetParameters() ;

/// @brief Method GetParameter addr 0x2056688 size 0x84 virtual false final false
 HoudiniEngineUnity::HEU_ParameterData GetParameter(int32_t listIndex) ;

/// @brief Method GetParameter addr 0x205b020 size 0x190 virtual false final false
 HoudiniEngineUnity::HEU_ParameterData GetParameter(::StringW name) ;

/// @brief Method GetParameterWithParmID addr 0x20564c4 size 0x164 virtual false final false
 HoudiniEngineUnity::HEU_ParameterData GetParameterWithParmID(int32_t parmID) ;

/// @brief Method RemoveParameter addr 0x205b1b0 size 0x80 virtual false final false
 void RemoveParameter(int32_t listIndex) ;

/// @brief Method GetChosenIndexFromChoiceList addr 0x205b230 size 0xac virtual false final false
 int32_t GetChosenIndexFromChoiceList(HoudiniEngineUnity::HEU_ParameterData inChoiceParameter) ;

/// @brief Method GetStringFromParameter addr 0x205b2dc size 0x48 virtual false final false
 ::StringW GetStringFromParameter(::StringW paramName) ;

/// @brief Method SetStringToParameter addr 0x205b324 size 0x70 virtual false final false
 void SetStringToParameter(::StringW paramName, ::StringW value) ;

/// @brief Method HaveParametersChanged addr 0x205b394 size 0x410 virtual false final false
 bool HaveParametersChanged() ;

/// @brief Method UploadValuesToHoudini addr 0x205b7a4 size 0x71c virtual false final false
 bool UploadValuesToHoudini(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset, bool bDoCheck, bool bForceUploadInputs) ;

/// @brief Method InsertInstanceToMultiParm addr 0x205bec0 size 0xd4 virtual false final false
 void InsertInstanceToMultiParm(int32_t unityParamIndex, int32_t instanceIndex, int32_t numInstancesToAdd) ;

/// @brief Method RemoveInstancesFromMultiParm addr 0x205bf94 size 0xd4 virtual false final false
 void RemoveInstancesFromMultiParm(int32_t unityParamIndex, int32_t instanceIndex, int32_t numInstancesToRemove) ;

/// @brief Method ClearInstancesFromMultiParm addr 0x205c068 size 0xc0 virtual false final false
 void ClearInstancesFromMultiParm(int32_t unityParamIndex) ;

/// @brief Method HasModifiersPending addr 0x205c128 size 0x50 virtual false final false
 bool HasModifiersPending() ;

/// @brief Method ProcessModifiers addr 0x205c178 size 0x694 virtual false final false
 void ProcessModifiers(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method GetParameterDataForUIRestore addr 0x205c80c size 0x1e8 virtual false final false
 void GetParameterDataForUIRestore(System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_ParameterData> folderParams, System::Collections::Generic::Dictionary_2<::StringW,HoudiniEngineUnity::HEU_InputNode> inputNodeParams) ;

/// @brief Method GetInputNodeConnectionObjects addr 0x205c9f4 size 0x4 virtual false final false
 void GetInputNodeConnectionObjects(System::Collections::Generic::List_1<UnityEngine::GameObject> inputNodeObjects) ;

/// @brief Method DownloadPresetData addr 0x205c9f8 size 0x50 virtual false final false
 void DownloadPresetData(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method UploadPresetData addr 0x205ca48 size 0x44 virtual false final false
 void UploadPresetData(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method DownloadAsDefaultPresetData addr 0x205ca8c size 0x50 virtual false final false
 void DownloadAsDefaultPresetData(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method UploadParameterInputs addr 0x205cadc size 0x1e0 virtual false final false
 void UploadParameterInputs(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset, bool bForceUpdate) ;

/// @brief Method UpdateTransformParameters addr 0x205ccbc size 0xa8 virtual false final false
 void UpdateTransformParameters(HoudiniEngineUnity::HEU_SessionBase session, ByRef<HoudiniEngineUnity::HAPI_TransformEuler> HAPITransform) ;

/// @brief Method SyncParameterFromHoudini addr 0x205cd64 size 0x80 virtual false final false
 void SyncParameterFromHoudini(HoudiniEngineUnity::HEU_SessionBase session, ::StringW parameterName) ;

/// @brief Method SyncInternalParametersForUndoCompare addr 0x205cde4 size 0x41c virtual false final false
 void SyncInternalParametersForUndoCompare(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method ResetAllToDefault addr 0x205d200 size 0x188 virtual false final false
 void ResetAllToDefault(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method IsEquivalentTo addr 0x205d388 size 0x318 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_Parameters other) ;

// Ctor Parameters []
explicit HEU_Parameters() ;

/// @brief Method .ctor addr 0x205d6a0 size 0x130 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_Parameters);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_Parameters, "HoudiniEngineUnity", "HEU_Parameters");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Parameters____c__DisplayClass35_0, "HoudiniEngineUnity", "HEU_Parameters/<>c__DisplayClass35_0");
