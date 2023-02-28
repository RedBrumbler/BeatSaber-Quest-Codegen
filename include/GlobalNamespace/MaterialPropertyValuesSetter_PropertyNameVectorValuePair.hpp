// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MaterialPropertyValuesSetter
#include "GlobalNamespace/MaterialPropertyValuesSetter.hpp"
// Including type: MaterialPropertyValuesSetter/PropertyValuePairBase
#include "GlobalNamespace/MaterialPropertyValuesSetter_PropertyValuePairBase.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameVectorValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameVectorValuePair*, "", "MaterialPropertyValuesSetter/PropertyNameVectorValuePair");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyValuesSetter/PropertyNameVectorValuePair
  // [TokenAttribute] Offset: FFFFFFFF
  class MaterialPropertyValuesSetter::PropertyNameVectorValuePair : public ::GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase {
    public:
    public:
    // public UnityEngine.Vector4 vector
    // Size: 0x10
    // Offset: 0x1C
    ::UnityEngine::Vector4 vector;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    public:
    // Creating conversion operator: operator ::UnityEngine::Vector4
    constexpr operator ::UnityEngine::Vector4() const noexcept {
      return vector;
    }
    // Get instance field reference: public UnityEngine.Vector4 vector
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_vector();
    // public System.Void .ctor()
    // Offset: 0x1CED898
    // Implemented from: MaterialPropertyValuesSetter/PropertyValuePairBase
    // Base method: System.Void PropertyValuePairBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyValuesSetter::PropertyNameVectorValuePair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameVectorValuePair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyValuesSetter::PropertyNameVectorValuePair*, creationType>()));
    }
  }; // MaterialPropertyValuesSetter/PropertyNameVectorValuePair
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyValuesSetter::PropertyNameVectorValuePair), 28 + sizeof(::UnityEngine::Vector4)> __GlobalNamespace_MaterialPropertyValuesSetter_PropertyNameVectorValuePairSizeCheck;
  static_assert(sizeof(MaterialPropertyValuesSetter::PropertyNameVectorValuePair) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameVectorValuePair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
