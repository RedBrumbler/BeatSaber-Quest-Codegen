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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.FixedBufferAttribute
  // [AttributeUsageAttribute] Offset: D7EBE8
  class FixedBufferAttribute : public System::Attribute {
    public:
    // private System.Type elementType
    // Size: 0x8
    // Offset: 0x10
    System::Type* elementType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.Int32 length
    // Size: 0x4
    // Offset: 0x18
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FixedBufferAttribute
    FixedBufferAttribute(System::Type* elementType_ = {}, int length_ = {}) noexcept : elementType{elementType_}, length{length_} {}
    // public System.Void .ctor(System.Type elementType, System.Int32 length)
    // Offset: 0x141C954
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FixedBufferAttribute* New_ctor(System::Type* elementType, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::FixedBufferAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FixedBufferAttribute*, creationType>(elementType, length)));
    }
    // public System.Type get_ElementType()
    // Offset: 0x141C990
    System::Type* get_ElementType();
    // public System.Int32 get_Length()
    // Offset: 0x141C998
    int get_Length();
  }; // System.Runtime.CompilerServices.FixedBufferAttribute
  #pragma pack(pop)
  static check_size<sizeof(FixedBufferAttribute), 24 + sizeof(int)> __System_Runtime_CompilerServices_FixedBufferAttributeSizeCheck;
  static_assert(sizeof(FixedBufferAttribute) == 0x1C);
  // Writing MetadataGetter for method: FixedBufferAttribute::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FixedBufferAttribute::*)(System::Type*, int)>(&FixedBufferAttribute::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FixedBufferAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FixedBufferAttribute::*)(System::Type*, int)>(&FixedBufferAttribute::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FixedBufferAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: FixedBufferAttribute::get_ElementType
  // Il2CppName: get_ElementType
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (FixedBufferAttribute::*)()>(&FixedBufferAttribute::get_ElementType)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FixedBufferAttribute*), "get_ElementType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: FixedBufferAttribute::get_Length
  // Il2CppName: get_Length
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (FixedBufferAttribute::*)()>(&FixedBufferAttribute::get_Length)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FixedBufferAttribute*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::FixedBufferAttribute*, "System.Runtime.CompilerServices", "FixedBufferAttribute");
