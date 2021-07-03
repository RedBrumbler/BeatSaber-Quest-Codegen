// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Globalization.HebrewNumber/HS
#include "System/Globalization/HebrewNumber.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Globalization.HebrewNumberParsingContext
  struct HebrewNumberParsingContext/*, public System::ValueType*/ {
    public:
    // System.Globalization.HebrewNumber/HS state
    // Size: 0x4
    // Offset: 0x0
    System::Globalization::HebrewNumber::HS state;
    // Field size check
    static_assert(sizeof(System::Globalization::HebrewNumber::HS) == 0x4);
    // System.Int32 result
    // Size: 0x4
    // Offset: 0x4
    int result;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: HebrewNumberParsingContext
    constexpr HebrewNumberParsingContext(System::Globalization::HebrewNumber::HS state_ = {}, int result_ = {}) noexcept : state{state_}, result{result_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.Int32 result)
    // Offset: 0xF031E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    HebrewNumberParsingContext(int result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::HebrewNumberParsingContext::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, result);
    }
  }; // System.Globalization.HebrewNumberParsingContext
  #pragma pack(pop)
  static check_size<sizeof(HebrewNumberParsingContext), 4 + sizeof(int)> __System_Globalization_HebrewNumberParsingContextSizeCheck;
  static_assert(sizeof(HebrewNumberParsingContext) == 0x8);
  // Writing MetadataGetter for method: HebrewNumberParsingContext::HebrewNumberParsingContext
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HebrewNumberParsingContext::*)(int)>(&HebrewNumberParsingContext::HebrewNumberParsingContext<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(HebrewNumberParsingContext), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HebrewNumberParsingContext::*)(int)>(&HebrewNumberParsingContext::HebrewNumberParsingContext<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(HebrewNumberParsingContext), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::HebrewNumberParsingContext, "System.Globalization", "HebrewNumberParsingContext");
