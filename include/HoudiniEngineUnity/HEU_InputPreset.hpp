// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_InputNode/HoudiniEngineUnity.InputObjectType
#include "HoudiniEngineUnity/HEU_InputNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_InputObjectPreset
  class HEU_InputObjectPreset;
  // Forward declaring type: HEU_InputAssetPreset
  class HEU_InputAssetPreset;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_InputPreset
  class HEU_InputPreset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputPreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputPreset*, "HoudiniEngineUnity", "HEU_InputPreset");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InputPreset
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InputPreset : public ::Il2CppObject {
    public:
    public:
    // public HoudiniEngineUnity.HEU_InputNode/HoudiniEngineUnity.InputObjectType _inputObjectType
    // Size: 0x4
    // Offset: 0x10
    ::HoudiniEngineUnity::HEU_InputNode::InputObjectType inputObjectType;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_InputNode::InputObjectType) == 0x4);
    // Padding between fields: inputObjectType and: inputObjectPresets
    char __padding0[0x4] = {};
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InputObjectPreset> _inputObjectPresets
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectPreset*>* inputObjectPresets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectPreset*>*) == 0x8);
    // public System.String _inputAssetName
    // Size: 0x8
    // Offset: 0x20
    ::StringW inputAssetName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 _inputIndex
    // Size: 0x4
    // Offset: 0x28
    int inputIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: inputIndex and: inputName
    char __padding3[0x4] = {};
    // public System.String _inputName
    // Size: 0x8
    // Offset: 0x30
    ::StringW inputName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean _keepWorldTransform
    // Size: 0x1
    // Offset: 0x38
    bool keepWorldTransform;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _packGeometryBeforeMerging
    // Size: 0x1
    // Offset: 0x39
    bool packGeometryBeforeMerging;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: packGeometryBeforeMerging and: inputAssetPresets
    char __padding6[0x6] = {};
    // [OptionalFieldAttribute] Offset: 0x1151240
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InputAssetPreset> _inputAssetPresets
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputAssetPreset*>* inputAssetPresets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputAssetPreset*>*) == 0x8);
    public:
    // Get instance field reference: public HoudiniEngineUnity.HEU_InputNode/HoudiniEngineUnity.InputObjectType _inputObjectType
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_InputNode::InputObjectType& dyn__inputObjectType();
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InputObjectPreset> _inputObjectPresets
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectPreset*>*& dyn__inputObjectPresets();
    // Get instance field reference: public System.String _inputAssetName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__inputAssetName();
    // Get instance field reference: public System.Int32 _inputIndex
    [[deprecated("Use field access instead!")]] int& dyn__inputIndex();
    // Get instance field reference: public System.String _inputName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__inputName();
    // Get instance field reference: public System.Boolean _keepWorldTransform
    [[deprecated("Use field access instead!")]] bool& dyn__keepWorldTransform();
    // Get instance field reference: public System.Boolean _packGeometryBeforeMerging
    [[deprecated("Use field access instead!")]] bool& dyn__packGeometryBeforeMerging();
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InputAssetPreset> _inputAssetPresets
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputAssetPreset*>*& dyn__inputAssetPresets();
    // public System.Void .ctor()
    // Offset: 0x18D9904
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_InputPreset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_InputPreset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_InputPreset*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_InputPreset
  #pragma pack(pop)
  static check_size<sizeof(HEU_InputPreset), 64 + sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputAssetPreset*>*)> __HoudiniEngineUnity_HEU_InputPresetSizeCheck;
  static_assert(sizeof(HEU_InputPreset) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputPreset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
