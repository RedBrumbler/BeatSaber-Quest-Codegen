// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::TextureRectMatrixf, "", "OVRPlugin/TextureRectMatrixf");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/TextureRectMatrixf
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::TextureRectMatrixf/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Rect leftRect
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Rect leftRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public UnityEngine.Rect rightRect
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Rect rightRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public UnityEngine.Vector4 leftScaleBias
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Vector4 leftScaleBias;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector4 rightScaleBias
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Vector4 rightScaleBias;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    public:
    // Creating value type constructor for type: TextureRectMatrixf
    constexpr TextureRectMatrixf(::UnityEngine::Rect leftRect_ = {}, ::UnityEngine::Rect rightRect_ = {}, ::UnityEngine::Vector4 leftScaleBias_ = {}, ::UnityEngine::Vector4 rightScaleBias_ = {}) noexcept : leftRect{leftRect_}, rightRect{rightRect_}, leftScaleBias{leftScaleBias_}, rightScaleBias{rightScaleBias_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public readonly OVRPlugin/TextureRectMatrixf zero
    static ::GlobalNamespace::OVRPlugin::TextureRectMatrixf _get_zero();
    // Set static field: static public readonly OVRPlugin/TextureRectMatrixf zero
    static void _set_zero(::GlobalNamespace::OVRPlugin::TextureRectMatrixf value);
    // Get instance field reference: public UnityEngine.Rect leftRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_leftRect();
    // Get instance field reference: public UnityEngine.Rect rightRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_rightRect();
    // Get instance field reference: public UnityEngine.Vector4 leftScaleBias
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_leftScaleBias();
    // Get instance field reference: public UnityEngine.Vector4 rightScaleBias
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_rightScaleBias();
    // static private System.Void .cctor()
    // Offset: 0x1B9F2A8
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0x1B9F0C0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // OVRPlugin/TextureRectMatrixf
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::TextureRectMatrixf), 48 + sizeof(::UnityEngine::Vector4)> __GlobalNamespace_OVRPlugin_TextureRectMatrixfSizeCheck;
  static_assert(sizeof(OVRPlugin::TextureRectMatrixf) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::TextureRectMatrixf::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::TextureRectMatrixf::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::TextureRectMatrixf), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::TextureRectMatrixf::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::OVRPlugin::TextureRectMatrixf::*)()>(&GlobalNamespace::OVRPlugin::TextureRectMatrixf::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::TextureRectMatrixf), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
