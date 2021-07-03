// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.CLSCompliantAttribute
  // [AttributeUsageAttribute] Offset: D7A468
  // [ComVisibleAttribute] Offset: D7A468
  class CLSCompliantAttribute : public System::Attribute {
    public:
    // private System.Boolean m_compliant
    // Size: 0x1
    // Offset: 0x10
    bool m_compliant;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CLSCompliantAttribute
    CLSCompliantAttribute(bool m_compliant_ = {}) noexcept : m_compliant{m_compliant_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return m_compliant;
    }
    // public System.Void .ctor(System.Boolean isCompliant)
    // Offset: 0x177F204
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CLSCompliantAttribute* New_ctor(bool isCompliant) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::CLSCompliantAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CLSCompliantAttribute*, creationType>(isCompliant)));
    }
  }; // System.CLSCompliantAttribute
  #pragma pack(pop)
  static check_size<sizeof(CLSCompliantAttribute), 16 + sizeof(bool)> __System_CLSCompliantAttributeSizeCheck;
  static_assert(sizeof(CLSCompliantAttribute) == 0x11);
  // Writing MetadataGetter for method: CLSCompliantAttribute::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CLSCompliantAttribute::*)(bool)>(&CLSCompliantAttribute::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(CLSCompliantAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CLSCompliantAttribute::*)(bool)>(&CLSCompliantAttribute::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(CLSCompliantAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::CLSCompliantAttribute*, "System", "CLSCompliantAttribute");
