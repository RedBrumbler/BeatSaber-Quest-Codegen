// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Globalization.Unicode.Contraction
  class Contraction : public ::Il2CppObject {
    public:
    // public System.Int32 Index
    // Size: 0x4
    // Offset: 0x10
    int Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Index and: Source
    char __padding0[0x4] = {};
    // public readonly System.Char[] Source
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppChar>* Source;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // public readonly System.String Replacement
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* Replacement;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Byte[] SortKey
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* SortKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: Contraction
    Contraction(int Index_ = {}, ::Array<::Il2CppChar>* Source_ = {}, ::Il2CppString* Replacement_ = {}, ::Array<uint8_t>* SortKey_ = {}) noexcept : Index{Index_}, Source{Source_}, Replacement{Replacement_}, SortKey{SortKey_} {}
    // public System.Void .ctor(System.Int32 index, System.Char[] source, System.String replacement, System.Byte[] sortkey)
    // Offset: 0x1A57124
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Contraction* New_ctor(int index, ::Array<::Il2CppChar>* source, ::Il2CppString* replacement, ::Array<uint8_t>* sortkey) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Globalization::Unicode::Contraction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Contraction*, creationType>(index, source, replacement, sortkey)));
    }
  }; // Mono.Globalization.Unicode.Contraction
  #pragma pack(pop)
  static check_size<sizeof(Contraction), 40 + sizeof(::Array<uint8_t>*)> __Mono_Globalization_Unicode_ContractionSizeCheck;
  static_assert(sizeof(Contraction) == 0x30);
  // Writing MetadataGetter for method: Contraction::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Contraction::*)(int, ::Array<::Il2CppChar>*, ::Il2CppString*, ::Array<uint8_t>*)>(&Contraction::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Contraction*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppChar>*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Contraction::*)(int, ::Array<::Il2CppChar>*, ::Il2CppString*, ::Array<uint8_t>*)>(&Contraction::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Contraction*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppChar>*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::Contraction*, "Mono.Globalization.Unicode", "Contraction");
