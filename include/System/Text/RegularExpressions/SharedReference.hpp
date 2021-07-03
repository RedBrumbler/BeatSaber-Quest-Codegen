// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: WeakReference
  class WeakReference;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.SharedReference
  class SharedReference : public ::Il2CppObject {
    public:
    // private System.WeakReference _ref
    // Size: 0x8
    // Offset: 0x10
    System::WeakReference* ref;
    // Field size check
    static_assert(sizeof(System::WeakReference*) == 0x8);
    // Creating value type constructor for type: SharedReference
    SharedReference(System::WeakReference* ref_ = {}) noexcept : ref{ref_} {}
    // Creating conversion operator: operator System::WeakReference*
    constexpr operator System::WeakReference*() const noexcept {
      return ref;
    }
    // public System.Void .ctor()
    // Offset: 0x1998B7C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SharedReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::SharedReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SharedReference*, creationType>()));
    }
  }; // System.Text.RegularExpressions.SharedReference
  #pragma pack(pop)
  static check_size<sizeof(SharedReference), 16 + sizeof(System::WeakReference*)> __System_Text_RegularExpressions_SharedReferenceSizeCheck;
  static_assert(sizeof(SharedReference) == 0x18);
  // Writing MetadataGetter for method: SharedReference::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SharedReference::*)()>(&SharedReference::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SharedReference*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SharedReference::*)()>(&SharedReference::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SharedReference*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::SharedReference*, "System.Text.RegularExpressions", "SharedReference");
