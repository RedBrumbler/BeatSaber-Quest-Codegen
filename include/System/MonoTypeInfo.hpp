// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MonoCMethod
  class MonoCMethod;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: MonoTypeInfo
  class MonoTypeInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::MonoTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoTypeInfo*, "System", "MonoTypeInfo");
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.MonoTypeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoTypeInfo : public ::Il2CppObject {
    public:
    public:
    // public System.String full_name
    // Size: 0x8
    // Offset: 0x10
    ::StringW full_name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Reflection.MonoCMethod default_ctor
    // Size: 0x8
    // Offset: 0x18
    ::System::Reflection::MonoCMethod* default_ctor;
    // Field size check
    static_assert(sizeof(::System::Reflection::MonoCMethod*) == 0x8);
    public:
    // Get instance field reference: public System.String full_name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_full_name();
    // Get instance field reference: public System.Reflection.MonoCMethod default_ctor
    [[deprecated("Use field access instead!")]] ::System::Reflection::MonoCMethod*& dyn_default_ctor();
    // public System.Void .ctor()
    // Offset: 0x1C4EEDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoTypeInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MonoTypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoTypeInfo*, creationType>()));
    }
  }; // System.MonoTypeInfo
  #pragma pack(pop)
  static check_size<sizeof(MonoTypeInfo), 24 + sizeof(::System::Reflection::MonoCMethod*)> __System_MonoTypeInfoSizeCheck;
  static_assert(sizeof(MonoTypeInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::MonoTypeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
