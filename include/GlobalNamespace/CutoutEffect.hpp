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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CutoutEffect
  class CutoutEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CutoutEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CutoutEffect*, "", "CutoutEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: CutoutEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class CutoutEffect : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // [NullAllowed] Offset: 0x112377C
    // private BoolSO _useRandomCutoutOffset
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BoolSO* useRandomCutoutOffset;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BoolSO*) == 0x8);
    // private UnityEngine.Vector3 _cutoutOffset
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 cutoutOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _randomNoiseTexOffset
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 randomNoiseTexOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single _cutout
    // Size: 0x4
    // Offset: 0x40
    float cutout;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x11237C4
    // Get static field: static private readonly System.Int32 _cutoutPropertyID
    static int _get__cutoutPropertyID();
    // Set static field: static private readonly System.Int32 _cutoutPropertyID
    static void _set__cutoutPropertyID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x11237D4
    // Get static field: static private readonly System.Int32 _cutoutTexOffsetPropertyID
    static int _get__cutoutTexOffsetPropertyID();
    // Set static field: static private readonly System.Int32 _cutoutTexOffsetPropertyID
    static void _set__cutoutTexOffsetPropertyID(int value);
    // Get instance field reference: private MaterialPropertyBlockController _materialPropertyBlockController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MaterialPropertyBlockController*& dyn__materialPropertyBlockController();
    // Get instance field reference: private BoolSO _useRandomCutoutOffset
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BoolSO*& dyn__useRandomCutoutOffset();
    // Get instance field reference: private UnityEngine.Vector3 _cutoutOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__cutoutOffset();
    // Get instance field reference: private UnityEngine.Vector3 _randomNoiseTexOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__randomNoiseTexOffset();
    // Get instance field reference: private System.Single _cutout
    [[deprecated("Use field access instead!")]] float& dyn__cutout();
    // public System.Boolean get_useRandomCutoutOffset()
    // Offset: 0x144BFF0
    bool get_useRandomCutoutOffset();
    // public System.Void .ctor()
    // Offset: 0x144C214
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CutoutEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CutoutEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CutoutEffect*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x144C21C
    static void _cctor();
    // protected System.Void Start()
    // Offset: 0x144C040
    void Start();
    // public System.Void SetCutout(System.Single cutout)
    // Offset: 0x144BCA4
    void SetCutout(float cutout);
    // public System.Void SetCutout(System.Single cutout, UnityEngine.Vector3 cutoutOffset)
    // Offset: 0x144C0F0
    void SetCutout(float cutout, ::UnityEngine::Vector3 cutoutOffset);
  }; // CutoutEffect
  #pragma pack(pop)
  static check_size<sizeof(CutoutEffect), 64 + sizeof(float)> __GlobalNamespace_CutoutEffectSizeCheck;
  static_assert(sizeof(CutoutEffect) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CutoutEffect::get_useRandomCutoutOffset
// Il2CppName: get_useRandomCutoutOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CutoutEffect::*)()>(&GlobalNamespace::CutoutEffect::get_useRandomCutoutOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutEffect*), "get_useRandomCutoutOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CutoutEffect::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::CutoutEffect::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutEffect*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutoutEffect::*)()>(&GlobalNamespace::CutoutEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutEffect::SetCutout
// Il2CppName: SetCutout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutoutEffect::*)(float)>(&GlobalNamespace::CutoutEffect::SetCutout)> {
  static const MethodInfo* get() {
    static auto* cutout = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutEffect*), "SetCutout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutout});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutEffect::SetCutout
// Il2CppName: SetCutout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutoutEffect::*)(float, ::UnityEngine::Vector3)>(&GlobalNamespace::CutoutEffect::SetCutout)> {
  static const MethodInfo* get() {
    static auto* cutout = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* cutoutOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutEffect*), "SetCutout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutout, cutoutOffset});
  }
};
