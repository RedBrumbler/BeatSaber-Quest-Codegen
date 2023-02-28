// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: JetBrains.Annotations.ImplicitUseKindFlags
#include "JetBrains/Annotations/ImplicitUseKindFlags_.hpp"
// Including type: JetBrains.Annotations.ImplicitUseTargetFlags
#include "JetBrains/Annotations/ImplicitUseTargetFlags_.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Forward declaring type: UsedImplicitlyAttribute
  class UsedImplicitlyAttribute_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::JetBrains::Annotations::UsedImplicitlyAttribute_);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::UsedImplicitlyAttribute_*, "JetBrains.Annotations", "UsedImplicitlyAttribute");
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.UsedImplicitlyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10D3AEC
  class UsedImplicitlyAttribute_ : public ::System::Attribute {
    public:
    public:
    // private JetBrains.Annotations.ImplicitUseKindFlags <UseKindFlags>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::JetBrains::Annotations::ImplicitUseKindFlags_ UseKindFlags;
    // Field size check
    static_assert(sizeof(::JetBrains::Annotations::ImplicitUseKindFlags_) == 0x4);
    // private JetBrains.Annotations.ImplicitUseTargetFlags <TargetFlags>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    ::JetBrains::Annotations::ImplicitUseTargetFlags_ TargetFlags;
    // Field size check
    static_assert(sizeof(::JetBrains::Annotations::ImplicitUseTargetFlags_) == 0x4);
    public:
    // Get instance field reference: private JetBrains.Annotations.ImplicitUseKindFlags <UseKindFlags>k__BackingField
    [[deprecated("Use field access instead!")]] ::JetBrains::Annotations::ImplicitUseKindFlags_& dyn_$UseKindFlags$k__BackingField();
    // Get instance field reference: private JetBrains.Annotations.ImplicitUseTargetFlags <TargetFlags>k__BackingField
    [[deprecated("Use field access instead!")]] ::JetBrains::Annotations::ImplicitUseTargetFlags_& dyn_$TargetFlags$k__BackingField();
    // public JetBrains.Annotations.ImplicitUseKindFlags get_UseKindFlags()
    // Offset: 0x2B9AEB0
    ::JetBrains::Annotations::ImplicitUseKindFlags_ get_UseKindFlags();
    // private System.Void set_UseKindFlags(JetBrains.Annotations.ImplicitUseKindFlags value)
    // Offset: 0x2B9AEB8
    void set_UseKindFlags(::JetBrains::Annotations::ImplicitUseKindFlags_ value);
    // public JetBrains.Annotations.ImplicitUseTargetFlags get_TargetFlags()
    // Offset: 0x2B9AEC0
    ::JetBrains::Annotations::ImplicitUseTargetFlags_ get_TargetFlags();
    // private System.Void set_TargetFlags(JetBrains.Annotations.ImplicitUseTargetFlags value)
    // Offset: 0x2B9AEC8
    void set_TargetFlags(::JetBrains::Annotations::ImplicitUseTargetFlags_ value);
    // public System.Void .ctor()
    // Offset: 0x2B9ADE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UsedImplicitlyAttribute_* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::UsedImplicitlyAttribute_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UsedImplicitlyAttribute_*, creationType>()));
    }
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseKindFlags useKindFlags)
    // Offset: 0x2B9AE50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UsedImplicitlyAttribute_* New_ctor(::JetBrains::Annotations::ImplicitUseKindFlags_ useKindFlags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::UsedImplicitlyAttribute_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UsedImplicitlyAttribute_*, creationType>(useKindFlags)));
    }
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseTargetFlags targetFlags)
    // Offset: 0x2B9AE80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UsedImplicitlyAttribute_* New_ctor(::JetBrains::Annotations::ImplicitUseTargetFlags_ targetFlags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::UsedImplicitlyAttribute_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UsedImplicitlyAttribute_*, creationType>(targetFlags)));
    }
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseKindFlags useKindFlags, JetBrains.Annotations.ImplicitUseTargetFlags targetFlags)
    // Offset: 0x2B9AE18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UsedImplicitlyAttribute_* New_ctor(::JetBrains::Annotations::ImplicitUseKindFlags_ useKindFlags, ::JetBrains::Annotations::ImplicitUseTargetFlags_ targetFlags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::UsedImplicitlyAttribute_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UsedImplicitlyAttribute_*, creationType>(useKindFlags, targetFlags)));
    }
  }; // JetBrains.Annotations.UsedImplicitlyAttribute
  #pragma pack(pop)
  static check_size<sizeof(UsedImplicitlyAttribute_), 20 + sizeof(::JetBrains::Annotations::ImplicitUseTargetFlags_)> __JetBrains_Annotations_UsedImplicitlyAttribute_SizeCheck;
  static_assert(sizeof(UsedImplicitlyAttribute_) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::UsedImplicitlyAttribute_::get_UseKindFlags
// Il2CppName: get_UseKindFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::JetBrains::Annotations::ImplicitUseKindFlags_ (JetBrains::Annotations::UsedImplicitlyAttribute_::*)()>(&JetBrains::Annotations::UsedImplicitlyAttribute_::get_UseKindFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::UsedImplicitlyAttribute_*), "get_UseKindFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::UsedImplicitlyAttribute_::set_UseKindFlags
// Il2CppName: set_UseKindFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::UsedImplicitlyAttribute_::*)(::JetBrains::Annotations::ImplicitUseKindFlags_)>(&JetBrains::Annotations::UsedImplicitlyAttribute_::set_UseKindFlags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("JetBrains.Annotations", "ImplicitUseKindFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::UsedImplicitlyAttribute_*), "set_UseKindFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::UsedImplicitlyAttribute_::get_TargetFlags
// Il2CppName: get_TargetFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::JetBrains::Annotations::ImplicitUseTargetFlags_ (JetBrains::Annotations::UsedImplicitlyAttribute_::*)()>(&JetBrains::Annotations::UsedImplicitlyAttribute_::get_TargetFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::UsedImplicitlyAttribute_*), "get_TargetFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::UsedImplicitlyAttribute_::set_TargetFlags
// Il2CppName: set_TargetFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::UsedImplicitlyAttribute_::*)(::JetBrains::Annotations::ImplicitUseTargetFlags_)>(&JetBrains::Annotations::UsedImplicitlyAttribute_::set_TargetFlags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("JetBrains.Annotations", "ImplicitUseTargetFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::UsedImplicitlyAttribute_*), "set_TargetFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::UsedImplicitlyAttribute_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::UsedImplicitlyAttribute_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::UsedImplicitlyAttribute_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::UsedImplicitlyAttribute_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
