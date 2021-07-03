// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.YieldInstruction
#include "UnityEngine/YieldInstruction.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.WaitForEndOfFrame
  // [RequiredByNativeCodeAttribute] Offset: D906FC
  class WaitForEndOfFrame : public UnityEngine::YieldInstruction {
    public:
    // Creating value type constructor for type: WaitForEndOfFrame
    WaitForEndOfFrame() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x2325B08
    // Implemented from: UnityEngine.YieldInstruction
    // Base method: System.Void YieldInstruction::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaitForEndOfFrame* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::WaitForEndOfFrame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaitForEndOfFrame*, creationType>()));
    }
  }; // UnityEngine.WaitForEndOfFrame
  #pragma pack(pop)
  // Writing MetadataGetter for method: WaitForEndOfFrame::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WaitForEndOfFrame::*)()>(&WaitForEndOfFrame::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(WaitForEndOfFrame*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (WaitForEndOfFrame::*)()>(&WaitForEndOfFrame::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(WaitForEndOfFrame*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WaitForEndOfFrame*, "UnityEngine", "WaitForEndOfFrame");
