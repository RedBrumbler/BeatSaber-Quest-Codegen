// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::U2D
namespace UnityEngine::U2D {
  // Forward declaring type: SpriteAtlas
  class SpriteAtlas;
}
// Completed forward declares
// Type namespace: UnityEngine.U2D
namespace UnityEngine::U2D {
  // Forward declaring type: SpriteAtlasManager
  class SpriteAtlasManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::U2D::SpriteAtlasManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::SpriteAtlasManager*, "UnityEngine.U2D", "SpriteAtlasManager");
// Type namespace: UnityEngine.U2D
namespace UnityEngine::U2D {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.U2D.SpriteAtlasManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: 10943DC
  // [NativeHeaderAttribute] Offset: 10943DC
  // [NativeHeaderAttribute] Offset: 10943DC
  class SpriteAtlasManager : public ::Il2CppObject {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x10974A8
    // Get static field: static private System.Action`2<System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>> atlasRequested
    static ::System::Action_2<::StringW, ::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*>* _get_atlasRequested();
    // Set static field: static private System.Action`2<System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>> atlasRequested
    static void _set_atlasRequested(::System::Action_2<::StringW, ::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*>* value);
    // [DebuggerBrowsableAttribute] Offset: 0x10974E4
    // Get static field: static private System.Action`1<UnityEngine.U2D.SpriteAtlas> atlasRegistered
    static ::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>* _get_atlasRegistered();
    // Set static field: static private System.Action`1<UnityEngine.U2D.SpriteAtlas> atlasRegistered
    static void _set_atlasRegistered(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>* value);
    // static public System.Void add_atlasRegistered(System.Action`1<UnityEngine.U2D.SpriteAtlas> value)
    // Offset: 0x28A4D30
    static void add_atlasRegistered(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>* value);
    // static public System.Void remove_atlasRegistered(System.Action`1<UnityEngine.U2D.SpriteAtlas> value)
    // Offset: 0x28A4E20
    static void remove_atlasRegistered(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>* value);
    // static private System.Void .cctor()
    // Offset: 0x28A4FDC
    static void _cctor();
    // static private System.Boolean RequestAtlas(System.String tag)
    // Offset: 0x28A4C34
    static bool RequestAtlas(::StringW tag);
    // static private System.Void PostRegisteredAtlas(UnityEngine.U2D.SpriteAtlas spriteAtlas)
    // Offset: 0x28A4F10
    static void PostRegisteredAtlas(::UnityEngine::U2D::SpriteAtlas* spriteAtlas);
    // static System.Void Register(UnityEngine.U2D.SpriteAtlas spriteAtlas)
    // Offset: 0x28A4F9C
    static void Register(::UnityEngine::U2D::SpriteAtlas* spriteAtlas);
  }; // UnityEngine.U2D.SpriteAtlasManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::add_atlasRegistered
// Il2CppName: add_atlasRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*)>(&UnityEngine::U2D::SpriteAtlasManager::add_atlasRegistered)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.U2D", "SpriteAtlas")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteAtlasManager*), "add_atlasRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::remove_atlasRegistered
// Il2CppName: remove_atlasRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*)>(&UnityEngine::U2D::SpriteAtlasManager::remove_atlasRegistered)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.U2D", "SpriteAtlas")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteAtlasManager*), "remove_atlasRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::U2D::SpriteAtlasManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteAtlasManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::RequestAtlas
// Il2CppName: RequestAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&UnityEngine::U2D::SpriteAtlasManager::RequestAtlas)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteAtlasManager*), "RequestAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag});
  }
};
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::PostRegisteredAtlas
// Il2CppName: PostRegisteredAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::U2D::SpriteAtlas*)>(&UnityEngine::U2D::SpriteAtlasManager::PostRegisteredAtlas)> {
  static const MethodInfo* get() {
    static auto* spriteAtlas = &::il2cpp_utils::GetClassFromName("UnityEngine.U2D", "SpriteAtlas")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteAtlasManager*), "PostRegisteredAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spriteAtlas});
  }
};
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteAtlasManager::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::U2D::SpriteAtlas*)>(&UnityEngine::U2D::SpriteAtlasManager::Register)> {
  static const MethodInfo* get() {
    static auto* spriteAtlas = &::il2cpp_utils::GetClassFromName("UnityEngine.U2D", "SpriteAtlas")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteAtlasManager*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spriteAtlas});
  }
};
