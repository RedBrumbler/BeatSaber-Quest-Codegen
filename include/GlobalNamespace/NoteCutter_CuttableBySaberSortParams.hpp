// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NoteCutter
#include "GlobalNamespace/NoteCutter.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CuttableBySaber
  class CuttableBySaber;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoteCutter::CuttableBySaberSortParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutter::CuttableBySaberSortParams*, "", "NoteCutter/CuttableBySaberSortParams");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutter/CuttableBySaberSortParams
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteCutter::CuttableBySaberSortParams : public ::Il2CppObject {
    public:
    public:
    // public CuttableBySaber cuttableBySaber
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::CuttableBySaber* cuttableBySaber;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CuttableBySaber*) == 0x8);
    // public System.Single distance
    // Size: 0x4
    // Offset: 0x18
    float distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 pos
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 pos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public CuttableBySaber cuttableBySaber
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CuttableBySaber*& dyn_cuttableBySaber();
    // Get instance field reference: public System.Single distance
    [[deprecated("Use field access instead!")]] float& dyn_distance();
    // Get instance field reference: public UnityEngine.Vector3 pos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_pos();
    // public System.Void .ctor()
    // Offset: 0x143D548
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutter::CuttableBySaberSortParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteCutter::CuttableBySaberSortParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutter::CuttableBySaberSortParams*, creationType>()));
    }
  }; // NoteCutter/CuttableBySaberSortParams
  #pragma pack(pop)
  static check_size<sizeof(NoteCutter::CuttableBySaberSortParams), 28 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_NoteCutter_CuttableBySaberSortParamsSizeCheck;
  static_assert(sizeof(NoteCutter::CuttableBySaberSortParams) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteCutter::CuttableBySaberSortParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
