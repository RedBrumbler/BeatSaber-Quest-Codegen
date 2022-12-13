// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Enum::ValuesAndNames);
DEFINE_IL2CPP_ARG_TYPE(::System::Enum::ValuesAndNames*, "System", "Enum/ValuesAndNames");
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Enum/System.ValuesAndNames
  // [TokenAttribute] Offset: FFFFFFFF
  class Enum::ValuesAndNames : public ::Il2CppObject {
    public:
    public:
    // public System.UInt64[] Values
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint64_t> Values;
    // Field size check
    static_assert(sizeof(::ArrayW<uint64_t>) == 0x8);
    // public System.String[] Names
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> Names;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Get instance field reference: public System.UInt64[] Values
    [[deprecated("Use field access instead!")]] ::ArrayW<uint64_t>& dyn_Values();
    // Get instance field reference: public System.String[] Names
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_Names();
    // public System.Void .ctor(System.UInt64[] values, System.String[] names)
    // Offset: 0x1990048
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Enum::ValuesAndNames* New_ctor(::ArrayW<uint64_t> values, ::ArrayW<::StringW> names) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Enum::ValuesAndNames::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Enum::ValuesAndNames*, creationType>(values, names)));
    }
  }; // System.Enum/System.ValuesAndNames
  #pragma pack(pop)
  static check_size<sizeof(Enum::ValuesAndNames), 24 + sizeof(::ArrayW<::StringW>)> __System_Enum_ValuesAndNamesSizeCheck;
  static_assert(sizeof(Enum::ValuesAndNames) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Enum::ValuesAndNames::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
