// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseTransitionSO
#include "GlobalNamespace/BaseTransitionSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Vector3TransitionSO
  class Vector3TransitionSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Vector3TransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Vector3TransitionSO*, "", "Vector3TransitionSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Vector3TransitionSO
  // [TokenAttribute] Offset: FFFFFFFF
  class Vector3TransitionSO : public ::GlobalNamespace::BaseTransitionSO {
    public:
    public:
    // private UnityEngine.Vector3 _normalState
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 normalState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _highlightedState
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 highlightedState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _pressedState
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 pressedState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _disabledState
    // Size: 0xC
    // Offset: 0x44
    ::UnityEngine::Vector3 disabledState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _selectedState
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 selectedState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _selectedAndHighlightedState
    // Size: 0xC
    // Offset: 0x5C
    ::UnityEngine::Vector3 selectedAndHighlightedState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: private UnityEngine.Vector3 _normalState
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__normalState();
    // Get instance field reference: private UnityEngine.Vector3 _highlightedState
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__highlightedState();
    // Get instance field reference: private UnityEngine.Vector3 _pressedState
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__pressedState();
    // Get instance field reference: private UnityEngine.Vector3 _disabledState
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__disabledState();
    // Get instance field reference: private UnityEngine.Vector3 _selectedState
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__selectedState();
    // Get instance field reference: private UnityEngine.Vector3 _selectedAndHighlightedState
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__selectedAndHighlightedState();
    // public UnityEngine.Vector3 get_normalState()
    // Offset: 0x15407CC
    ::UnityEngine::Vector3 get_normalState();
    // public UnityEngine.Vector3 get_highlightedState()
    // Offset: 0x15407D8
    ::UnityEngine::Vector3 get_highlightedState();
    // public UnityEngine.Vector3 get_pressedState()
    // Offset: 0x15407E4
    ::UnityEngine::Vector3 get_pressedState();
    // public UnityEngine.Vector3 get_disabledState()
    // Offset: 0x15407F0
    ::UnityEngine::Vector3 get_disabledState();
    // public UnityEngine.Vector3 get_selectedState()
    // Offset: 0x15407FC
    ::UnityEngine::Vector3 get_selectedState();
    // public UnityEngine.Vector3 get_selectedAndHighlightedState()
    // Offset: 0x1540808
    ::UnityEngine::Vector3 get_selectedAndHighlightedState();
    // public System.Void .ctor()
    // Offset: 0x1540814
    // Implemented from: BaseTransitionSO
    // Base method: System.Void BaseTransitionSO::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector3TransitionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Vector3TransitionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector3TransitionSO*, creationType>()));
    }
  }; // Vector3TransitionSO
  #pragma pack(pop)
  static check_size<sizeof(Vector3TransitionSO), 92 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_Vector3TransitionSOSizeCheck;
  static_assert(sizeof(Vector3TransitionSO) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Vector3TransitionSO::get_normalState
// Il2CppName: get_normalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::Vector3TransitionSO::*)()>(&GlobalNamespace::Vector3TransitionSO::get_normalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3TransitionSO*), "get_normalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3TransitionSO::get_highlightedState
// Il2CppName: get_highlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::Vector3TransitionSO::*)()>(&GlobalNamespace::Vector3TransitionSO::get_highlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3TransitionSO*), "get_highlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3TransitionSO::get_pressedState
// Il2CppName: get_pressedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::Vector3TransitionSO::*)()>(&GlobalNamespace::Vector3TransitionSO::get_pressedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3TransitionSO*), "get_pressedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3TransitionSO::get_disabledState
// Il2CppName: get_disabledState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::Vector3TransitionSO::*)()>(&GlobalNamespace::Vector3TransitionSO::get_disabledState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3TransitionSO*), "get_disabledState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3TransitionSO::get_selectedState
// Il2CppName: get_selectedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::Vector3TransitionSO::*)()>(&GlobalNamespace::Vector3TransitionSO::get_selectedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3TransitionSO*), "get_selectedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3TransitionSO::get_selectedAndHighlightedState
// Il2CppName: get_selectedAndHighlightedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::Vector3TransitionSO::*)()>(&GlobalNamespace::Vector3TransitionSO::get_selectedAndHighlightedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Vector3TransitionSO*), "get_selectedAndHighlightedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Vector3TransitionSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
