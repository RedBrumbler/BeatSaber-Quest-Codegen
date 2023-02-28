// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ConventionFilterTypesBinder
#include "Zenject/ConventionFilterTypesBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ConventionFilterTypesBinder::$$c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionFilterTypesBinder::$$c__DisplayClass8_0*, "Zenject", "ConventionFilterTypesBinder/<>c__DisplayClass8_0");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConventionFilterTypesBinder/Zenject.<>c__DisplayClass8_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ConventionFilterTypesBinder::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Type attribute
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* attribute;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return attribute;
    }
    // Get instance field reference: public System.Type attribute
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_attribute();
    // public System.Void .ctor()
    // Offset: 0x17D4274
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionFilterTypesBinder::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConventionFilterTypesBinder::$$c__DisplayClass8_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionFilterTypesBinder::$$c__DisplayClass8_0*, creationType>()));
    }
    // System.Boolean <WithoutAttribute>b__0(System.Type t)
    // Offset: 0x17D5928
    bool $WithoutAttribute$b__0(::System::Type* t);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x17D5A08
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x17D5A64
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.ConventionFilterTypesBinder/Zenject.<>c__DisplayClass8_0
  #pragma pack(pop)
  static check_size<sizeof(ConventionFilterTypesBinder::$$c__DisplayClass8_0), 16 + sizeof(::System::Type*)> __Zenject_ConventionFilterTypesBinder_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(ConventionFilterTypesBinder::$$c__DisplayClass8_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass8_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass8_0::$WithoutAttribute$b__0
// Il2CppName: <WithoutAttribute>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ConventionFilterTypesBinder::$$c__DisplayClass8_0::*)(::System::Type*)>(&Zenject::ConventionFilterTypesBinder::$$c__DisplayClass8_0::$WithoutAttribute$b__0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder::$$c__DisplayClass8_0*), "<WithoutAttribute>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass8_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::ConventionFilterTypesBinder::$$c__DisplayClass8_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder::$$c__DisplayClass8_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass8_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::ConventionFilterTypesBinder::$$c__DisplayClass8_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder::$$c__DisplayClass8_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
