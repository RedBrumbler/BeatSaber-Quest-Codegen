// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_OutputAttributeDictionary
  class HEU_OutputAttributeDictionary;
  // Forward declaring type: HEU_OutputAttribute
  class HEU_OutputAttribute;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_OutputAttributesStore
  class HEU_OutputAttributesStore;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_OutputAttributesStore);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_OutputAttributesStore*, "HoudiniEngineUnity", "HEU_OutputAttributesStore");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_OutputAttributesStore
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_OutputAttributesStore : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private HoudiniEngineUnity.HEU_OutputAttributeDictionary _attributes
    // Size: 0x8
    // Offset: 0x18
    ::HoudiniEngineUnity::HEU_OutputAttributeDictionary* attributes;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_OutputAttributeDictionary*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HoudiniEngineUnity.HEU_OutputAttributeDictionary _attributes
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_OutputAttributeDictionary*& dyn__attributes();
    // public System.Void .ctor()
    // Offset: 0x1B37C90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_OutputAttributesStore* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_OutputAttributesStore::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_OutputAttributesStore*, creationType>()));
    }
    // public System.Void SetAttribute(HoudiniEngineUnity.HEU_OutputAttribute attribute)
    // Offset: 0x1B37AC0
    void SetAttribute(::HoudiniEngineUnity::HEU_OutputAttribute* attribute);
    // public HoudiniEngineUnity.HEU_OutputAttribute GetAttribute(System.String name)
    // Offset: 0x1B37BC0
    ::HoudiniEngineUnity::HEU_OutputAttribute* GetAttribute(::StringW name);
    // public System.Void Clear()
    // Offset: 0x1B37C38
    void Clear();
  }; // HoudiniEngineUnity.HEU_OutputAttributesStore
  #pragma pack(pop)
  static check_size<sizeof(HEU_OutputAttributesStore), 24 + sizeof(::HoudiniEngineUnity::HEU_OutputAttributeDictionary*)> __HoudiniEngineUnity_HEU_OutputAttributesStoreSizeCheck;
  static_assert(sizeof(HEU_OutputAttributesStore) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_OutputAttributesStore::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_OutputAttributesStore::SetAttribute
// Il2CppName: SetAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_OutputAttributesStore::*)(::HoudiniEngineUnity::HEU_OutputAttribute*)>(&HoudiniEngineUnity::HEU_OutputAttributesStore::SetAttribute)> {
  static const MethodInfo* get() {
    static auto* attribute = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_OutputAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_OutputAttributesStore*), "SetAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attribute});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_OutputAttributesStore::GetAttribute
// Il2CppName: GetAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_OutputAttribute* (HoudiniEngineUnity::HEU_OutputAttributesStore::*)(::StringW)>(&HoudiniEngineUnity::HEU_OutputAttributesStore::GetAttribute)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_OutputAttributesStore*), "GetAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_OutputAttributesStore::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_OutputAttributesStore::*)()>(&HoudiniEngineUnity::HEU_OutputAttributesStore::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_OutputAttributesStore*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
