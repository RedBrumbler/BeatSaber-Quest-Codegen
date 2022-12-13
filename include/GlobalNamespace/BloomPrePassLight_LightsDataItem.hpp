// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassLight
#include "GlobalNamespace/BloomPrePassLight.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassLightTypeSO
  class BloomPrePassLightTypeSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassLight::LightsDataItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassLight::LightsDataItem*, "", "BloomPrePassLight/LightsDataItem");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassLight/LightsDataItem
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassLight::LightsDataItem : public ::Il2CppObject {
    public:
    public:
    // public readonly BloomPrePassLightTypeSO lightType
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::BloomPrePassLightTypeSO* lightType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassLightTypeSO*) == 0x8);
    // public readonly System.Collections.Generic.HashSet`1<BloomPrePassLight> lights
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>* lights;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*) == 0x8);
    public:
    // Get instance field reference: public readonly BloomPrePassLightTypeSO lightType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomPrePassLightTypeSO*& dyn_lightType();
    // Get instance field reference: public readonly System.Collections.Generic.HashSet`1<BloomPrePassLight> lights
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*& dyn_lights();
    // public System.Void .ctor(BloomPrePassLightTypeSO lightType, System.Collections.Generic.HashSet`1<BloomPrePassLight> lights)
    // Offset: 0x1CD2A84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassLight::LightsDataItem* New_ctor(::GlobalNamespace::BloomPrePassLightTypeSO* lightType, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>* lights) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassLight::LightsDataItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassLight::LightsDataItem*, creationType>(lightType, lights)));
    }
  }; // BloomPrePassLight/LightsDataItem
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassLight::LightsDataItem), 24 + sizeof(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*)> __GlobalNamespace_BloomPrePassLight_LightsDataItemSizeCheck;
  static_assert(sizeof(BloomPrePassLight::LightsDataItem) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLight::LightsDataItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
