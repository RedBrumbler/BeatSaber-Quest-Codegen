// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SteamVR_TrackedObject/EIndex
#include "GlobalNamespace/SteamVR_TrackedObject.hpp"
// Including type: Valve.VR.RenderModel_ControllerMode_State_t
#include "Valve/VR/RenderModel_ControllerMode_State_t.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Skipping declaration: VREvent_t because it is already included!
  // Forward declaring type: CVRRenderModels
  class CVRRenderModels;
  // Forward declaring type: RenderModel_t
  struct RenderModel_t;
  // Forward declaring type: RenderModel_TextureMap_t
  struct RenderModel_TextureMap_t;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_RenderModel
  class SteamVR_RenderModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_RenderModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_RenderModel*, "", "SteamVR_RenderModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_RenderModel
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class SteamVR_RenderModel : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::SteamVR_RenderModel::RenderModel
    class RenderModel;
    // Nested type: ::GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder
    class RenderModelInterfaceHolder;
    // Nested type: ::GlobalNamespace::SteamVR_RenderModel::$SetModelAsync$d__21
    class $SetModelAsync$d__21;
    // Nested type: ::GlobalNamespace::SteamVR_RenderModel::$FreeRenderModel$d__24
    class $FreeRenderModel$d__24;
    public:
    // public SteamVR_TrackedObject/EIndex index
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::SteamVR_TrackedObject::EIndex index;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_TrackedObject::EIndex) == 0x4);
    // Padding between fields: index and: modelOverride
    char __padding0[0x4] = {};
    // [TooltipAttribute] Offset: 0x10D6418
    // public System.String modelOverride
    // Size: 0x8
    // Offset: 0x20
    ::StringW modelOverride;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [TooltipAttribute] Offset: 0x10D6450
    // public UnityEngine.Shader shader
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Shader* shader;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // [TooltipAttribute] Offset: 0x10D6488
    // public System.Boolean verbose
    // Size: 0x1
    // Offset: 0x30
    bool verbose;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0x10D64C0
    // public System.Boolean createComponents
    // Size: 0x1
    // Offset: 0x31
    bool createComponents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0x10D64F8
    // public System.Boolean updateDynamically
    // Size: 0x1
    // Offset: 0x32
    bool updateDynamically;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public Valve.VR.RenderModel_ControllerMode_State_t controllerModeState
    // Size: 0x1
    // Offset: 0x33
    ::Valve::VR::RenderModel_ControllerMode_State_t controllerModeState;
    // Field size check
    static_assert(sizeof(::Valve::VR::RenderModel_ControllerMode_State_t) == 0x1);
    // Padding between fields: controllerModeState and: renderModelName
    char __padding6[0x4] = {};
    // private System.String <renderModelName>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::StringW renderModelName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private SteamVR_Events/Action deviceConnectedAction
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::SteamVR_Events::Action* deviceConnectedAction;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_Events::Action*) == 0x8);
    // private SteamVR_Events/Action hideRenderModelsAction
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::SteamVR_Events::Action* hideRenderModelsAction;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_Events::Action*) == 0x8);
    // private SteamVR_Events/Action modelSkinSettingsHaveChangedAction
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::SteamVR_Events::Action* modelSkinSettingsHaveChangedAction;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_Events::Action*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.String> nameCache
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::Dictionary_2<int, ::StringW>* nameCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::StringW>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static public System.String modelOverrideWarning
    static constexpr const char* modelOverrideWarning = "Model override is really only meant to be used in the scene view for lining things up; using it at runtime is discouraged.  Use tracked device index instead to ensure the correct model is displayed for all users.";
    // Get static field: static public System.String modelOverrideWarning
    static ::StringW _get_modelOverrideWarning();
    // Set static field: static public System.String modelOverrideWarning
    static void _set_modelOverrideWarning(::StringW value);
    // static field const value: static public System.String k_localTransformName
    static constexpr const char* k_localTransformName = "attach";
    // Get static field: static public System.String k_localTransformName
    static ::StringW _get_k_localTransformName();
    // Set static field: static public System.String k_localTransformName
    static void _set_k_localTransformName(::StringW value);
    // Get static field: static public System.Collections.Hashtable models
    static ::System::Collections::Hashtable* _get_models();
    // Set static field: static public System.Collections.Hashtable models
    static void _set_models(::System::Collections::Hashtable* value);
    // Get static field: static public System.Collections.Hashtable materials
    static ::System::Collections::Hashtable* _get_materials();
    // Set static field: static public System.Collections.Hashtable materials
    static void _set_materials(::System::Collections::Hashtable* value);
    // Get instance field reference: public SteamVR_TrackedObject/EIndex index
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SteamVR_TrackedObject::EIndex& dyn_index();
    // Get instance field reference: public System.String modelOverride
    [[deprecated("Use field access instead!")]] ::StringW& dyn_modelOverride();
    // Get instance field reference: public UnityEngine.Shader shader
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_shader();
    // Get instance field reference: public System.Boolean verbose
    [[deprecated("Use field access instead!")]] bool& dyn_verbose();
    // Get instance field reference: public System.Boolean createComponents
    [[deprecated("Use field access instead!")]] bool& dyn_createComponents();
    // Get instance field reference: public System.Boolean updateDynamically
    [[deprecated("Use field access instead!")]] bool& dyn_updateDynamically();
    // Get instance field reference: public Valve.VR.RenderModel_ControllerMode_State_t controllerModeState
    [[deprecated("Use field access instead!")]] ::Valve::VR::RenderModel_ControllerMode_State_t& dyn_controllerModeState();
    // Get instance field reference: private System.String <renderModelName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$renderModelName$k__BackingField();
    // Get instance field reference: private SteamVR_Events/Action deviceConnectedAction
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SteamVR_Events::Action*& dyn_deviceConnectedAction();
    // Get instance field reference: private SteamVR_Events/Action hideRenderModelsAction
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SteamVR_Events::Action*& dyn_hideRenderModelsAction();
    // Get instance field reference: private SteamVR_Events/Action modelSkinSettingsHaveChangedAction
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SteamVR_Events::Action*& dyn_modelSkinSettingsHaveChangedAction();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,System.String> nameCache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::StringW>*& dyn_nameCache();
    // public System.String get_renderModelName()
    // Offset: 0x18E6BE0
    ::StringW get_renderModelName();
    // private System.Void set_renderModelName(System.String value)
    // Offset: 0x18E6BE8
    void set_renderModelName(::StringW value);
    // private System.Void .ctor()
    // Offset: 0x18E92C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_RenderModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_RenderModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_RenderModel*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x18E9694
    static void _cctor();
    // private System.Void OnModelSkinSettingsHaveChanged(Valve.VR.VREvent_t vrEvent)
    // Offset: 0x18E6BF0
    void OnModelSkinSettingsHaveChanged(::Valve::VR::VREvent_t vrEvent);
    // private System.Void OnHideRenderModels(System.Boolean hidden)
    // Offset: 0x18E6E14
    void OnHideRenderModels(bool hidden);
    // private System.Void OnDeviceConnected(System.Int32 i, System.Boolean connected)
    // Offset: 0x18E6F48
    void OnDeviceConnected(int i, bool connected);
    // public System.Void UpdateModel()
    // Offset: 0x18E6C60
    void UpdateModel();
    // private System.Collections.IEnumerator SetModelAsync(System.String renderModelName)
    // Offset: 0x18E6F60
    ::System::Collections::IEnumerator* SetModelAsync(::StringW renderModelName);
    // private System.Boolean SetModel(System.String renderModelName)
    // Offset: 0x18E7008
    bool SetModel(::StringW renderModelName);
    // private SteamVR_RenderModel/RenderModel LoadRenderModel(Valve.VR.CVRRenderModels renderModels, System.String renderModelName, System.String baseName)
    // Offset: 0x18E825C
    ::GlobalNamespace::SteamVR_RenderModel::RenderModel* LoadRenderModel(::Valve::VR::CVRRenderModels* renderModels, ::StringW renderModelName, ::StringW baseName);
    // private System.Collections.IEnumerator FreeRenderModel(System.IntPtr pRenderModel)
    // Offset: 0x18E9150
    ::System::Collections::IEnumerator* FreeRenderModel(::System::IntPtr pRenderModel);
    // public UnityEngine.Transform FindComponent(System.String componentName)
    // Offset: 0x18E9224
    ::UnityEngine::Transform* FindComponent(::StringW componentName);
    // private System.Void StripMesh(UnityEngine.GameObject go)
    // Offset: 0x18E74C0
    void StripMesh(::UnityEngine::GameObject* go);
    // private System.Boolean LoadComponents(SteamVR_RenderModel/RenderModelInterfaceHolder holder, System.String renderModelName)
    // Offset: 0x18E7604
    bool LoadComponents(::GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder* holder, ::StringW renderModelName);
    // private System.Void OnEnable()
    // Offset: 0x18E9400
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x18E9528
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x18E958C
    void Update();
    // public System.Void UpdateComponents(Valve.VR.CVRRenderModels renderModels)
    // Offset: 0x18E7E18
    void UpdateComponents(::Valve::VR::CVRRenderModels* renderModels);
    // public System.Void SetDeviceIndex(System.Int32 index)
    // Offset: 0x18E9610
    void SetDeviceIndex(int index);
    // static private System.Void Sleep()
    // Offset: 0x18E8D40
    static void Sleep();
    // private Valve.VR.RenderModel_t MarshalRenderModel(System.IntPtr pRenderModel)
    // Offset: 0x18E8D4C
    ::Valve::VR::RenderModel_t MarshalRenderModel(::System::IntPtr pRenderModel);
    // private Valve.VR.RenderModel_TextureMap_t MarshalRenderModel_TextureMap(System.IntPtr pRenderModel)
    // Offset: 0x18E8F54
    ::Valve::VR::RenderModel_TextureMap_t MarshalRenderModel_TextureMap(::System::IntPtr pRenderModel);
  }; // SteamVR_RenderModel
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_RenderModel), 88 + sizeof(::System::Collections::Generic::Dictionary_2<int, ::StringW>*)> __GlobalNamespace_SteamVR_RenderModelSizeCheck;
  static_assert(sizeof(SteamVR_RenderModel) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::get_renderModelName
// Il2CppName: get_renderModelName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::SteamVR_RenderModel::*)()>(&GlobalNamespace::SteamVR_RenderModel::get_renderModelName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "get_renderModelName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::set_renderModelName
// Il2CppName: set_renderModelName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)(::StringW)>(&GlobalNamespace::SteamVR_RenderModel::set_renderModelName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "set_renderModelName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SteamVR_RenderModel::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::OnModelSkinSettingsHaveChanged
// Il2CppName: OnModelSkinSettingsHaveChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)(::Valve::VR::VREvent_t)>(&GlobalNamespace::SteamVR_RenderModel::OnModelSkinSettingsHaveChanged)> {
  static const MethodInfo* get() {
    static auto* vrEvent = &::il2cpp_utils::GetClassFromName("Valve.VR", "VREvent_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "OnModelSkinSettingsHaveChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vrEvent});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::OnHideRenderModels
// Il2CppName: OnHideRenderModels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)(bool)>(&GlobalNamespace::SteamVR_RenderModel::OnHideRenderModels)> {
  static const MethodInfo* get() {
    static auto* hidden = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "OnHideRenderModels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hidden});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::OnDeviceConnected
// Il2CppName: OnDeviceConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)(int, bool)>(&GlobalNamespace::SteamVR_RenderModel::OnDeviceConnected)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* connected = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "OnDeviceConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, connected});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::UpdateModel
// Il2CppName: UpdateModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)()>(&GlobalNamespace::SteamVR_RenderModel::UpdateModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "UpdateModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::SetModelAsync
// Il2CppName: SetModelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::SteamVR_RenderModel::*)(::StringW)>(&GlobalNamespace::SteamVR_RenderModel::SetModelAsync)> {
  static const MethodInfo* get() {
    static auto* renderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "SetModelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderModelName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::SetModel
// Il2CppName: SetModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_RenderModel::*)(::StringW)>(&GlobalNamespace::SteamVR_RenderModel::SetModel)> {
  static const MethodInfo* get() {
    static auto* renderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "SetModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderModelName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::LoadRenderModel
// Il2CppName: LoadRenderModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SteamVR_RenderModel::RenderModel* (GlobalNamespace::SteamVR_RenderModel::*)(::Valve::VR::CVRRenderModels*, ::StringW, ::StringW)>(&GlobalNamespace::SteamVR_RenderModel::LoadRenderModel)> {
  static const MethodInfo* get() {
    static auto* renderModels = &::il2cpp_utils::GetClassFromName("Valve.VR", "CVRRenderModels")->byval_arg;
    static auto* renderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* baseName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "LoadRenderModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderModels, renderModelName, baseName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::FreeRenderModel
// Il2CppName: FreeRenderModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::SteamVR_RenderModel::*)(::System::IntPtr)>(&GlobalNamespace::SteamVR_RenderModel::FreeRenderModel)> {
  static const MethodInfo* get() {
    static auto* pRenderModel = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "FreeRenderModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pRenderModel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::FindComponent
// Il2CppName: FindComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::SteamVR_RenderModel::*)(::StringW)>(&GlobalNamespace::SteamVR_RenderModel::FindComponent)> {
  static const MethodInfo* get() {
    static auto* componentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "FindComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{componentName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::StripMesh
// Il2CppName: StripMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::SteamVR_RenderModel::StripMesh)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "StripMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::LoadComponents
// Il2CppName: LoadComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_RenderModel::*)(::GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder*, ::StringW)>(&GlobalNamespace::SteamVR_RenderModel::LoadComponents)> {
  static const MethodInfo* get() {
    static auto* holder = &::il2cpp_utils::GetClassFromName("", "SteamVR_RenderModel/RenderModelInterfaceHolder")->byval_arg;
    static auto* renderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "LoadComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{holder, renderModelName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)()>(&GlobalNamespace::SteamVR_RenderModel::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)()>(&GlobalNamespace::SteamVR_RenderModel::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)()>(&GlobalNamespace::SteamVR_RenderModel::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::UpdateComponents
// Il2CppName: UpdateComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)(::Valve::VR::CVRRenderModels*)>(&GlobalNamespace::SteamVR_RenderModel::UpdateComponents)> {
  static const MethodInfo* get() {
    static auto* renderModels = &::il2cpp_utils::GetClassFromName("Valve.VR", "CVRRenderModels")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "UpdateComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderModels});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::SetDeviceIndex
// Il2CppName: SetDeviceIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::*)(int)>(&GlobalNamespace::SteamVR_RenderModel::SetDeviceIndex)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "SetDeviceIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::Sleep
// Il2CppName: Sleep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SteamVR_RenderModel::Sleep)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "Sleep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::MarshalRenderModel
// Il2CppName: MarshalRenderModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::RenderModel_t (GlobalNamespace::SteamVR_RenderModel::*)(::System::IntPtr)>(&GlobalNamespace::SteamVR_RenderModel::MarshalRenderModel)> {
  static const MethodInfo* get() {
    static auto* pRenderModel = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "MarshalRenderModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pRenderModel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::MarshalRenderModel_TextureMap
// Il2CppName: MarshalRenderModel_TextureMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::RenderModel_TextureMap_t (GlobalNamespace::SteamVR_RenderModel::*)(::System::IntPtr)>(&GlobalNamespace::SteamVR_RenderModel::MarshalRenderModel_TextureMap)> {
  static const MethodInfo* get() {
    static auto* pRenderModel = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel*), "MarshalRenderModel_TextureMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pRenderModel});
  }
};
