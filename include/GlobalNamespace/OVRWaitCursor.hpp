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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRWaitCursor
  class OVRWaitCursor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRWaitCursor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRWaitCursor*, "", "OVRWaitCursor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: OVRWaitCursor
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRWaitCursor : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Vector3 rotateSpeeds
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 rotateSpeeds;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Vector3 rotateSpeeds
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_rotateSpeeds();
    // public System.Void .ctor()
    // Offset: 0x2546BF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRWaitCursor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRWaitCursor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRWaitCursor*, creationType>()));
    }
    // private System.Void Update()
    // Offset: 0x2546B34
    void Update();
  }; // OVRWaitCursor
  #pragma pack(pop)
  static check_size<sizeof(OVRWaitCursor), 24 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_OVRWaitCursorSizeCheck;
  static_assert(sizeof(OVRWaitCursor) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRWaitCursor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRWaitCursor::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRWaitCursor::*)()>(&GlobalNamespace::OVRWaitCursor::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRWaitCursor*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
