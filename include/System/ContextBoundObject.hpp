// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ContextBoundObject
  // [ComVisibleAttribute] Offset: D7A4C4
  class ContextBoundObject : public System::MarshalByRefObject {
    public:
    // Creating value type constructor for type: ContextBoundObject
    ContextBoundObject() noexcept {}
    // protected System.Void .ctor()
    // Offset: 0x197AEAC
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContextBoundObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ContextBoundObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContextBoundObject*, creationType>()));
    }
  }; // System.ContextBoundObject
  #pragma pack(pop)
  // Writing MetadataGetter for method: ContextBoundObject::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ContextBoundObject::*)()>(&ContextBoundObject::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ContextBoundObject*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ContextBoundObject::*)()>(&ContextBoundObject::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ContextBoundObject*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::ContextBoundObject*, "System", "ContextBoundObject");
