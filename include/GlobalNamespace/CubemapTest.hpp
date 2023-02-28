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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CubemapTest
  class CubemapTest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CubemapTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CubemapTest*, "", "CubemapTest");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: CubemapTest
  // [TokenAttribute] Offset: FFFFFFFF
  class CubemapTest : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private UnityEngine.Material _cubemapMaterial
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Material* cubemapMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _flatMaterial
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Material* flatMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.RenderTexture _cubemapRenderTexture
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::RenderTexture* cubemapRenderTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::RenderTexture*) == 0x8);
    // private UnityEngine.RenderTexture _downsampledCubemapRenderTexture
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::RenderTexture* downsampledCubemapRenderTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::RenderTexture*) == 0x8);
    // private UnityEngine.RenderTexture _cubemapFlatTexture
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::RenderTexture* cubemapFlatTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::RenderTexture*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1133104
    // Get static field: static private readonly System.Int32 _cubePropertyId
    static int _get__cubePropertyId();
    // Set static field: static private readonly System.Int32 _cubePropertyId
    static void _set__cubePropertyId(int value);
    // Get instance field reference: private UnityEngine.Camera _camera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn__camera();
    // Get instance field reference: private UnityEngine.Material _cubemapMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__cubemapMaterial();
    // Get instance field reference: private UnityEngine.Material _flatMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__flatMaterial();
    // Get instance field reference: private UnityEngine.RenderTexture _cubemapRenderTexture
    [[deprecated("Use field access instead!")]] ::UnityEngine::RenderTexture*& dyn__cubemapRenderTexture();
    // Get instance field reference: private UnityEngine.RenderTexture _downsampledCubemapRenderTexture
    [[deprecated("Use field access instead!")]] ::UnityEngine::RenderTexture*& dyn__downsampledCubemapRenderTexture();
    // Get instance field reference: private UnityEngine.RenderTexture _cubemapFlatTexture
    [[deprecated("Use field access instead!")]] ::UnityEngine::RenderTexture*& dyn__cubemapFlatTexture();
    // public System.Void .ctor()
    // Offset: 0x14491F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CubemapTest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CubemapTest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CubemapTest*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x14491FC
    static void _cctor();
    // protected System.Void Start()
    // Offset: 0x1448F1C
    void Start();
    // protected System.Void Update()
    // Offset: 0x1448FA0
    void Update();
  }; // CubemapTest
  #pragma pack(pop)
  static check_size<sizeof(CubemapTest), 64 + sizeof(::UnityEngine::RenderTexture*)> __GlobalNamespace_CubemapTestSizeCheck;
  static_assert(sizeof(CubemapTest) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CubemapTest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CubemapTest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::CubemapTest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubemapTest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubemapTest::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CubemapTest::*)()>(&GlobalNamespace::CubemapTest::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubemapTest*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CubemapTest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CubemapTest::*)()>(&GlobalNamespace::CubemapTest::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CubemapTest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
