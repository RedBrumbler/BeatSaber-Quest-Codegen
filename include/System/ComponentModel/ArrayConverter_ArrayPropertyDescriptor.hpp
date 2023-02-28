// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeConverter/System.ComponentModel.SimplePropertyDescriptor
#include "System/ComponentModel/TypeConverter_SimplePropertyDescriptor.hpp"
// Including type: System.ComponentModel.ArrayConverter
#include "System/ComponentModel/ArrayConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ArrayConverter::ArrayPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ArrayConverter::ArrayPropertyDescriptor*, "System.ComponentModel", "ArrayConverter/ArrayPropertyDescriptor");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x94
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ArrayConverter/System.ComponentModel.ArrayPropertyDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class ArrayConverter::ArrayPropertyDescriptor : public ::System::ComponentModel::TypeConverter::SimplePropertyDescriptor {
    public:
    public:
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x90
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return index;
    }
    // Get instance field reference: private System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // public System.Void .ctor(System.Type arrayType, System.Type elementType, System.Int32 index)
    // Offset: 0x1E5CD68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayConverter::ArrayPropertyDescriptor* New_ctor(::System::Type* arrayType, ::System::Type* elementType, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ArrayConverter::ArrayPropertyDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayConverter::ArrayPropertyDescriptor*, creationType>(arrayType, elementType, index)));
    }
  }; // System.ComponentModel.ArrayConverter/System.ComponentModel.ArrayPropertyDescriptor
  #pragma pack(pop)
  static check_size<sizeof(ArrayConverter::ArrayPropertyDescriptor), 144 + sizeof(int)> __System_ComponentModel_ArrayConverter_ArrayPropertyDescriptorSizeCheck;
  static_assert(sizeof(ArrayConverter::ArrayPropertyDescriptor) == 0x94);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ArrayConverter::ArrayPropertyDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
