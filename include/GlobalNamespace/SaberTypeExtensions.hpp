// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberType
  struct SaberType;
  // Forward declaring type: ColorType
  struct ColorType;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SaberTypeExtensions
  class SaberTypeExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SaberTypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberTypeExtensions*, "", "SaberTypeExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SaberTypeExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class SaberTypeExtensions : public ::Il2CppObject {
    public:
    // static public System.Boolean MatchesColorType(SaberType saberType, ColorType colorType)
    // Offset: 0x2A0FD3C
    static bool MatchesColorType(::GlobalNamespace::SaberType saberType, ::GlobalNamespace::ColorType colorType);
    // static public UnityEngine.XR.XRNode Node(SaberType saberType)
    // Offset: 0x2A132F0
    static ::UnityEngine::XR::XRNode Node(::GlobalNamespace::SaberType saberType);
    // static public SaberType MainSaber(System.Boolean leftHanded)
    // Offset: 0x2A13300
    static ::GlobalNamespace::SaberType MainSaber(bool leftHanded);
    // static public SaberType ToSaberType(ColorType colorType)
    // Offset: 0x2A1330C
    static ::GlobalNamespace::SaberType ToSaberType(::GlobalNamespace::ColorType colorType);
  }; // SaberTypeExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberTypeExtensions::MatchesColorType
// Il2CppName: MatchesColorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::SaberType, ::GlobalNamespace::ColorType)>(&GlobalNamespace::SaberTypeExtensions::MatchesColorType)> {
  static const MethodInfo* get() {
    static auto* saberType = &::il2cpp_utils::GetClassFromName("", "SaberType")->byval_arg;
    static auto* colorType = &::il2cpp_utils::GetClassFromName("", "ColorType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTypeExtensions*), "MatchesColorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberType, colorType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTypeExtensions::Node
// Il2CppName: Node
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRNode (*)(::GlobalNamespace::SaberType)>(&GlobalNamespace::SaberTypeExtensions::Node)> {
  static const MethodInfo* get() {
    static auto* saberType = &::il2cpp_utils::GetClassFromName("", "SaberType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTypeExtensions*), "Node", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTypeExtensions::MainSaber
// Il2CppName: MainSaber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SaberType (*)(bool)>(&GlobalNamespace::SaberTypeExtensions::MainSaber)> {
  static const MethodInfo* get() {
    static auto* leftHanded = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTypeExtensions*), "MainSaber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leftHanded});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTypeExtensions::ToSaberType
// Il2CppName: ToSaberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SaberType (*)(::GlobalNamespace::ColorType)>(&GlobalNamespace::SaberTypeExtensions::ToSaberType)> {
  static const MethodInfo* get() {
    static auto* colorType = &::il2cpp_utils::GetClassFromName("", "ColorType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTypeExtensions*), "ToSaberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorType});
  }
};
