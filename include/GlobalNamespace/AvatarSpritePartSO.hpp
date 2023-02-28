// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AvatarPartSO`1
#include "GlobalNamespace/AvatarPartSO_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AvatarSpritePartSO
  class AvatarSpritePartSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AvatarSpritePartSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarSpritePartSO*, "", "AvatarSpritePartSO");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: AvatarSpritePartSO
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarSpritePartSO : public ::GlobalNamespace::AvatarPartSO_1<::UnityEngine::Sprite*> {
    public:
    // public UnityEngine.Sprite get_sprite()
    // Offset: 0x1581D90
    ::UnityEngine::Sprite* get_sprite();
    // public System.Void .ctor()
    // Offset: 0x1581DD4
    // Implemented from: AvatarPartSO`1
    // Base method: System.Void AvatarPartSO_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarSpritePartSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarSpritePartSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarSpritePartSO*, creationType>()));
    }
  }; // AvatarSpritePartSO
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarSpritePartSO::get_sprite
// Il2CppName: get_sprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (GlobalNamespace::AvatarSpritePartSO::*)()>(&GlobalNamespace::AvatarSpritePartSO::get_sprite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarSpritePartSO*), "get_sprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarSpritePartSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
