// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: AssemblyInformationalVersionAttribute
  class AssemblyInformationalVersionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::AssemblyInformationalVersionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyInformationalVersionAttribute*, "System.Reflection", "AssemblyInformationalVersionAttribute");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyInformationalVersionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 107B5DC
  // [AttributeUsageAttribute] Offset: 107B5DC
  class AssemblyInformationalVersionAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String m_informationalVersion
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_informationalVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return m_informationalVersion;
    }
    // Get instance field reference: private System.String m_informationalVersion
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_informationalVersion();
    // public System.Void .ctor(System.String informationalVersion)
    // Offset: 0x22DB41C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyInformationalVersionAttribute* New_ctor(::StringW informationalVersion) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::AssemblyInformationalVersionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyInformationalVersionAttribute*, creationType>(informationalVersion)));
    }
  }; // System.Reflection.AssemblyInformationalVersionAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyInformationalVersionAttribute), 16 + sizeof(::StringW)> __System_Reflection_AssemblyInformationalVersionAttributeSizeCheck;
  static_assert(sizeof(AssemblyInformationalVersionAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyInformationalVersionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
