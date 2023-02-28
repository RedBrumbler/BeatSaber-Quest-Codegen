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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Forward declaring type: NotifyPropertyChangedInvocatorAttribute
  class NotifyPropertyChangedInvocatorAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*, "JetBrains.Annotations", "NotifyPropertyChangedInvocatorAttribute");
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10D39F4
  class NotifyPropertyChangedInvocatorAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String <ParameterName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW ParameterName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return ParameterName;
    }
    // Get instance field reference: private System.String <ParameterName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$ParameterName$k__BackingField();
    // public System.String get_ParameterName()
    // Offset: 0x2B9AB68
    ::StringW get_ParameterName();
    // private System.Void set_ParameterName(System.String value)
    // Offset: 0x2B9AB70
    void set_ParameterName(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x2B9AB34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NotifyPropertyChangedInvocatorAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NotifyPropertyChangedInvocatorAttribute*, creationType>()));
    }
    // public System.Void .ctor(System.String parameterName)
    // Offset: 0x2B9AB3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NotifyPropertyChangedInvocatorAttribute* New_ctor(::StringW parameterName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NotifyPropertyChangedInvocatorAttribute*, creationType>(parameterName)));
    }
  }; // JetBrains.Annotations.NotifyPropertyChangedInvocatorAttribute
  #pragma pack(pop)
  static check_size<sizeof(NotifyPropertyChangedInvocatorAttribute), 16 + sizeof(::StringW)> __JetBrains_Annotations_NotifyPropertyChangedInvocatorAttributeSizeCheck;
  static_assert(sizeof(NotifyPropertyChangedInvocatorAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::get_ParameterName
// Il2CppName: get_ParameterName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::*)()>(&JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::get_ParameterName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*), "get_ParameterName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::set_ParameterName
// Il2CppName: set_ParameterName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::*)(::StringW)>(&JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::set_ParameterName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*), "set_ParameterName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
