// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Tilemaps
namespace UnityEngine::Tilemaps {
  // Forward declaring type: Tilemap
  class Tilemap;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3Int
  struct Vector3Int;
}
// Completed forward declares
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Forward declaring type: ITilemap
  class ITilemap;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Tilemaps::ITilemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::ITilemap*, "UnityEngine.Tilemaps", "ITilemap");
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Tilemaps.ITilemap
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 10E72B4
  class ITilemap : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.Tilemaps.Tilemap m_Tilemap
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Tilemaps::Tilemap* m_Tilemap;
    // Field size check
    static_assert(sizeof(::UnityEngine::Tilemaps::Tilemap*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::Tilemaps::Tilemap*
    constexpr operator ::UnityEngine::Tilemaps::Tilemap*() const noexcept {
      return m_Tilemap;
    }
    // Get static field: static UnityEngine.Tilemaps.ITilemap s_Instance
    static ::UnityEngine::Tilemaps::ITilemap* _get_s_Instance();
    // Set static field: static UnityEngine.Tilemaps.ITilemap s_Instance
    static void _set_s_Instance(::UnityEngine::Tilemaps::ITilemap* value);
    // Get instance field reference: UnityEngine.Tilemaps.Tilemap m_Tilemap
    [[deprecated("Use field access instead!")]] ::UnityEngine::Tilemaps::Tilemap*& dyn_m_Tilemap();
    // System.Void .ctor()
    // Offset: 0x2BAA7C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ITilemap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Tilemaps::ITilemap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ITilemap*, creationType>()));
    }
    // public System.Void RefreshTile(UnityEngine.Vector3Int position)
    // Offset: 0x2BAA7C8
    void RefreshTile(::UnityEngine::Vector3Int position);
    // static private UnityEngine.Tilemaps.ITilemap CreateInstance()
    // Offset: 0x2BAA83C
    static ::UnityEngine::Tilemaps::ITilemap* CreateInstance();
  }; // UnityEngine.Tilemaps.ITilemap
  #pragma pack(pop)
  static check_size<sizeof(ITilemap), 16 + sizeof(::UnityEngine::Tilemaps::Tilemap*)> __UnityEngine_Tilemaps_ITilemapSizeCheck;
  static_assert(sizeof(ITilemap) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Tilemaps::ITilemap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Tilemaps::ITilemap::RefreshTile
// Il2CppName: RefreshTile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::ITilemap::*)(::UnityEngine::Vector3Int)>(&UnityEngine::Tilemaps::ITilemap::RefreshTile)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::ITilemap*), "RefreshTile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::ITilemap::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Tilemaps::ITilemap* (*)()>(&UnityEngine::Tilemaps::ITilemap::CreateInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::ITilemap*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
