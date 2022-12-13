// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BloomPrePassRenderDataSO
#include "GlobalNamespace/BloomPrePassRenderDataSO.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassRendererSO
  class BloomPrePassRendererSO;
  // Forward declaring type: BloomPrePassEffectContainerSO
  class BloomPrePassEffectContainerSO;
  // Skipping declaration: Mode because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePass
  class BloomPrePass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePass*, "", "BloomPrePass");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePass
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  // [RequireComponent] Offset: 1104A94
  class BloomPrePass : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::BloomPrePass::Mode
    struct Mode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: BloomPrePass/Mode
    // [TokenAttribute] Offset: FFFFFFFF
    struct Mode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Mode
      constexpr Mode(int value_ = {}) noexcept : value{value_} {}
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
      // static field const value: static public BloomPrePass/Mode RenderAndSetData
      static constexpr const int RenderAndSetData = 0;
      // Get static field: static public BloomPrePass/Mode RenderAndSetData
      static ::GlobalNamespace::BloomPrePass::Mode _get_RenderAndSetData();
      // Set static field: static public BloomPrePass/Mode RenderAndSetData
      static void _set_RenderAndSetData(::GlobalNamespace::BloomPrePass::Mode value);
      // static field const value: static public BloomPrePass/Mode SetDataOnly
      static constexpr const int SetDataOnly = 1;
      // Get static field: static public BloomPrePass/Mode SetDataOnly
      static ::GlobalNamespace::BloomPrePass::Mode _get_SetDataOnly();
      // Set static field: static public BloomPrePass/Mode SetDataOnly
      static void _set_SetDataOnly(::GlobalNamespace::BloomPrePass::Mode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // BloomPrePass/Mode
    #pragma pack(pop)
    static check_size<sizeof(BloomPrePass::Mode), 0 + sizeof(int)> __GlobalNamespace_BloomPrePass_ModeSizeCheck;
    static_assert(sizeof(BloomPrePass::Mode) == 0x4);
    public:
    // private BloomPrePassRendererSO _bloomPrepassRenderer
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BloomPrePassRendererSO* bloomPrepassRenderer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassRendererSO*) == 0x8);
    // private BloomPrePassEffectContainerSO _bloomPrePassEffectContainer
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BloomPrePassEffectContainerSO* bloomPrePassEffectContainer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassEffectContainerSO*) == 0x8);
    // [TooltipAttribute] Offset: 0x11051C0
    // [NullAllowed] Offset: 0x11051C0
    // private BloomPrePassRenderDataSO _bloomPrePassRenderData
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BloomPrePassRenderDataSO* bloomPrePassRenderData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassRenderDataSO*) == 0x8);
    // private BloomPrePass/Mode _mode
    // Size: 0x4
    // Offset: 0x30
    ::GlobalNamespace::BloomPrePass::Mode mode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePass::Mode) == 0x4);
    // Padding between fields: mode and: renderData
    char __padding3[0x4] = {};
    // private BloomPrePassRenderDataSO/Data _renderData
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::BloomPrePassRenderDataSO::Data* renderData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassRenderDataSO::Data*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BloomPrePassRendererSO _bloomPrepassRenderer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomPrePassRendererSO*& dyn__bloomPrepassRenderer();
    // Get instance field reference: private BloomPrePassEffectContainerSO _bloomPrePassEffectContainer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomPrePassEffectContainerSO*& dyn__bloomPrePassEffectContainer();
    // Get instance field reference: private BloomPrePassRenderDataSO _bloomPrePassRenderData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomPrePassRenderDataSO*& dyn__bloomPrePassRenderData();
    // Get instance field reference: private BloomPrePass/Mode _mode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomPrePass::Mode& dyn__mode();
    // Get instance field reference: private BloomPrePassRenderDataSO/Data _renderData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomPrePassRenderDataSO::Data*& dyn__renderData();
    // public System.Void .ctor()
    // Offset: 0x1CCFF28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePass*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x1CCEA3C
    void Awake();
    // private System.Void LazyInit()
    // Offset: 0x1CCEA40
    void LazyInit();
    // protected System.Void OnDestroy()
    // Offset: 0x1CCEC50
    void OnDestroy();
    // protected System.Void OnPreRender()
    // Offset: 0x1CCED0C
    void OnPreRender();
    // protected System.Void OnPostRender()
    // Offset: 0x1CCFE60
    void OnPostRender();
    // public System.Void SetMode(BloomPrePass/Mode mode)
    // Offset: 0x1CCFF20
    void SetMode(::GlobalNamespace::BloomPrePass::Mode mode);
  }; // BloomPrePass
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePass), 56 + sizeof(::GlobalNamespace::BloomPrePassRenderDataSO::Data*)> __GlobalNamespace_BloomPrePassSizeCheck;
  static_assert(sizeof(BloomPrePass) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePass::Mode, "", "BloomPrePass/Mode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePass::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePass::*)()>(&GlobalNamespace::BloomPrePass::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePass*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePass::LazyInit
// Il2CppName: LazyInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePass::*)()>(&GlobalNamespace::BloomPrePass::LazyInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePass*), "LazyInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePass::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePass::*)()>(&GlobalNamespace::BloomPrePass::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePass*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePass::OnPreRender
// Il2CppName: OnPreRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePass::*)()>(&GlobalNamespace::BloomPrePass::OnPreRender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePass*), "OnPreRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePass::OnPostRender
// Il2CppName: OnPostRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePass::*)()>(&GlobalNamespace::BloomPrePass::OnPostRender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePass*), "OnPostRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePass::SetMode
// Il2CppName: SetMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePass::*)(::GlobalNamespace::BloomPrePass::Mode)>(&GlobalNamespace::BloomPrePass::SetMode)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("", "BloomPrePass/Mode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePass*), "SetMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode});
  }
};
