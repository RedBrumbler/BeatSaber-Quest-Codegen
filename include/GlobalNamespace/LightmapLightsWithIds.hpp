// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightWithIds
#include "GlobalNamespace/LightWithIds.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightmapLightsWithIds
  class LightmapLightsWithIds;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightmapLightsWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightsWithIds*, "", "LightmapLightsWithIds");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LightmapLightsWithIds
  // [TokenAttribute] Offset: FFFFFFFF
  class LightmapLightsWithIds : public ::GlobalNamespace::LightWithIds {
    public:
    // Writing base type padding for base size: 0x2A to desired offset: 0x2C
    char ___base_padding[0x2] = {};
    // Nested type: ::GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId
    class LightIntensitiesWithId;
    public:
    // private System.Single _maxTotalIntensity
    // Size: 0x4
    // Offset: 0x2C
    float maxTotalIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private LightmapLightsWithIds/LightIntensitiesWithId[] _lightIntensityData
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId*> lightIntensityData;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId*>) == 0x8);
    public:
    // Get instance field reference: private System.Single _maxTotalIntensity
    [[deprecated("Use field access instead!")]] float& dyn__maxTotalIntensity();
    // Get instance field reference: private LightmapLightsWithIds/LightIntensitiesWithId[] _lightIntensityData
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId*>& dyn__lightIntensityData();
    // public System.Single get_maxTotalIntensity()
    // Offset: 0x1CEB838
    float get_maxTotalIntensity();
    // public System.Void set_maxTotalIntensity(System.Single value)
    // Offset: 0x1CEB840
    void set_maxTotalIntensity(float value);
    // public System.Void .ctor()
    // Offset: 0x1CEBBE8
    // Implemented from: LightWithIds
    // Base method: System.Void LightWithIds::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightmapLightsWithIds* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightmapLightsWithIds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightmapLightsWithIds*, creationType>()));
    }
    // protected override System.Void ProcessNewColorData()
    // Offset: 0x1CEB848
    // Implemented from: LightWithIds
    // Base method: System.Void LightWithIds::ProcessNewColorData()
    void ProcessNewColorData();
    // protected override System.Collections.Generic.IEnumerable`1<LightWithIds/LightWithId> GetLightWithIds()
    // Offset: 0x1CEBBE0
    // Implemented from: LightWithIds
    // Base method: System.Collections.Generic.IEnumerable`1<LightWithIds/LightWithId> LightWithIds::GetLightWithIds()
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds::LightWithId*>* GetLightWithIds();
  }; // LightmapLightsWithIds
  #pragma pack(pop)
  static check_size<sizeof(LightmapLightsWithIds), 48 + sizeof(::ArrayW<::GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId*>)> __GlobalNamespace_LightmapLightsWithIdsSizeCheck;
  static_assert(sizeof(LightmapLightsWithIds) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightsWithIds::get_maxTotalIntensity
// Il2CppName: get_maxTotalIntensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightmapLightsWithIds::*)()>(&GlobalNamespace::LightmapLightsWithIds::get_maxTotalIntensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightsWithIds*), "get_maxTotalIntensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightsWithIds::set_maxTotalIntensity
// Il2CppName: set_maxTotalIntensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightsWithIds::*)(float)>(&GlobalNamespace::LightmapLightsWithIds::set_maxTotalIntensity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightsWithIds*), "set_maxTotalIntensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightsWithIds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightsWithIds::ProcessNewColorData
// Il2CppName: ProcessNewColorData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightsWithIds::*)()>(&GlobalNamespace::LightmapLightsWithIds::ProcessNewColorData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightsWithIds*), "ProcessNewColorData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightsWithIds::GetLightWithIds
// Il2CppName: GetLightWithIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds::LightWithId*>* (GlobalNamespace::LightmapLightsWithIds::*)()>(&GlobalNamespace::LightmapLightsWithIds::GetLightWithIds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightsWithIds*), "GetLightWithIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
