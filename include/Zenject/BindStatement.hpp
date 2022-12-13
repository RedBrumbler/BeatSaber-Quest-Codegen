// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IBindingFinalizer
  class IBindingFinalizer;
  // Forward declaring type: BindingInheritanceMethods
  struct BindingInheritanceMethods;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindStatement
  class BindStatement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::BindStatement);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindStatement*, "Zenject", "BindStatement");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.BindStatement
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class BindStatement : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private readonly System.Collections.Generic.List`1<System.IDisposable> _disposables
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::System::IDisposable*>* disposables;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::IDisposable*>*) == 0x8);
    // private Zenject.IBindingFinalizer _bindingFinalizer
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::IBindingFinalizer* bindingFinalizer;
    // Field size check
    static_assert(sizeof(::Zenject::IBindingFinalizer*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.IDisposable> _disposables
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::IDisposable*>*& dyn__disposables();
    // Get instance field reference: private Zenject.IBindingFinalizer _bindingFinalizer
    [[deprecated("Use field access instead!")]] ::Zenject::IBindingFinalizer*& dyn__bindingFinalizer();
    // public Zenject.BindingInheritanceMethods get_BindingInheritanceMethod()
    // Offset: 0x17BC7D8
    ::Zenject::BindingInheritanceMethods get_BindingInheritanceMethod();
    // public System.Boolean get_HasFinalizer()
    // Offset: 0x17BC8F8
    bool get_HasFinalizer();
    // public System.Void .ctor()
    // Offset: 0x17BC654
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BindStatement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindStatement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BindStatement*, creationType>()));
    }
    // public System.Void SetFinalizer(Zenject.IBindingFinalizer bindingFinalizer)
    // Offset: 0x17BC908
    void SetFinalizer(::Zenject::IBindingFinalizer* bindingFinalizer);
    // private System.Void AssertHasFinalizer()
    // Offset: 0x17BC890
    void AssertHasFinalizer();
    // public System.Void AddDisposable(System.IDisposable disposable)
    // Offset: 0x17BC910
    void AddDisposable(::System::IDisposable* disposable);
    // public Zenject.BindInfo SpawnBindInfo()
    // Offset: 0x17BC978
    ::Zenject::BindInfo* SpawnBindInfo();
    // public System.Void FinalizeBinding(Zenject.DiContainer container)
    // Offset: 0x17BC9F4
    void FinalizeBinding(::Zenject::DiContainer* container);
    // public System.Void Reset()
    // Offset: 0x17BC6CC
    void Reset();
    // public System.Void Dispose()
    // Offset: 0x17BCAC0
    void Dispose();
  }; // Zenject.BindStatement
  #pragma pack(pop)
  static check_size<sizeof(BindStatement), 24 + sizeof(::Zenject::IBindingFinalizer*)> __Zenject_BindStatementSizeCheck;
  static_assert(sizeof(BindStatement) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::BindStatement::get_BindingInheritanceMethod
// Il2CppName: get_BindingInheritanceMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::BindingInheritanceMethods (Zenject::BindStatement::*)()>(&Zenject::BindStatement::get_BindingInheritanceMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindStatement*), "get_BindingInheritanceMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::BindStatement::get_HasFinalizer
// Il2CppName: get_HasFinalizer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::BindStatement::*)()>(&Zenject::BindStatement::get_HasFinalizer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindStatement*), "get_HasFinalizer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::BindStatement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::BindStatement::SetFinalizer
// Il2CppName: SetFinalizer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::BindStatement::*)(::Zenject::IBindingFinalizer*)>(&Zenject::BindStatement::SetFinalizer)> {
  static const MethodInfo* get() {
    static auto* bindingFinalizer = &::il2cpp_utils::GetClassFromName("Zenject", "IBindingFinalizer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindStatement*), "SetFinalizer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingFinalizer});
  }
};
// Writing MetadataGetter for method: Zenject::BindStatement::AssertHasFinalizer
// Il2CppName: AssertHasFinalizer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::BindStatement::*)()>(&Zenject::BindStatement::AssertHasFinalizer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindStatement*), "AssertHasFinalizer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::BindStatement::AddDisposable
// Il2CppName: AddDisposable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::BindStatement::*)(::System::IDisposable*)>(&Zenject::BindStatement::AddDisposable)> {
  static const MethodInfo* get() {
    static auto* disposable = &::il2cpp_utils::GetClassFromName("System", "IDisposable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindStatement*), "AddDisposable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposable});
  }
};
// Writing MetadataGetter for method: Zenject::BindStatement::SpawnBindInfo
// Il2CppName: SpawnBindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::BindInfo* (Zenject::BindStatement::*)()>(&Zenject::BindStatement::SpawnBindInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindStatement*), "SpawnBindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::BindStatement::FinalizeBinding
// Il2CppName: FinalizeBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::BindStatement::*)(::Zenject::DiContainer*)>(&Zenject::BindStatement::FinalizeBinding)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindStatement*), "FinalizeBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Zenject::BindStatement::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::BindStatement::*)()>(&Zenject::BindStatement::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindStatement*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::BindStatement::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::BindStatement::*)()>(&Zenject::BindStatement::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindStatement*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
