// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.ControlPlayableAsset
#include "UnityEngine/Timeline/ControlPlayableAsset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarColorBehaviour
  class AvatarColorBehaviour;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: ClipCaps
  struct ClipCaps;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CustomControlPlayableAsset
  class CustomControlPlayableAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CustomControlPlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomControlPlayableAsset*, "", "CustomControlPlayableAsset");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: CustomControlPlayableAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomControlPlayableAsset : public ::UnityEngine::Timeline::ControlPlayableAsset {
    public:
    public:
    // public AvatarColorBehaviour _template
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::AvatarColorBehaviour* _template;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AvatarColorBehaviour*) == 0x8);
    public:
    // Get instance field reference: public AvatarColorBehaviour _template
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AvatarColorBehaviour*& dyn__template();
    // public UnityEngine.Timeline.ClipCaps get_clipCaps()
    // Offset: 0x1441C94
    ::UnityEngine::Timeline::ClipCaps get_clipCaps();
    // public System.Void .ctor()
    // Offset: 0x1441C9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomControlPlayableAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CustomControlPlayableAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomControlPlayableAsset*, creationType>()));
    }
  }; // CustomControlPlayableAsset
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CustomControlPlayableAsset::get_clipCaps
// Il2CppName: get_clipCaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::ClipCaps (GlobalNamespace::CustomControlPlayableAsset::*)()>(&GlobalNamespace::CustomControlPlayableAsset::get_clipCaps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomControlPlayableAsset*), "get_clipCaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomControlPlayableAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
