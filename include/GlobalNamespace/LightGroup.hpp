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
  // Forward declaring type: LightGroupSO
  class LightGroupSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightGroup
  class LightGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroup*, "", "LightGroup");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: LightGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class LightGroup : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private LightGroupSO _lightGroupSO
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::LightGroupSO* lightGroupSO;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightGroupSO*) == 0x8);
    // private System.Action`1<UnityEngine.GameObject> respawnEvent
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::UnityEngine::GameObject*>* respawnEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::GameObject*>*) == 0x8);
    // private System.Action`1<UnityEngine.GameObject> didRefreshContentEvent
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<::UnityEngine::GameObject*>* didRefreshContentEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::GameObject*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private LightGroupSO _lightGroupSO
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightGroupSO*& dyn__lightGroupSO();
    // Get instance field reference: private System.Action`1<UnityEngine.GameObject> respawnEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::GameObject*>*& dyn_respawnEvent();
    // Get instance field reference: private System.Action`1<UnityEngine.GameObject> didRefreshContentEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::GameObject*>*& dyn_didRefreshContentEvent();
    // public LightGroupSO get_lightGroupSO()
    // Offset: 0x1CD72A0
    ::GlobalNamespace::LightGroupSO* get_lightGroupSO();
    // public System.Int32 get_numberOfElements()
    // Offset: 0x1CD72A8
    int get_numberOfElements();
    // public System.Int32 get_startLightId()
    // Offset: 0x1CD7334
    int get_startLightId();
    // public System.Int32 get_groupId()
    // Offset: 0x1CD73C0
    int get_groupId();
    // public System.Int32 get_sameIdElements()
    // Offset: 0x1CD744C
    int get_sameIdElements();
    // public System.Boolean get_ignoreLightGroupEffectManager()
    // Offset: 0x1CD74D8
    bool get_ignoreLightGroupEffectManager();
    // public System.Void add_respawnEvent(System.Action`1<UnityEngine.GameObject> value)
    // Offset: 0x1CD756C
    void add_respawnEvent(::System::Action_1<::UnityEngine::GameObject*>* value);
    // public System.Void remove_respawnEvent(System.Action`1<UnityEngine.GameObject> value)
    // Offset: 0x1CD7610
    void remove_respawnEvent(::System::Action_1<::UnityEngine::GameObject*>* value);
    // public System.Void add_didRefreshContentEvent(System.Action`1<UnityEngine.GameObject> value)
    // Offset: 0x1CD76B4
    void add_didRefreshContentEvent(::System::Action_1<::UnityEngine::GameObject*>* value);
    // public System.Void remove_didRefreshContentEvent(System.Action`1<UnityEngine.GameObject> value)
    // Offset: 0x1CD7758
    void remove_didRefreshContentEvent(::System::Action_1<::UnityEngine::GameObject*>* value);
    // public System.Void .ctor()
    // Offset: 0x1CD77FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightGroup*, creationType>()));
    }
  }; // LightGroup
  #pragma pack(pop)
  static check_size<sizeof(LightGroup), 40 + sizeof(::System::Action_1<::UnityEngine::GameObject*>*)> __GlobalNamespace_LightGroupSizeCheck;
  static_assert(sizeof(LightGroup) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightGroup::get_lightGroupSO
// Il2CppName: get_lightGroupSO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightGroupSO* (GlobalNamespace::LightGroup::*)()>(&GlobalNamespace::LightGroup::get_lightGroupSO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightGroup*), "get_lightGroupSO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightGroup::get_numberOfElements
// Il2CppName: get_numberOfElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LightGroup::*)()>(&GlobalNamespace::LightGroup::get_numberOfElements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightGroup*), "get_numberOfElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightGroup::get_startLightId
// Il2CppName: get_startLightId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LightGroup::*)()>(&GlobalNamespace::LightGroup::get_startLightId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightGroup*), "get_startLightId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightGroup::get_groupId
// Il2CppName: get_groupId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LightGroup::*)()>(&GlobalNamespace::LightGroup::get_groupId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightGroup*), "get_groupId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightGroup::get_sameIdElements
// Il2CppName: get_sameIdElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LightGroup::*)()>(&GlobalNamespace::LightGroup::get_sameIdElements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightGroup*), "get_sameIdElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightGroup::get_ignoreLightGroupEffectManager
// Il2CppName: get_ignoreLightGroupEffectManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LightGroup::*)()>(&GlobalNamespace::LightGroup::get_ignoreLightGroupEffectManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightGroup*), "get_ignoreLightGroupEffectManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightGroup::add_respawnEvent
// Il2CppName: add_respawnEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightGroup::*)(::System::Action_1<::UnityEngine::GameObject*>*)>(&GlobalNamespace::LightGroup::add_respawnEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightGroup*), "add_respawnEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightGroup::remove_respawnEvent
// Il2CppName: remove_respawnEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightGroup::*)(::System::Action_1<::UnityEngine::GameObject*>*)>(&GlobalNamespace::LightGroup::remove_respawnEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightGroup*), "remove_respawnEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightGroup::add_didRefreshContentEvent
// Il2CppName: add_didRefreshContentEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightGroup::*)(::System::Action_1<::UnityEngine::GameObject*>*)>(&GlobalNamespace::LightGroup::add_didRefreshContentEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightGroup*), "add_didRefreshContentEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightGroup::remove_didRefreshContentEvent
// Il2CppName: remove_didRefreshContentEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightGroup::*)(::System::Action_1<::UnityEngine::GameObject*>*)>(&GlobalNamespace::LightGroup::remove_didRefreshContentEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightGroup*), "remove_didRefreshContentEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
