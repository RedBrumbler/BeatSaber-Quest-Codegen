// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeDescriptor
#include "System/ComponentModel/TypeDescriptor.hpp"
// Including type: System.ComponentModel.ICustomTypeDescriptor
#include "System/ComponentModel/ICustomTypeDescriptor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AttributeCollection
  class AttributeCollection;
  // Forward declaring type: TypeConverter
  class TypeConverter;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor::MergedTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor::MergedTypeDescriptor*, "System.ComponentModel", "TypeDescriptor/MergedTypeDescriptor");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.TypeDescriptor/System.ComponentModel.MergedTypeDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeDescriptor::MergedTypeDescriptor : public ::Il2CppObject/*, public ::System::ComponentModel::ICustomTypeDescriptor*/ {
    public:
    public:
    // private System.ComponentModel.ICustomTypeDescriptor _primary
    // Size: 0x8
    // Offset: 0x10
    ::System::ComponentModel::ICustomTypeDescriptor* primary;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::ICustomTypeDescriptor*) == 0x8);
    // private System.ComponentModel.ICustomTypeDescriptor _secondary
    // Size: 0x8
    // Offset: 0x18
    ::System::ComponentModel::ICustomTypeDescriptor* secondary;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::ICustomTypeDescriptor*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ComponentModel::ICustomTypeDescriptor
    operator ::System::ComponentModel::ICustomTypeDescriptor() noexcept {
      return *reinterpret_cast<::System::ComponentModel::ICustomTypeDescriptor*>(this);
    }
    // Creating interface conversion operator: i_ICustomTypeDescriptor
    inline ::System::ComponentModel::ICustomTypeDescriptor* i_ICustomTypeDescriptor() noexcept {
      return reinterpret_cast<::System::ComponentModel::ICustomTypeDescriptor*>(this);
    }
    // Get instance field reference: private System.ComponentModel.ICustomTypeDescriptor _primary
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::ICustomTypeDescriptor*& dyn__primary();
    // Get instance field reference: private System.ComponentModel.ICustomTypeDescriptor _secondary
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::ICustomTypeDescriptor*& dyn__secondary();
    // System.Void .ctor(System.ComponentModel.ICustomTypeDescriptor primary, System.ComponentModel.ICustomTypeDescriptor secondary)
    // Offset: 0x1D9830C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeDescriptor::MergedTypeDescriptor* New_ctor(::System::ComponentModel::ICustomTypeDescriptor* primary, ::System::ComponentModel::ICustomTypeDescriptor* secondary) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::TypeDescriptor::MergedTypeDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeDescriptor::MergedTypeDescriptor*, creationType>(primary, secondary)));
    }
    // private System.ComponentModel.AttributeCollection System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
    // Offset: 0x1D98344
    ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();
    // private System.ComponentModel.TypeConverter System.ComponentModel.ICustomTypeDescriptor.GetConverter()
    // Offset: 0x1D98478
    ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();
  }; // System.ComponentModel.TypeDescriptor/System.ComponentModel.MergedTypeDescriptor
  #pragma pack(pop)
  static check_size<sizeof(TypeDescriptor::MergedTypeDescriptor), 24 + sizeof(::System::ComponentModel::ICustomTypeDescriptor*)> __System_ComponentModel_TypeDescriptor_MergedTypeDescriptorSizeCheck;
  static_assert(sizeof(TypeDescriptor::MergedTypeDescriptor) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::MergedTypeDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (System::ComponentModel::TypeDescriptor::MergedTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::MergedTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (System::ComponentModel::TypeDescriptor::MergedTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::MergedTypeDescriptor*), "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
