// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IExtenderProvider
  class IExtenderProvider;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ExtenderProvidedPropertyAttribute
  class ExtenderProvidedPropertyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ExtenderProvidedPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ExtenderProvidedPropertyAttribute*, "System.ComponentModel", "ExtenderProvidedPropertyAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ExtenderProvidedPropertyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 1047D44
  class ExtenderProvidedPropertyAttribute : public ::System::Attribute {
    public:
    public:
    // private System.ComponentModel.IExtenderProvider provider
    // Size: 0x8
    // Offset: 0x10
    ::System::ComponentModel::IExtenderProvider* provider;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::IExtenderProvider*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::ComponentModel::IExtenderProvider*
    constexpr operator ::System::ComponentModel::IExtenderProvider*() const noexcept {
      return provider;
    }
    // Get instance field reference: private System.ComponentModel.IExtenderProvider provider
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::IExtenderProvider*& dyn_provider();
    // public System.ComponentModel.IExtenderProvider get_Provider()
    // Offset: 0x1D9F16C
    ::System::ComponentModel::IExtenderProvider* get_Provider();
  }; // System.ComponentModel.ExtenderProvidedPropertyAttribute
  #pragma pack(pop)
  static check_size<sizeof(ExtenderProvidedPropertyAttribute), 16 + sizeof(::System::ComponentModel::IExtenderProvider*)> __System_ComponentModel_ExtenderProvidedPropertyAttributeSizeCheck;
  static_assert(sizeof(ExtenderProvidedPropertyAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ExtenderProvidedPropertyAttribute::get_Provider
// Il2CppName: get_Provider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::IExtenderProvider* (System::ComponentModel::ExtenderProvidedPropertyAttribute::*)()>(&System::ComponentModel::ExtenderProvidedPropertyAttribute::get_Provider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ExtenderProvidedPropertyAttribute*), "get_Provider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};