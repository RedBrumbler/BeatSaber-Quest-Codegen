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
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.TimeType
  class TimeType : public ::Il2CppObject {
    public:
    // public readonly System.Int32 Offset
    // Size: 0x4
    // Offset: 0x10
    int Offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Boolean IsDst
    // Size: 0x1
    // Offset: 0x14
    bool IsDst;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsDst and: Name
    char __padding1[0x3] = {};
    // public System.String Name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TimeType
    TimeType(int Offset_ = {}, bool IsDst_ = {}, ::Il2CppString* Name_ = {}) noexcept : Offset{Offset_}, IsDst{IsDst_}, Name{Name_} {}
    // public System.Void .ctor(System.Int32 offset, System.Boolean is_dst, System.String abbrev)
    // Offset: 0x1899950
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeType* New_ctor(int offset, bool is_dst, ::Il2CppString* abbrev) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TimeType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeType*, creationType>(offset, is_dst, abbrev)));
    }
    // public override System.String ToString()
    // Offset: 0x1899998
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.TimeType
  #pragma pack(pop)
  static check_size<sizeof(TimeType), 24 + sizeof(::Il2CppString*)> __System_TimeTypeSizeCheck;
  static_assert(sizeof(TimeType) == 0x20);
  // Writing MetadataGetter for method: TimeType::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TimeType::*)(int, bool, ::Il2CppString*)>(&TimeType::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TimeType*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TimeType::*)(int, bool, ::Il2CppString*)>(&TimeType::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TimeType*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: TimeType::ToString
  // Il2CppName: ToString
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (TimeType::*)()>(&TimeType::ToString)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TimeType*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::TimeType*, "System", "TimeType");
