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
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: IdBinder
  class IdBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::IdBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IdBinder*, "Zenject", "IdBinder");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.IdBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class IdBinder : public ::Il2CppObject {
    public:
    public:
    // private Zenject.BindInfo _bindInfo
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::BindInfo* bindInfo;
    // Field size check
    static_assert(sizeof(::Zenject::BindInfo*) == 0x8);
    public:
    // Creating conversion operator: operator ::Zenject::BindInfo*
    constexpr operator ::Zenject::BindInfo*() const noexcept {
      return bindInfo;
    }
    // Get instance field reference: private Zenject.BindInfo _bindInfo
    [[deprecated("Use field access instead!")]] ::Zenject::BindInfo*& dyn__bindInfo();
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0x1EAD274
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IdBinder* New_ctor(::Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::IdBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IdBinder*, creationType>(bindInfo)));
    }
    // public System.Void WithId(System.Object identifier)
    // Offset: 0x1EAD2A0
    void WithId(::Il2CppObject* identifier);
  }; // Zenject.IdBinder
  #pragma pack(pop)
  static check_size<sizeof(IdBinder), 16 + sizeof(::Zenject::BindInfo*)> __Zenject_IdBinderSizeCheck;
  static_assert(sizeof(IdBinder) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::IdBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::IdBinder::WithId
// Il2CppName: WithId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IdBinder::*)(::Il2CppObject*)>(&Zenject::IdBinder::WithId)> {
  static const MethodInfo* get() {
    static auto* identifier = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::IdBinder*), "WithId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{identifier});
  }
};
