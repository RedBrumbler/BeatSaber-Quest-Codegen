// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InputObjectPreset
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InputObjectPreset : public ::Il2CppObject {
    public:
    // public System.String _gameObjectName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* gameObjectName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean _isSceneObject
    // Size: 0x1
    // Offset: 0x18
    bool isSceneObject;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _useTransformOffset
    // Size: 0x1
    // Offset: 0x19
    bool useTransformOffset;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useTransformOffset and: translateOffset
    char __padding2[0x2] = {};
    // public UnityEngine.Vector3 _translateOffset
    // Size: 0xC
    // Offset: 0x1C
    UnityEngine::Vector3 translateOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 _rotateOffset
    // Size: 0xC
    // Offset: 0x28
    UnityEngine::Vector3 rotateOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 _scaleOffset
    // Size: 0xC
    // Offset: 0x34
    UnityEngine::Vector3 scaleOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: HEU_InputObjectPreset
    HEU_InputObjectPreset(::Il2CppString* gameObjectName_ = {}, bool isSceneObject_ = {}, bool useTransformOffset_ = {}, UnityEngine::Vector3 translateOffset_ = {}, UnityEngine::Vector3 rotateOffset_ = {}, UnityEngine::Vector3 scaleOffset_ = {}) noexcept : gameObjectName{gameObjectName_}, isSceneObject{isSceneObject_}, useTransformOffset{useTransformOffset_}, translateOffset{translateOffset_}, rotateOffset{rotateOffset_}, scaleOffset{scaleOffset_} {}
    // Get instance field reference: public System.String _gameObjectName
    ::Il2CppString*& dyn__gameObjectName();
    // Get instance field reference: public System.Boolean _isSceneObject
    bool& dyn__isSceneObject();
    // Get instance field reference: public System.Boolean _useTransformOffset
    bool& dyn__useTransformOffset();
    // Get instance field reference: public UnityEngine.Vector3 _translateOffset
    UnityEngine::Vector3& dyn__translateOffset();
    // Get instance field reference: public UnityEngine.Vector3 _rotateOffset
    UnityEngine::Vector3& dyn__rotateOffset();
    // Get instance field reference: public UnityEngine.Vector3 _scaleOffset
    UnityEngine::Vector3& dyn__scaleOffset();
    // public System.Void .ctor()
    // Offset: 0x152930C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_InputObjectPreset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_InputObjectPreset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_InputObjectPreset*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_InputObjectPreset
  #pragma pack(pop)
  static check_size<sizeof(HEU_InputObjectPreset), 52 + sizeof(UnityEngine::Vector3)> __HoudiniEngineUnity_HEU_InputObjectPresetSizeCheck;
  static_assert(sizeof(HEU_InputObjectPreset) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_InputObjectPreset*, "HoudiniEngineUnity", "HEU_InputObjectPreset");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputObjectPreset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!