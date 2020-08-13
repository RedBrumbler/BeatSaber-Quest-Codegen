// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IReadOnlyDictionary_2;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.CollectionExtensions
  class CollectionExtensions : public ::CsObject {
    public:
    // static public TValue GetValueOrDefault(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue> dictionary, TKey key)
    // Offset: 0xFFFFFFFF
    template<class TValue, class TKey>
    static TValue GetValueOrDefault(System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* dictionary, TKey key) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<TValue>("System.Collections.Generic", "CollectionExtensions", "GetValueOrDefault", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get()}, dictionary, key)));
    }
    // static public TValue GetValueOrDefault(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue> dictionary, TKey key, TValue defaultValue)
    // Offset: 0xFFFFFFFF
    template<class TValue, class TKey>
    static TValue GetValueOrDefault(System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* dictionary, TKey key, TValue defaultValue) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<TValue>("System.Collections.Generic", "CollectionExtensions", "GetValueOrDefault", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get()}, dictionary, key, defaultValue)));
    }
  }; // System.Collections.Generic.CollectionExtensions
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::CollectionExtensions*, "System.Collections.Generic", "CollectionExtensions");
#pragma pack(pop)
