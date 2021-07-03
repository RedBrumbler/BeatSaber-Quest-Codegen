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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SortExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class SortExtensions : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::SortExtensions::$$c__DisplayClass1_0_1<T>
    template<typename T>
    class $$c__DisplayClass1_0_1;
    // Creating value type constructor for type: SortExtensions
    SortExtensions() noexcept {}
    // static public System.Void InsertSorted(System.Collections.Generic.List`1<T> list, T item, System.Func`2<T,System.Int32> getSortIndex)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void InsertSorted(System::Collections::Generic::List_1<T>* list, T item, System::Func_2<T, int>* getSortIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SortExtensions::InsertSorted");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "SortExtensions", "InsertSorted", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list), ::il2cpp_utils::ExtractType(item), ::il2cpp_utils::ExtractType(getSortIndex)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list, item, getSortIndex);
    }
    // static public System.Void Sort(System.Collections.Generic.List`1<T> list, System.Func`2<T,System.Int32> getSortIndex)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void Sort(System::Collections::Generic::List_1<T>* list, System::Func_2<T, int>* getSortIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SortExtensions::Sort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "SortExtensions", "Sort", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list), ::il2cpp_utils::ExtractType(getSortIndex)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list, getSortIndex);
    }
  }; // SortExtensions
  #pragma pack(pop)
  // Writing MetadataGetter for method: SortExtensions::InsertSorted
  // Il2CppName: InsertSorted
  // Cannot write MetadataGetter for generic methods!
  // Writing MetadataGetter for method: SortExtensions::Sort
  // Il2CppName: Sort
  // Cannot write MetadataGetter for generic methods!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SortExtensions*, "", "SortExtensions");
