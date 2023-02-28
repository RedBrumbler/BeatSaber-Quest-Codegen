// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::U2D
namespace UnityEngine::U2D {
  // Forward declaring type: SpriteAtlas
  class SpriteAtlas;
}
// Completed forward declares
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Forward declaring type: TilemapRenderer
  class TilemapRenderer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Tilemaps::TilemapRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TilemapRenderer*, "UnityEngine.Tilemaps", "TilemapRenderer");
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Tilemaps.TilemapRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 10E7430
  // [NativeHeaderAttribute] Offset: 10E7430
  // [NativeHeaderAttribute] Offset: 10E7430
  // [NativeTypeAttribute] Offset: 10E7430
  // [RequireComponent] Offset: 10E7430
  class TilemapRenderer : public ::UnityEngine::Renderer {
    public:
    // System.Void RegisterSpriteAtlasRegistered()
    // Offset: 0x2BAB3BC
    void RegisterSpriteAtlasRegistered();
    // System.Void UnregisterSpriteAtlasRegistered()
    // Offset: 0x2BAB458
    void UnregisterSpriteAtlasRegistered();
    // System.Void OnSpriteAtlasRegistered(UnityEngine.U2D.SpriteAtlas atlas)
    // Offset: 0x2BAB4F4
    void OnSpriteAtlasRegistered(::UnityEngine::U2D::SpriteAtlas* atlas);
  }; // UnityEngine.Tilemaps.TilemapRenderer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TilemapRenderer::RegisterSpriteAtlasRegistered
// Il2CppName: RegisterSpriteAtlasRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::TilemapRenderer::*)()>(&UnityEngine::Tilemaps::TilemapRenderer::RegisterSpriteAtlasRegistered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::TilemapRenderer*), "RegisterSpriteAtlasRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TilemapRenderer::UnregisterSpriteAtlasRegistered
// Il2CppName: UnregisterSpriteAtlasRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::TilemapRenderer::*)()>(&UnityEngine::Tilemaps::TilemapRenderer::UnregisterSpriteAtlasRegistered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::TilemapRenderer*), "UnregisterSpriteAtlasRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::TilemapRenderer::OnSpriteAtlasRegistered
// Il2CppName: OnSpriteAtlasRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::TilemapRenderer::*)(::UnityEngine::U2D::SpriteAtlas*)>(&UnityEngine::Tilemaps::TilemapRenderer::OnSpriteAtlasRegistered)> {
  static const MethodInfo* get() {
    static auto* atlas = &::il2cpp_utils::GetClassFromName("UnityEngine.U2D", "SpriteAtlas")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::TilemapRenderer*), "OnSpriteAtlasRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{atlas});
  }
};
