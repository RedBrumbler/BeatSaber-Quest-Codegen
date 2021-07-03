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
// Type namespace: Il2CppDummyDll
namespace Il2CppDummyDll {
  // WARNING Size may be invalid!
  // Autogenerated type: Il2CppDummyDll.AddressAttribute
  class AddressAttribute : public System::Attribute {
    public:
    // public System.String RVA
    // Size: 0x8
    // Offset: 0xFFFFFFFF
    ::Il2CppString* RVA;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String Offset
    // Size: 0x8
    // Offset: 0xFFFFFFFF
    ::Il2CppString* Offset;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String VA
    // Size: 0x8
    // Offset: 0xFFFFFFFF
    ::Il2CppString* VA;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String Slot
    // Size: 0x8
    // Offset: 0xFFFFFFFF
    ::Il2CppString* Slot;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AddressAttribute
    AddressAttribute(::Il2CppString* RVA_ = {}, ::Il2CppString* Offset_ = {}, ::Il2CppString* VA_ = {}, ::Il2CppString* Slot_ = {}) noexcept : RVA{RVA_}, Offset{Offset_}, VA{VA_}, Slot{Slot_} {}
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Il2CppDummyDll::AddressAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressAttribute*, creationType>()));
    }
  }; // Il2CppDummyDll.AddressAttribute
  // Writing MetadataGetter for method: AddressAttribute::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AddressAttribute::*)()>(&AddressAttribute::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(AddressAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AddressAttribute::*)()>(&AddressAttribute::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(AddressAttribute*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Il2CppDummyDll::AddressAttribute*, "Il2CppDummyDll", "AddressAttribute");
