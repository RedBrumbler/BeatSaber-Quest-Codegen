// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassRenderDataSO
  class BloomPrePassRenderDataSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassRenderDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassRenderDataSO*, "", "BloomPrePassRenderDataSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassRenderDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassRenderDataSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: ::GlobalNamespace::BloomPrePassRenderDataSO::Data
    class Data;
    public:
    // public readonly BloomPrePassRenderDataSO/Data data
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BloomPrePassRenderDataSO::Data* data;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassRenderDataSO::Data*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public readonly BloomPrePassRenderDataSO/Data data
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomPrePassRenderDataSO::Data*& dyn_data();
    // public System.Void .ctor()
    // Offset: 0x1CD2FAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassRenderDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassRenderDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassRenderDataSO*, creationType>()));
    }
  }; // BloomPrePassRenderDataSO
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassRenderDataSO), 24 + sizeof(::GlobalNamespace::BloomPrePassRenderDataSO::Data*)> __GlobalNamespace_BloomPrePassRenderDataSOSizeCheck;
  static_assert(sizeof(BloomPrePassRenderDataSO) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRenderDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
