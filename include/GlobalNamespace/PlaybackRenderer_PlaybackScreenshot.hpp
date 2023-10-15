// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlaybackRenderer
#include "GlobalNamespace/PlaybackRenderer.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Type because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot*, "", "PlaybackRenderer/PlaybackScreenshot");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: PlaybackRenderer/PlaybackScreenshot
  // [TokenAttribute] Offset: FFFFFFFF
  class PlaybackRenderer::PlaybackScreenshot : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type
    struct Type;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: PlaybackRenderer/PlaybackScreenshot/Type
    // [TokenAttribute] Offset: FFFFFFFF
    struct Type/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Type
      constexpr Type(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public PlaybackRenderer/PlaybackScreenshot/Type Foreground
      static constexpr const int Foreground = 1;
      // Get static field: static public PlaybackRenderer/PlaybackScreenshot/Type Foreground
      static ::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type _get_Foreground();
      // Set static field: static public PlaybackRenderer/PlaybackScreenshot/Type Foreground
      static void _set_Foreground(::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type value);
      // static field const value: static public PlaybackRenderer/PlaybackScreenshot/Type Background
      static constexpr const int Background = 2;
      // Get static field: static public PlaybackRenderer/PlaybackScreenshot/Type Background
      static ::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type _get_Background();
      // Set static field: static public PlaybackRenderer/PlaybackScreenshot/Type Background
      static void _set_Background(::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // PlaybackRenderer/PlaybackScreenshot/Type
    #pragma pack(pop)
    static check_size<sizeof(PlaybackRenderer::PlaybackScreenshot::Type), 0 + sizeof(int)> __GlobalNamespace_PlaybackRenderer_PlaybackScreenshot_TypeSizeCheck;
    static_assert(sizeof(PlaybackRenderer::PlaybackScreenshot::Type) == 0x4);
    public:
    // private System.String _name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.LayerMask _layerMask
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::LayerMask layerMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // private PlaybackRenderer/PlaybackScreenshot/Type _type
    // Size: 0x4
    // Offset: 0x1C
    ::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type type;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type) == 0x4);
    // private UnityEngine.RenderTexture _texture
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::RenderTexture* texture;
    // Field size check
    static_assert(sizeof(::UnityEngine::RenderTexture*) == 0x8);
    // private System.String _path
    // Size: 0x8
    // Offset: 0x28
    ::StringW path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Color _backgroundColor
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color backgroundColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: private System.String _name
    [[deprecated("Use field access instead!")]] ::StringW& dyn__name();
    // Get instance field reference: private UnityEngine.LayerMask _layerMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn__layerMask();
    // Get instance field reference: private PlaybackRenderer/PlaybackScreenshot/Type _type
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type& dyn__type();
    // Get instance field reference: private UnityEngine.RenderTexture _texture
    [[deprecated("Use field access instead!")]] ::UnityEngine::RenderTexture*& dyn__texture();
    // Get instance field reference: private System.String _path
    [[deprecated("Use field access instead!")]] ::StringW& dyn__path();
    // Get instance field reference: private UnityEngine.Color _backgroundColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__backgroundColor();
    // public System.String get_name()
    // Offset: 0x15A5FEC
    ::StringW get_name();
    // public UnityEngine.RenderTexture get_texture()
    // Offset: 0x15A5FF4
    ::UnityEngine::RenderTexture* get_texture();
    // public UnityEngine.LayerMask get_layerMask()
    // Offset: 0x15A5FFC
    ::UnityEngine::LayerMask get_layerMask();
    // public PlaybackRenderer/PlaybackScreenshot/Type get_type()
    // Offset: 0x15A6004
    ::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type get_type();
    // public System.String get_path()
    // Offset: 0x15A600C
    ::StringW get_path();
    // public System.Void set_path(System.String value)
    // Offset: 0x15A6014
    void set_path(::StringW value);
    // public UnityEngine.Color get_backgroundColor()
    // Offset: 0x15A601C
    ::UnityEngine::Color get_backgroundColor();
    // public System.Void .ctor(System.String name, UnityEngine.LayerMask layerMask, PlaybackRenderer/PlaybackScreenshot/Type type, UnityEngine.Color backgroundColor)
    // Offset: 0x15A6028
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaybackRenderer::PlaybackScreenshot* New_ctor(::StringW name, ::UnityEngine::LayerMask layerMask, ::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type type, ::UnityEngine::Color backgroundColor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaybackRenderer::PlaybackScreenshot*, creationType>(name, layerMask, type, backgroundColor)));
    }
    // public System.Void CreateTexture(System.Int32 width, System.Int32 height)
    // Offset: 0x15A5700
    void CreateTexture(int width, int height);
  }; // PlaybackRenderer/PlaybackScreenshot
  #pragma pack(pop)
  static check_size<sizeof(PlaybackRenderer::PlaybackScreenshot), 48 + sizeof(::UnityEngine::Color)> __GlobalNamespace_PlaybackRenderer_PlaybackScreenshotSizeCheck;
  static_assert(sizeof(PlaybackRenderer::PlaybackScreenshot) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type, "", "PlaybackRenderer/PlaybackScreenshot/Type");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::*)()>(&GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackRenderer::PlaybackScreenshot*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_texture
// Il2CppName: get_texture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::*)()>(&GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_texture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackRenderer::PlaybackScreenshot*), "get_texture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_layerMask
// Il2CppName: get_layerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::*)()>(&GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_layerMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackRenderer::PlaybackScreenshot*), "get_layerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type (GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::*)()>(&GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackRenderer::PlaybackScreenshot*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_path
// Il2CppName: get_path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::*)()>(&GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_path)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackRenderer::PlaybackScreenshot*), "get_path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::set_path
// Il2CppName: set_path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::*)(::StringW)>(&GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::set_path)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackRenderer::PlaybackScreenshot*), "set_path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_backgroundColor
// Il2CppName: get_backgroundColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::*)()>(&GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::get_backgroundColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackRenderer::PlaybackScreenshot*), "get_backgroundColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::CreateTexture
// Il2CppName: CreateTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::*)(int, int)>(&GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::CreateTexture)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaybackRenderer::PlaybackScreenshot*), "CreateTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, height});
  }
};